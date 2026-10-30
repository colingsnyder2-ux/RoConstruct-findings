// from server: 100% by tester
// roc 2007-03 00675b10  unit: seg_00670000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00675b10
//
// 00675b10  56                   push esi
// 00675b11  8bf1                 mov esi, ecx
// 00675b13  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00675b19  50                   push eax
// 00675b1a  e8a1d6feff           call 0x6631c0
// 00675b1f  50                   push eax
// 00675b20  e86b8bfaff           call 0x61e690
// 00675b25  83c408               add esp, 8
// 00675b28  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 00675b2f  7415                 je 0x675b46
// 00675b31  85c0                 test eax, eax
// 00675b33  7411                 je 0x675b46
// 00675b35  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00675b3c  7508                 jne 0x675b46
// 00675b3e  8bc8                 mov ecx, eax
// 00675b40  5e                   pop esi
// 00675b41  e9dafbfeff           jmp 0x665720
// 00675b46  5e                   pop esi
// 00675b47  c3                   ret 

struct CXTPToolBar {
    char pad[0xf8];
    int field_f8;
    char pad2[0x168 - 0xf8 - 4];
    int field_168;
    int field_16c;
    int CControlButtonExpand();
};

extern "C" int __cdecl sub_677380(int);
extern "C" int __cdecl sub_630202(int);
extern "C" int __fastcall sub_679900(int);

int CXTPToolBar::CControlButtonExpand()
{
    int v = sub_630202(sub_677380(this->field_16c));
    if (this->field_168 != 0 && v != 0 && this->field_f8 == 2)
    {
        return sub_679900(v);
    }
    return v;
}
