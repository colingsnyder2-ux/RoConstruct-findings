// from server: 74% by colin
// roc 2007-08 006409e0  unit: CXTPPaintManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006409e0
//
// 006409e0  83ec08               sub esp, 8
// 006409e3  56                   push esi
// 006409e4  8bf1                 mov esi, ecx
// 006409e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006409ea  8b01                 mov eax, dword ptr [ecx]
// 006409ec  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 006409f2  8d542404             lea edx, [esp + 4]
// 006409f6  52                   push edx
// 006409f7  ffd0                 call eax
// 006409f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006409fd  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00640a03  83c106               add ecx, 6
// 00640a06  3bc8                 cmp ecx, eax
// 00640a08  5e                   pop esi
// 00640a09  7f02                 jg 0x640a0d
// 00640a0b  8bc8                 mov ecx, eax
// 00640a0d  8b1424               mov edx, dword ptr [esp]
// 00640a10  83c004               add eax, 4
// 00640a13  83c204               add edx, 4
// 00640a16  3bd0                 cmp edx, eax
// 00640a18  7f02                 jg 0x640a1c
// 00640a1a  8bd0                 mov edx, eax
// 00640a1c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00640a20  8910                 mov dword ptr [eax], edx
// 00640a22  894804               mov dword ptr [eax + 4], ecx
// 00640a25  83c408               add esp, 8
// 00640a28  c20800               ret 8

struct CXTPPaintManager {
    int m_nMinWidth;
    int GetMinSize(int* pSize, int* pMinSize);
};

int CXTPPaintManager::GetMinSize(int* pSize, int* pMinSize) {
    int size[2];
    int* p = pSize;
    int v = (*(int (__thiscall **)(int*, int*))((*(int*)p) + 0x150))(p, size);
    int w = size[0] + 6;
    int h = size[1];
    int minW = m_nMinWidth;
    if (w <= minW) {
        w = minW;
    }
    int minH = h + 4;
    int minW2 = w + 4;
    if (minH <= minW2) {
        minH = minW2;
    }
    pMinSize[0] = minH;
    pMinSize[1] = w;
    return v;
}
