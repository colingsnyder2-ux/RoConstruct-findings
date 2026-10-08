// from server: 100% by colin
// roc 2007-08 00686720  unit: CXTPPropExchange  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00686720
//
// 00686720  6a17                 push 0x17
// 00686722  8d4128               lea eax, [ecx + 0x28]
// 00686725  50                   push eax
// 00686726  684c547c00           push 0x7c544c
// 0068672b  51                   push ecx
// 0068672c  e8efefffff           call 0x685720
// 00686731  83c410               add esp, 0x10
// 00686734  c3                   ret 

extern "C" void __cdecl sub_685720(void* a, void* b, void* c, int d);

struct CXTPPropExchange {
    void f();
};

void CXTPPropExchange::f()
{
    sub_685720(this, (void*)0x7c544c, (char*)this + 0x28, 0x17);
}
