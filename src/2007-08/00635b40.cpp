// from server: 36% by colin
struct CXTPEdit {
    void sub_63023E();
    void sub_630946(int);
    void sub_630940();
    void sub_642FA0(void*);
    void* sub_680000(int);
    int field_0x58;
    int field_0x0;
    int field_0x4;
    int field_0x8;
    int field_0xc;
    void OnImeEndComposition();
};

void CXTPEdit::OnImeEndComposition()
{
    sub_63023E();
    if (field_0x58 != 0)
    {
        int local1[4];
        sub_630946((int)this);
        int local2[4];
        sub_680000((int)this);
        void* p = sub_680000((int)this);
        int tmp[4];
        tmp[0] = ((int*)p)[0];
        tmp[1] = ((int*)p)[1];
        tmp[2] = ((int*)p)[2];
        tmp[3] = ((int*)p)[3];
        sub_642FA0(tmp);
        sub_630940();
    }
}
