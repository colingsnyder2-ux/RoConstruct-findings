// from server: 93% by colin
// roc 2010-06 009c38d0  unit: seg_009c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c38d0
//
// 009c38d0  33c9                 xor ecx, ecx
// 009c38d2  51                   push ecx
// 009c38d3  6a0f                 push 0xf
// 009c38d5  51                   push ecx
// 009c38d6  b850ae4400           mov eax, 0x44ae50
// 009c38db  50                   push eax
// 009c38dc  68d0378200           push 0x8237d0
// 009c38e1  6890b7a000           push 0xa0b790
// 009c38e6  6898b7a000           push 0xa0b798
// 009c38eb  b92814c000           mov ecx, 0xc01428
// 009c38f0  e87b7fa8ff           call 0x44b870
// 009c38f5  68b0b49d00           push 0x9db4b0
// 009c38fa  e86451deff           call 0x7a8a63
// 009c38ff  59                   pop ecx
// 009c3900  c3                   ret 

static const char a[]="FrameRateManager"; static const char b[]="General";
struct C{void m();}; extern void (C::*pmf)();
struct Obj{void run(const char*,const char*,void*,void(C::*)(),int,int,int);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(a,b,(void*)0x8237d0,pmf,0,0xf,0);tail((void*)&e);}
