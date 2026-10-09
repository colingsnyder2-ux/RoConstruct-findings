// from server: 100% by colin
// roc 2007-08 004b8bf0  unit: RakPeer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8bf0
//
// 004b8bf0  56                   push esi
// 004b8bf1  8bf1                 mov esi, ecx
// 004b8bf3  57                   push edi
// 004b8bf4  8dbe3c020000         lea edi, [esi + 0x23c]
// 004b8bfa  8bcf                 mov ecx, edi
// 004b8bfc  e88f871b00           call 0x671390
// 004b8c01  83c60c               add esi, 0xc
// 004b8c04  8bce                 mov ecx, esi
// 004b8c06  e8456dfeff           call 0x49f950
// 004b8c0b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b8c0f  85c0                 test eax, eax
// 004b8c11  7411                 je 0x4b8c24
// 004b8c13  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b8c17  85c9                 test ecx, ecx
// 004b8c19  7609                 jbe 0x4b8c24
// 004b8c1b  51                   push ecx
// 004b8c1c  50                   push eax
// 004b8c1d  8bce                 mov ecx, esi
// 004b8c1f  e86c72feff           call 0x49fe90
// 004b8c24  8bcf                 mov ecx, edi
// 004b8c26  e8a5150100           call 0x4ca1d0
// 004b8c2b  5f                   pop edi
// 004b8c2c  5e                   pop esi
// 004b8c2d  c20800               ret 8

struct RakPeer {
    char pad0[0xc];
    char field_c;
    char pad_d[0x23c - 0xd];
    char field_23c;
    void sub_671390();
    void sub_49f950();
    void sub_49fe90(void*, unsigned int);
    void sub_4ca1d0();
    void func(void* a, unsigned int b);
};

void RakPeer::func(void* a, unsigned int b)
{
    char* p = (char*)this + 0x23c;
    ((RakPeer*)p)->sub_671390();
    char* q = (char*)this + 0xc;
    ((RakPeer*)q)->sub_49f950();
    if (a != 0 && b > 0)
        ((RakPeer*)q)->sub_49fe90(a, b);
    ((RakPeer*)p)->sub_4ca1d0();
}
