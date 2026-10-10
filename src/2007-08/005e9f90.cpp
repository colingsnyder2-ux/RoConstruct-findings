// from server: 40% by colin
struct FactoryProduct {
    char pad[0xe8];
    void* listHead;
    void* listEnd;
    int flag;
    void* find(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* FactoryProduct::find(int arg) {
    if (flag == 0)
        return 0;

    void** node = (void**)listHead;
    void* first = *node;
    void* end = listEnd;

    if (first == end)
        return 0;

    while (first != end) {
        void* obj = *(void**)((char*)first + 8);
        int r = ((int (__thiscall*)(void*, int))0x5e9a30)(obj, arg);
        if (r == arg)
            return *(void**)((char*)first + 8);
        first = *(void**)first;
    }
    return 0;
}
