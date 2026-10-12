// from server: 80% by king_originala
typedef unsigned long DWORD;

struct S
{
    unsigned char reserved[8];
    DWORD* begin;

    long init(DWORD* first, DWORD* last, void* owner, DWORD flags);
};

long S::init(DWORD* first, DWORD* last, void* owner, DWORD flags)
{
    if (flags == 3)
    {
        try
        {
            begin = new DWORD[last - first];
        }
        catch (...)
        {
        }

        if (!begin)
            return (long)0x8007000EUL;

        DWORD* destination = begin;
        while (first != last)
            *destination++ = *first++;
    }
    else
    {
        begin = first;
    }

    return 0;
}
