// from server: 67% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct Vtable {
    void* unknown;
    void* (__stdcall *getTypeInfo)();
};

struct Object {
    Vtable* vtable;
};

extern "C" void* __stdcall sub_9EA8D8(void*, const type_info*);

struct RBX_Rocket {
    static Object* __stdcall cast(Object* obj);
};

Object* __stdcall RBX_Rocket::cast(Object* obj) {
    if (obj == 0)
        return 0;
    void* ti;
    if (obj->vtable != 0) {
        ti = obj->vtable->getTypeInfo();
    } else {
        ti = (void*)0xB7930C;
    }
    if (sub_9EA8D8(ti, (const type_info*)0xBB6168)) {
        return (Object*)((char*)obj + 4);
    }
    return 0;
}
