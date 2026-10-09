// from server: 89% by colin
// roc 2007-08 00670850  unit: CXTPToolBar::CControlButtonExpand  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670850
//
// 00670850  56                   push esi
// 00670851  8bf1                 mov esi, ecx
// 00670853  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00670859  50                   push eax
// 0067085a  e8216b0000           call 0x677380
// 0067085f  50                   push eax
// 00670860  e89df9fbff           call 0x630202
// 00670865  83c408               add esp, 8
// 00670868  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 0067086f  7415                 je 0x670886
// 00670871  85c0                 test eax, eax
// 00670873  7411                 je 0x670886
// 00670875  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 0067087c  7508                 jne 0x670886
// 0067087e  8bc8                 mov ecx, eax
// 00670880  5e                   pop esi
// 00670881  e97a900000           jmp 0x679900
// 00670886  5e                   pop esi
// 00670887  c3                   ret 

struct CXTPToolBar {
    char pad[0xf8];
    int field_f8;
    char pad2[0x168 - 0xf8 - 4];
    int field_168;
    int field_16c;
    void CControlButtonExpand();
};

extern "C" int __cdecl sub_677380(int);
extern "C" int __cdecl sub_630202(int);
extern "C" void __stdcall sub_679900();

void CXTPToolBar::CControlButtonExpand()
{
    int v = sub_630202(sub_677380(this->field_16c));
    if (this->field_168 != 0 && v != 0 && this->field_f8 == 2)
    {
        sub_679900();
    }
}
