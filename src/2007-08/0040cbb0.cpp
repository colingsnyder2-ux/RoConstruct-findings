// from server: 100% by colin
// roc 2007-08 0040cbb0  unit: ChatEnter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cbb0
//
// 0040cbb0  8b442408             mov eax, dword ptr [esp + 8]
// 0040cbb4  833809               cmp dword ptr [eax], 9
// 0040cbb7  7530                 jne 0x40cbe9
// 0040cbb9  8378082f             cmp dword ptr [eax + 8], 0x2f
// 0040cbbd  752a                 jne 0x40cbe9
// 0040cbbf  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0040cbc2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0040cbc5  6a00                 push 0
// 0040cbc7  6a00                 push 0
// 0040cbc9  6868040000           push 0x468
// 0040cbce  51                   push ecx
// 0040cbcf  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0040cbd5  8b442404             mov eax, dword ptr [esp + 4]
// 0040cbd9  c70001000000         mov dword ptr [eax], 1
// 0040cbdf  c7400400000000       mov dword ptr [eax + 4], 0
// 0040cbe6  c20800               ret 8
// 0040cbe9  8b442404             mov eax, dword ptr [esp + 4]
// 0040cbed  c70000000000         mov dword ptr [eax], 0
// 0040cbf3  c7400400000000       mov dword ptr [eax + 4], 0
// 0040cbfa  c20800               ret 8

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
