// from server: 62% by colin
struct CXTPPaintManager
{
    char pad[0x68];
    int field_68;
    char pad2[0x114 - 0x6c];
    char field_114[1];

    int func_642a60(int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" int __stdcall sub_69ec10(void*);
extern "C" int __stdcall sub_69e890(void*, int, int, int*, int);
extern "C" int __stdcall sub_63cf70(CXTPPaintManager*, int, int, int, int, int, int, int);

int CXTPPaintManager::func_642a60(int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (field_68 != 0)
    {
        if (sub_69ec10(field_114) != 0)
        {
            int v = 0;
            if (a2 != 0)
                v = *(int*)(a2 + 4);
            int flag = (a7 != 0) ? 1 : 0;
            int local = 0;
            sub_69e890(field_114, v, flag + 1, &local, 0);
            return 0;
        }
    }
    sub_63cf70(this, a3, a4, a5, a6, 0x10, 0x14, a7);
    return 0;
}
