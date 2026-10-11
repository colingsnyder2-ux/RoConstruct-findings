// from server: 76% by atomic.potato
// roc 2009-06 005e4fd0  size: 57 bytes

struct type_info {
    bool operator==(const type_info&) const;
};

struct boost_any_placeholder {
    virtual ~boost_any_placeholder();
};

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern "C" void* __cdecl __RTCastToVoid(void*);

extern type_info boost_any_placeholder_type_info;
extern type_info boost_bad_any_cast_type_info;

void* sub_5e4fd0(void* arg) {
    if (arg == 0) {
        return 0;
    }
    void* p = *(void**)arg;
    void* result;
    if (p != 0) {
        void** vtbl = *(void***)p;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        result = fn(p);
    } else {
        result = &boost_any_placeholder_type_info;
    }
    if (result == &boost_bad_any_cast_type_info) {
        return 0;
    }
    return (char*)*(void**)arg + 4;
}
