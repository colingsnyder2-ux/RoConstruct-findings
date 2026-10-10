// from server: 70% by colin
extern "C" __declspec(dllimport) void* __stdcall FindResourceExA(void*, unsigned short, unsigned short, unsigned short);

extern "C" void* __stdcall sub_724FA3(int, int);
extern "C" int __stdcall sub_545200(void*, void*, unsigned int);

struct RBX_VDebugSettings_GlobalSettingsItem {
};

void* __cdecl findResource(unsigned int a, unsigned int b) {
    void* result = 0;
    int index = 0;
    void* handle = sub_724FA3(0x8c9824, 0);
    int counter = 1;
    while (handle != 0) {
        if (index != 0)
            break;
        unsigned int shifted = a >> 4;
        shifted += 1;
        unsigned short id = (unsigned short)shifted;
        void* res = FindResourceExA(handle, 6, id, b);
        if (res != 0) {
            index = sub_545200(handle, res, a);
            if (index != 0)
                break;
        }
        handle = sub_724FA3(0x8c9824, counter);
        counter += 1;
    }
    if (index != 0)
        result = handle;
    return result;
}
