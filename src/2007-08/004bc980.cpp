// from server: 48% by colin
struct RakPeer {
    char pad[0x284];
    int field284;
    char pad2[0x18];
    unsigned int field2a0;
    char pad3[0x4];
    int field2a8;

    bool func(const char* name);
};

extern "C" int __cdecl func_004b7f70();
extern "C" void __cdecl func_004baba0(void*, int);
extern "C" void __cdecl func_004ca1d0(void*);
extern "C" void __cdecl func_0062fc62(void*);
extern "C" void __cdecl func_00671390(void*);

bool RakPeer::func(const char* name)
{
    if (name == 0)
        return false;
    if (*name == 0)
        return false;

    const char* p = name;
    do {
        ++p;
    } while (p[-1] != 0);
    unsigned int len = (unsigned int)(p - name - 1);
    if (len > 0xf)
        return false;

    if (field2a0 == 0)
        return false;

    int saved = func_004b7f70();
    void* local = (void*)((char*)this + 0x284);
    func_00671390(local);

    unsigned int i = 0;
    while (i < field2a0) {
        int* arr = (int*)((char*)this + 0x29c);
        int* entry = (int*)arr[i];
        unsigned int v = (unsigned int)entry[1];
        if (v > 0 && v < (unsigned int)saved) {
            int* arr2 = (int*)((char*)this + 0x29c);
            int* last = (int*)arr2[field2a0 - 1];
            int* cur = (int*)arr2[i];
            arr2[i] = (int)last;
            func_004baba0(local, field2a0 - 1);
            func_0062fc62((void*)cur[0]);
            func_0062fc62((void*)cur);
            i = 0;
            continue;
        }

        const char* s1 = (const char*)entry[0];
        const char* s2 = name;
        int k = 0;
        while (s1[k] == s2[k]) {
            if (s1[k] == 0)
                break;
            ++k;
        }
        if (s1[k] == 0 || s2[k] == 0 || s1[k] == '*') {
            func_004ca1d0(local);
            return true;
        }

        ++i;
    }

    func_004ca1d0(local);
    return false;
}
