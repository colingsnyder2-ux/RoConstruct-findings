// from server: 58% by colin
struct CXTPRibbonBar
{
    int sub_6AA2D0();
    int sub_6A7E30();
    int sub_6AB030(int);
    int sub_6A7AD0(int);
    int sub_643980();
    int sub_6AA2D0b();
    int sub_6A5830();
    int sub_6921F0();
    int sub_6A4B50(int, int);
    int sub_6FD120(void*);
    int sub_633C70();
    int sub_6338D0(int);
    int sub_634CA0(int, void*);
    int func_6AB060(int);
};

extern "C" short __stdcall GetKeyState(int);
extern "C" int __stdcall sub_77D578(int, int, int);
extern "C" int __stdcall sub_77DCC8(int);
extern "C" int __stdcall sub_77DCD0(int);
extern "C" int __stdcall sub_77DDBC(int);
extern "C" int __stdcall sub_77E160(int, int, int);

int CXTPRibbonBar::func_6AB060(int arg)
{
    if (GetKeyState(0x11) < 0)
        return 0;

    int* p264 = *(int**)((char*)this + 0x264);
    int edi = *(int*)((char*)p264 + 0x80);

    int ebp = this->sub_643980();

    if (arg == 0x12)
    {
        if (this->sub_6AA2D0() > 0)
        {
            ((void (__thiscall*)(int))0x633C70)(ebp);
            ((void (__thiscall*)(int, int))0x6338D0)(ebp, 1);
            *(int*)((char*)ebp + 0x44) = 1;
            if (this->sub_6A7E30() != 0)
            {
                void (__thiscall* fn)(void*, int, int, int) = *(void (__thiscall**)(void*, int, int, int))((*(int*)this) + 0x140);
                fn(this, 1, 1, 1);
                return 1;
            }
            else
            {
                void (__thiscall* fn)(void*, int, int, int) = *(void (__thiscall**)(void*, int, int, int))((*(int*)this) + 0x140);
                fn(this, 1, 0, 1);
                void (__thiscall* fn2)(void*, int, int) = *(void (__thiscall**)(void*, int, int))((*(int*)this) + 0x148);
                fn2(this, edi, 1);
                int* p = *(int**)((char*)this + 0x264);
                void (__thiscall* fn3)(void*, int) = *(void (__thiscall**)(void*, int))((*(int*)p) + 0x70);
                fn3(p, 1);
                return 1;
            }
        }
    }

    int ebx = 0;
    if (this->sub_6AA2D0() > 0)
    {
        do
        {
            int eax = this->sub_6AB030(ebx);
            int edi2 = eax;
            int local14;
            sub_6FD120(&local14);
            int local24 = 0;
            if (sub_77DCD0((int)&local14) == 0)
            {
                if (((int (__thiscall*)(int))0x6A5830)(edi2) != 0)
                {
                    if (((int (__thiscall*)(int))0x6921F0)(edi2) != 0)
                    {
                        int r = sub_77E160((int)&local14, 0x26, 0);
                        if (r > -1)
                        {
                            int n = sub_77DCC8((int)&local14);
                            if (r < n - 1)
                            {
                                int v = sub_77D578((int)&local14, r + 1, arg);
                                if (this->sub_6A4B50(v, arg) != 0)
                                {
                                    if (*(int*)((char*)this + 0xdc) == 0)
                                    {
                                        ((void (__thiscall*)(int))0x633C70)(ebp);
                                    }
                                    int one = 1;
                                    ((void (__thiscall*)(int, int))0x6338D0)(ebp, one);
                                    *(int*)((char*)this + 0x12c) = one;
                                    *(int*)((char*)ebp + 0x44) = one;
                                    this->sub_6A7AD0(ebx);
                                    void (__thiscall* fn)(void*, int, int, int) = *(void (__thiscall**)(void*, int, int, int))((*(int*)this) + 0x140);
                                    fn(this, one, 0, one);
                                    void (__thiscall* fn2)(void*, int, int) = *(void (__thiscall**)(void*, int, int))((*(int*)this) + 0x148);
                                    fn2(this, edi, one);
                                    int* p = *(int**)((char*)this + 0x264);
                                    void (__thiscall* fn3)(void*, int) = *(void (__thiscall**)(void*, int))((*(int*)p) + 0x70);
                                    fn3(p, one);
                                    if (this->sub_6A7E30() == 0)
                                    {
                                        ((void (__thiscall*)(int, int, void*))0x634CA0)(ebp, 2, this);
                                    }
                                    sub_77DDBC((int)&local14);
                                    return one;
                                }
                            }
                        }
                    }
                }
            }
            local24 = -1;
            sub_77DDBC((int)&local14);
            ebx++;
        } while (ebx < this->sub_6AA2D0());
    }

    return 0;
}
