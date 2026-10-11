// from server: 81% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct ProtectedString {
    virtual void dummy();
};

struct placeholder {
    virtual void dummy();
};

extern type_info type_info_ProtectedString;
extern type_info type_info_placeholder;

bool __stdcall sub_9EA8D8(void*, void*);

void* __cdecl sub_655540(void* p)
{
    if (p == 0)
        return 0;
    void* obj = *(void**)p;
    void* ti;
    if (obj != 0) {
        void** vt = *(void***)obj;
        void* (*fn)(void*) = (void* (*)(void*))vt[1];
        ti = fn(obj);
    } else {
        ti = &type_info_ProtectedString;
    }
    if (sub_9EA8D8(ti, &type_info_placeholder)) {
        return (char*)*(void**)p + 4;
    }
    return 0;
}
