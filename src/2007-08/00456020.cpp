// from server: 79% by colin
// roc 2007-08 00456020  unit: ToggleIDEModeVerb  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456020
//
// 00456020  e8dd9e1d00           call 0x62ff02
// 00456025  8b4004               mov eax, dword ptr [eax + 4]
// 00456028  8b4020               mov eax, dword ptr [eax + 0x20]
// 0045602b  33c9                 xor ecx, ecx
// 0045602d  3888ec000000         cmp byte ptr [eax + 0xec], cl
// 00456033  0f94c1               sete cl
// 00456036  8ac1                 mov al, cl
// 00456038  c3                   ret 

extern "C" void* __cdecl G1_func_0062ff02();

struct T_func_00456020 {
    bool m();
};

bool T_func_00456020::m()
{
    char* p = (char*)G1_func_0062ff02();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    return p[0xec] == 0;
}
