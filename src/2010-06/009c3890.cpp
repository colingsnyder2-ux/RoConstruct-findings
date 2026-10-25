// from server: 93% by colin
// roc 2010-06 009c3890  unit: seg_009c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3890
//
// 009c3890  33c9                 xor ecx, ecx
// 009c3892  51                   push ecx
// 009c3893  6a0f                 push 0xf
// 009c3895  51                   push ecx
// 009c3896  b810ae4400           mov eax, 0x44ae10
// 009c389b  50                   push eax
// 009c389c  68d00d4900           push 0x490dd0
// 009c38a1  6890b7a000           push 0xa0b790
// 009c38a6  6880b7a000           push 0xa0b780
// 009c38ab  b90014c000           mov ecx, 0xc01400
// 009c38b0  e8bb7da8ff           call 0x44b670
// 009c38b5  68d0b49d00           push 0x9db4d0
// 009c38ba  e8a451deff           call 0x7a8a63
// 009c38bf  59                   pop ecx
// 009c38c0  c3                   ret 

static const char a[]="graphicsMode"; static const char b[]="General";
struct C{void m();}; extern void (C::*pmf)();
struct Obj{void run(const char*,const char*,void*,void(C::*)(),int,int,int);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(a,b,(void*)0x490dd0,pmf,0,0xf,0);tail((void*)&e);}
