// from server: 35% by colin
struct XTP_PRINT_STATE
{
    void* vtable;
    int field4;
    void Init(void* param);
};

extern "C" void __cdecl sub_73890A();
extern "C" void __cdecl sub_62FE18();
extern "C" void* __cdecl sub_7388FE();
extern "C" void __cdecl sub_62FF20();

void XTP_PRINT_STATE::Init(void* param)
{
    sub_73890A();
    this->vtable = (void*)0x7c7764;
    sub_62FE18();
    void* p = sub_7388FE();
    if (p != 0)
    {
        sub_62FF20();
    }
    *(int*)((char*)p + 4) = 0;
}
