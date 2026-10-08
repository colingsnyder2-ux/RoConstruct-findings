// from server: 60% by colin
// roc 2007-08 00563bd0  unit: RBX::StopCommand  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563bd0
//
// 00563bd0  56                   push esi
// 00563bd1  57                   push edi
// 00563bd2  8bf9                 mov edi, ecx
// 00563bd4  8b770c               mov esi, dword ptr [edi + 0xc]
// 00563bd7  e8b4a6ffff           call 0x55e290
// 00563bdc  6a01                 push 1
// 00563bde  8d4f10               lea ecx, [edi + 0x10]
// 00563be1  e85ae6ffff           call 0x562240
// 00563be6  5f                   pop edi
// 00563be7  5e                   pop esi
// 00563be8  c744240402000000     mov dword ptr [esp + 4], 2
// 00563bf0  8bc8                 mov ecx, eax
// 00563bf2  e9899bfcff           jmp 0x52d780

struct RBX_StopCommand {
    char pad[0xc];
    int field_c;
    char pad2[0x4];
    int field_10;
    void doIt();
};

extern "C" void __fastcall sub_55E290(int);
extern "C" int __fastcall sub_562240(int*, int);
extern "C" void __fastcall sub_52D780(int, int);

void RBX_StopCommand::doIt() {
    int v = field_c;
    sub_55E290(v);
    int r = sub_562240(&field_10, 1);
    sub_52D780(r, 2);
}
