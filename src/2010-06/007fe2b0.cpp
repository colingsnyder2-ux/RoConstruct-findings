// from server: 100% by tester
// roc 2010-06 007fe2b0  unit: CXTPControlSelector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe2b0
//
// 007fe2b0  56                   push esi
// 007fe2b1  8bf1                 mov esi, ecx
// 007fe2b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fe2b6  85c9                 test ecx, ecx
// 007fe2b8  7417                 je 0x7fe2d1
// 007fe2ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 007fe2bd  83f8ff               cmp eax, -1
// 007fe2c0  740f                 je 0x7fe2d1
// 007fe2c2  8b11                 mov edx, dword ptr [ecx]
// 007fe2c4  50                   push eax
// 007fe2c5  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fe2c8  ffd0                 call eax
// 007fe2ca  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 007fe2d1  5e                   pop esi
// 007fe2d2  c3                   ret 

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
