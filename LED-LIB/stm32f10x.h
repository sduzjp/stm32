//寄存器的值常常是芯片外设自动更改的，即使CPU没有执行程序，也有可能发生变化
//编译器有可能对没有执行程序的变量进行优化

//volatile表示易变的变量，防止编译器优化
#define 	__IO		volatile
typedef unsigned int uint32_t;
typedef unsigned short uint16_t;

//GPIO寄存器结构体定义
typedef struct
{
	__IO	uint32_t	CRL;		//端口配置寄存器，地址偏移0x00
	__IO	uint32_t	CRH;		//端口配置寄存器，地址偏移0x04
	__IO	uint32_t	IDR;		//端口配置寄存器，地址偏移0x08
	__IO	uint32_t	ODR;		//端口配置寄存器，地址偏移0x0c
	__IO	uint32_t	BSRR;		//端口配置寄存器，地址偏移0x10
	__IO	uint32_t	BRR;		//端口配置寄存器，地址偏移0x14
	__IO	uint32_t	LCKR;		//端口配置寄存器，地址偏移0x18
} GPIO_TypeDef;

//RCC寄存器结构体定义
typedef struct
{
	uint32_t CR;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t APB2RSTR;
	uint32_t APB1RSTR;
	uint32_t AHBENR;
	uint32_t APB2ENR;
	uint32_t APB1ENR;
	uint32_t BDCR;
	uint32_t CSR;
}RCC_TypeDef;

/*片上外设基地址*/
#define PERIPH_BASE 	((unsigned int)0x40000000)

/*总线基地址，GPIO都挂载到APB2上*/
#define APB1PERIPH_BASE		(PERIPH_BASE)
#define APB2PERIPH_BASE		(PERIPH_BASE+0X10000)
#define AHBPERIPH_BASE		(PERIPH_BASE+0X20000)

/*GPIO外设基地址*/
#define GPIOA_BASE		*(unsigned int*)(APB2PERIPH_BASE+0x0800)
#define GPIOB_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X0C00)
#define GPIOC_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1000)
#define GPIOD_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1400)
#define GPIOE_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1800)
#define GPIOF_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1C00)
#define GPIOG_BASE		*(unsigned int*)(APB2PERIPH_BASE+0x2000)
	
/*RCC外设基地址*/
#define RCC_BASE		(AHBPERIPH_BASE+0X1000)
/*RCC的AHB1时钟使能寄存器地址，强制转换成指针*/
#define RCC_APB2ENR		*(unsigned int*)(RCC_BASE+0x18)
	
//GPIO外设声明
#define GPIOA		((GPIO_TypeDef *)GPIOA_BASE)
#define GPIOB		((GPIO_TypeDef *)GPIOB_BASE)
#define GPIOC		((GPIO_TypeDef *)GPIOC_BASE)
#define GPIOD		((GPIO_TypeDef *)GPIOD_BASE)
#define GPIOE		((GPIO_TypeDef *)GPIOE_BASE)
#define GPIOF		((GPIO_TypeDef *)GPIOF_BASE)
#define GPIOG		((GPIO_TypeDef *)GPIOG_BASE)

//RCC外设声明
#define RCC		((RCC_TypeDef *)RCC_BASE)