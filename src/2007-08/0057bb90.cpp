// from server: 78% by colin
// roc 2007-08 0057bb90  unit: RBX::Workspace  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bb90

extern "C" {
    typedef unsigned int size_t;
    void* __cdecl malloc(size_t size);
    void __cdecl free(void* mem);
}

struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

struct RBX_Workspace {
    void* method(int selector, void* arg);
};

void* RBX_Workspace::method(int selector, void* arg)
{
    if (selector == 2) {
        type_info* ti = (type_info*)0x8a1ac0;
        bool b = (*ti == *(type_info*)arg);
        if (b)
            return arg;
        return 0;
    }
    if (selector == 0) {
        void* p = malloc(8);
        if (p) {
            *(int*)p = *(int*)arg;
            *(int*)((char*)p + 4) = *(int*)((char*)arg + 4);
        }
        return p;
    }
    free(arg);
    return 0;
}
