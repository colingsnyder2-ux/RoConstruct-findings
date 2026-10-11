// from server: 77% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct VTable {
    void* unknown0;
    void* unknown4;
};

struct Object {
    VTable* vtable;
};

extern "C" void* __stdcall get_type_info_placeholder();
extern "C" bool __stdcall compare_type_info(void* a, void* b);

struct S {
};

void* __cdecl f(void* arg) {
    Object* obj = (Object*)arg;
    if (obj == 0) {
        return 0;
    }
    void* ti;
    if (obj->vtable != 0) {
        ti = ((void* (__thiscall*)(void*))obj->vtable->unknown4)(obj->vtable);
    } else {
        ti = (void*)0x9dc2d4;
    }
    if (compare_type_info(ti, (void*)0xa010e0)) {
        return (char*)obj + 4;
    }
    return 0;
}
