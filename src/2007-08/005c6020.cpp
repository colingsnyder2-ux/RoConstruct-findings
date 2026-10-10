// from server: 41% by colin
struct lua_exception {
    char pad0[6];
    char field6;
    char pad7[9];
    void* field10;
    char pad14[0x5c];
    void* field70;
    void set(int);
};

extern "C" {
    void __stdcall sub_5c5fb0(int);
    void __cdecl sub_630b9e(void*, void*);
    void __stdcall sub_77e6f8(void*);
    void __stdcall sub_77e938(int);
}

void lua_exception::set(int arg)
{
    if (field70 != 0) {
        *(int*)((char*)field70 + 8) = arg;
        void* p = field70;
        sub_77e6f8((char*)this + 0x18);
        *(void**)((char*)this + 0x18) = (void*)0x7b967c;
        *(void**)((char*)this + 0x24) = this;
        *(void**)((char*)this + 0x28) = p;
        *((char*)this + 0x2c) = 0;
        sub_630b9e((char*)this + 0x18, (void*)0x864378);
    }
    field6 = (char)arg;
    if (*(int*)((char*)field10 + 0x58) != 0) {
        sub_5c5fb0(arg);
        void* f = *(void**)((char*)field10 + 0x58);
        ((void (__stdcall*)(void*))f)(this);
    }
    sub_77e938(1);
}
