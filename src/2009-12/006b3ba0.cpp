// from server: 89% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __stdcall get_type_info_vtable();
extern "C" bool __stdcall type_info_compare(const type_info*, const type_info*);

struct SoundId {
    virtual void unknown();
};

struct placeholder_any_boost {
    virtual void unknown();
};

struct DropperTool {
    void* field0;
};

void* __cdecl check(void* arg) {
    if (arg == 0)
        return 0;
    void* p = *(void**)arg;
    type_info* ti;
    if (p != 0) {
        ti = (type_info*)(*(void***)p)[1];
        ti = (type_info*)((void*(__thiscall*)(void*))ti)(p);
    } else {
        ti = (type_info*)0xb0030c;
    }
    if (type_info_compare(ti, (type_info*)0xb3a848)) {
        return (char*)(*(void**)arg) + 4;
    }
    return 0;
}
