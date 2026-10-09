// from server: 94% by colin
// roc 2007-08 00631de0  unit: CXTPCommandBars  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631de0
//
// 00631de0  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00631de6  56                   push esi
// 00631de7  8b742408             mov esi, dword ptr [esp + 8]
// 00631deb  8b06                 mov eax, dword ptr [esi]
// 00631ded  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 00631df3  6a01                 push 1
// 00631df5  51                   push ecx
// 00631df6  8bce                 mov ecx, esi
// 00631df8  ffd2                 call edx
// 00631dfa  85c0                 test eax, eax
// 00631dfc  7504                 jne 0x631e02
// 00631dfe  5e                   pop esi
// 00631dff  c20400               ret 4
// 00631e02  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00631e08  85c9                 test ecx, ecx
// 00631e0a  7412                 je 0x631e1e
// 00631e0c  6aff                 push -1
// 00631e0e  56                   push esi
// 00631e0f  e85c090700           call 0x6a2770
// 00631e14  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00631e1e  c786fc00000004000000 mov dword ptr [esi + 0xfc], 4
// 00631e28  b801000000           mov eax, 1
// 00631e2d  5e                   pop esi
// 00631e2e  c20400               ret 4

struct CXTPCommandBars {
    char pad[0xa0];
    void* field_a0;
    int f(void* arg);
};

extern "C" void __stdcall sub_6a2770(void*, void*);

int CXTPCommandBars::f(void* arg) {
    void* p = field_a0;
    int result = (*(int (__thiscall**)(void*, void*, int))(*(int*)arg + 0x1f4))(arg, p, 1);
    if (result == 0) {
        return 0;
    }
    void* q = *(void**)((char*)arg + 0x180);
    if (q != 0) {
        sub_6a2770(arg, (void*)-1);
        *(void**)((char*)arg + 0x180) = 0;
    }
    *(int*)((char*)arg + 0xfc) = 4;
    return 1;
}
