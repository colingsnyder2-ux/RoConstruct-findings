// from server: 77% by colin
// roc 2007-08 00586ca0  unit: RBX::PartTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586ca0
//
// 00586ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00586ca4  56                   push esi
// 00586ca5  50                   push eax
// 00586ca6  8bf1                 mov esi, ecx
// 00586ca8  e863d00500           call 0x5e3d10
// 00586cad  33c0                 xor eax, eax
// 00586caf  c706fcce7a00         mov dword ptr [esi], 0x7acefc
// 00586cb5  c74604e4ce7a00       mov dword ptr [esi + 4], 0x7acee4
// 00586cbc  894620               mov dword ptr [esi + 0x20], eax
// 00586cbf  894624               mov dword ptr [esi + 0x24], eax
// 00586cc2  8bc6                 mov eax, esi
// 00586cc4  5e                   pop esi
// 00586cc5  c20400               ret 4

struct MouseCommand {
    char pad[0x20];
    int field20;
    int field24;
    MouseCommand(int);
};

struct PartTool : MouseCommand {
    PartTool(int);
};

PartTool::PartTool(int a) : MouseCommand(a) {
    *(int*)this = 0x7acefc;
    *(int*)((char*)this + 4) = 0x7acee4;
    field20 = 0;
    field24 = 0;
}
