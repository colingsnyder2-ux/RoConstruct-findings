// from server: 68% by colin
struct CXTPImageManagerIcon
{
    char pad[0x20];
    int field_20;
    char pad2[0x8];
    int field_2c;

    void func_0064c680();
};

extern "C" void __stdcall func_006ebd30(int, int*, int*, int*);
extern "C" void __stdcall func_006a2ce0(int, int);
extern "C" void __stdcall func_006301e4(int);
extern "C" void __stdcall func_00648710(int);

void CXTPImageManagerIcon::func_0064c680()
{
    int local0;
    int local1;
    int local2;

    local0 = -(this->field_2c != 0);

    if (local0 == 0)
        return;

    int* p = &this->field_20;

    do
    {
        func_006ebd30((int)p, &local1, &local2, &local0);

        int* obj = (int*)local1;

        if (*(int*)((char*)obj + 0xb0) != 0)
        {
            func_006a2ce0((int)p, local2);
            func_006301e4((int)obj);
        }
        else
        {
            func_00648710((int)obj);
        }
    } while (local0 != 0);
}
