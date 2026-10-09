// from server: 87% by colin
// roc 2007-08 006b8c60  unit: XTPPaintThemes::CXTPDefaultTheme  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b8c60
//
// 006b8c60  83ec08               sub esp, 8
// 006b8c63  56                   push esi
// 006b8c64  8bf1                 mov esi, ecx
// 006b8c66  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b8c6a  8b01                 mov eax, dword ptr [ecx]
// 006b8c6c  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 006b8c72  8d542404             lea edx, [esp + 4]
// 006b8c76  52                   push edx
// 006b8c77  ffd0                 call eax
// 006b8c79  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8c7d  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 006b8c83  83c104               add ecx, 4
// 006b8c86  3bc8                 cmp ecx, eax
// 006b8c88  5e                   pop esi
// 006b8c89  7f02                 jg 0x6b8c8d
// 006b8c8b  8bc8                 mov ecx, eax
// 006b8c8d  8b1424               mov edx, dword ptr [esp]
// 006b8c90  83c204               add edx, 4
// 006b8c93  3bd0                 cmp edx, eax
// 006b8c95  7f02                 jg 0x6b8c99
// 006b8c97  8bd0                 mov edx, eax
// 006b8c99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b8c9d  8910                 mov dword ptr [eax], edx
// 006b8c9f  894804               mov dword ptr [eax + 4], ecx
// 006b8ca2  83c408               add esp, 8
// 006b8ca5  c20800               ret 8

struct XTPPaintThemes_CXTPDefaultTheme {
    char pad[0xf8];
    int m_nValue;
    void GetRange(int* p1, int* p2, int* p3);
};

void XTPPaintThemes_CXTPDefaultTheme::GetRange(int* p1, int* p2, int* p3) {
    int local1;
    int local2;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;

    v1 = *p1;
    v2 = *(int*)(v1 + 0x150);
    (*(void(__thiscall*)(void*, int*))v2)(p1, &local1);

    v3 = local1;
    v4 = m_nValue;
    v3 += 4;
    if (v3 <= v4)
        v3 = v4;

    v5 = local2;
    v5 += 4;
    if (v5 <= v4)
        v5 = v4;

    v6 = *p3;
    *(int*)v6 = v5;
    *(int*)(v6 + 4) = v3;
}
