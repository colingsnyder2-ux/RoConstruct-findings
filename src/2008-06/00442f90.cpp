// from server: 100% by atomic.potato
// roc 2008-06 00442f90  unit: 0RBX::Metadata::Reflection  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442f90
//
// 00442f90  8b442404             mov eax, dword ptr [esp + 4]
// 00442f94  6a00                 push 0
// 00442f96  6850a99200           push 0x92a950
// 00442f9b  687c909200           push 0x92907c
// 00442fa0  6a00                 push 0
// 00442fa2  50                   push eax
// 00442fa3  e81ee82500           call 0x6a17c6
// 00442fa8  83c414               add esp, 0x14
// 00442fab  f7d8                 neg eax
// 00442fad  1bc0                 sbb eax, eax
// 00442faf  f7d8                 neg eax
// 00442fb1  c20400               ret 4

extern "C" int __cdecl sub_006a17c6(void *, void *, void *, void *, int);

struct Reflection
{
    int f(void *);
};

int Reflection::f(void *value)
{
    int result = sub_006a17c6(value, 0, (void *)0x92907c, (void *)0x92a950, 0);
    return result != 0;
}
