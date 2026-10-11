// from server: 70% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct placeholder_any {
    virtual ~placeholder_any();
};

extern type_info type_info_placeholder_any;
extern type_info type_info_Humanoid_Status;

extern "C" bool __stdcall type_info_compare(void*, void*);

struct Humanoid {
    static void* getStatusTypeInfo();
};

void* Humanoid::getStatusTypeInfo() {
    return &type_info_Humanoid_Status;
}

void* __cdecl sub_6e37c0(void* p) {
    if (p == 0) {
        return 0;
    }
    void* vtable = *(void**)p;
    void* ti;
    if (vtable != 0) {
        ti = (*(void*(**)(void*))vtable)(vtable);
    } else {
        ti = &type_info_placeholder_any;
    }
    if (type_info_compare(ti, &type_info_Humanoid_Status)) {
        return (char*)p + 4;
    }
    return 0;
}
