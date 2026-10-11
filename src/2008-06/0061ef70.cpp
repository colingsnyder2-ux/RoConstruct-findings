// from server: 37% by colin
// roc 2008-06 0061ef70  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ef70

struct LuaArguments {
    int offset;
    void* L;
    LuaArguments(void* L_, int offset_);
};

extern "C" void* __stdcall sub_509b10(void* a, void* b);
extern "C" void __fastcall sub_409d50(void* self, void* unused, void* arg);
extern "C" void __cdecl sub_6a158c(void* a, void* b);

LuaArguments::LuaArguments(void* L_, int offset_)
{
    char buf[0x44];
    sub_509b10(buf, (void*)0x8445d4);
    this->offset = 0;
    sub_409d50(this, 0, buf);
    sub_6a158c((void*)0x8d1bc8, this);
}
