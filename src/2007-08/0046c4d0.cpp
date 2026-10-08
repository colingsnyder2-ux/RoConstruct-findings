// from server: 89% by colin
// roc 2007-08 0046c4d0  unit: RBX::LDraw2Lua::LuaWriter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c4d0
//
// 0046c4d0  8b442404             mov eax, dword ptr [esp + 4]
// 0046c4d4  8d542404             lea edx, [esp + 4]
// 0046c4d8  52                   push edx
// 0046c4d9  83c120               add ecx, 0x20
// 0046c4dc  89442408             mov dword ptr [esp + 8], eax
// 0046c4e0  e8db89ffff           call 0x464ec0
// 0046c4e5  c20400               ret 4

struct LuaWriter {
    char pad[0x20];
    void addString(const char* s);
};

extern "C" void __stdcall sub_00464EC0(void*, void*);

void LuaWriter::addString(const char* s) {
    void* p = (void*)s;
    sub_00464EC0((char*)this + 0x20, &p);
}
