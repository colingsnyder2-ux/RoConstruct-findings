// from server: 53% by atomic.potato
// roc 2009-06 005e5110  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5110

struct type_info;

struct S {
};

extern "C" int __cdecl _type_info_equal(const type_info* a, const type_info* b);
extern "C" void* __cdecl _get_type_info();

void* __cdecl f(void* arg)
{
    void** p = (void**)arg;
    if (p != 0)
        return 0;
    void* obj = *p;
    void* ti;
    if (obj != 0) {
        void** vt = *(void***)obj;
        void* (*fn)(void*) = (void* (*)(void*))vt[1];
        ti = fn(obj);
    } else {
        ti = (void*)0x9dc2d4;
    }
    if (!_type_info_equal((const type_info*)ti, (const type_info*)0x9e3b0c))
        return 0;
    return (char*)*p + 4;
}
