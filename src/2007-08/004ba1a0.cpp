// from server: 31% by colin
struct RakPeer {
    char pad0[0x284];
    char field284[0x1c];
    char pad2a0[0x1c];
    unsigned int count2a0;
    char pad2a4[0x1c];
    void* list29c;

    void func_004ba1a0(const char* name, unsigned int extra);
};

extern "C" int __cdecl func_004b7f70();
extern "C" void __cdecl func_004ca1d0();
extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_00671390();
extern "C" void __cdecl func_004b92e0();

void RakPeer::func_004ba1a0(const char* name, unsigned int extra)
{
    int saved = func_004b7f70();
    if (name == 0 || name[0] == 0)
        return;
    const char* p = name + 1;
    const char* q = name;
    while (*q)
        ++q;
    if ((unsigned int)(q - p) > 0xf)
        return;

    func_00671390();

    unsigned int count = *(unsigned int*)((char*)this + 0x2a0);
    unsigned int i = 0;
    if (count > 0)
    {
        void** list = *(void***)((char*)this + 0x29c);
        while (i < count)
        {
            const char* a = name;
            const char* b = (const char*)*list;
            while (*a == *b)
            {
                if (*a == 0)
                    break;
                ++a;
                ++b;
            }
            if (*a == *b)
                break;
            ++i;
            ++list;
        }
        if (i < count)
        {
            void* entry = *(void**)((char*)this + 0x29c);
            entry = ((void**)entry)[i];
            if (extra == 0)
                *(unsigned int*)((char*)entry + 4) = 0;
            else
                *(unsigned int*)((char*)entry + 4) = (unsigned int)name + extra;
            func_004ca1d0();
            return;
        }
    }

    func_004ca1d0();

    void* node = func_0062fef6(8);
    void* str = func_0062fef6(0x10);
    *(void**)node = str;
    if (extra == 0)
        *(unsigned int*)((char*)node + 4) = 0;
    else
        *(unsigned int*)((char*)node + 4) = (unsigned int)name + extra;

    char* dst = (char*)str;
    const char* src = name;
    do
    {
        *dst++ = *src;
    } while (*src++);

    func_00671390();
    func_004b92e0();
    func_004ca1d0();
}
