// from server: 100% by tester
// roc 2008-06 006f6ae0  unit: CXTPControlSelector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6ae0
//
// 006f6ae0  56                   push esi
// 006f6ae1  8bf1                 mov esi, ecx
// 006f6ae3  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f6ae6  85c9                 test ecx, ecx
// 006f6ae8  7417                 je 0x6f6b01
// 006f6aea  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f6aed  83f8ff               cmp eax, -1
// 006f6af0  740f                 je 0x6f6b01
// 006f6af2  8b11                 mov edx, dword ptr [ecx]
// 006f6af4  50                   push eax
// 006f6af5  8b4238               mov eax, dword ptr [edx + 0x38]
// 006f6af8  ffd0                 call eax
// 006f6afa  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 006f6b01  5e                   pop esi
// 006f6b02  c3                   ret 

struct CXTPControlSelector {
    void m();
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

void CXTPControlSelector::m()
{
    if (field_4 != 0 && field_c != -1) {
        (*(void (__thiscall **)(int, int))(*(int *)field_4 + 0x38))(field_4, field_c);
        field_c = -1;
    }
}
