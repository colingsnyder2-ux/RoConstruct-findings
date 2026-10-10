// from server: 29% by colin
struct MainLogManager
{
    char pad[0x2c];
    void* field_2c;
    void* construct(const char* productName);
};

extern "C" void __stdcall sub_427950(void*);
extern "C" void __stdcall sub_5806d0();
extern "C" void __stdcall sub_630a1e();

extern "C" void* __stdcall PathAppendA_impl(void*, const char*);
extern "C" void* __stdcall string_ctor(void*, const char*);
extern "C" void __stdcall string_dtor(void*);
extern "C" void* __stdcall string_append_str(void*, const char*);
extern "C" void* __stdcall string_append_str2(void*, const char*);
extern "C" const char* __stdcall string_c_str(void*);
extern "C" void* __stdcall string_erase(void*, unsigned int, unsigned int);
extern "C" void* __stdcall string_assign(void*, const char*);

void* MainLogManager::construct(const char* productName)
{
    char buf[0x2c];
    void* p = buf;
    sub_427950(p);
    string_ctor(p, "log_");
    sub_5806d0();
    string_append_str(p, productName);
    string_append_str2(p, ".txt");
    const char* s = string_c_str(p);
    PathAppendA_impl(&field_2c, s);
    string_erase(p, 0, 0xffffffff);
    string_dtor(p);
    return this;
}
