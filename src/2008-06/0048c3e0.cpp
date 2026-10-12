// from server: 30% by colin
extern "C" void* __cdecl sub_802458();
extern "C" void __cdecl sub_409d50(void*, const char*);
extern "C" void __cdecl sub_6a158c(void*, void*);
extern "C" void __cdecl sub_45c470(void*, void*);
extern "C" int __cdecl sub_495eb0(void*, int);

struct S {
    unsigned char padding[0x170];
    void* field_170;
    bool check();
};

bool S::check()
{
    if (!sub_495eb0(this, 1)) {
        void* str = sub_802458();
        sub_409d50(str, "RemoveCharacterAppearance can only be called by the backend server");
        sub_6a158c(str, (void*)0x8d1bc8);
    }
    if (field_170) {
        sub_45c470(field_170, (void*)0x4899b0);
    }
    return true;
}
