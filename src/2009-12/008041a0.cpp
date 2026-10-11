// from server: 79% by atomic.potato
extern "C" void __stdcall sub_7F3DDC(void *);
extern "C" void __stdcall sub_8452C0(void *, void *);

struct CXTPCommandBar
{
    char pad[0xfc];
    void *field_fc;
    void SetControl(void *p);
};

void CXTPCommandBar::SetControl(void *p)
{
    if (field_fc)
    {
        sub_7F3DDC(field_fc);
        field_fc = 0;
    }
    field_fc = p;
    if (p)
    {
        sub_8452C0(p, this);
    }
}
