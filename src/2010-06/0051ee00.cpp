// roc 2010-06 0051ee00  unit: CSHA1  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ee00
//
// 0051ee00  56                   push esi
// 0051ee01  8bf1                 mov esi, ecx
// 0051ee03  807e1800             cmp byte ptr [esi + 0x18], 0
// 0051ee07  750b                 jne 0x51ee14
// 0051ee09  56                   push esi
// 0051ee0a  ff15c0a39e00         call dword ptr [0x9ea3c0]
// 0051ee10  c6461801             mov byte ptr [esi + 0x18], 1
// 0051ee14  56                   push esi
// 0051ee15  ff1574a39e00         call dword ptr [0x9ea374]
// 0051ee1b  5e                   pop esi
// 0051ee1c  c3                   ret 
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