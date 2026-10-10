// from server: 45% by colin
struct FactoryProduct {
    void destroy();
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __stdcall sub_457DD0();
extern "C" void __stdcall sub_77E6AC();

void FactoryProduct::destroy() {
    int* p;
    p = *(int**)((char*)this + 0x2c);
    if (p != 0) {
        if (InterlockedDecrement(p + 1) == 0) {
            sub_457DD0();
            p = *(int**)((char*)this + 0x2c);
            if (p != 0) {
                (*(void(__thiscall**)(int*, int))*(int*)p)(p, 1);
            }
        }
        *(int*)((char*)this + 0x2c) = 0;
    }
    p = *(int**)((char*)this + 0x28);
    if (p != 0) {
        if (InterlockedDecrement(p + 1) == 0) {
            sub_457DD0();
            p = *(int**)((char*)this + 0x28);
            if (p != 0) {
                (*(void(__thiscall**)(int*, int))*(int*)p)(p, 1);
            }
        }
        *(int*)((char*)this + 0x28) = 0;
    }
    p = *(int**)((char*)this + 0x24);
    if (p != 0) {
        if (InterlockedDecrement(p + 1) == 0) {
            sub_457DD0();
            p = *(int**)((char*)this + 0x24);
            if (p != 0) {
                (*(void(__thiscall**)(int*, int))*(int*)p)(p, 1);
            }
        }
        *(int*)((char*)this + 0x24) = 0;
    }
    p = *(int**)((char*)this + 0x20);
    if (p != 0) {
        if (InterlockedDecrement(p + 1) == 0) {
            sub_457DD0();
            p = *(int**)((char*)this + 0x20);
            if (p != 0) {
                (*(void(__thiscall**)(int*, int))*(int*)p)(p, 1);
            }
        }
        *(int*)((char*)this + 0x20) = 0;
    }
    sub_77E6AC();
}
