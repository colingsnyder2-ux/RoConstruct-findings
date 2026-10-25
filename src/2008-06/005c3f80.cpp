// from server: 100% by king_originala
// roc 2008-06 005c3f80  unit: RBX::Profiling::Profiler  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3f80
//
// 005c3f80  8b442404             mov eax, dword ptr [esp + 4]
// 005c3f84  56                   push esi
// 005c3f85  8bf1                 mov esi, ecx
// 005c3f87  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 005c3f8b  8906                 mov dword ptr [esi], eax
// 005c3f8d  884e08               mov byte ptr [esi + 8], cl
// 005c3f90  833d9494970000       cmp dword ptr [0x979494], 0
// 005c3f97  7425                 je 0x5c3fbe
// 005c3f99  e87244f4ff           call 0x508410
// 005c3f9e  dd5e10               fstp qword ptr [esi + 0x10]
// 005c3fa1  8b1594949700         mov edx, dword ptr [0x979494]
// 005c3fa7  52                   push edx
// 005c3fa8  ff15ac228000         call dword ptr [0x8022ac]
// 005c3fae  894604               mov dword ptr [esi + 4], eax
// 005c3fb1  a194949700           mov eax, dword ptr [0x979494]
// 005c3fb6  56                   push esi
// 005c3fb7  50                   push eax
// 005c3fb8  ff15a4228000         call dword ptr [0x8022a4]
// 005c3fbe  8bc6                 mov eax, esi
// 005c3fc0  5e                   pop esi
// 005c3fc1  c20800               ret 8

extern unsigned long tlsIndex;
extern double __cdecl currentTime();
extern "C" void* (__stdcall *TlsGetValue)(unsigned long);
extern "C" int (__stdcall *TlsSetValue)(unsigned long, void*);

struct S
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    S(const char* nameValue, bool enabledValue);
};

S::S(const char* nameValue, bool enabledValue)
{
    name = nameValue;
    enabled = enabledValue;
    if (tlsIndex != 0)
    {
        startTime = currentTime();
        previous = TlsGetValue(tlsIndex);
        TlsSetValue(tlsIndex, this);
    }
}
