// roc 2007-03 0040dc70  unit: seg_00400000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040dc70
//
// 0040dc70  8b442408             mov eax, dword ptr [esp + 8]
// 0040dc74  833809               cmp dword ptr [eax], 9
// 0040dc77  7530                 jne 0x40dca9
// 0040dc79  8378082f             cmp dword ptr [eax + 8], 0x2f
// 0040dc7d  752a                 jne 0x40dca9
// 0040dc7f  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0040dc82  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0040dc85  6a00                 push 0
// 0040dc87  6a00                 push 0
// 0040dc89  6868040000           push 0x468
// 0040dc8e  51                   push ecx
// 0040dc8f  ff1548ee7700         call dword ptr [0x77ee48]
// 0040dc95  8b442404             mov eax, dword ptr [esp + 4]
// 0040dc99  c70001000000         mov dword ptr [eax], 1
// 0040dc9f  c7400400000000       mov dword ptr [eax + 4], 0
// 0040dca6  c20800               ret 8
// 0040dca9  8b442404             mov eax, dword ptr [esp + 4]
// 0040dcad  c70000000000         mov dword ptr [eax], 0
// 0040dcb3  c7400400000000       mov dword ptr [eax + 4], 0
// 0040dcba  c20800               ret 8
// copied from an identical function in another client (function ?Process@ChatEnter@ns_ROCX000000@@QAEXPAX0@Z)

namespace ns_ROCX000000 {
typedef unsigned int DWORD;
typedef int BOOL;
typedef unsigned int UINT;
typedef unsigned int WPARAM;
typedef long LPARAM;

extern "C" __declspec(dllimport) BOOL __stdcall PostMessageA(void*, UINT, WPARAM, LPARAM);

struct ChatEnter {
    char pad[0x14];
    void* m_pTarget;
    void Process(void* b, void* a);
};

void ChatEnter::Process(void* b, void* a) {
    int* p = (int*)a;
    if (p[0] == 9 && p[2] == 0x2f) {
        void* t = *(void**)((char*)m_pTarget + 0x20);
        PostMessageA(t, 0x468, 0, 0);
        int* r = (int*)b;
        r[0] = 1;
        r[1] = 0;
    } else {
        int* r = (int*)b;
        r[0] = 0;
        r[1] = 0;
    }
}
}
