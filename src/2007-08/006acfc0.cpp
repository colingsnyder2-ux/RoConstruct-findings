// from server: 61% by colin
// roc 2007-08 006acfc0  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006acfc0
//
// 006acfc0  53                   push ebx
// 006acfc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006acfc5  56                   push esi
// 006acfc6  57                   push edi
// 006acfc7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006acfcb  8bf1                 mov esi, ecx
// 006acfcd  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 006acfd0  8b01                 mov eax, dword ptr [ecx]
// 006acfd2  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006acfd8  57                   push edi
// 006acfd9  53                   push ebx
// 006acfda  ffd2                 call edx
// 006acfdc  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006acfdf  8b7744               mov esi, dword ptr [edi + 0x44]
// 006acfe2  8b11                 mov edx, dword ptr [ecx]
// 006acfe4  6a01                 push 1
// 006acfe6  83ec10               sub esp, 0x10
// 006acfe9  8bc4                 mov eax, esp
// 006acfeb  8930                 mov dword ptr [eax], esi
// 006acfed  8b7748               mov esi, dword ptr [edi + 0x48]
// 006acff0  897004               mov dword ptr [eax + 4], esi
// 006acff3  8b774c               mov esi, dword ptr [edi + 0x4c]
// 006acff6  897008               mov dword ptr [eax + 8], esi
// 006acff9  8b7750               mov esi, dword ptr [edi + 0x50]
// 006acffc  57                   push edi
// 006acffd  89700c               mov dword ptr [eax + 0xc], esi
// 006ad000  8b4268               mov eax, dword ptr [edx + 0x68]
// 006ad003  53                   push ebx
// 006ad004  ffd0                 call eax
// 006ad006  5f                   pop edi
// 006ad007  5e                   pop esi
// 006ad008  5b                   pop ebx
// 006ad009  c20800               ret 8

struct CRibbonAppearanceSet {
    void apply(int, int);
};

void CRibbonAppearanceSet::apply(int a, int b) {
    int* p1 = *(int**)((char*)this + 0x2c);
    int* vt1 = *(int**)p1;
    void (__stdcall *f1)(int, int) = *(void (__stdcall**)(int, int))((char*)vt1 + 0x144);
    f1(a, b);

    int* p2 = *(int**)((char*)this + 0x1c);
    int* vt2 = *(int**)p2;
    int v44 = *(int*)((char*)p2 + 0x44);
    int v48 = *(int*)((char*)p2 + 0x48);
    int v4c = *(int*)((char*)p2 + 0x4c);
    int v50 = *(int*)((char*)p2 + 0x50);
    void (__stdcall *f2)(int, int, int, int, int, int, int) =
        *(void (__stdcall**)(int, int, int, int, int, int, int))((char*)vt2 + 0x68);
    f2(v44, v48, v4c, v50, 1, a, b);
}
