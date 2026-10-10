// from server: 40% by colin
extern "C" __declspec(dllimport) int __stdcall lstrlenW(const unsigned short*);
extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentThreadId();

extern "C" int __stdcall func_00402ac0(int);
extern "C" int __stdcall func_004035e0(int, int);
extern "C" int __stdcall func_00401150(int);
extern "C" int __stdcall func_00401800(int, int, int, int);
extern "C" int __stdcall func_004048d0(int, int, int);
extern "C" int __stdcall func_00630c50(int, int, int, int);
extern "C" int __stdcall func_00630bb0(int);
extern "C" int __stdcall func_00630a1e();

struct ATL_CRegObject {
    int func_00404a50(int, int, int);
};

int ATL_CRegObject::func_00404a50(int a1, int a2, int a3)
{
    int result;
    int len;
    int buf;
    int tmp;
    int saved_esi;
    int saved_edi;
    int saved_ebx;
    int saved_esp;
    int saved_ecx;
    int saved_ebp;
    int* p;

    if (a1 != 0 || a2 != 0)
        return (int)0x80070057;

    saved_ebx = GetCurrentThreadId();
    tmp = 0;
    saved_esi = 0;

    len = lstrlenW((const unsigned short*)a1);
    len = len + 1;

    result = func_00630c50(len, 0, 2, 0);
    saved_esi = result;

    if ((unsigned)(result + 0x80000000) > 0xFFFFFFFF)
    {
        if (result > 0x400 || !func_00402ac0(result))
        {
            p = &tmp;
            func_004035e0(result, (int)&tmp);
        }
        else
        {
            func_00630bb0(result);
            p = &saved_esp;
        }
    }
    else
    {
        p = &tmp;
        func_004035e0(result, (int)&tmp);
    }

    if (func_00401800((int)p, a1, saved_esi, saved_ebx) == 0)
    {
        func_00401150((int)&tmp);
        return (int)0x8007000e;
    }

    result = func_004048d0(a3, (int)p, a2);
    saved_esi = result;
    saved_esi = -saved_esi;
    saved_esi = (saved_esi >> 31) & 0x7ff8fff2;
    saved_esi = saved_esi + 0x8007000e;

    func_00401150((int)&tmp);
    return saved_esi;
}
