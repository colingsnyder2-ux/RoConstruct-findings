// from server: 92% by king_originala
struct ModuleList {
    void* __thiscall GetHInstanceAt(int index);
};

extern ModuleList modules;

extern "C" {
    extern void* (__stdcall *FindResourceExA)(
        void* module, const char* type, const char* name,
        unsigned short language);
}

extern int __cdecl CheckStringResource(
    void* module, void* resource, unsigned int id);

void* __cdecl FindStringResourceInstance(
    unsigned int id, unsigned short language)
{
    int found = 0;
    void* module = modules.GetHInstanceAt(0);
    int index = 1;

    while (module != 0 && !found) {
        void* resource = FindResourceExA(
            module, (const char*)6,
            (const char*)(unsigned int)(unsigned short)((id >> 4) + 1),
            language);

        if (resource != 0) {
            found = CheckStringResource(module, resource, id);
            if (found)
                return module;
        }

        module = modules.GetHInstanceAt(index++);
    }

    return 0;
}
