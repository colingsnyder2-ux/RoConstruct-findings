// from server: 52% by colin
struct LuaArguments {
    void* field0;
    LuaArguments(void* arg);
};

extern "C" void* __cdecl sub_006A0920(unsigned int size);

LuaArguments::LuaArguments(void* arg)
{
    field0 = 0;
    void* p = sub_006A0920(0x10);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x84463c;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}
