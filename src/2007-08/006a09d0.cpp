// from server: 31% by colin
struct CXTPNewToolbarDlg
{
    char pad0[4];
    void* field4;
    char pad8[8];
    void* field10;
    char pad14[0x10];
    void* field24;
    int field28;
    int method_6a09d0(int, int);
    void method_6a0410();
};

extern "C" int __stdcall PtInRect(const void*, int);
extern "C" int __stdcall ScreenToClient(void*, int*);
extern void __stdcall func_0062ff20();
extern void __stdcall func_0067ffa0();

int CXTPNewToolbarDlg::method_6a09d0(int a1, int a2)
{
    int i = this->field28 - 1;
    if (i >= 0)
    {
        while (1)
        {
            if (i < 0 || i >= this->field28)
            {
                func_0062ff20();
                break;
            }
            void* p = ((void**)this->field24)[i];
            int ok = ((int (__thiscall*)(void*))*(void**)(*(int*)p + 0x160))(p);
            if (ok)
            {
                int r1 = a1;
                int r2 = a2;
                int tmp[2];
                func_0067ffa0();
                if (PtInRect((const void*)tmp, 0))
                {
                    void* cur = this->field10;
                    if (cur == p)
                    {
                        int pt[2];
                        ScreenToClient(*(void**)((char*)cur + 0x20), pt);
                        ((void (__thiscall*)(void*, int, int, void*))*(void**)(*(int*)cur + 0x170))(cur, pt[0], pt[1], this->field4);
                    }
                    else
                    {
                        if (cur)
                        {
                            ((void (__thiscall*)(void*))*(void**)(*(int*)cur + 0x16c))(cur);
                            this->field10 = 0;
                        }
                    }
                    if (this->field10 == 0)
                    {
                        int pt[2];
                        ScreenToClient(*(void**)((char*)p + 0x20), pt);
                        int res = ((int (__thiscall*)(void*, int, int, void*))*(void**)(*(int*)p + 0x168))(p, pt[0], pt[1], this->field4);
                        if (res)
                        {
                            this->field10 = p;
                            this->method_6a0410();
                            return 0;
                        }
                    }
                    this->method_6a0410();
                    return 0;
                }
            }
            i--;
            if (i < 0)
                break;
        }
    }
    if (this->field10)
    {
        ((void (__thiscall*)(void*))*(void**)(*(int*)this->field10 + 0x16c))(this->field10);
        this->field10 = 0;
    }
    this->method_6a0410();
    return 0;
}
