// from server: 52% by atomic.potato
// roc 2009-12 006429d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006429d0

extern "C" int (__thiscall *type_info_equals)(const void* a, const void* b);

struct type_info;

struct S {
};

void* __cdecl f(void* arg) {
    void* p = arg;
    if (p == 0) {
        return 0;
    }
    void* obj = *(void**)p;
    void* ti;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        void* (*get_type_info)(void*) = (void* (*)(void*))vtbl[1];
        ti = get_type_info(obj);
    } else {
        ti = (void*)0x00b0030c;
    }
    if (!type_info_equals((void*)0x00b2b840, ti)) {
        return 0;
    }
    return (char*)(*(void**)p) + 4;
}
