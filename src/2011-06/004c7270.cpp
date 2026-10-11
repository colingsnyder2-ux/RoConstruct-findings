// from server: 92% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    extern type_info g_type_placeholder;
    extern type_info g_type_chatoption;
    bool __stdcall sub_a40a50(const type_info*, const type_info*);
}

struct MeshAdapter {
    void* vtable;
    static void* sub_4c7270(void* p);
};

void* MeshAdapter::sub_4c7270(void* p)
{
    if (p == 0)
        return 0;
    void* obj = *(void**)p;
    type_info* ti;
    if (obj != 0) {
        void** vt = *(void***)obj;
        typedef type_info* (__thiscall *fn_t)(void*);
        fn_t fn = (fn_t)vt[1];
        ti = fn(obj);
    } else {
        ti = &g_type_placeholder;
    }
    if (ti->operator==(g_type_chatoption)) {
        return (char*)*(void**)p + 4;
    }
    return 0;
}
