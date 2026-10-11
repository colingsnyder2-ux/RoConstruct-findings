// from server: 69% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VTable {
    void* unknown0;
    void (__stdcall *unknown4)();
};

struct Inner {
    VTable* vtable;
};

struct Outer {
    Inner* inner;
};

extern "C" void* __stdcall get_placeholder_type_info();
extern "C" bool __stdcall compare_type_info(void* type_info_ptr, const void* other);

Outer* __fastcall func(Outer* self, void* edx, Outer* arg);

Outer* __fastcall func(Outer* self, void* edx, Outer* arg) {
    if (arg == 0) {
        return 0;
    }
    void* type_info_ptr;
    if (arg->inner != 0) {
        VTable* vt = arg->inner->vtable;
        vt->unknown4();
        type_info_ptr = 0;
    } else {
        type_info_ptr = get_placeholder_type_info();
    }
    if (compare_type_info(type_info_ptr, (const void*)0x00a010c4)) {
        return (Outer*)((char*)arg->inner + 4);
    }
    return 0;
}
