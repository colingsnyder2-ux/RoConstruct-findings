// from server: 91% by atomic.potato
extern "C" void __cdecl std_exception_copy(void*, const void*);

struct S_func_006d0d00
{
    int m_vftable;
    int m_pad04;
    int m_pad08;
    int m_value0c;
    int m_value10;

    S_func_006d0d00* f(S_func_006d0d00* other);
};

S_func_006d0d00* S_func_006d0d00::f(S_func_006d0d00* other)
{
    std_exception_copy(other, other);
    m_vftable = 0x00b988dc;
    m_value0c = other->m_value0c;
    m_value10 = other->m_value10;
    return this;
}
