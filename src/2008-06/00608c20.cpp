// from server: 41% by tester
// roc 2008-06 00608c20  unit: RBX::P8HopperBin::?$SetImpl  size: 104 bytes

extern "C" {
    typedef void (__stdcall *Fn0)(void*);
    typedef void (__stdcall *Fn1)(void*, const char*);
    typedef void (__stdcall *Fn2)(void*, void*);
    typedef void (__stdcall *Fn3)(void*, void*);
}

struct String {
    char buf[0x1c];
    String(const char*);
    String(const String&);
};

struct Exception {
    Exception();
};

struct SetImpl {
    void* set;
    void construct();
};

void SetImpl::construct()
{
    String s1("can't get value");
    Exception e;
    String s2(s1);
    ((void (__stdcall*)(void*, void*))0x6a158c)((void*)0x8d1bc8, &s2);
}
