// from server: 67% by atomic.potato
// roc 2009-06 005e5090  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5090

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" {
    typedef bool (__stdcall *type_info_equal_fn)(const type_info*, const type_info*);
}

struct S {
    void* field0;
};

void* __cdecl f(void* arg) {
    if (arg == 0) {
        return 0;
    }
    void* p = *(void**)arg;
    void* obj;
    if (p != 0) {
        void** vtbl = *(void***)p;
        typedef void* (__thiscall *fn_t)(void*);
        fn_t fn = (fn_t)vtbl[1];
        obj = fn(p);
    } else {
        obj = (void*)0x9dc2d4;
    }
    const type_info* ti = (const type_info*)0xa010a8;
    bool eq = ((bool (__thiscall *)(void*, const type_info*))0x89e9a4)(obj, ti);
    if (!eq) {
        return 0;
    }
    return (char*)*(void**)arg + 4;
}
