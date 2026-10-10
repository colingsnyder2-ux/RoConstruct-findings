// from server: 86% by colin
struct CXTPControlGallery
{
    char pad0[0x1e8];
    int m_field_1e8;
    char pad1[0x218 - 0x1e8 - 4];
    int m_field_218;
    int sub_6b35a0();
    void sub_63c4a0(int);
    void sub_670890();
    void f();
};

void CXTPControlGallery::f()
{
    if (m_field_1e8 != 0)
        goto end;

    if (sub_6b35a0() == -1)
        goto end;

    if (m_field_218 != 0)
        goto end;

    {
        int (__stdcall *fn)(void) = *(int (__stdcall **)(void))((*(int *)this) + 0x6c);
        if (fn() == 0)
            goto end;
    }

    m_field_218 = 1;
    sub_63c4a0(0x1010);
    sub_63c4a0(0x1013);

end:
    sub_670890();
}
