// from server: 70% by colin
extern "C" int __stdcall sub_0063052C();
extern "C" void __stdcall sub_0067D150();
extern "C" void __stdcall sub_006D2910(int, int);
extern "C" void __stdcall sub_0077DD6C();

struct MyXTPCommandBars
{
    int method(int a, int b);
};

int MyXTPCommandBars::method(int a, int b)
{
    int* p = (int*)sub_0063052C();
    if (p == 0)
        return 0;
    p[0x100 / 4] = (int)this;
    sub_0077DD6C();
    (*(void (__thiscall**)(int*, int, int))(*(int*)p + 0x19c))(p, 0, 1);
    p[0xd4 / 4] = 1;
    if ((*(int (__thiscall**)(int*, int))(*(int*)p + 0x164))(p, 0) != 0)
    {
        if ((*(int (__thiscall**)(int*, int))(*(int*)p + 0x204))(p, b) != 0)
        {
            if (b > 0)
            {
                sub_0067D150();
                *(int*)((char*)this + 0x64) = b;
            }
            sub_006D2910(*(int*)((char*)this + 0x84), (int)p);
            return (int)p;
        }
    }
    (*(void (__thiscall**)(int*, int))(*(int*)p + 4))(p, 1);
    return 0;
}
