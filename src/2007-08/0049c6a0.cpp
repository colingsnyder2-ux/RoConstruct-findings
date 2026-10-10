// from server: 95% by colin
struct VServerProduct {
    char pad[0xf8];
    void* field_f8;
    void method(int);
};

void __stdcall sub_541c30(void*);

void VServerProduct::method(int arg)
{
    void* p = field_f8;
    unsigned char ok = (*(unsigned char (__thiscall**)(void*))(*(int*)p + 0x2c))(p);
    if (ok)
    {
        void* q = field_f8;
        (*(void (__thiscall**)(void*, int, int))(*(int*)q + 0x28))(q, arg, 0);
    }
    sub_541c30(this);
}
