#ifndef _BASE_TYPES_H_
#define _BASE_TYPES_H_

/*
** 8 Bit Types
*/
typedef unsigned char uint8;
typedef signed char sint8;

#define MAXUINT8 ((uint8)0xFFU)
#define MAXSINT8 ((sint8)0x7FU)
#define MINSINT8 ((sint8)0x80U)

#define cByte0      ((uint8)0u)
#define cByte1      ((uint8)1u)
#define cByte2      ((uint8)2u)
#define cByte3      ((uint8)3u)
#define cByte4      ((uint8)4u)
#define cByte5      ((uint8)5u)
#define cByte6      ((uint8)6u)
#define cByte7      ((uint8)7u)
#define cByte8      ((uint8)8u)
#define cByte9      ((uint8)9u)
#define cByte10     ((uint8)10u)
#define cByte11     ((uint8)11u)
#define cByte12     ((uint8)12u)
#define cByte13     ((uint8)13u)
#define cByte14     ((uint8)14u)
#define cByte15     ((uint8)15u)
#define cByte16     ((uint8)16u)
#define cByte17     ((uint8)17u)
#define cByte18     ((uint8)18u)
#define cByte19     ((uint8)19u)
#define cByte20     ((uint8)20u)
#define cByte21     ((uint8)21u)
#define cByte22     ((uint8)22u)
#define cByte23     ((uint8)23u)
#define cByte24     ((uint8)24u)
#define cByte25     ((uint8)25u)
#define cByte26     ((uint8)26u)
#define cByte27     ((uint8)27u)
#define cByte28     ((uint8)28u)
#define cByte29     ((uint8)29u)
#define cByte30     ((uint8)30u)
#define cByte31     ((uint8)31u)
#define cByte32     ((uint8)32u)
#define cByte33     ((uint8)33u)
#define cByte34     ((uint8)34u)
#define cByte35     ((uint8)35u)
#define cByte36     ((uint8)36u)
#define cByte37     ((uint8)37u)
#define cByte38     ((uint8)38u)
#define cByte39     ((uint8)39u)
#define cByte40     ((uint8)40u)
#define cByte41     ((uint8)41u)
#define cByte42     ((uint8)42u)
#define cByte43     ((uint8)43u)
#define cByte44     ((uint8)44u)
#define cByte45     ((uint8)45u)
#define cByte46     ((uint8)46u)
#define cByte47     ((uint8)47u)
#define cByte48     ((uint8)48u)
#define cByte49     ((uint8)49u)
#define cByte50     ((uint8)50u)
#define cByte51     ((uint8)51u)
#define cByte52     ((uint8)52u)
#define cByte53     ((uint8)53u)
#define cByte54     ((uint8)54u)
#define cByte55     ((uint8)55u)
#define cByte56     ((uint8)56u)
#define cByte57     ((uint8)57u)
#define cByte58     ((uint8)58u)
#define cByte59     ((uint8)59u)
#define cByte60     ((uint8)60u)
#define cByte61     ((uint8)61u)
#define cByte62     ((uint8)62u)
#define cByte63     ((uint8)63u)
#define cByte64     ((uint8)64u)
#define cByte65     ((uint8)65u)
#define cByte66     ((uint8)66u)
#define cByte67     ((uint8)67u)
#define cByte68     ((uint8)68u)
#define cByte69     ((uint8)69u)
#define cByte70     ((uint8)70u)
#define cByte71     ((uint8)71u)
#define cByte72     ((uint8)72u)
#define cByte73     ((uint8)73u)
#define cByte74     ((uint8)74u)
#define cByte75     ((uint8)75u)
#define cByte76     ((uint8)76u)
#define cByte77     ((uint8)77u)
#define cByte78     ((uint8)78u)
#define cByte79     ((uint8)79u)
#define cByte80     ((uint8)80u)
#define cByte81     ((uint8)81u)
#define cByte82     ((uint8)82u)
#define cByte83     ((uint8)83u)
#define cByte84     ((uint8)84u)
#define cByte85     ((uint8)85u)
#define cByte86     ((uint8)86u)
#define cByte87     ((uint8)87u)
#define cByte88     ((uint8)88u)
#define cByte89     ((uint8)89u)
#define cByte90     ((uint8)90u)
#define cByte91     ((uint8)91u)
#define cByte92     ((uint8)92u)
#define cByte93     ((uint8)93u)
#define cByte94     ((uint8)94u)
#define cByte95     ((uint8)95u)
#define cByte96     ((uint8)96u)
#define cByte97     ((uint8)97u)
#define cByte98     ((uint8)98u)
#define cByte99     ((uint8)99u)
#define cByte100    ((uint8)100u)
#define cByte101    ((uint8)101u)
#define cByte102    ((uint8)102u)
#define cByte103    ((uint8)103u)
#define cByte104    ((uint8)104u)
#define cByte105    ((uint8)105u)
#define cByte106    ((uint8)106u)
#define cByte107    ((uint8)107u)
#define cByte108    ((uint8)108u)
#define cByte109    ((uint8)109u)
#define cByte110    ((uint8)110u)
#define cByte111    ((uint8)111u)
#define cByte112    ((uint8)112u)
#define cByte113    ((uint8)113u)
#define cByte114    ((uint8)114u)
#define cByte115    ((uint8)115u)
#define cByte116    ((uint8)116u)
#define cByte117    ((uint8)117u)
#define cByte118    ((uint8)118u)
#define cByte119    ((uint8)119u)
#define cByte120    ((uint8)120u)
#define cByte121    ((uint8)121u)
#define cByte122    ((uint8)122u)
#define cByte123    ((uint8)123u)
#define cByte124    ((uint8)124u)
#define cByte125    ((uint8)125u)
#define cByte126    ((uint8)126u)
#define cByte127    ((uint8)127u)
#define cByte128    ((uint8)128u)
#define cByte129    ((uint8)129u)
#define cByte130    ((uint8)130u)
#define cByte131    ((uint8)131u)
#define cByte132    ((uint8)132u)
#define cByte133    ((uint8)133u)
#define cByte134    ((uint8)134u)
#define cByte135    ((uint8)135u)
#define cByte136    ((uint8)136u)
#define cByte137    ((uint8)137u)
#define cByte138    ((uint8)138u)
#define cByte139    ((uint8)139u)
#define cByte140    ((uint8)140u)
#define cByte141    ((uint8)141u)
#define cByte142    ((uint8)142u)
#define cByte143    ((uint8)143u)
#define cByte144    ((uint8)144u)
#define cByte145    ((uint8)145u)
#define cByte146    ((uint8)146u)
#define cByte147    ((uint8)147u)
#define cByte148    ((uint8)148u)
#define cByte149    ((uint8)149u)
#define cByte150    ((uint8)150u)
#define cByte151    ((uint8)151u)
#define cByte152    ((uint8)152u)
#define cByte153    ((uint8)153u)
#define cByte154    ((uint8)154u)
#define cByte155    ((uint8)155u)
#define cByte156    ((uint8)156u)
#define cByte157    ((uint8)157u)
#define cByte158    ((uint8)158u)
#define cByte159    ((uint8)159u)
#define cByte160    ((uint8)160u)
#define cByte161    ((uint8)161u)
#define cByte162    ((uint8)162u)
#define cByte163    ((uint8)163u)
#define cByte164    ((uint8)164u)
#define cByte165    ((uint8)165u)
#define cByte166    ((uint8)166u)
#define cByte167    ((uint8)167u)
#define cByte168    ((uint8)168u)
#define cByte169    ((uint8)169u)
#define cByte170    ((uint8)170u)
#define cByte171    ((uint8)171u)
#define cByte172    ((uint8)172u)
#define cByte173    ((uint8)173u)
#define cByte174    ((uint8)174u)
#define cByte175    ((uint8)175u)
#define cByte176    ((uint8)176u)
#define cByte177    ((uint8)177u)
#define cByte178    ((uint8)178u)
#define cByte179    ((uint8)179u)
#define cByte180    ((uint8)180u)
#define cByte181    ((uint8)181u)
#define cByte182    ((uint8)182u)
#define cByte183    ((uint8)183u)
#define cByte184    ((uint8)184u)
#define cByte185    ((uint8)185u)
#define cByte186    ((uint8)186u)
#define cByte187    ((uint8)187u)
#define cByte188    ((uint8)188u)
#define cByte189    ((uint8)189u)
#define cByte190    ((uint8)190u)
#define cByte191    ((uint8)191u)
#define cByte192    ((uint8)192u)
#define cByte193    ((uint8)193u)
#define cByte194    ((uint8)194u)
#define cByte195    ((uint8)195u)
#define cByte196    ((uint8)196u)
#define cByte197    ((uint8)197u)
#define cByte198    ((uint8)198u)
#define cByte199    ((uint8)199u)
#define cByte200    ((uint8)200u)
#define cByte201    ((uint8)201u)
#define cByte202    ((uint8)202u)
#define cByte203    ((uint8)203u)
#define cByte204    ((uint8)204u)
#define cByte205    ((uint8)205u)
#define cByte206    ((uint8)206u)
#define cByte207    ((uint8)207u)
#define cByte208    ((uint8)208u)
#define cByte209    ((uint8)209u)
#define cByte210    ((uint8)210u)
#define cByte211    ((uint8)211u)
#define cByte212    ((uint8)212u)
#define cByte213    ((uint8)213u)
#define cByte214    ((uint8)214u)
#define cByte215    ((uint8)215u)
#define cByte216    ((uint8)216u)
#define cByte217    ((uint8)217u)
#define cByte218    ((uint8)218u)
#define cByte219    ((uint8)219u)
#define cByte220    ((uint8)220u)
#define cByte221    ((uint8)221u)
#define cByte222    ((uint8)222u)
#define cByte223    ((uint8)223u)
#define cByte224    ((uint8)224u)
#define cByte225    ((uint8)225u)
#define cByte226    ((uint8)226u)
#define cByte227    ((uint8)227u)
#define cByte228    ((uint8)228u)
#define cByte229    ((uint8)229u)
#define cByte230    ((uint8)230u)
#define cByte231    ((uint8)231u)
#define cByte232    ((uint8)232u)
#define cByte233    ((uint8)233u)
#define cByte234    ((uint8)234u)
#define cByte235    ((uint8)235u)
#define cByte236    ((uint8)236u)
#define cByte237    ((uint8)237u)
#define cByte238    ((uint8)238u)
#define cByte239    ((uint8)239u)
#define cByte240    ((uint8)240u)
#define cByte241    ((uint8)241u)
#define cByte242    ((uint8)242u)
#define cByte243    ((uint8)243u)
#define cByte244    ((uint8)244u)
#define cByte245    ((uint8)245u)
#define cByte246    ((uint8)246u)
#define cByte247    ((uint8)247u)
#define cByte248    ((uint8)248u)
#define cByte249    ((uint8)249u)
#define cByte250    ((uint8)250u)
#define cByte251    ((uint8)251u)
#define cByte252    ((uint8)252u)
#define cByte253    ((uint8)253u)
#define cByte254    ((uint8)254u)
#define cByte255    ((uint8)255u)

typedef uint8 byte;
#define MAXBYTE MAXUINT8


typedef uint8 boolean;
#define cTrue (boolean)(1==1)
#define cFalse (boolean)(1==0)
/*
** 16 Bit Types
*/
typedef unsigned short uint16;
typedef signed short sint16;

#define MAXUINT16 ((uint16)0xFFFFU)
#define MAXSINT16 ((sint16)0x7FFFU)
#define MINSINT16 ((sint16)0x8000U)


/*
** 32 Bit Types
*/
typedef unsigned long uint32;
typedef signed long sint32;

#define MAXUINT32 ((uint32)0xFFFFFFFFU)
#define MAXSINT32 ((sint32)0x7FFFFFFFU)
#define MINSINT32 ((sint32)0x80000000U)
/*
** 64 Bit Types
*/

typedef unsigned long long uint64;
typedef signed long long sint64;

#define MAXUINT64 ((uint64)0xFFFFFFFFFFFFFFFFU)
#define MAXSINT64 ((sint64)0x7FFFFFFFFFFFFFFFU)
#define MINSINT64 ((sint64)0x8000000000000000U)




#endif //ifndef _BASE_TYPES_H_