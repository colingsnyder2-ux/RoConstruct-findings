// from server: 80% by colin
struct Skin {
    char pad[0x104];
    int field_104;
    void func(int);
};

extern "C" bool __cdecl sub_495eb0(void*, void*);
extern "C" int __cdecl sub_5d9a20(int);

void Skin::func(int a) {
    if (sub_495eb0(this, 0)) {
        int r = sub_5d9a20(field_104);
        if (r) {
            void** vt = *(void***)this;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0x10];
            fn(this, r);
        }
    }
}
