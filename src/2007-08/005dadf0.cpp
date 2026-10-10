// from server: 67% by tester
// roc 2007-08 005dadf0  unit: seg_00500000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dadf0

struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

extern type_info type_info_8adad0;

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl some_free(void* p);

struct RBX_VelocityMotor {
    void* __cdecl f(int a, int b);
};

void* RBX_VelocityMotor::f(int a, int b)
{
    if (a == 2) {
        bool r = type_info_8adad0.operator==(*(type_info*)&b);
        return r ? (void*)b : 0;
    }
    if (a == 0) {
        int* p = (int*)operator_new(0x10);
        if (p) {
            p[0] = *(int*)((char*)&b + 0);
            p[1] = *(int*)((char*)&b + 4);
            p[2] = *(int*)((char*)&b + 8);
            p[3] = *(int*)((char*)&b + 12);
            return p;
        }
        return 0;
    }
    some_free(&b);
    return 0;
}
