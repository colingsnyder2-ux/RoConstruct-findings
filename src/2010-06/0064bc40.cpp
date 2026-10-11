// from server: 71% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct Vtable {
    void* unknown0;
    void (__thiscall *unknown4)();
};

struct Object {
    Vtable* vtable;
};

extern "C" {
    bool __stdcall compare_type_info(const type_info*, const type_info*);
}

extern type_info type_info_placeholder;
extern type_info type_info_button;

Object* __cdecl get_binding(Object* obj) {
    if (obj == 0) {
        return 0;
    }
    Vtable* vt = obj->vtable;
    type_info* ti;
    if (vt != 0) {
        ti = (type_info*)vt->unknown0;
        if (ti != 0) {
            ti = (type_info*)vt->unknown4;
        }
    } else {
        ti = &type_info_placeholder;
    }
    if (compare_type_info(ti, &type_info_button)) {
        return (Object*)((char*)obj + 4);
    }
    return 0;
}
