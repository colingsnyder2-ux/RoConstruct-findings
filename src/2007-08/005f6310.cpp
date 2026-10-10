// from server: 85% by colin
struct FactoryProduct {
    char pad[0xe8];
    int field_e8;
    void construct(int arg);
};

extern "C" int __stdcall sub_570270(int arg1, int arg2);
extern "C" void __fastcall sub_5f4680(void* ecx, int edx, int arg);

void FactoryProduct::construct(int arg)
{
    int* p;
    if (this != 0)
        p = (int*)((char*)this + 4);
    else
        p = 0;

    int esi = field_e8;
    int result = sub_570270(0x8c7d7c, (int)p);
    if (result != 0)
    {
        int local;
        sub_5f4680((char*)result + 0x10, (int)&local, esi);
    }
}
