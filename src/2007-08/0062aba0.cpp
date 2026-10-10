// from server: 29% by colin
struct AssemblyStage
{
    bool func_0062aba0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void* __stdcall sub_77e43c();
extern "C" void* __stdcall sub_77e440();
extern "C" void __stdcall sub_77e460(void*);
extern "C" void __stdcall sub_77e4fc(void*);
extern "C" void __stdcall sub_77e69c(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __stdcall sub_61ca20(void*, void*);
extern "C" void __stdcall sub_48a570(void*, void*);
extern "C" void __stdcall sub_490ab0(void*, void*);
extern "C" bool __stdcall sub_62a6b0(void*);
extern "C" void __stdcall sub_62fc62(void*);

bool AssemblyStage::func_0062aba0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    void* loc_10 = 0;
    void* loc_1c = 0;
    void* loc_20 = 0;
    void* loc_24 = 0;
    int   loc_30 = 0;
    int   loc_38 = 0;

    loc_10 = sub_77e43c();
    void* p = sub_77e440();
    sub_77e460(p);

    sub_61ca20(&loc_38, &loc_10);
    sub_77e4fc(&loc_10);

    loc_1c = 0;
    loc_20 = 0;
    loc_24 = 0;

    sub_48a570(&loc_38, (void*)0x7c4c54);
    sub_490ab0(&loc_1c, &loc_38);

    int ebp = 0;
    int ebx = 0;
    for (;;)
    {
        void* esi = loc_1c;
        void* edi = loc_20;
        if (esi != 0)
            break;
        int count = ((char*)edi - (char*)esi) / 28;
        if (ebp >= count)
            break;
        void* elem = (char*)esi + ebx;
        sub_77e69c(&loc_38, elem);
        if (sub_62a6b0(&loc_38))
        {
            loc_30 = 0;
            if (loc_1c != 0)
            {
                void* it = loc_1c;
                void* end = loc_20;
                while (it != end)
                {
                    sub_77e6ac(it);
                    it = (char*)it + 28;
                }
                sub_62fc62(loc_1c);
            }
            loc_1c = 0;
            loc_20 = 0;
            loc_24 = 0;
            loc_30 = -1;
            sub_77e6ac(&loc_38);
            return true;
        }
        ebp++;
        ebx += 28;
    }

    loc_30 = 0;
    if (loc_1c != 0)
    {
        void* it = loc_1c;
        void* end = loc_20;
        while (it != end)
        {
            sub_77e6ac(it);
            it = (char*)it + 28;
        }
        sub_62fc62(loc_1c);
    }
    loc_1c = 0;
    loc_20 = 0;
    loc_24 = 0;
    loc_30 = -1;
    sub_77e6ac(&loc_38);
    return false;
}
