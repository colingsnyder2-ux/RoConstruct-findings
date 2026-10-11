// from server: 51% by atomic.potato
// roc 2009-06 005e4f50  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4f50

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    void* f(void*);
};

extern "C" void* __stdcall sub_9dc2d4();
extern "C" bool __stdcall sub_89e9a4(void*, const type_info*);

void* S::f(void* p) {
    if (p == 0) {
        return 0;
    }
    void* q = *(void**)p;
    void* r;
    if (q != 0) {
        r = (*(void*(**)(void*))q)(q);
    } else {
        r = sub_9dc2d4();
    }
    if (!sub_89e9a4(r, (const type_info*)0x9df2e8)) {
        return 0;
    }
    return (char*)*(void**)p + 4;
}
