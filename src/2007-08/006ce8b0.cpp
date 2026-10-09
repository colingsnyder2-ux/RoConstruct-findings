// from server: 90% by colin
// roc 2007-08 006ce8b0  unit: CXTPReportPaintManager  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ce8b0
//
// 006ce8b0  53                   push ebx
// 006ce8b1  56                   push esi
// 006ce8b2  57                   push edi
// 006ce8b3  8bf9                 mov edi, ecx
// 006ce8b5  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 006ce8bb  83f8ff               cmp eax, -1
// 006ce8be  7506                 jne 0x6ce8c6
// 006ce8c0  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 006ce8c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ce8ca  8b16                 mov edx, dword ptr [esi]
// 006ce8cc  50                   push eax
// 006ce8cd  8b4238               mov eax, dword ptr [edx + 0x38]
// 006ce8d0  8bce                 mov ecx, esi
// 006ce8d2  ffd0                 call eax
// 006ce8d4  8bd8                 mov ebx, eax
// 006ce8d6  8b4760               mov eax, dword ptr [edi + 0x60]
// 006ce8d9  83f8ff               cmp eax, -1
// 006ce8dc  7503                 jne 0x6ce8e1
// 006ce8de  8b475c               mov eax, dword ptr [edi + 0x5c]
// 006ce8e1  8b16                 mov edx, dword ptr [esi]
// 006ce8e3  50                   push eax
// 006ce8e4  8b4234               mov eax, dword ptr [edx + 0x34]
// 006ce8e7  8bce                 mov ecx, esi
// 006ce8e9  ffd0                 call eax
// 006ce8eb  8b5604               mov edx, dword ptr [esi + 4]
// 006ce8ee  8d4c2414             lea ecx, [esp + 0x14]
// 006ce8f2  51                   push ecx
// 006ce8f3  52                   push edx
// 006ce8f4  8bf8                 mov edi, eax
// 006ce8f6  ff1554ee7700         call dword ptr [0x77ee54]
// 006ce8fc  8b06                 mov eax, dword ptr [esi]
// 006ce8fe  8b5038               mov edx, dword ptr [eax + 0x38]
// 006ce901  53                   push ebx
// 006ce902  8bce                 mov ecx, esi
// 006ce904  ffd2                 call edx
// 006ce906  8b06                 mov eax, dword ptr [esi]
// 006ce908  8b5034               mov edx, dword ptr [eax + 0x34]
// 006ce90b  57                   push edi
// 006ce90c  8bce                 mov ecx, esi
// 006ce90e  ffd2                 call edx
// 006ce910  5f                   pop edi
// 006ce911  5e                   pop esi
// 006ce912  5b                   pop ebx
// 006ce913  c21400               ret 0x14

struct CXTPReportPaintManager {
    char pad[0x5c];
    int m_nItemHeight;
    int m_nItemHeight2;
    char pad2[0x2c];
    int m_nTextColor2;
    int m_nTextColor;
    void DrawItem(void*, int, int, int, int);
};

extern "C" int __stdcall DrawFocusRect(void*, const void*);

void CXTPReportPaintManager::DrawItem(void* p, int a, int b, int c, int d) {
    int v1 = m_nTextColor;
    if (v1 == -1)
        v1 = m_nTextColor2;

    int v2 = (*(int (__thiscall**)(void*, int))(*(int*)p + 0x38))(p, v1);

    int v3 = m_nItemHeight2;
    if (v3 == -1)
        v3 = m_nItemHeight;

    int v4 = (*(int (__thiscall**)(void*, int))(*(int*)p + 0x34))(p, v3);

    int rect[4];
    DrawFocusRect(*(void**)((char*)p + 4), rect);

    (*(int (__thiscall**)(void*, int))(*(int*)p + 0x38))(p, v2);
    (*(int (__thiscall**)(void*, int))(*(int*)p + 0x34))(p, v4);
}
