// from server: 93% by colin
// roc 2010-06 009c3910  unit: seg_009c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3910
//
// 009c3910  33c9                 xor ecx, ecx
// 009c3912  51                   push ecx
// 009c3913  6a09                 push 9
// 009c3915  51                   push ecx
// 009c3916  b8f0b04400           mov eax, 0x44b0f0
// 009c391b  50                   push eax
// 009c391c  6810564400           push 0x445610
// 009c3921  6890b7a000           push 0xa0b790
// 009c3926  68acb7a000           push 0xa0b7ac
// 009c392b  b95014c000           mov ecx, 0xc01450
// 009c3930  e8db5aa8ff           call 0x449410
// 009c3935  68f0b69d00           push 0x9db6f0
// 009c393a  e82451deff           call 0x7a8a63
// 009c393f  59                   pop ecx
// 009c3940  c3                   ret 

static const char a[]="AlwaysDrawConnectors"; static const char b[]="General";
struct C{void m();}; extern void (C::*pmf)();
struct Obj{void run(const char*,const char*,void*,void(C::*)(),int,int,int);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(a,b,(void*)0x445610,pmf,0,9,0);tail((void*)&e);}
