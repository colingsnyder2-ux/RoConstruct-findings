// from server: 62% by colin
struct Assembly {
    int getState();
};

struct Contact {
    int getState();
};

struct Joint {
    int getState();
};

struct AssemblySet {
    void insert(Assembly* a);
    void erase(Assembly* a);
};

struct SleepStage {
    char pad0[8];
    AssemblySet* recursiveWakePending;
    AssemblySet* wakePending;
    char pad1[0xa8 - 0x10];
    int something;
    int stepAssembliesWakePending(Assembly* a);
};

extern "C" int __stdcall sub_5B4830(int x);
extern "C" void __stdcall sub_5B3E00(AssemblySet* s, Assembly* a);
extern "C" void __stdcall sub_5B3E10(AssemblySet* s, Assembly* a);
extern "C" int __stdcall sub_605B30(int* out, int* p);

int SleepStage::stepAssembliesWakePending(Assembly* a) {
    int v1 = sub_5B4830(*(int*)((char*)a + 8));
    int v2 = sub_5B4830(*(int*)((char*)a + 0xc));
    int v3 = (*(int (__thiscall**)(int))(*((int*)a + 1) + 4))(*((int*)a + 1));
    int v4 = (*(int (__thiscall**)(SleepStage*))(*(int*)this + 4))(this);
    if (v3 > v4) {
        (*(void (__thiscall**)(int, Assembly*))(**(int**)((char*)this + 8) + 0x14))(*(int*)((char*)this + 8), a);
        sub_5B3E00((AssemblySet*)v1, a);
        sub_5B3E00((AssemblySet*)v2, a);
        return 0;
    }
    int local;
    if (sub_605B30(&local, (int*)((char*)this + 0xa8)) == 1) {
        return 0;
    }
    if (v1 == v2) {
        sub_5B3E10((AssemblySet*)v1, a);
        return 0;
    }
    sub_5B3E00((AssemblySet*)v1, a);
    sub_5B3E00((AssemblySet*)v2, a);
    return 0;
}
