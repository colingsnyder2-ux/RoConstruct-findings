// from server: 46% by colin
struct CIDEDocManager {
    char pad0[0x20];
    void* field20;
    char pad24[0x28];
    int field4c;
    char pad50[0x40];
    unsigned short field90;
    unsigned short field92;
};

extern "C" int __stdcall IsWindowVisible(void*);
extern "C" void __stdcall DragAcceptFiles(void*, int);

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void* __cdecl sub_4329A0(void*);
extern "C" void __cdecl sub_42EA70(void*, int);
extern "C" void __cdecl sub_4310F0(void*);
extern "C" void __cdecl sub_4317A0(void*, int);
extern "C" void __cdecl sub_630790(void*);

int __stdcall sub_448120(CIDEDocManager* self, char flag) {
    if (self->field20 != 0) {
        void* p = *(void**)((char*)self->field20 + 0x20);
        if (IsWindowVisible(p) == 0) {
            sub_42EA70(self->field20, self->field4c);
        }
        return *(void**)((char*)self->field20 + 0x20) != 0;
    }

    void* mem = sub_62FEF6(0x48c);
    void* obj = 0;
    if (mem != 0) {
        obj = sub_4329A0(mem);
    }
    if (obj == 0) {
        return 0;
    }

    int ok = (*(int (__thiscall**)(void*, int, int, int, int))(*(int*)obj + 0x140))(obj, 0x80, 0xcf8000, 0, 0);
    if (ok == 0) {
        return 0;
    }

    if (flag != 0) {
        sub_4310F0(obj);
    } else {
        sub_4317A0(obj, 0);
    }

    DragAcceptFiles(*(void**)((char*)obj + 0x20), 1);
    sub_42EA70(obj, self->field4c);
    self->field20 = obj;
    if (self->field90 == 0 && self->field92 == 0) {
        sub_630790(self);
    }
    return 1;
}
