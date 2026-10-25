// from server: 100% by tester
// roc 2008-06 00471060  unit: RBX::LDraw2Lua::LuaWriter  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00471060
//
// 00471060  8b442404             mov eax, dword ptr [esp + 4]
// 00471064  50                   push eax
// 00471065  b9b0369300           mov ecx, 0x9336b0
// 0047106a  e891f5ffff           call 0x470600
// 0047106f  c3                   ret 

struct TextureArgs;

struct Table {
    void insert(TextureArgs* args);
};

extern Table g_table;

void insert(TextureArgs* args) {
    g_table.insert(args);
}
