// from server: 88% by tester
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct VCLuaFunction {
    void* field8;
};

extern type_info typeid_VCLuaFunction;

void* __cdecl sub_415910(void*, void*);
void __cdecl sub_413d00(void*);

void* __cdecl VCLuaFunction_dispatch(int op, void* arg) {
    if (op == 2) {
        void* p = arg;
        if (typeid_VCLuaFunction == *(type_info*)arg) {
            return p;
        }
        return 0;
    }
    if (op == 0) {
        VCLuaFunction* p = (VCLuaFunction*)operator_new(0x38);
        sub_415910(p, arg);
        return p;
    }
    VCLuaFunction* p = (VCLuaFunction*)arg;
    sub_413d00((char*)p + 8);
    operator_delete(p);
    return 0;
}
