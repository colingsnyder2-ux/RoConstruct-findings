// from server: 71% by atomic.potato
// roc 2009-12 004f5550  unit: RBX::GfxAttachement  size: 57 bytes
// library rbxgs-net/GfxAttachement.cpp

struct type_info {
    bool operator==(const type_info&) const;
};

struct Vtbl {
    void* pad0;
    void* pad1;
    void* (*fn)(void*);
};

struct Obj {
    Vtbl* vtbl;
};

extern "C" {
    bool __stdcall type_info_eq(const type_info*, const type_info*);
}

extern type_info type_info_placeholder;
extern type_info type_info_BuildPermission;

struct GfxAttachement {
    Obj* field0;
    void* method();
};

void* GfxAttachement::method() {
    Obj* p = this->field0;
    if (p == 0) {
        return 0;
    }
    void* obj;
    if (p->vtbl != 0) {
        obj = p->vtbl->fn(p);
    } else {
        obj = (void*)0x00b0030c;
    }
    if (type_info_eq((const type_info*)obj, &type_info_BuildPermission)) {
        return (char*)this->field0 + 4;
    }
    return 0;
}
