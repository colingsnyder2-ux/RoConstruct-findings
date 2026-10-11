// from server: 56% by colin
// roc 2007-08 00563c30  unit: RBX::ResetCommand  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563c30
//
// 00563c30  56                   push esi
// 00563c31  57                   push edi
// 00563c32  8bf9                 mov edi, ecx
// 00563c34  8b770c               mov esi, dword ptr [edi + 0xc]
// 00563c37  e854a6ffff           call 0x55e290
// 00563c3c  6a01                 push 1
// 00563c3e  8d4f10               lea ecx, [edi + 0x10]
// 00563c41  e8fae5ffff           call 0x562240
// 00563c46  5f                   pop edi
// 00563c47  5e                   pop esi
// 00563c48  c744240400000000     mov dword ptr [esp + 4], 0
// 00563c50  8bc8                 mov ecx, eax
// 00563c52  e9299bfcff           jmp 0x52d780

struct ResetCommand {
    char pad[0x0c];
    int field0c;
    int field10;
    void doIt();
};

extern "C" void __stdcall sub_55e290();
extern "C" void __stdcall sub_562240(int);
extern "C" void __stdcall sub_52d780();

void ResetCommand::doIt()
{
    int v = field0c;
    sub_55e290();
    sub_562240(1);
    field10 = 0;
    sub_52d780();
}
