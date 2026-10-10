// from server: 54% by colin
struct std_string {
    char pad[0x1c];
    ~std_string();
};

struct ScriptContext {
    void __cdecl func(const std_string* a, const char* b);
};

extern "C" void __stdcall sub_58d0d0(void*, const std_string*);
extern "C" void __stdcall sub_5bdbf0(const char*, void*);
extern "C" void __stdcall sub_77e6ac(void*);

void ScriptContext::func(const std_string* a, const char* b)
{
    std_string local;
    sub_58d0d0(&local, a);
    const char* p = (*(int*)((char*)&local + 0x14) >= 0x10) ? *(const char**)&local : (const char*)&local;
    sub_5bdbf0(b, (void*)p);
    local.~std_string();
    sub_77e6ac(0);
}
