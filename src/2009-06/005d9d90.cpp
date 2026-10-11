// from server: 52% by atomic.potato
struct MD5HasherImpl {
    void* field0;
    MD5HasherImpl(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl MD5HasherImpl_ctor_helper();

MD5HasherImpl::MD5HasherImpl(int arg) {
    field0 = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x8d57a0;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}
