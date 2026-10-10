// from server: 47% by colin
struct CXTPCommandBar
{
    char pad[0x178];
    void* field_178;
    void sub_00643870();
};

void CXTPCommandBar::sub_00643870()
{
    extern void __fastcall func_00630490(void*, void*);
    extern void __fastcall func_006c99a0(void*, void*);
    extern void __fastcall func_0063048a(void*);
    extern void __fastcall func_00630a1e();

    char local[0x58];
    void* p = local;
    func_00630490(this, &p);
    func_006c99a0(field_178, &p);
    func_0063048a(&p);
}
