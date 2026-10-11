// from server: 70% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VTable {
    void* unknown0;
    void (__stdcall* unknown4)();
};

struct Object {
    VTable* vtable;
};

extern "C" {
    bool __stdcall compare_type_info(const type_info*, const type_info*);
}

extern type_info type_info_Vector3;
extern type_info type_info_placeholder;

struct Descriptor {
    Object* field0;
};

Object* __fastcall get_object(Descriptor* desc);

Object* __fastcall get_object(Descriptor* desc) {
    Object* obj = desc->field0;
    if (obj != 0) {
        VTable* vt = obj->vtable;
        if (vt != 0) {
            vt->unknown4();
        } else {
            obj = (Object*)&type_info_Vector3;
        }
        if (compare_type_info((const type_info*)obj, &type_info_placeholder)) {
            return (Object*)((char*)desc->field0 + 4);
        }
    }
    return 0;
}
