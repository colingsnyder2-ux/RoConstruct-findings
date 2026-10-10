// from server: 83% by colin
// roc 2007-08 00592540  unit: seg_00590000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592540

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info;

extern "C" {
    void* __stdcall sub_62fef6(unsigned int);
    void __cdecl sub_62fc62(void*);
    void __cdecl sub_592300(void*, void*);
    bool __stdcall type_info_equal(const type_info*, const type_info*);
    void __stdcall string_dtor(void*);
}

struct RBX_Name {
    void* data;
};

struct FactoryProduct {
    static void* creators;
    static void* classDesc;
    static void* typeInfo;

    static void* createByName(int mode, void* arg);
};

void* FactoryProduct::createByName(int mode, void* arg) {
    if (mode == 2) {
        void* p = arg;
        if (type_info_equal((const type_info*)&typeInfo, (const type_info*)0x8a4698)) {
            return p;
        }
        return 0;
    }
    if (mode == 0) {
        void* p = sub_62fef6(0x24);
        sub_592300(p, arg);
        return p;
    }
    void* p = arg;
    string_dtor((char*)p + 4);
    sub_62fc62(p);
    return 0;
}
