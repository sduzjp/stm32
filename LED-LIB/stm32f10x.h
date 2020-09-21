//�Ĵ�����ֵ������оƬ�����Զ����ĵģ���ʹCPUû��ִ�г���Ҳ�п��ܷ����仯
//�������п��ܶ�û��ִ�г���ı��������Ż�

//volatile��ʾ�ױ�ı�������ֹ�������Ż�
#define 	__IO		volatile
typedef unsigned int uint32_t;
typedef unsigned short uint16_t;

//GPIO�Ĵ����ṹ�嶨��
typedef struct
{
	__IO	uint32_t	CRL;		//�˿����üĴ�������ַƫ��0x00
	__IO	uint32_t	CRH;		//�˿����üĴ�������ַƫ��0x04
	__IO	uint32_t	IDR;		//�˿����üĴ�������ַƫ��0x08
	__IO	uint32_t	ODR;		//�˿����üĴ�������ַƫ��0x0c
	__IO	uint32_t	BSRR;		//�˿����üĴ�������ַƫ��0x10
	__IO	uint32_t	BRR;		//�˿����üĴ�������ַƫ��0x14
	__IO	uint32_t	LCKR;		//�˿����üĴ�������ַƫ��0x18
} GPIO_TypeDef;

//RCC�Ĵ����ṹ�嶨��
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

/*Ƭ���������ַ*/
#define PERIPH_BASE 	((unsigned int)0x40000000)

/*���߻���ַ��GPIO�����ص�APB2��*/
#define APB1PERIPH_BASE		(PERIPH_BASE)
#define APB2PERIPH_BASE		(PERIPH_BASE+0X10000)
#define AHBPERIPH_BASE		(PERIPH_BASE+0X20000)

/*GPIO�������ַ*/
#define GPIOA_BASE		*(unsigned int*)(APB2PERIPH_BASE+0x0800)
#define GPIOB_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X0C00)
#define GPIOC_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1000)
#define GPIOD_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1400)
#define GPIOE_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1800)
#define GPIOF_BASE		*(unsigned int*)(APB2PERIPH_BASE+0X1C00)
#define GPIOG_BASE		*(unsigned int*)(APB2PERIPH_BASE+0x2000)
	
/*RCC�������ַ*/
#define RCC_BASE		(AHBPERIPH_BASE+0X1000)
/*RCC��AHB1ʱ��ʹ�ܼĴ�����ַ��ǿ��ת����ָ��*/
#define RCC_APB2ENR		*(unsigned int*)(RCC_BASE+0x18)
	
//GPIO��������
#define GPIOA		((GPIO_TypeDef *)GPIOA_BASE)
#define GPIOB		((GPIO_TypeDef *)GPIOB_BASE)
#define GPIOC		((GPIO_TypeDef *)GPIOC_BASE)
#define GPIOD		((GPIO_TypeDef *)GPIOD_BASE)
#define GPIOE		((GPIO_TypeDef *)GPIOE_BASE)
#define GPIOF		((GPIO_TypeDef *)GPIOF_BASE)
#define GPIOG		((GPIO_TypeDef *)GPIOG_BASE)

//RCC��������
#define RCC		((RCC_TypeDef *)RCC_BASE)