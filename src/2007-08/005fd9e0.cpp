// from server: 77% by colin
// roc 2007-08 005fd9e0  unit: RBX::CloneTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd9e0
//
// 005fd9e0  8b442404             mov eax, dword ptr [esp + 4]
// 005fd9e4  56                   push esi
// 005fd9e5  50                   push eax
// 005fd9e6  8bf1                 mov esi, ecx
// 005fd9e8  e82363feff           call 0x5e3d10
// 005fd9ed  33c0                 xor eax, eax
// 005fd9ef  c7066c267c00         mov dword ptr [esi], 0x7c266c
// 005fd9f5  c7460450267c00       mov dword ptr [esi + 4], 0x7c2650
// 005fd9fc  894620               mov dword ptr [esi + 0x20], eax
// 005fd9ff  894624               mov dword ptr [esi + 0x24], eax
// 005fda02  8bc6                 mov eax, esi
// 005fda04  5e                   pop esi
// 005fda05  c20400               ret 4

struct MouseCommand {
    void construct(int);
};

struct CloneTool : MouseCommand {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    CloneTool(int);
};

CloneTool::CloneTool(int a) {
    MouseCommand::construct(a);
    field0 = 0x7c266c;
    field4 = 0x7c2650;
    field20 = 0;
    field24 = 0;
}
