// from server: 93% by colin
// roc 2010-06 009c3950  unit: seg_009c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3950
//
// 009c3950  33c9                 xor ecx, ecx
// 009c3952  51                   push ecx
// 009c3953  6a0f                 push 0xf
// 009c3955  51                   push ecx
// 009c3956  b850ad4400           mov eax, 0x44ad50
// 009c395b  50                   push eax
// 009c395c  68b0554400           push 0x4455b0
// 009c3961  68d8b7a000           push 0xa0b7d8
// 009c3966  68c4b7a000           push 0xa0b7c4
// 009c396b  b97014c000           mov ecx, 0xc01470
// 009c3970  e89b5aa8ff           call 0x449410
// 009c3975  68d0b69d00           push 0x9db6d0
// 009c397a  e8e450deff           call 0x7a8a63
// 009c397f  59                   pop ecx
// 009c3980  c3                   ret 

static const char a[]="IsAggregationShown"; static const char b[]="Debug";
struct C{void m();}; extern void (C::*pmf)(); struct Obj{void run(const char*,const char*,void*,void(C::*)(),int,int,int);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(a,b,(void*)0x4455b0,pmf,0,0xf,0);tail((void*)&e);}
