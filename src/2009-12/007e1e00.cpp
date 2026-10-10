// from server: 92% by atomic.potato
typedef const char* (__thiscall *TypeInfoNameMethod)(void*, void*);
typedef void* (__cdecl *MakeObjectMethod)(const char*, void*);

extern "C" void* __cdecl helper_007f5286(void*);
extern "C" TypeInfoNameMethod imported_type_info_name;
extern "C" void* __cdecl helper_0044c920(const char*, void*);

struct PasteVerb
{
    void* f(void*);
};

void* PasteVerb::f(void* value)
{
    void* type_info = helper_007f5286(this);
    const char* name = imported_type_info_name(type_info, (void*)0x00B9AA44);
    return helper_0044c920(name, value);
}
