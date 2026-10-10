// from server: 76% by colin
struct CXTPPropertyGridInplaceEdit
{
    void sub_6f7b60();
    void sub_6f76e0(int, char);
    void sub_6f7540(int*, int);
    int sub_6f8150(const char*);
};

extern "C" int __stdcall sub_77dcc8(void*);
extern "C" char __stdcall sub_77d578(void*, int);

int CXTPPropertyGridInplaceEdit::sub_6f8150(const char* arg)
{
    int len;
    int pos;
    int count;
    char ch;
    int tmp;

    if (*(int*)((char*)this + 0x54) != *(int*)((char*)this + 0x58))
        sub_6f7b60();

    pos = *(int*)((char*)this + 0x54);

    const char* pch = arg;
    while (*pch)
        ++pch;
    len = (int)(pch - arg);

    int end = sub_77dcc8((char*)this + 0x80);

    if (pos < end)
    {
        count = 0;
        if (len > 0)
        {
            do
            {
                ch = arg[count];
                if (ch != *(char*)((char*)this + 0x6c))
                {
                    int (__thiscall *fn)(void*, char*, int);
                    fn = *(int (__thiscall**)(void*, char*, int))((*(int*)this) + 0x140);
                    if (!fn(this, &ch, pos))
                        goto next;
                }

                sub_6f76e0(pos, ch);
                ++pos;

                if (pos < end)
                {
                    int* base = (int*)((char*)this + 0x84);
                    while (1)
                    {
                        if (pos >= 0)
                        {
                            int n = sub_77dcc8(base);
                            if (pos < n)
                            {
                                if (sub_77d578(base, pos) == *(char*)((char*)this + 0x6c))
                                    break;
                            }
                        }
                        ++pos;
                        if (pos >= end)
                            break;
                    }
                }

                if (pos >= sub_77dcc8((char*)this + 0x80))
                    break;

            next:
                ++count;
            } while (count < len);
        }

        tmp = pos;
        sub_6f7540(&tmp, 1);
        *(int*)((char*)this + 0x58) = tmp;
        *(int*)((char*)this + 0x54) = tmp;
    }

    return pos;
}
