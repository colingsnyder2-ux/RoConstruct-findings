// from server: 90% by colin
struct UIEnumConnectionPoints_CComEnum_CComObject {
    void* vtable;
    char pad[0x14];
    int field_18;
    void* Destroy(char flag);
    void sub_402fe0();
};

struct GlobalObject {
    void* vtable;
};

extern GlobalObject* g_object_8bae44;


extern "C" void __cdecl sub_62fc62(void* p);

void* UIEnumConnectionPoints_CComEnum_CComObject::Destroy(char flag) {
    this->vtable = (void*)0x784fa8;
    this->field_18 = 0xc0000001;
    GlobalObject* g = g_object_8bae44;
    void (__stdcall *fn)() = *(void (__stdcall**)())((char*)g->vtable + 8);
    fn();
    sub_402fe0();
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}
