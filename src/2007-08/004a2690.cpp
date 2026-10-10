// from server: 44% by colin
// roc 2007-08 004a2690  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 170 bytes

struct ArgHolder {
    void* ptr;
};

struct FuncDesc {
    void invokeHelper(void* out, void* arg);
};

struct BoundFuncDesc {
    void invoke(ArgHolder* args, void* result);
    void callHelper(void* out, void* arg);
};

extern "C" void __stdcall string_dtor(void* s);

void BoundFuncDesc::invoke(ArgHolder* args, void* result)
{
    void* p = args->ptr;
    void* q;
    if (p) {
        q = (char*)p - 4;
    } else {
        q = 0;
    }
    void* r;
    if (q) {
        r = (char*)q + 4;
    } else {
        r = 0;
    }
    FuncDesc* fd = *(FuncDesc**)args->ptr;
    void* vtable = *(void**)fd;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtable + 0x10);
    char buf[8];
    fn(fd, buf, r);
    char buf2[8];
    this->callHelper(buf2, result);
    string_dtor(buf);
}
