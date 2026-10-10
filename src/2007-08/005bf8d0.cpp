// from server: 60% by colin
struct LuaArguments {
    int offset;
    void* L;
    void construct(int a);
};

extern "C" int __cdecl sub_630d36(void*, int, void*, int, void*);
extern "C" void __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);

extern void* dword_8882a0;
extern void* dword_887174;
extern void* dword_786e04;
extern void* dword_841e0c;

void LuaArguments::construct(int a) {
    void* p = (void*)sub_630d36(*(void**)this, 0, dword_887174, 0, dword_8882a0);
    if (p == 0) {
        void* local;
        sub_77e710(&local);
        sub_630b9e(&local, dword_841e0c);
    }
    void* v = *(void**)((char*)p + 0x18);
    void* vt = *(void**)v;
    void* fn = *(void**)((char*)vt + 8);
    void* arg = *(void**)((char*)this + 4);
    ((void (__thiscall*)(void*, void*, int))fn)(v, arg, a);
}
