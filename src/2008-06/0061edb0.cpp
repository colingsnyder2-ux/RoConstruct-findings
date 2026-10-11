// from server: 28% by tester
// roc 2008-06 0061edb0  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061edb0

struct LuaArguments {
    int offset;
    void* L;
    LuaArguments(void* L_, int offset_);
};

extern "C" void* __stdcall sub_509b10(void* a, void* b);
extern "C" void __stdcall sub_409d50(void* a, void* b);
extern "C" void __stdcall sub_6a158c(void* a, void* b);

LuaArguments::LuaArguments(void* L_, int offset_)
{
    char buf[0x44];
    sub_509b10(buf, (void*)0x8445a0);
    sub_409d50(this, buf);
    sub_6a158c(this, (void*)0x8d1bc8);
    this->L = L_;
    this->offset = offset_;
}
