// from server: 100% by colin
// roc 2007-08 005d1be0  unit: RBX::Tool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1be0
//
// 005d1be0  56                   push esi
// 005d1be1  8bf1                 mov esi, ecx
// 005d1be3  8d8ef4010000         lea ecx, [esi + 0x1f4]
// 005d1be9  e862671500           call 0x728350
// 005d1bee  8d8e08020000         lea ecx, [esi + 0x208]
// 005d1bf4  5e                   pop esi
// 005d1bf5  e956671500           jmp 0x728350

struct Tool {
    char pad[0x1f4];
    int field_1f4;
    char pad2[0x208 - 0x1f4 - 4];
    int field_208;
    void func();
};

extern "C" void __fastcall sub_728350(int*);

void Tool::func()
{
    sub_728350(&field_1f4);
    sub_728350(&field_208);
}
