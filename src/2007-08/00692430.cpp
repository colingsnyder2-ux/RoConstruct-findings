// from server: 42% by colin
// roc 2007-08 00692430  unit: CXTPStatusBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692430
//
// 00692430  56                   push esi
// 00692431  57                   push edi
// 00692432  e899ffffff           call 0x6923d0
// 00692437  8b742410             mov esi, dword ptr [esp + 0x10]
// 0069243b  8b0e                 mov ecx, dword ptr [esi]
// 0069243d  8b38                 mov edi, dword ptr [eax]
// 0069243f  83ec10               sub esp, 0x10
// 00692442  8bd4                 mov edx, esp
// 00692444  890a                 mov dword ptr [edx], ecx
// 00692446  8b4e04               mov ecx, dword ptr [esi + 4]
// 00692449  894a04               mov dword ptr [edx + 4], ecx
// 0069244c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069244f  894a08               mov dword ptr [edx + 8], ecx
// 00692452  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00692455  894a0c               mov dword ptr [edx + 0xc], ecx
// 00692458  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0069245c  8bc8                 mov ecx, eax
// 0069245e  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00692464  52                   push edx
// 00692465  ffd0                 call eax
// 00692467  5f                   pop edi
// 00692468  5e                   pop esi
// 00692469  c20800               ret 8

struct CXTPStatusBar {
    void sub_692430(int, int);
};

extern "C" void* __cdecl sub_6923d0();

void CXTPStatusBar::sub_692430(int a, int b) {
    void* p = sub_6923d0();
    int* src = (int*)a;
    int v0 = src[0];
    int v1 = src[1];
    int v2 = src[2];
    int v3 = src[3];
    int* obj = (int*)p;
    void (__stdcall *fn)(int, int, int, int, int);
    fn = (void (__stdcall *)(int, int, int, int, int))obj[0x9c / 4];
    fn(v0, v1, v2, v3, b);
}
