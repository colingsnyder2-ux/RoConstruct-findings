// from server: 48% by colin
// roc 2007-08 00704ee0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageSelected  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00704ee0
//
// 00704ee0  8b542408             mov edx, dword ptr [esp + 8]
// 00704ee4  8b4260               mov eax, dword ptr [edx + 0x60]
// 00704ee7  395004               cmp dword ptr [eax + 4], edx
// 00704eea  56                   push esi
// 00704eeb  57                   push edi
// 00704eec  7438                 je 0x704f26
// 00704eee  395008               cmp dword ptr [eax + 8], edx
// 00704ef1  7433                 je 0x704f26
// 00704ef3  8b7a44               mov edi, dword ptr [edx + 0x44]
// 00704ef6  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00704ef9  8b31                 mov esi, dword ptr [ecx]
// 00704efb  6a01                 push 1
// 00704efd  83ec10               sub esp, 0x10
// 00704f00  8bc4                 mov eax, esp
// 00704f02  8938                 mov dword ptr [eax], edi
// 00704f04  8b7a48               mov edi, dword ptr [edx + 0x48]
// 00704f07  897804               mov dword ptr [eax + 4], edi
// 00704f0a  8b7a4c               mov edi, dword ptr [edx + 0x4c]
// 00704f0d  897808               mov dword ptr [eax + 8], edi
// 00704f10  8b7a50               mov edi, dword ptr [edx + 0x50]
// 00704f13  89780c               mov dword ptr [eax + 0xc], edi
// 00704f16  8b442420             mov eax, dword ptr [esp + 0x20]
// 00704f1a  52                   push edx
// 00704f1b  8b5668               mov edx, dword ptr [esi + 0x68]
// 00704f1e  50                   push eax
// 00704f1f  ffd2                 call edx
// 00704f21  5f                   pop edi
// 00704f22  5e                   pop esi
// 00704f23  c20800               ret 8
// 00704f26  5f                   pop edi
// 00704f27  5e                   pop esi
// 00704f28  89542408             mov dword ptr [esp + 8], edx
// 00704f2c  e92ff8ffff           jmp 0x704760

struct CXTPTabPaintManager_CAppearanceSetPropertyPageSelected {
    void DrawSelectedTab(int, int);
};

void CXTPTabPaintManager_CAppearanceSetPropertyPageSelected::DrawSelectedTab(int a, int b) {
    int* p = (int*)b;
    int* q = *(int**)(p + 0x60);
    if (q[1] == b || q[2] == b) {
        // tail call to 0x704760
        extern void __fastcall sub_704760(int, int);
        sub_704760(a, b);
        return;
    }
    int edi = p[0x44/4];
    int* ecx = *(int**)((char*)this + 0x1c);
    int* esi = (int*)*ecx;
    int tmp[4];
    tmp[0] = edi;
    tmp[1] = p[0x48/4];
    tmp[2] = p[0x4c/4];
    tmp[3] = p[0x50/4];
    int (*fn)(int, int, int, int, int, int) = (int (*)(int, int, int, int, int, int))esi[0x68/4];
    fn(a, b, tmp[0], tmp[1], tmp[2], tmp[3]);
}
