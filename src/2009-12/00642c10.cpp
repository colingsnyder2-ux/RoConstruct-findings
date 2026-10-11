// from server: 64% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" {
    typedef bool (__stdcall *type_info_eq_fn)(const type_info*, const type_info*);
}

struct S {
    void* field0;
    void* method();
};

void* S::method() {
    S* p = *(S**)((char*)this + 8);
    if (p == 0) {
        return 0;
    }
    void* obj = p->field0;
    type_info* ti;
    if (obj != 0) {
        ti = (type_info*)(*(void***)obj)[1];
        ti = (type_info*)((void*(__thiscall*)(void*))ti)(obj);
    } else {
        ti = (type_info*)0x00b0030c;
    }
    bool eq = ((bool(__thiscall*)(type_info*, const type_info*))0x0098b768)(ti, (const type_info*)0x00b1316c);
    if (!eq) {
        return 0;
    }
    return (char*)p->field0 + 4;
}
