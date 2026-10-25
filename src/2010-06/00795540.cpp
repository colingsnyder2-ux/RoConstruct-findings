// from server: 100% by tester
// roc 2010-06 00795540  unit: PasteVerb  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795540
//
// 00795540  8b01                 mov eax, dword ptr [ecx]
// 00795542  6a00                 push 0
// 00795544  50                   push eax
// 00795545  ff1508a39e00         call dword ptr [0x9ea308]
// 0079554b  c3                   ret 

extern "C" long (__stdcall *InterlockedExchange)(long volatile *Target, long Value);

struct S_func_00705300 {
    void f();
};

void S_func_00705300::f()
{
    long *p = *(long **)this;
    InterlockedExchange(p, 0);
}
