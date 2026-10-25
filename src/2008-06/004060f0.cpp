// from server: 100% by atomic.potato
// roc 2008-06 004060f0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004060f0
//
// 004060f0  8b4104               mov eax, dword ptr [ecx + 4]
// 004060f3  85c0                 test eax, eax
// 004060f5  7405                 je 0x4060fc
// 004060f7  8b11                 mov edx, dword ptr [ecx]
// 004060f9  895004               mov dword ptr [eax + 4], edx
// 004060fc  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00406100  740b                 je 0x40610d
// 00406102  8b4108               mov eax, dword ptr [ecx + 8]
// 00406105  50                   push eax
// 00406106  6a00                 push 0
// 00406108  e84fa82900           call 0x6a095c
// 0040610d  c3                   ret 

extern "C" void __stdcall Function006A095C(int, int);

struct S
{
    int a;
    int b;
    int c;
    int d;
    void f();
};

void S::f()
{
    if (b != 0)
        *(int *)(b + 4) = a;
    if (d != 0)
        Function006A095C(0, c);
}
