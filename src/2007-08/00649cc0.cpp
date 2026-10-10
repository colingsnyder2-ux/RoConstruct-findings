// from server: 72% by tester
struct CXTPCommandBar
{
    void* __cdecl f(void* param_1, void* param_2);
};

extern "C" int __stdcall GetIconInfo(void* hIcon, void* piconinfo);
extern "C" int __stdcall GetObjectA(void* hObject, int c, void* pv);
extern "C" int __stdcall DeleteObject(void* hObject);

void* CXTPCommandBar::f(void* param_1, void* param_2)
{
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int local_4;

    *(int*)param_2 = 0;
    *(int*)((char*)param_2 + 4) = 0;

    if (param_1 != 0)
    {
        if (GetIconInfo(param_1, &local_2c) != 0)
        {
            if (GetObjectA((void*)local_28, 0x18, &local_18) != 0)
            {
                *(int*)param_2 = local_14;
                *(int*)((char*)param_2 + 4) = local_10;
                if (local_20 == 0)
                {
                    int v = local_10;
                    *(int*)((char*)param_2 + 4) = (v - (v >> 31)) >> 1;
                }
            }
            DeleteObject((void*)local_28);
            DeleteObject((void*)local_24);
        }
    }
    return param_2;
}
