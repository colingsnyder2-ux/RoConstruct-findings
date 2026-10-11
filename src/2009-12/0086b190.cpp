// from server: 52% by atomic.potato
struct CXTPPropertyGridItemEnum
{
    char pad0[0x10c];
    int m_nValue;
    int* m_pValue;
    char pad114[4];
    int SetValue(int);
};

extern "C" void __stdcall sub_98de94(void*, const void*);

int CXTPPropertyGridItemEnum::SetValue(int value)
{
    int* p = m_pValue;
    m_nValue = value;
    if (p)
        *p = value;
    sub_98de94(&p, (char*)this + 0x20);
    return ((int (__thiscall*)(CXTPPropertyGridItemEnum*))0x8651f0)(this);
}
