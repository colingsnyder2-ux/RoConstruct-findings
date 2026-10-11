// from server: 51% by tester
struct LuaArguments {
    int offset;
    void* L;
    void* getValues(int);
    LuaArguments(void*, int);
};

extern "C" void* __stdcall sub_6A17C6(void*, void*, void*, int, void*);
extern "C" void __stdcall sub_802864(void*);
extern "C" void __stdcall sub_6A158C(void*, void*);
extern "C" void __stdcall sub_61A7B0(void*, void*, void*);

LuaArguments::LuaArguments(void* luaState, int off) {
    void* result;
    result = sub_6A17C6(*(void**)this, (void*)0x9295B4, (void*)0x95AF78, 0, (void*)0);
    if (result != 0) {
        void* tmp = 0;
        sub_802864(&tmp);
        sub_6A158C((void*)0x8D362C, &tmp);
        result = tmp;
    }
    sub_61A7B0(result, *(void**)((char*)this + 4), (void*)off);
    this->offset = off;
    this->L = luaState;
}
