// from server: 79% by colin
struct S_func_006d84c0 {
    char pad0[0x60];
    void* m_slots[4];
    char pad1[0x14];
    void* m_pManager;
    int f(void* p);
};

extern "C" int __stdcall sub_006d7bd0(void* p);
extern "C" int __stdcall sub_006d83a0(void* self, void* a, void* b);
extern "C" int __stdcall sub_006e3400(void* self, void* a, void* b);

int S_func_006d84c0::f(void* p)
{
    int idx = sub_006d7bd0(p);
    if (idx < 0 || idx >= 4)
        idx = 0;

    if (m_slots[idx] == 0) {
        void* mgr = m_pManager;
        int (__stdcall *fn)(void*, int, void*) =
            *reinterpret_cast<int (__stdcall**)(void*, int, void*)>(
                *reinterpret_cast<char**>(mgr) + 0x144);
        int r = fn(mgr, 5, this);
        void* obj = (r != 0) ? reinterpret_cast<void*>(r - 0x54) : 0;
        m_slots[idx] = obj;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(obj) + 0xac) = idx;
    }

    void* slot = m_slots[idx];
    if (sub_006d83a0(this, slot, p) != 0)
        return 0;

    int kind = *reinterpret_cast<int*>(reinterpret_cast<char*>(p) + 0x18);
    void* result;
    if (kind == 0) {
        void* inner = *reinterpret_cast<void**>(reinterpret_cast<char*>(p) + 0x10);
        int (__stdcall *fn)(void*) =
            *reinterpret_cast<int (__stdcall**)(void*)>(
                *reinterpret_cast<char**>(inner) + 0x48);
        fn(p);

        void* mgr = m_pManager;
        int (__stdcall *fn2)(void*, int, void*) =
            *reinterpret_cast<int (__stdcall**)(void*, int, void*)>(
                *reinterpret_cast<char**>(mgr) + 0x144);
        int r = fn2(mgr, 1, this);
        void* obj = (r != 0) ? reinterpret_cast<void*>(r - 0x54) : 0;

        void* mgr2 = m_pManager;
        void* arg = *reinterpret_cast<void**>(reinterpret_cast<char*>(mgr2) + 0xcc);
        sub_006e3400(obj, reinterpret_cast<char*>(p) - 0x20, arg);

        result = (obj != 0) ? reinterpret_cast<void*>(reinterpret_cast<char*>(obj) + 0x54) : 0;
    } else if (kind == 1) {
        int (__stdcall *fn)(void*, int, void*, void*) =
            *reinterpret_cast<int (__stdcall**)(void*, int, void*, void*)>(
                *reinterpret_cast<char**>(p) + 0x44);
        result = reinterpret_cast<void*>(fn(p, 2, 0, this));
    } else {
        result = 0;
    }

    void* slot2 = m_slots[idx];
    int (__stdcall *fn3)(void*, void*) =
        *reinterpret_cast<int (__stdcall**)(void*, void*)>(
            *reinterpret_cast<char**>(slot2) + 0x140);
    fn3(slot2, result);
    return 0;
}
