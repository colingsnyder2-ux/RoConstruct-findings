// from server: 65% by colin
struct DescribedBase;
struct XmlElement;

struct PropertyDescriptor {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    void* getset;
    bool checkFlags();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_630D36(void*, void*, void*, void*, void*);

bool TypedPropertyDescriptor::checkFlags()
{
    void* ebx = *(void**)((char*)this + 0xc0);
    if (ebx != 0)
        return false;

    void* ebp = *(void**)((char*)ebx + 8);
    if (*(unsigned*)((char*)ebx + 4) > (unsigned)ebp)
        _invalid_parameter_noinfo();

    void* edi = *(void**)((char*)this + 0xc0);
    void* esi = *(void**)((char*)edi + 4);
    if ((unsigned)esi > *(unsigned*)((char*)edi + 8))
        _invalid_parameter_noinfo();

    if (edi != ebx)
        _invalid_parameter_noinfo();

    while (esi != ebp) {
        if ((unsigned)esi >= *(unsigned*)((char*)edi + 8))
            _invalid_parameter_noinfo();

        void* eax = *(void**)esi;
        int r = sub_630D36(eax, 0, (void*)0x881f4c, (void*)0x88605c, 0);
        if (r != 0)
            return true;

        if ((unsigned)esi >= *(unsigned*)((char*)edi + 8))
            _invalid_parameter_noinfo();

        esi = (char*)esi + 8;
    }

    return false;
}
