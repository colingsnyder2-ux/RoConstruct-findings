// from server: 87% by atomic.potato
struct S {
    unsigned char f(void* p);
    int pad;
    int offset;
    int index;
};

unsigned char S::f(void* p)
{
    unsigned char* base = (unsigned char*)p;
    if (base)
        base -= 0x1c;
    unsigned char* table = *(unsigned char**)(base + 0x98);
    unsigned char* entry = *(unsigned char**)(table + index);
    entry += offset;
    return *(unsigned char*)(entry + (unsigned int)base + 0x98);
}
