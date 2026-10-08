// from server: 91% by colin
// roc 2007-08 007114c0  unit: CXTColorSelectorCtrl  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007114c0
//
// 007114c0  56                   push esi
// 007114c1  8bf1                 mov esi, ecx
// 007114c3  8d86c0000000         lea eax, [esi + 0xc0]
// 007114c9  85c0                 test eax, eax
// 007114cb  57                   push edi
// 007114cc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007114d0  741b                 je 0x7114ed
// 007114d2  83782000             cmp dword ptr [eax + 0x20], 0
// 007114d6  7415                 je 0x7114ed
// 007114d8  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007114de  57                   push edi
// 007114df  6a00                 push 0
// 007114e1  6807040000           push 0x407
// 007114e6  50                   push eax
// 007114e7  ff15d8ec7700         call dword ptr [0x77ecd8]
// 007114ed  57                   push edi
// 007114ee  8bce                 mov ecx, esi
// 007114f0  e879edf1ff           call 0x63026e
// 007114f5  5f                   pop edi
// 007114f6  5e                   pop esi
// 007114f7  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

struct CXTColorSelectorCtrl {
    char pad[0xc0];
    char field_c0[0x20];
    char pad2[0x20];
    void* field_e0;
    void SetColor(unsigned int color);
};

void CXTColorSelectorCtrl::SetColor(unsigned int color) {
    char* p = (char*)this + 0xc0;
    if (p != 0 && *(int*)(p + 0x20) != 0) {
        SendMessageA(*(void**)((char*)this + 0xe0), 0x407, 0, color);
    }
    ((void (__thiscall*)(CXTColorSelectorCtrl*, unsigned int))0x63026e)(this, color);
}
