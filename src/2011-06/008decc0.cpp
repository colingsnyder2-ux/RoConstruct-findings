// from server: 23% by atomic.potato
struct S_func_008decc0
{
    char pad0[0x20];
    void* hwnd;
    char pad1[0x7c];
    void* p9c;
    void* pa0;
    char pad2[0x14];
    int b4;
    int b8;

    void f();
};

extern "C" void* __stdcall sub_a42db4(void*);
extern "C" void* __stdcall sub_a426a8(void*);
extern "C" void* __stdcall sub_a42dc8(void*);
extern "C" void* __stdcall sub_a42008(void*);
extern "C" void* __stdcall sub_a42e08(void*);
extern "C" void* __stdcall sub_a41f60(void*, int);
extern "C" void* __stdcall sub_a419c0(void*, unsigned int, unsigned int, unsigned int);

void sub_80a646(void*, void*);
void sub_816cf0(void*, void*, void*);
void sub_80a412(void*, void*);
void sub_875dd0(void*, int, void*);
void sub_87a470(void*, void*, int);

void S_func_008decc0::f()
{
    if (*(int*)((char*)this + 0xa8) == 0)
        return;
    if (*(int*)((char*)this + 0xb8) != 0)
        return;
    void* pa0 = *(void**)((char*)this + 0xa0);
    if (pa0 == 0)
        goto cleanup;
    if (*(int*)((char*)this + 0x9c) == 0)
        goto cleanup;
    {
        void** vt = *(void***)pa0;
        typedef int (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[0x58/4];
        if (fn(pa0) != 0)
            goto cleanup;
    }
    if (*(int*)((char*)pa0 + 0xc8) == 0)
        goto cleanup;
    if (*(int*)((char*)pa0 + 0x7c) != 0)
        goto cleanup;
    if (*(int*)((char*)this + 0xb4) == 0)
        goto cleanup;
    *(int*)((char*)this + 0xb4) = 0;
    {
        void* ebp = *(void**)((char*)pa0 + 0xc4);
        if (*(int*)((char*)ebp + 0x28) == 0)
            goto cleanup;
        {
            char buf1[0x10];
            sub_a42db4(buf1);
            *(int*)((char*)this + 0x1c) = 0;
            sub_80a646(this, buf1);
            int ebx = (int)sub_a426a8(buf1);
            {
                char buf2[8];
                char buf3[8];
                *(int*)((char*)this + 0x24) = 0;
                *(int*)((char*)this + 0x20) = 0;
                sub_816cf0(this, buf2, buf3);
                int eax2 = *(int*)((char*)this + 0x24);
                if (*(int*)((char*)this + 0x28) != eax2)
                    goto cleanup2;
                if (ebx != eax2)
                    goto cleanup2;
                if (ebx <= 0)
                    goto cleanup2;
                if (*(int*)((char*)ebp + 0x28) <= 0)
                    goto cleanup3;
                {
                    int i = 0;
                    do {
                        char tmp[8];
                        sub_87a470(ebp, tmp, i);
                        *(char*)((char*)this + 0x38) = 1;
                        int eax3 = (int)sub_a426a8(tmp);
                        char flag;
                        if (eax3 > ebx)
                        {
                            char tmp2[8];
                            sub_a41f60(tmp2, ebx);
                            *(int*)((char*)this + 0x1c) |= 1;
                            void* p = sub_a42dc8(tmp2);
                            sub_a42008(p);
                            flag = 1;
                        }
                        else
                        {
                            flag = 0;
                        }
                        if (*(int*)((char*)this + 0x1c) & 1)
                        {
                            *(int*)((char*)this + 0x1c) &= ~1;
                            sub_a42e08((char*)this + 0x2c);
                        }
                        if (flag == 0)
                        {
                            *(char*)((char*)this + 0x38) = 0;
                            sub_a42e08(tmp);
                            i++;
                            if (i < *(int*)((char*)ebp + 0x28))
                                continue;
                            goto cleanup3;
                        }
                        *(int*)((char*)this + 0xb8) = 1;
                        void* p2 = sub_a42dc8(tmp);
                        sub_80a412(this, p2);
                        int eax4 = (int)sub_a426a8(tmp);
                        void* hwnd = *(void**)((char*)this + 0x20);
                        sub_a419c0(hwnd, 0xb1, (unsigned int)eax4, (unsigned int)ebx);
                        void* hwnd2 = *(void**)((char*)this + 0x20);
                        sub_a419c0(hwnd2, 0xb7, 0, 0);
                        *(int*)((char*)this + 0xb8) = 0;
                        sub_a42e08(tmp);
                        goto cleanup3;
                    } while (1);
                }
            }
        cleanup2:
            *(int*)((char*)this + 0x38) = -1;
            sub_a42e08(buf1);
        }
    cleanup3:
        ;
    }
cleanup:
    if (*(void**)((char*)this + 0xa0) != 0)
    {
        void* p9c = *(void**)((char*)this + 0x9c);
        if (p9c != 0)
            sub_875dd0(p9c, 4, this);
    }
}
