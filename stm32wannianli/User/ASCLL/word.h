#ifndef __WORD_H
#define	__WORD_H

//ascll�� 32-127 ���п���ʾ�ַ�
//�ߴ�6*8
//static ����SRAM�洢 const����flash�洢
 const static u8 CHAR_SMALL[95][6]={

{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*" ",0*/
{0xFF,0xFF,0x61,0x79,0xFF,0xFF},/*"!",1*/
{0xFF,0xFD,0xFD,0xF9,0xFF,0xFF},/*""",2*/
{0xD7,0x03,0xD5,0x07,0xD1,0xD7},/*"#",3*/
{0xFF,0x31,0x01,0x6D,0x9B,0xFF},/*"$",4*/
{0xF3,0x2D,0xC3,0x93,0x6D,0x9F},/*"%",5*/
{0x9F,0x63,0x6D,0x11,0x9F,0xFF},/*"&",6*/
{0xFF,0xFF,0xF9,0xFF,0xFF,0xFF},/*"'",7*/
{0xFF,0xFF,0xFF,0x83,0x7D,0xFF},/*"(",8*/
{0xFE,0x7D,0x83,0xFF,0xFF,0xFF},/*")",9*/
{0xEB,0xEB,0xE3,0xF7,0xEB,0xEB},/*"*",10*/
{0xEF,0xEF,0xC7,0xEF,0xEF,0xEF},/*"+",11*/
{0xFF,0x7F,0xFF,0xFF,0xFF,0xFF},/*",",12*/
{0xEF,0xEF,0xEF,0xEF,0xEF,0xEF},/*"-",13*/
{0xFF,0x7F,0xFF,0xFF,0xFF,0xFF},/*".",14*/
{0x7F,0xBF,0xCF,0xF7,0xF9,0xFF},/*"/",15*/
{0xC7,0xB9,0x7D,0x7D,0x83,0xFF},/*"0",16*/
{0xFF,0xFB,0xFB,0x01,0xFF,0xFF},/*"1",17*/
{0xFB,0x3D,0x1D,0x6D,0x71,0xFF},/*"2",18*/
{0xFF,0x39,0x6D,0x6D,0x81,0xFF},/*"3",19*/
{0xDF,0xAF,0xB7,0xBB,0x01,0xFF},/*"4",20*/
{0xAF,0x71,0x75,0x75,0x8D,0xFF},/*"5",21*/
{0xDF,0x27,0x73,0x6D,0x2F,0x9F},/*"6",22*/
{0xFF,0xFD,0x1D,0xE5,0xF9,0xFD},/*"7",23*/
{0x9B,0x65,0x6D,0x6D,0x01,0xFF},/*"8",24*/
{0xF3,0xED,0x1D,0xCD,0xE3,0xFF},/*"9",25*/
{0xFF,0xFF,0x6F,0xFF,0xFF,0xFF},/*":",26*/
{0xFF,0xFF,0x6F,0x7F,0xFF,0xFF},/*";",27*/
{0xEF,0xEF,0xD7,0xBB,0x7D,0xFF},/*"<",28*/
{0xDF,0xD7,0xD7,0xD7,0xD7,0xDF},/*"=",29*/
{0xFF,0x7D,0xBB,0xD7,0xEF,0xEF},/*">",30*/
{0xFF,0xF9,0x5D,0xED,0xF1,0xFF},/*"?",31*/
{0x83,0x4D,0x35,0x41,0xD9,0xE7},/*"@",32*/
{0x7F,0x8F,0xD1,0xD1,0x8F,0x7F},/*"A",33*/
{0xFF,0x01,0x6D,0x6D,0x01,0xDF},/*"B",34*/
{0xCF,0x83,0x7D,0x7D,0x91,0xD7},/*"C",35*/
{0xFF,0x01,0x7D,0x7D,0x83,0xFF},/*"D",36*/
{0xFF,0x01,0x6D,0x6D,0x6D,0xFF},/*"E",37*/
{0xFF,0x01,0xED,0xED,0xED,0xFF},/*"F",38*/
{0xCF,0x83,0x7D,0x6D,0x09,0xFF},/*"G",39*/
{0xFF,0x01,0xEF,0xEF,0x01,0xFF},/*"H",40*/
{0xFF,0xFF,0x01,0xFF,0xFF,0xFF},/*"I",41*/
{0xFF,0x1F,0x7F,0x7F,0x81,0xFF},/*"J",42*/
{0xFF,0x01,0xE7,0xCB,0x3D,0x7F},/*"K",43*/
{0xFF,0x01,0x7F,0x7F,0x7F,0xFF},/*"L",44*/
{0x01,0xF1,0x8F,0x87,0x81,0xFF},/*"M",45*/
{0x01,0x01,0xE7,0x9F,0x01,0xFF},/*"N",46*/
{0xC7,0x99,0x7D,0x7D,0x81,0xEF},/*"O",47*/
{0xFF,0x01,0xED,0xED,0xE1,0xF7},/*"P",48*/
{0xC7,0x99,0x7D,0x1D,0x01,0xEF},/*"Q",49*/
{0xFF,0x01,0xED,0xCD,0x21,0xFF},/*"R",50*/
{0xFF,0x31,0x6D,0x6D,0x19,0xFF},/*"S",51*/
{0xFF,0xFD,0x01,0xFD,0xFD,0xFF},/*"T",52*/
{0xFF,0x01,0x7F,0x7F,0x01,0xFF},/*"U",53*/
{0xFD,0xE3,0x1F,0x1F,0xE1,0xFD},/*"V",54*/
{0xE1,0x1F,0xE1,0xC3,0x07,0xF9},/*"W",55*/
{0x7F,0xB9,0xC7,0xC3,0x39,0xFF},/*"X",56*/
{0xFD,0xFB,0x07,0xE7,0xF9,0xFF},/*"Y",57*/
{0x7F,0x3D,0x4D,0x75,0x79,0xFF},/*"Z",58*/
{0xFF,0xFF,0x00,0xFE,0xFE,0xFF},/*"[",59*/
{0xFF,0xF9,0xE7,0x9F,0x7F,0xFF},/*"\",60*/
{0xFF,0xFE,0xFE,0x00,0xFF,0xFF},/*"]",61*/
{0xFF,0xFD,0xFE,0xFE,0xFD,0xFF},/*"^",62*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"_",63*/
{0xFF,0xFF,0xFE,0xFD,0xFF,0xFF},/*"`",64*/
{0xFF,0x0F,0x57,0x57,0x0F,0xFF},/*"a",65*/
{0xFF,0x01,0x77,0x77,0x8F,0xFF},/*"b",66*/
{0xDF,0xAF,0x77,0x77,0xAF,0xFF},/*"c",67*/
{0xDF,0x2F,0x77,0x77,0x01,0xFF},/*"d",68*/
{0xDF,0x8F,0x57,0x57,0x8F,0xFF},/*"e",69*/
{0xFF,0xF7,0x03,0xF5,0xF5,0xFF},/*"f",70*/
{0xFF,0x0F,0x37,0x57,0x67,0xF7},/*"g",71*/
{0xFF,0x01,0xEF,0xF7,0x0F,0xFF},/*"h",72*/
{0xFF,0xFF,0x05,0xFD,0xFF,0xFF},/*"i",73*/
{0xFF,0xFF,0xFF,0x05,0xFD,0xFF},/*"j",74*/
{0xFF,0x01,0xDF,0x8F,0x37,0xFF},/*"k",75*/
{0xFF,0xFF,0x01,0xFF,0xFF,0xFF},/*"l",76*/
{0x07,0xEF,0x07,0xEF,0xF7,0x0F},/*"m",77*/
{0xFF,0x07,0xEF,0xF7,0x0F,0xFF},/*"n",78*/
{0xDF,0xAF,0x77,0x77,0x8F,0xFF},/*"o",79*/
{0xFF,0x07,0x77,0x77,0x8F,0xFF},/*"p",80*/
{0xDF,0x2F,0x77,0x77,0x07,0xFF},/*"q",81*/
{0xFF,0x07,0xEF,0xEF,0xF7,0xFF},/*"r",82*/
{0xFF,0x0F,0x57,0x57,0x2F,0xFF},/*"s",83*/
{0xF7,0xF7,0x03,0x77,0x77,0xFF},/*"t",84*/
{0xFF,0x07,0x7F,0x7F,0x07,0xFF},/*"u",85*/
{0xF7,0xCF,0x3F,0x1F,0xE7,0xFF},/*"v",86*/
{0xC7,0x3F,0xC7,0x8F,0x0F,0xF7},/*"w",87*/
{0xFF,0x67,0x9F,0x8F,0x77,0xFF},/*"x",88*/
{0xF7,0xCF,0x3F,0x1F,0xE7,0xFF},/*"y",89*/
{0xFF,0x37,0x57,0x67,0x67,0xFF},/*"z",90*/
{0xFF,0xFF,0xFF,0x00,0xFE,0xFF},/*"{",91*/
{0xFF,0xFF,0x00,0xFF,0xFF,0xFF},/*"|",92*/
{0xFF,0xFE,0x01,0xFF,0xFF,0xFF},/*"}",93*/
{0xFF,0xFE,0xFE,0xFE,0xFE,0xFF}/*"~",94*/};

//ascll�� 32-127 ���п���ʾ�ַ�
//�ߴ�8*16
const static u8 CHAR_MIDDLE[95][20]={
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*" ",0*/
{0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCC,0xFF,0xFF,0xFF,0xFF},/*"!",1*/
{0xFF,0xF7,0xF9,0xFC,0xF7,0xF9,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*""",2*/
{0xFF,0xDF,0xDF,0x03,0xDF,0xDF,0x03,0xDF,0xFF,0xFB,0xC0,0xFB,0xFB,0xC0,0xFB,0xFB},/*"#",3*/
{0xFF,0xCF,0xB7,0x7B,0x01,0x7B,0xFB,0xE7,0xFF,0xE3,0xDF,0xDF,0x00,0xDF,0xEE,0xF1},/*"$",4*/
{0x07,0xFB,0xFB,0x07,0x3F,0x4F,0x73,0xFF,0xFF,0xCE,0xF2,0xFC,0xE0,0xDF,0xDF,0xE0},/*"%",5*/
{0xFF,0x07,0x7B,0xBB,0xC7,0x7F,0x7F,0x7F,0xF0,0xEF,0xDE,0xD9,0xE7,0xE7,0xD8,0xDF},/*"&",6*/
{0xFF,0xEC,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"'",7*/
{0xFF,0xFF,0xFF,0xFF,0x1F,0xE7,0xF9,0xFE,0xFF,0xFF,0xFF,0xFF,0xF8,0xE7,0x9F,0x7F},/*"(",8*/
{0xFF,0xFE,0xF9,0xE7,0x1F,0xFF,0xFF,0xFF,0xFF,0x7F,0x9F,0xE7,0xF8,0xFF,0xFF,0xFF},/*")",9*/
{0xFF,0xDF,0xBF,0xBF,0x07,0xBF,0xBF,0xDF,0xFF,0xFD,0xFE,0xFE,0xF0,0xFE,0xFE,0xFD},/*"*",10*/
{0x7F,0x7F,0x7F,0x7F,0x07,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF},/*"+",11*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF},/*",",12*/
{0xFF,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"-",13*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF},/*".",14*/
{0xFF,0xFF,0xFF,0xFF,0x3F,0xCF,0xF1,0xFE,0xFF,0x9F,0xE7,0xF9,0xFE,0xFF,0xFF,0xFF},/*"/",15*/
{0xFF,0x1F,0xE7,0xFB,0xFB,0xFB,0xE7,0x1F,0xFF,0xF8,0xE7,0xDF,0xDF,0xDF,0xE7,0xF8},/*"0",16*/
{0xFF,0xFF,0xF7,0xF7,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xC0,0xDF,0xDF,0xFF},/*"1",17*/
{0xFF,0xCF,0xF7,0xFB,0xFB,0xFB,0x77,0x8F,0xFF,0xCF,0xD7,0xDB,0xDD,0xDE,0xDF,0xC7},/*"2",18*/
{0xFF,0xE7,0xFB,0x7B,0x7B,0x7B,0xB7,0xCF,0xFF,0xE7,0xDF,0xDF,0xDF,0xDF,0xEE,0xF1},/*"3",19*/
{0xFF,0xFF,0x7F,0x9F,0xEF,0x03,0xFF,0xFF,0xFF,0xF9,0xFA,0xDB,0xDB,0xC0,0xDB,0xDB},/*"4",20*/
{0xFF,0xFF,0x03,0xBB,0xBB,0xBB,0x7B,0xFB,0xFF,0xE3,0xDF,0xDF,0xDF,0xDF,0xEF,0xF0},/*"5",21*/
{0xFF,0x1F,0x67,0xBB,0xBB,0xBB,0x77,0xFF,0xFF,0xF0,0xEF,0xDF,0xDF,0xDF,0xEF,0xF0},/*"6",22*/
{0xFF,0xE3,0xFB,0xFB,0x7B,0x9B,0xE3,0xFB,0xFF,0xFF,0xFF,0xC1,0xFE,0xFF,0xFF,0xFF},/*"7",23*/
{0xFF,0xCF,0xB7,0x7B,0x7B,0x7B,0xB7,0xCF,0xFF,0xF1,0xEE,0xDF,0xDF,0xDF,0xEE,0xF1},/*"8",24*/
{0xFF,0x0F,0xF7,0xFB,0xFB,0xFB,0xF7,0x0F,0xFF,0xFF,0xEE,0xDD,0xDD,0xDD,0xE6,0xF8},/*"9",25*/
{0xFF,0xFF,0xFF,0x9F,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xCF,0xFF,0xFF,0xFF},/*":",26*/
{0xFF,0xFF,0xFF,0xFF,0xBF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5F,0x9F,0xFF,0xFF},/*";",27*/
{0xFF,0xFF,0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFF,0xFF,0xFE,0xFD,0xFB,0xF7,0xEF,0xDF},/*"<",28*/
{0xFF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xFF,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD},/*"=",29*/
{0xFF,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE,0xFF},/*">",30*/
{0xFF,0x8F,0xB7,0xFB,0xFB,0xFB,0x77,0x8F,0xFF,0xFF,0xFF,0xCF,0xC8,0xFE,0xFF,0xFF},/*"?",31*/
{0x1F,0xEF,0x77,0xBB,0xDB,0x1B,0xF7,0x0F,0xF8,0xE7,0xDC,0xDB,0xDC,0xDB,0xED,0xF6},/*"@",32*/
{0xFF,0xFF,0x7F,0x8F,0xF3,0x8F,0x7F,0xFF,0xDF,0xC7,0xD8,0xFD,0xFD,0xFD,0xD8,0xC7},/*"A",33*/
{0xFB,0x03,0x7B,0x7B,0x7B,0x3B,0xC7,0xFF,0xDF,0xC0,0xDF,0xDF,0xDF,0xDF,0xEE,0xF1},/*"B",34*/
{0x1F,0xEF,0xF7,0xFB,0xFB,0xFB,0xF7,0xE3,0xF8,0xE7,0xDF,0xDF,0xDF,0xDF,0xEF,0xF3},/*"C",35*/
{0xFB,0x03,0xFB,0xFB,0xFB,0xF7,0xEF,0x1F,0xDF,0xC0,0xDF,0xDF,0xDF,0xEF,0xF7,0xF8},/*"D",36*/
{0xFB,0x03,0x7B,0x7B,0x7B,0x1B,0xF3,0xEF,0xDF,0xC0,0xDF,0xDF,0xDF,0xDC,0xCF,0xF7},/*"E",37*/
{0xFB,0x03,0x7B,0x7B,0x7B,0x1B,0xF3,0xEF,0xDF,0xC0,0xDF,0xFF,0xFF,0xFC,0xFF,0xFF},/*"F",38*/
{0x1F,0xEF,0xF7,0xFB,0xFB,0xFB,0xF7,0xE3,0xF8,0xE7,0xDF,0xDF,0xDF,0xDF,0xDD,0xE1},/*"G",39*/
{0xFB,0x03,0x7B,0x7F,0x7F,0x7B,0x03,0xFB,0xDF,0xC0,0xDF,0xFF,0xFF,0xDF,0xC0,0xDF},/*"H",40*/
{0xFF,0xFF,0xFB,0xFB,0x03,0xFB,0xFB,0xFF,0xFF,0xFF,0xDF,0xDF,0xC0,0xDF,0xDF,0xFF},/*"I",41*/
{0xFF,0xFF,0xFF,0xFB,0xFB,0x03,0xFB,0xFB,0x3F,0x7F,0x7F,0x7F,0xBF,0xC0,0xFF,0xFF},/*"J",42*/
{0xFB,0x03,0x7B,0x3F,0xDF,0xEB,0xF3,0xFB,0xDF,0xC0,0xDF,0xFF,0xFC,0xD3,0xCF,0xDF},/*"K",43*/
{0xFB,0x03,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xC0,0xDF,0xDF,0xDF,0xDF,0xDF,0xE7},/*"L",44*/
{0xFB,0x03,0xC3,0x3F,0xFF,0x3F,0xC3,0x03,0xDF,0xC0,0xDF,0xFC,0xC3,0xFC,0xDF,0xC0},/*"M",45*/
{0xFB,0x03,0xE3,0x1F,0xFF,0xFB,0x03,0xFB,0xDF,0xC0,0xDF,0xFF,0xFC,0xE3,0xC0,0xFF},/*"N",46*/
{0x1F,0xE7,0xFB,0xFB,0xFB,0xFB,0xE7,0x1F,0xF8,0xE7,0xDF,0xDF,0xDF,0xDF,0xE7,0xF8},/*"O",47*/
{0xFB,0x03,0x7B,0x7B,0x7B,0x7B,0x7B,0x87,0xDF,0xC0,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"P",48*/
{0x1F,0xE7,0xFB,0xFB,0xFB,0xFB,0xE7,0x1F,0xF8,0xE7,0xDB,0xDB,0xD7,0x8F,0x6F,0xB0},/*"Q",49*/
{0xFB,0x03,0x7B,0x7B,0x7B,0x7B,0x87,0xFF,0xDF,0xC0,0xDF,0xFF,0xFC,0xF3,0xCF,0xDF},/*"R",50*/
{0xFF,0xCF,0xB7,0x7B,0x7B,0xFB,0xF7,0xE3,0xFF,0xC3,0xEF,0xDF,0xDF,0xDE,0xEE,0xF1},/*"S",51*/
{0xFF,0xE3,0xFB,0xFB,0x03,0xFB,0xFB,0xE3,0xFF,0xFF,0xFF,0xDF,0xC0,0xDF,0xFF,0xFF},/*"T",52*/
{0xFB,0x03,0xFB,0xFF,0xFF,0xFB,0x03,0xFB,0xFF,0xE0,0xDF,0xDF,0xDF,0xDF,0xE0,0xFF},/*"U",53*/
{0xFB,0xE3,0x1B,0xFF,0xFF,0xFF,0x1B,0xE3,0xFF,0xFF,0xFF,0xF0,0xCF,0xF0,0xFF,0xFF},/*"V",54*/
{0xFB,0x03,0xFF,0x7B,0x83,0x7B,0xFF,0x03,0xFF,0xFC,0xC3,0xFC,0xFF,0xFC,0xC3,0xFC},/*"W",55*/
{0xFB,0xF3,0xCB,0x3F,0x3F,0xCB,0xF3,0xFB,0xDF,0xCF,0xD3,0xFC,0xFC,0xD3,0xCF,0xDF},/*"X",56*/
{0xFB,0xF3,0xCB,0x3F,0xFF,0x3F,0xCB,0xF3,0xFF,0xFF,0xFF,0xDF,0xC0,0xDF,0xFF,0xFF},/*"Y",57*/
{0xEF,0xF3,0xFB,0xFB,0x3B,0xDB,0xE3,0xFB,0xDF,0xC7,0xDB,0xDC,0xDF,0xDF,0xCF,0xF7},/*"Z",58*/
{0xFF,0xFF,0xFF,0xFF,0x00,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF},/*"[",59*/
{0xFF,0xFD,0xE3,0x9F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xF3,0x8F,0x7F},/*"\",60*/
{0xFF,0xFE,0xFE,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,0xFF},/*"]",61*/
{0xFF,0xFF,0xFD,0xFE,0xFE,0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"^",62*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F},/*"_",63*/
{0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"`",64*/
{0xFF,0x7F,0xBF,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF,0xE7,0xDB,0xDD,0xDD,0xED,0xC0,0xDF},/*"a",65*/
{0xFB,0x03,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF,0xC0,0xEF,0xDF,0xDF,0xDF,0xEF,0xF0},/*"b",66*/
{0xFF,0xFF,0x7F,0xBF,0xBF,0xBF,0xBF,0x7F,0xFF,0xF0,0xEF,0xDF,0xDF,0xDF,0xDF,0xEE},/*"c",67*/
{0xFF,0xFF,0x7F,0xBF,0xBF,0xBF,0x7B,0x03,0xFF,0xF0,0xEF,0xDF,0xDF,0xDF,0xEF,0xC0},/*"d",68*/
{0xFF,0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF,0xF0,0xED,0xDD,0xDD,0xDD,0xDD,0xEC},/*"e",69*/
{0xFF,0xBF,0xBF,0x07,0xBB,0xBB,0xBB,0xF7,0xFF,0xDF,0xDF,0xC0,0xDF,0xDF,0xFF,0xFF},/*"f",70*/
{0xFF,0x7F,0xBF,0xBF,0xBF,0xBF,0x3F,0xBF,0xFF,0x9C,0x63,0x6B,0x6B,0x6B,0x6C,0x9F},/*"g",71*/
{0xFB,0x03,0x7F,0xBF,0xBF,0xBF,0xBF,0x7F,0xDF,0xC0,0xDF,0xFF,0xFF,0xFF,0xDF,0xC0},/*"h",72*/
{0xFF,0xFF,0xBF,0xB3,0x33,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xC0,0xDF,0xDF,0xFF},/*"i",73*/
{0xFF,0xFF,0xFF,0xFF,0xBF,0xB3,0x33,0xFF,0xFF,0xFF,0x3F,0x7F,0x7F,0x7F,0x80,0xFF},/*"j",74*/
{0xFB,0x03,0xFF,0xFF,0xBF,0x3F,0xBF,0xFF,0xDF,0xC0,0xDB,0xFD,0xFA,0xD7,0xCF,0xDF},/*"k",75*/
{0xFF,0xFF,0xFB,0xFB,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xC0,0xDF,0xDF,0xFF},/*"l",76*/
{0xBF,0x3F,0xBF,0xBF,0x3F,0xBF,0xBF,0x7F,0xDF,0xC0,0xDF,0xFF,0xC0,0xDF,0xFF,0xC0},/*"m",77*/
{0xBF,0x3F,0x7F,0xBF,0xBF,0xBF,0xBF,0x7F,0xDF,0xC0,0xDF,0xFF,0xFF,0xFF,0xDF,0xC0},/*"n",78*/
{0xFF,0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF,0xF0,0xEF,0xDF,0xDF,0xDF,0xEF,0xF0},/*"o",79*/
{0xBF,0x3F,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0x7F,0x00,0x6F,0xDF,0xDF,0xDF,0xEF,0xF0},/*"p",80*/
{0xFF,0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0x3F,0xFF,0xF0,0xEF,0xDF,0xDF,0xDF,0x6F,0x00},/*"q",81*/
{0xBF,0xBF,0x3F,0xFF,0x7F,0xBF,0xBF,0x3F,0xDF,0xDF,0xC0,0xDE,0xDF,0xFF,0xFF,0xFF},/*"r",82*/
{0xFF,0x7F,0xBF,0xBF,0xBF,0xBF,0xBF,0x3F,0xFF,0xCE,0xDD,0xDD,0xDD,0xDB,0xDB,0xE7},/*"s",83*/
{0xFF,0xBF,0xBF,0x07,0xBF,0xBF,0xBF,0xFF,0xFF,0xFF,0xFF,0xE0,0xDF,0xDF,0xDF,0xEF},/*"t",84*/
{0xBF,0x3F,0xFF,0xFF,0xFF,0xFF,0xBF,0x3F,0xFF,0xE0,0xDF,0xDF,0xDF,0xDF,0xEF,0xC0},/*"u",85*/
{0xFF,0xBF,0x3F,0xBF,0xFF,0xBF,0x3F,0xBF,0xFF,0xFF,0xFE,0xF9,0xC7,0xF9,0xFE,0xFF},/*"v",86*/
{0xBF,0x3F,0xFF,0xBF,0x3F,0xBF,0xFF,0x3F,0xFF,0xF8,0xC7,0xF3,0xFC,0xF3,0xC7,0xF8},/*"w",87*/
{0xFF,0xBF,0x3F,0xBF,0xFF,0xBF,0x3F,0xBF,0xFF,0xDF,0xCF,0xD6,0xF9,0xD6,0xCF,0xDF},/*"x",88*/
{0xFF,0xBF,0x3F,0xBF,0xFF,0xBF,0x3F,0xBF,0xFF,0x7F,0x7E,0xB9,0xC7,0xF9,0xFE,0xFF},/*"y",89*/
{0xFF,0x3F,0xBF,0xBF,0xBF,0xBF,0x3F,0xBF,0xFF,0xDE,0xCF,0xD7,0xD9,0xDE,0xDF,0xC7},/*"z",90*/
{0xFF,0xFF,0xFF,0x7F,0x7F,0x81,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xBF,0xBF},/*"{",91*/
{0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF},/*"|",92*/
{0xFF,0xFE,0xFE,0x81,0x7F,0x7F,0xFF,0xFF,0xFF,0xBF,0xBF,0xC0,0xFF,0xFF,0xFF,0xFF},/*"}",93*/
{0xFF,0xFE,0xFF,0xFF,0xFE,0xFD,0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}/*"~",94*/};
//����
//�ߴ� 12*24
const static u8 NUMBER_LONG[11][36]={
{0xFF,0x3F,0x0F,0xC7,0xF7,0xFB,0xFB,0xF7,0xE7,0x0F,0x3F,0xFF,0x03,0x00,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xC3,
0xFF,0xF8,0xE0,0xCF,0xDF,0xBF,0xBF,0xDF,0xCF,0xE0,0xF8,0xFF},/*"0",0*/
{0xFF,0xFF,0xEF,0xEF,0xEF,0x07,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xBF,0xBF,0xBF,0x80,0x80,0x9F,0xBF,0xBF,0xFF,0xFF},/*"1",1*/
{0xFF,0x0F,0x07,0xF7,0xFB,0xFB,0xFB,0xF3,0xF7,0x07,0x1F,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,0x7F,0x9F,0xCF,0xE3,0xF0,0xFC,0xFF,
0x9F,0x87,0x9B,0x9D,0x9E,0x9F,0x9F,0x9F,0x9F,0x8F,0x83,0xFF},/*"2",2*/
{0xFF,0x0F,0x07,0xF7,0xFB,0xFB,0xFB,0xF7,0xC7,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xF7,0xF7,0xEB,0xC8,0x1C,0x3F,0xFF,
0xFF,0xE1,0xC1,0xDF,0xBF,0xBF,0xBF,0xDF,0xCF,0xE0,0xF0,0xFF},/*"3",3*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xDF,0x07,0x03,0xFF,0xFF,0xFF,0x7F,0x9F,0xE7,0xFB,0xFC,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFE,0xFE,0xBE,0xBE,0xBE,0x80,0x80,0x9E,0xBE,0xBF},/*"4",4*/
{0xFF,0xFF,0x03,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xFF,0xFF,0xE3,0xEC,0xF7,0xFB,0xFB,0xFB,0xFB,0xF3,0x07,0x0F,0xFF,
0xFF,0xE1,0xC1,0xDF,0xBF,0xBF,0xBF,0x9F,0xCF,0xE0,0xF0,0xFF},/*"5",5*/
{0xFF,0x3F,0x1F,0xEF,0xF7,0xFB,0xFB,0xFB,0xC3,0xC7,0xCF,0xFF,0x03,0x00,0xDC,0xE7,0xF3,0xFB,0xFB,0xFB,0xF3,0xC7,0x0F,0x7F,
0xFF,0xF0,0xE1,0xCF,0xDF,0xBF,0xBF,0xBF,0xDF,0xC7,0xF0,0xFE},/*"6",6*/
{0xFF,0x87,0xE3,0xF3,0xF3,0xF3,0xF3,0xF3,0x73,0x93,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x07,0xF1,0xFE,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x81,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"7",7*/
{0xFF,0x0F,0xE7,0xF7,0xFB,0xFB,0xFB,0xFB,0xF7,0xC7,0x1F,0xFF,0xFF,0x3C,0x98,0xE1,0xF3,0xE7,0xE7,0xC7,0x8B,0x18,0x3E,0xFF,
0xF8,0xE0,0xCF,0xDF,0xBF,0xBF,0xBF,0xBF,0xDF,0xC6,0xF0,0xFF},/*"8",8*/
{0x3F,0x0F,0xC7,0xF7,0xFB,0xFB,0xFB,0xF7,0xE7,0x0F,0x3F,0xFF,0xF0,0xC0,0xCF,0x9F,0xBF,0xBF,0xBF,0xDF,0xEF,0x00,0x00,0xFF,
0xFF,0xE7,0xC7,0x9F,0xBF,0xBF,0xDF,0xCF,0xE3,0xF0,0xFC,0xFF},/*"9",9*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x8F,0x8F,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF},/*".",10*/
};

//���� ���� ���� ���� 16*16
//����
//�ߴ� 16*16
const static u8 WORD_LONG[48][32]={
// С(0) ��(1) ��(2) ��(3) ��(4) ��(5) ��(6) ˮ(7) ��(8) ��(9) ��(10) ��(11) ��(12) ��(13) ��(14) ��(15)
// ��(16) ��(17) ��(18) ��(19) â(20) ��(21) ��(22) ��(23) С(24) ��(25) ��(26) ��(27) ��(28) ��(29) ��(30) ��(31)
// ��(32) ¶(33) ��(34) ��(35) ��(36) ¶(37) ˪(38) ��(39) ��(40) ��(41) С(42) ѩ(43) ��(44) ѩ(45) ��(46) ��(47)	
{0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xDF,0xBF,0x7F,0xFF,0xFF,0xF7,0xFB,0xFC,0xFF,0xFF,0xBF,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF1,0xFF},/*"С",0*/
{0xEF,0xF3,0xBB,0xAB,0xAB,0x03,0xAA,0xA9,0xAB,0x03,0xAB,0xAB,0xBB,0xEB,0xF3,0xFF,0xEE,0xEE,0xF6,0xFA,0xFC,0xDE,0xDA,0xBA,0xB6,0x6E,0xFC,0xFA,0xF6,0xEE,0xEE,0xFF},/*"��",1*/
{0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0x00,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xFF,0x7F,0x7F,0xBF,0xDF,0xEF,0xF3,0xFC,0xFF,0xFC,0xF3,0xEF,0xDF,0xBF,0x7F,0x7F,0xFF},/*"��",2*/
{0xEF,0xF3,0xBB,0xAB,0xAB,0x03,0xAA,0xA9,0xAB,0x03,0xAB,0xAB,0xBB,0xEB,0xF3,0xFF,0xEE,0xEE,0xF6,0xFA,0xFC,0xDE,0xDA,0xBA,0xB6,0x6E,0xFC,0xFA,0xF6,0xEE,0xEE,0xFF},/*"��",3*/
{0xFF,0xEF,0xEF,0x6F,0xEF,0xEF,0xEE,0xE9,0xEF,0xEF,0xEF,0x2F,0xEF,0xEF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBC,0xA3,0xBF,0xBF,0xAF,0xB3,0xBC,0xBF,0xBF,0xBF,0xBF,0xFF},/*"��",4*/
{0xBF,0xBB,0xAB,0xAB,0x2B,0xAB,0x8B,0xA0,0xAB,0xAB,0x2B,0xAB,0xAB,0xBB,0xBF,0xFF,0xFB,0xFB,0xFD,0xFE,0x01,0x6D,0x6D,0x6D,0x6D,0x6D,0x01,0xFE,0xFD,0xFB,0xFB,0xFF},/*"��",5*/
{0xFD,0x1D,0xDD,0xDD,0xDD,0xDD,0xDD,0x01,0xDD,0xDD,0xDD,0xDD,0xDD,0x1D,0xFD,0xFF,0xFF,0x00,0xFF,0xFF,0xF6,0xED,0xFF,0x80,0xFF,0xF6,0xED,0xBF,0x7F,0x80,0xFF,0xFF},/*"��",6*/
{0xFF,0xDF,0xDF,0xDF,0x5F,0x9F,0xFF,0x00,0x9F,0x7F,0xBF,0xDF,0xE7,0xFF,0xFF,0xFF,0xDF,0xEF,0xF7,0xF9,0xFE,0xBF,0x7F,0x80,0xFF,0xFE,0xFD,0xFB,0xF7,0xEF,0xEF,0xFF},/*"ˮ",7*/
{0xFF,0x1F,0xFF,0x00,0xEF,0xDF,0xFB,0x1B,0xDB,0xDA,0xD9,0xDB,0xDB,0x1B,0xFB,0xFF,0xFE,0xFF,0xFF,0x00,0xFF,0xDF,0xEF,0xF2,0xBE,0x7E,0x80,0xFE,0xFA,0xF6,0xCF,0xFF},/*"��",8*/
{0xDB,0x5B,0xDB,0x00,0xEB,0xFF,0x7B,0xAB,0xC0,0xBB,0xFB,0x83,0x7F,0x1F,0xFF,0xFF,0xFF,0xBF,0x3E,0xA1,0xAD,0xAC,0xAD,0x80,0xAD,0xAD,0xAD,0xA1,0x9F,0x3E,0xFF,0xFF},/*"��",9*/
{0xBF,0xBB,0xAB,0xAB,0x2B,0xAB,0x8B,0xA0,0xAB,0xAB,0x2B,0xAB,0xAB,0xBB,0xBF,0xFF,0xFB,0xFB,0xFD,0xFE,0x01,0x6D,0x6D,0x6D,0x6D,0x6D,0x01,0xFE,0xFD,0xFB,0xFB,0xFF},/*"��",10*/
{0x7F,0xBF,0xDF,0x6F,0x77,0x79,0x7F,0x7F,0x7F,0x7C,0x73,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF,0x7F,0xBF,0xDF,0xE7,0xF8,0xFF,0xBF,0x7F,0xBF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF},/*"��",11*/
{0xEF,0x9F,0xFD,0x73,0xFF,0xBB,0xAB,0xAB,0xAB,0x80,0xAB,0xAB,0xAB,0xBB,0xBF,0xFF,0xFB,0xFB,0x81,0xFE,0xFF,0xFF,0x00,0xEA,0xEA,0xEA,0xAA,0x6A,0x80,0xFF,0xFF,0xFF},/*"��",12*/
{0xFF,0x03,0xBB,0xBB,0xBB,0x03,0xFF,0xFF,0x01,0xDD,0xDD,0xDD,0xDD,0x01,0xFF,0xFF,0xFF,0xF0,0xFB,0xFB,0xFB,0x70,0xBF,0xCF,0xF0,0xFD,0xFD,0xBD,0x7D,0x80,0xFF,0xFF},/*"��",13*/
{0xFF,0xEF,0x77,0x7B,0xBC,0xDF,0xEF,0xF3,0xEF,0xDF,0xBE,0x7D,0x7B,0xF7,0xFF,0xFF,0xFE,0xFE,0xFF,0x01,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0x01,0xFF,0xFE,0xFE,0xFF},/*"��",14*/
{0xFD,0x1D,0xDD,0xDD,0xDD,0xDD,0xDD,0x01,0xDD,0xDD,0xDD,0xDD,0xDD,0x1D,0xFD,0xFF,0xFF,0x00,0xFF,0xFF,0xF6,0xED,0xFF,0x80,0xFF,0xF6,0xED,0xBF,0x7F,0x80,0xFF,0xFF},/*"��",15*/
{0xFF,0xEF,0xEF,0x6F,0xEF,0xEF,0xEE,0xE9,0xEF,0xEF,0xEF,0x2F,0xEF,0xEF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBC,0xA3,0xBF,0xBF,0xAF,0xB3,0xBC,0xBF,0xBF,0xBF,0xBF,0xFF},/*"��",16*/
{0xFF,0xFE,0xFE,0x02,0xAA,0xAA,0xA8,0xAA,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFF,0xFF,0x7F,0x6F,0x77,0xBA,0xB0,0xAA,0xDA,0xDA,0xDA,0xAA,0xB2,0xBA,0x7F,0x7F,0x7F,0xFF},/*"��",17*/
{0xFF,0xFE,0xFE,0x02,0xAA,0xAA,0xA8,0xAA,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFF,0xFF,0x7F,0x6F,0x77,0xBA,0xB0,0xAA,0xDA,0xDA,0xDA,0xAA,0xB2,0xBA,0x7F,0x7F,0x7F,0xFF},/*"��",18*/
{0xEF,0x9F,0xFD,0x73,0xFF,0xDB,0xDB,0xD0,0x1B,0xDB,0xDB,0x1B,0xD0,0xDB,0xDB,0xFF,0xFB,0xFB,0x81,0xFE,0xFF,0x00,0xEE,0xF6,0xF8,0xE6,0xF6,0xF8,0xB6,0x6E,0x80,0xFF},/*"��",19*/
{0x7B,0x7B,0x7B,0x7B,0x60,0x7B,0x5B,0x3B,0x7B,0x7B,0x60,0x7B,0x7B,0x7B,0x7B,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF},/*"â",20*/
{0xDB,0xDB,0x5B,0x01,0xDC,0xDD,0xFF,0x0F,0xEF,0xEF,0x00,0xEF,0xEF,0x0F,0xFF,0xFF,0xF7,0xF9,0xFE,0x00,0xFE,0xF9,0xFF,0xF8,0xFD,0xFD,0x00,0xFD,0xFD,0xF8,0xFF,0xFF},/*"��",21*/
{0xFF,0xFE,0xFE,0x02,0xAA,0xAA,0xA8,0xAA,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFF,0xFF,0x7F,0x6F,0x77,0xBA,0xB0,0xAA,0xDA,0xDA,0xDA,0xAA,0xB2,0xBA,0x7F,0x7F,0x7F,0xFF},/*"��",22*/
{0xFF,0xFD,0xBD,0x9D,0xAD,0xB5,0xB9,0xBD,0xBD,0xBD,0xAD,0x9D,0x3D,0xFD,0xFF,0xFF,0xBF,0xBF,0xBB,0xBB,0xBB,0xBB,0xBB,0x80,0xBB,0xBB,0xBB,0xBB,0xBB,0xBF,0xBF,0xFF},/*"��",23*/
{0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xDF,0xBF,0x7F,0xFF,0xFF,0xF7,0xFB,0xFC,0xFF,0xFF,0xBF,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF1,0xFF},/*"С",24*/
{0xFF,0xFF,0xFF,0xA0,0xAA,0xAA,0x0A,0xAA,0xAA,0xAA,0x6A,0xA0,0xFF,0xFF,0xFF,0xFF,0xEE,0xEE,0xF6,0xF6,0x02,0xAA,0xA8,0xA8,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFE,0xFF},/*"��",25*/
{0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0x00,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xFF,0x7F,0x7F,0xBF,0xDF,0xEF,0xF3,0xFC,0xFF,0xFC,0xF3,0xEF,0xDF,0xBF,0x7F,0x7F,0xFF},/*"��",26*/
{0xFF,0xFF,0xFF,0xA0,0xAA,0xAA,0x0A,0xAA,0xAA,0xAA,0x6A,0xA0,0xFF,0xFF,0xFF,0xFF,0xEE,0xEE,0xF6,0xF6,0x02,0xAA,0xA8,0xA8,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFE,0xFF},/*"��",27*/
{0xFF,0xEF,0xEF,0x6F,0xEF,0xEF,0xEE,0xE9,0xEF,0xEF,0xEF,0x2F,0xEF,0xEF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBC,0xA3,0xBF,0xBF,0xAF,0xB3,0xBC,0xBF,0xBF,0xBF,0xBF,0xFF},/*"��",28*/
{0xDB,0xDB,0x5B,0x01,0xDC,0xDD,0x7F,0x8F,0xFF,0x00,0xFF,0x7F,0xBF,0xCF,0xFF,0xFF,0xF7,0xF9,0xFE,0x00,0xFE,0x79,0xBF,0xCF,0xF1,0xFE,0xF9,0xE7,0xDF,0xBF,0x7F,0xFF},/*"��",29*/
{0xFF,0x7F,0x9F,0x60,0xF7,0xF7,0x07,0xFF,0xFF,0x00,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF,0x7E,0xBF,0xDF,0xEC,0xF3,0xEC,0xDF,0xDF,0xBF,0xA0,0xBF,0xBF,0xBF,0xBE,0xBF,0xFF},/*"��",30*/
{0xFF,0xFF,0xFF,0xA0,0xAA,0xAA,0x0A,0xAA,0xAA,0xAA,0x6A,0xA0,0xFF,0xFF,0xFF,0xFF,0xEE,0xEE,0xF6,0xF6,0x02,0xAA,0xA8,0xA8,0xAA,0xAA,0xAA,0x02,0xFE,0xFE,0xFE,0xFF},/*"��",31*/
{0xFF,0xFF,0x07,0xF7,0xF7,0xF3,0xF5,0xF6,0xF7,0xF7,0xF7,0xF7,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0x00,0xFF,0xFF,0xFF},/*"��",32*/
{0xEF,0xF3,0xFA,0xAA,0xAA,0xAA,0xFA,0x80,0xFA,0x2A,0xAA,0xAA,0xFA,0xEB,0xF3,0xFF,0x7F,0x08,0x7A,0x82,0xAA,0xA8,0xFF,0xF5,0x16,0x54,0x5A,0x5A,0x14,0xF7,0xF7,0xFF},/*"¶",33*/
{0xDB,0xDB,0x5B,0x01,0xDC,0xDD,0x7F,0x8F,0xFF,0x00,0xFF,0x7F,0xBF,0xCF,0xFF,0xFF,0xF7,0xF9,0xFE,0x00,0xFE,0x79,0xBF,0xCF,0xF1,0xFE,0xF9,0xE7,0xDF,0xBF,0x7F,0xFF},/*"��",34*/
{0x7F,0xBF,0xDF,0x6F,0x77,0x79,0x7F,0x7F,0x7F,0x7C,0x73,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF,0x7F,0xBF,0xDF,0xE7,0xF8,0xFF,0xBF,0x7F,0xBF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF},/*"��",35*/
{0xEF,0xF3,0xBB,0xAB,0xAB,0x03,0xAA,0xA9,0xAB,0x03,0xAB,0xAB,0xBB,0xEB,0xF3,0xFF,0xEE,0xEE,0xF6,0xFA,0xFC,0xDE,0xDA,0xBA,0xB6,0x6E,0xFC,0xFA,0xF6,0xEE,0xEE,0xFF},/*"��",36*/
{0xEF,0xF3,0xFA,0xAA,0xAA,0xAA,0xFA,0x80,0xFA,0x2A,0xAA,0xAA,0xFA,0xEB,0xF3,0xFF,0x7F,0x08,0x7A,0x82,0xAA,0xA8,0xFF,0xF5,0x16,0x54,0x5A,0x5A,0x14,0xF7,0xF7,0xFF},/*"¶",37*/
{0xEF,0xF3,0xFA,0xAA,0xAA,0xAA,0xFA,0x80,0xFA,0xAA,0xAA,0xAA,0xFA,0xEB,0xF3,0xFF,0xDF,0xED,0xF5,0xF9,0x00,0xF5,0xED,0xFF,0x00,0xAA,0xAA,0xAA,0xAA,0x00,0xFF,0xFF},/*"˪",38*/
{0xFF,0x01,0xFD,0xDD,0x25,0x79,0x6F,0xB7,0xA8,0xDB,0x5B,0xAB,0xB3,0x7B,0x7F,0xFF,0xFF,0x00,0xF7,0xEF,0xF7,0xF8,0xE7,0xED,0xED,0xED,0x00,0xED,0xED,0xED,0xEF,0xFF},/*"��",39*/
{0xFF,0xEF,0xEF,0x6F,0xEF,0xEF,0xEE,0xE9,0xEF,0xEF,0xEF,0x2F,0xEF,0xEF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBC,0xA3,0xBF,0xBF,0xAF,0xB3,0xBC,0xBF,0xBF,0xBF,0xBF,0xFF},/*"��",40*/
{0xFF,0xDF,0xEF,0xF7,0x6B,0x58,0xBB,0xBB,0xBB,0x5B,0x6B,0xF3,0xFF,0xFF,0xFF,0xFF,0xFD,0xFD,0xFE,0xFE,0xDF,0xDB,0xDB,0xBB,0xB7,0x77,0xEF,0xFE,0xFE,0xFD,0xFD,0xFF},/*"��",41*/
{0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xDF,0xBF,0x7F,0xFF,0xFF,0xF7,0xFB,0xFC,0xFF,0xFF,0xBF,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF1,0xFF},/*"С",42*/
{0xEF,0xF3,0xFA,0xAA,0xAA,0xAA,0xFA,0x80,0xFA,0xAA,0xAA,0xAA,0xFA,0xEB,0xF3,0xFF,0xFF,0xFF,0xBE,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0x00,0xFF,0xFF,0xFF},/*"ѩ",43*/
{0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0x00,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xFF,0x7F,0x7F,0xBF,0xDF,0xEF,0xF3,0xFC,0xFF,0xFC,0xF3,0xEF,0xDF,0xBF,0x7F,0x7F,0xFF},/*"��",44*/
{0xEF,0xF3,0xFA,0xAA,0xAA,0xAA,0xFA,0x80,0xFA,0xAA,0xAA,0xAA,0xFA,0xEB,0xF3,0xFF,0xFF,0xFF,0xBE,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0x00,0xFF,0xFF,0xFF},/*"ѩ",45*/
{0xFF,0xDF,0xEF,0xF7,0x6B,0x58,0xBB,0xBB,0xBB,0x5B,0x6B,0xF3,0xFF,0xFF,0xFF,0xFF,0xFD,0xFD,0xFE,0xFE,0xDF,0xDB,0xDB,0xBB,0xB7,0x77,0xEF,0xFE,0xFE,0xFD,0xFD,0xFF},/*"��",46*/
{0xFF,0xFD,0xBD,0x9D,0xAD,0xB5,0xB9,0xBD,0xBD,0xBD,0xAD,0x9D,0x3D,0xFD,0xFF,0xFF,0xBF,0xBF,0xBB,0xBB,0xBB,0xBB,0xBB,0x80,0xBB,0xBB,0xBB,0xBB,0xBB,0xBF,0xBF,0xFF},/*"��",47*/


};

//����
//�ߴ�10*12 
const static u8 WORD_MIDDLE[18][20]={
{0xFF,0xEF,0x09,0xAF,0xB3,0xB9,0x03,0xBB,0xDB,0xFF,0xFF,0xFF,0xFC,0xFE,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF},/*"��",0*/
	{0xFF,0xCF,0x09,0x77,0x56,0x59,0x03,0x54,0x7B,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF},/*"��",1*/
{0xEF,0xB7,0x08,0xAB,0x6F,0x31,0x8A,0xB3,0x3B,0xFF,0xFF,0xFF,0xFC,0xFE,0xFF,0xF8,0xFB,0xFB,0xF8,0xFF},/*"��",2*/
{0xFF,0xFF,0x0D,0xFD,0xFD,0x01,0xDD,0xDD,0xDD,0xFF,0xFF,0xFF,0xFC,0xFD,0xFD,0xFC,0xFD,0xFD,0xFD,0xFF},/*"��",3*/
{0x7F,0xBB,0x1B,0xC3,0xD8,0x03,0xDB,0xDB,0xDB,0xFF,0xFF,0xFF,0xF8,0xFD,0xFD,0xFC,0xFD,0xFD,0xFD,0xFF},/*"��",4*/
{0xFF,0xFF,0x03,0x2B,0xAA,0xAD,0xAB,0x23,0xFF,0xFF,0xFF,0xFC,0xFF,0xF8,0xFD,0xFD,0xFD,0xFC,0xFF,0xFF},/*"��",5*/
{0xFF,0x2F,0xCB,0xAB,0x6F,0xF7,0x00,0xF7,0x07,0xFF,0xFF,0xFE,0xFE,0xFE,0xFA,0xFC,0xFF,0xFB,0xFC,0xFF},/*"��",6*/
{0xFF,0xFF,0x07,0x5B,0x00,0x5B,0x5B,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFB,0xFB,0xFB,0xF9,0xFF},/*"��",7*/
{0xFF,0xDF,0xDF,0xDD,0xDD,0x05,0xD9,0xDD,0xED,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xFC,0xFF,0xFF,0xFF,0xFF},/*"��",8*/
{0xFF,0x3F,0x01,0xD5,0xAD,0xAD,0x01,0x9D,0xA5,0xBF,0xFE,0xFF,0xF8,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF},/*"��",9*/
{0xF7,0x07,0x78,0x87,0xC7,0xF3,0x00,0xB7,0xB7,0xFF,0xFF,0xFB,0xFC,0xFE,0xFD,0xFB,0xFC,0xFB,0xFB,0xFF},/*"��",10*/
{0xFF,0xFF,0x67,0x33,0xAD,0x9B,0xA3,0xBB,0x7F,0xFF,0xFF,0xFE,0xFF,0xF8,0xFB,0xFB,0xFB,0xFB,0xFC,0xFF},/*"��",11*/
{0xFF,0x03,0xDB,0x03,0xE7,0x97,0xF7,0x01,0xF7,0xFF,0xFF,0xFE,0xFE,0xFE,0xFF,0xFF,0xFB,0xFC,0xFF,0xFF},/*"ʱ",12*/
{0xFF,0x03,0xF9,0x07,0xD5,0xD5,0x05,0xFD,0x01,0xFF,0xFF,0xF8,0xFF,0xFE,0xFE,0xFE,0xFF,0xFB,0xF8,0xFF},/*"��",13*/
{0xF7,0x6F,0x8D,0xCD,0x2D,0x45,0x41,0x4B,0x0D,0xFF,0xFF,0xF8,0xFF,0xFF,0xFC,0xFE,0xFE,0xFA,0xFD,0xFF},/*"��",14*/
{0x7F,0x73,0xA3,0x25,0x01,0x5D,0x25,0xA2,0x7B,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xF9,0xFE,0xFF,0xFF,0xFF},/*"��",15*/
{0xFF,0xFF,0x87,0xA9,0x07,0xAB,0xA8,0x83,0x7F,0xFF,0xFF,0xFE,0xFE,0xFE,0xFC,0xFE,0xFE,0xFE,0xFF,0xFF},/*"��",16*/
{0xBF,0xCF,0x01,0xF7,0x97,0x75,0xFB,0x07,0xFB,0xFF,0xFF,0xFF,0xF8,0xFB,0xFB,0xFB,0xFC,0xFB,0xFB,0xFF},/*"λ",17*/
};


const static u8 BMP_TEST[16][64]={
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0xBF,0xBF},
{0xBF,0x9F,0xDF,0xDF,0xDF,0xDF,0xDF,0xCF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xCF,0x87,0xB7,0xB7,0xB7,0x37,0x77,0x77,0x67,0xEF,0xEF,0xCF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0x9F,0xBF,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0xBF,0x9F,0xCF,0xE7,0xF3,0xFB,0xF9,0xFD,0xFD,0xFD,0xFD,0xE1,0xC1,0x8D,0x3C,0x7E,0x7E,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF9,0xF9,0xF3,0xE7,0xEF,0xEF,0xCF,0xDF,0xDF,0xDF,0x8F,0x0F,0x6F,0xE0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0x3F,0xBF,0x9F,0x9F,0xDF,0xDF,0xC1,0xC0,0x9E,0xBE,0xBF,0x3F,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0x21,0x07,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0x0F,0x27,0x07,0x07,0x27,0x0E,0x8C,0xF9,0xF3,0xE7,0xCF,0x9F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0x3F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF,0x3F,0x1F,0xCF,0xE7,0xF3,0xF9,0xFD,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x7F,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFC,0xFC,0xFD,0xFD,0xFD,0xFD,0xFD,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0x27,0x77,0x17,0x07,0x27,0x27,0x87,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x1F,0xCF,0xE7,0xF7,0xF3,0x7B,0x79,0x7D,0xFD,0xFD,0xFD,0xFD,0xFC,0xFC,0xFC,0xCC,0x84,0xA5,0xAD,0x8D,0xD9,0xF3,0xE7,0x07,0x1F,0x7F,0x7F,0xFE,0x7C,0x01,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xF8,0xF0,0xF3,0xF0,0xF0,0xF3,0x01,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xF0,0xE3,0x8F,0x9F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x3F,0xBF,0xFF,0xFF,0xFF,0xFF,0xFD,0xE0,0xC7,0xDF,0x9F,0x9F,0x9C,0x18,0x19,0x58,0x0C,0xAF,0xA7,0x97,0xD3,0xEB,0x6B,0x6B,0x63,0x21,0x31,0xB1,0x91,0xD1,0xD0,0xC8,0xE0,0xE6,0xF2,0xF9,0xFC,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF0,0xC3,0x8F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFC,0xFD,0xFB,0xFB,0xF3,0xF7,0xF7,0xE7,0xEF,0xEF,0xEF,0xEF,0xCF},
{0xCF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDE,0xDC,0xDE,0xCE,0xCE,0xEE,0xEE,0xEE,0xEE,0xEE,0x66,0x66,0x36,0xB6,0xF6,0xF2,0xFA,0xFB,0xF9,0xF9,0xFD,0xFD,0xFC,0xFE,0xFE,0xFE,0xFF,0x0E,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF9,0xF3,0xF7,0xE7,0xCF,0xDF,0x9E,0x3C,0x3D,0x39,0x3B,0x93,0xD7,0x47,0x4F,0x4F,0x4F,0x0F,0x1F,0x9F,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDB,0xC3,0xC7,0xCF,0x9F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x1F,0x81,0xE1,0xFB,0xFB,0xF9,0xF9,0xF9,0xF0,0xE6,0xC6,0x9F,0x3F,0x3F,0xBF,0xBF,0xBF,0x3F,0x1F,0x1F,0x9F,0xDF,0x1F,0x1F,0x8F,0xC7,0xF0,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF9,0xF9,0xF3,0xF3},
{0xE3,0xEB,0xEB,0xE3,0xE1,0xF1,0xE1,0xE5,0xF5,0xF1,0xF1,0xF9,0xFC,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},};


#endif  
