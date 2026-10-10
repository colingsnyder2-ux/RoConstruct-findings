// from server: 74% by colin
// roc 2007-08 006989a0  unit: CXTPPropertyGridItem  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006989a0

extern "C" int __stdcall GetSystemMetrics(int);
extern "C" void __stdcall mouse_event(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

struct CXTPPropertyGridItem
{
    int sub_697D30();
    int sub_698490();
    int sub_6983C0();
    int sub_698420();
    int sub_698970(int, int);
    int sub_6F5ED0(int, int);
    int sub_6989A0(int, int, int);
};

int CXTPPropertyGridItem::sub_6989A0(int a2, int a3, int a4)
{
    int ebp = this->sub_697D30();
    this->sub_698490();

    int edi = this->sub_6F5ED0(a3, a4);
    if (edi != 0)
    {
        int (*vtbl)(void) = *(int (**)(void))this;
        int (*fn)(void) = *(int (**)(void))((char*)vtbl + 0x8c);
        if (fn() != 0)
        {
            if (ebp != 0)
            {
                goto do_call;
            }
            int ecx = *(int*)((char*)this + 0xb4);
            int edx = *(int*)((char*)ecx + 0xb0);
            if (*(int*)((char*)edx + 0x160) == ebp)
            {
                goto end;
            }
        do_call:
            {
                int (*fn2)(int, int, int) = *(int (**)(int, int, int))edi;
                int (*fn3)(int, int, int) = *(int (**)(int, int, int))((char*)fn2 + 0x60);
                fn3(a2, a3, a4);
            }
            return 1;
        }
    }

    {
        int ecx = *(int*)((char*)this + 0x84);
        int edx = 0;
        if (*(int*)((char*)this + 0x98) == edx)
        {
            edx = 1;
        }
        ecx -= edx;
        int eax = ecx * 8;
        eax -= ecx;
        eax += eax;
        if (a3 >= eax)
        {
            eax += 0xe;
            if (a3 <= eax)
            {
                if (*(int*)((char*)this + 0x9c) != 0)
                {
                    this->sub_6983C0();
                }
                else
                {
                    this->sub_698420();
                }
            }
        }
    }

    if ((*(unsigned char*)((char*)this + 0x8c) & 1) != 0)
    {
        if (this->sub_698970(a3, a4) != 0)
        {
            int r = GetSystemMetrics(0x17);
            r = -r;
            r = (r < 0) ? -1 : 0;
            r = (r & 6) + 2;
            mouse_event(r, 0, 0, 0, 0);
        }
    }

end:
    return 1;
}
