// from server: 100% by tester
// roc 2008-06 005fd4c0  unit: RBX::Tool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd4c0
//
// 005fd4c0  56                   push esi
// 005fd4c1  8bf1                 mov esi, ecx
// 005fd4c3  8d8e18020000         lea ecx, [esi + 0x218]
// 005fd4c9  e8627df9ff           call 0x595230
// 005fd4ce  8d8e2c020000         lea ecx, [esi + 0x22c]
// 005fd4d4  5e                   pop esi
// 005fd4d5  e9567df9ff           jmp 0x595230

struct Tool {
    char pad[0x218];
    int field_1f4;
    char pad2[0x22c - 0x218 - 4];
    int field_208;
    void func();
};

extern "C" void __fastcall sub_728350(int*);

void Tool::func()
{
    sub_728350(&field_1f4);
    sub_728350(&field_208);
}
