// from server: 83% by atomic.potato




struct type_info {
    bool operator==(const type_info&) const;
};

struct VTable {
    void* pad;
    const type_info& (__thiscall *getType)(void*);
};

struct Obj {
    VTable* vt;
};

extern "C" const type_info typeinfo_Vector2int16;
extern "C" const type_info typeinfo_placeholder;

extern "C" bool __stdcall type_info_equals(const type_info* a, const type_info* b);

struct EnumDescriptor {
    Obj* field0;
    Obj* get();
};

Obj* EnumDescriptor::get() {
    Obj* p = this->field0;
    if (p == 0) {
        return 0;
    }
    Obj* inner = *(Obj**)p;
    const type_info* ti;
    if (inner != 0) {
        ti = &inner->vt->getType(inner);
    } else {
        ti = &typeinfo_Vector2int16;
    }
    if (type_info_equals(ti, &typeinfo_placeholder)) {
        return (Obj*)((char*)p + 4);
    }
    return 0;
}
