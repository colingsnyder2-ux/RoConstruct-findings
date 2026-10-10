// from server: 82% by tester
// roc 2007-08 00559840  unit: RBX::DataModel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559840

extern "C" int __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_62FC62(void* p);
extern "C" int __stdcall sub_5573F0(void* p);
extern "C" int __stdcall sub_559140(void* p, void* q);

struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

struct S {
    void* __cdecl f(int mode, void* arg);
};

void* S::f(int mode, void* arg)
{
    if (mode == 2) {
        type_info* ti = (type_info*)0x89e180;
        bool eq = (*ti == *(type_info*)arg);
        return eq ? 0 : arg;
    }
    if (mode == 0) {
        void* p = (void*)sub_62FEF6(0x3c);
        sub_559140(p, arg);
        return p;
    }
    sub_5573F0((char*)arg + 4);
    sub_62FC62(arg);
    return 0;
}
