// from server: 83% by colin
// roc 2007-08 0065d7c0  unit: CXTPReportGroupRow_Batch  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065d7c0
//
// 0065d7c0  56                   push esi
// 0065d7c1  8bf1                 mov esi, ecx
// 0065d7c3  8d4e70               lea ecx, [esi + 0x70]
// 0065d7c6  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0065d7cc  8bce                 mov ecx, esi
// 0065d7ce  e85d670700           call 0x6d3f30
// 0065d7d3  f644240801           test byte ptr [esp + 8], 1
// 0065d7d8  7406                 je 0x65d7e0
// 0065d7da  56                   push esi
// 0065d7db  e870d9ffff           call 0x65b150
// 0065d7e0  8bc6                 mov eax, esi
// 0065d7e2  5e                   pop esi
// 0065d7e3  c20400               ret 4

struct CXTPReportGroupRow_Batch {
    char pad[0x70];
    int field_70;
    void dtor_body(unsigned int flags);
};

extern "C" void __stdcall sub_77ddbc(int*);
extern "C" void __fastcall sub_6d3f30(CXTPReportGroupRow_Batch*);
extern "C" void __cdecl sub_65b150(void*);

void CXTPReportGroupRow_Batch::dtor_body(unsigned int flags)
{
    sub_77ddbc(&field_70);
    sub_6d3f30(this);
    if (flags & 1)
        sub_65b150(this);
}
