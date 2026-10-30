// roc 2009-06 00510870  unit: CSHA1  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510870
//
// 00510870  56                   push esi
// 00510871  8bf1                 mov esi, ecx
// 00510873  807e1800             cmp byte ptr [esi + 0x18], 0
// 00510877  750b                 jne 0x510884
// 00510879  56                   push esi
// 0051087a  ff1548e38900         call dword ptr [0x89e348]
// 00510880  c6461801             mov byte ptr [esi + 0x18], 1
// 00510884  56                   push esi
// 00510885  ff15a8e18900         call dword ptr [0x89e1a8]
// 0051088b  5e                   pop esi
// 0051088c  c3                   ret 
// copied from an identical function in another client (function ?f@CSHA1@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
// from server: 100% by atomic.potato
extern "C" void __declspec(dllimport) __stdcall InitializeCriticalSection(void *);
extern "C" void __declspec(dllimport) __stdcall EnterCriticalSection(void *);

struct CSHA1
{
    unsigned char data[0x19];
    void f();
};

void CSHA1::f()
{
    if (!data[0x18])
    {
        InitializeCriticalSection(this);
        data[0x18] = 1;
    }
    EnterCriticalSection(this);
}
}
