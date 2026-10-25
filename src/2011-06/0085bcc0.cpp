// from server: 100% by tester
// roc 2011-06 0085bcc0  unit: CXTPControlSelector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bcc0
//
// 0085bcc0  56                   push esi
// 0085bcc1  8bf1                 mov esi, ecx
// 0085bcc3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085bcc6  85c9                 test ecx, ecx
// 0085bcc8  7417                 je 0x85bce1
// 0085bcca  8b460c               mov eax, dword ptr [esi + 0xc]
// 0085bccd  83f8ff               cmp eax, -1
// 0085bcd0  740f                 je 0x85bce1
// 0085bcd2  8b11                 mov edx, dword ptr [ecx]
// 0085bcd4  50                   push eax
// 0085bcd5  8b4238               mov eax, dword ptr [edx + 0x38]
// 0085bcd8  ffd0                 call eax
// 0085bcda  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 0085bce1  5e                   pop esi
// 0085bce2  c3                   ret 

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
