// from server: 86% by colin
// roc 2007-08 00559990  unit: RBX::DataModel  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559990

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info;

extern "C" {
    int __stdcall MSVCR80_type_info_equal(const type_info* self, const type_info* other);
    void __stdcall MSVCP80_string_dtor(void* self);
}

void __cdecl sub_5590E0(void* self, void* arg);

struct RBX_DataModel_Result {
    void* field0;
    void* field4;
};

struct RBX_DataModel {
    static void* create(int mode, void* arg);
};

void* RBX_DataModel::create(int mode, void* arg) {
    if (mode == 2) {
        void* p = arg;
        int eq = MSVCR80_type_info_equal((const type_info*)0x89e260, (const type_info*)p);
        return (void*)(eq ? (int)p : 0);
    }
    if (mode == 0) {
        RBX_DataModel_Result* r = (RBX_DataModel_Result*)operator_new(0x20);
        void* a = arg;
        sub_5590E0(r, a);
        return r;
    }
    RBX_DataModel_Result* r = (RBX_DataModel_Result*)arg;
    MSVCP80_string_dtor((char*)r + 4);
    operator_delete(r);
    return 0;
}
