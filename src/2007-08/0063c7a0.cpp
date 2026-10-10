// from server: 30% by colin
struct CXTPControlAction
{
    void dtor_body();
    void sub_63bd90();
    void sub_63b900();
    void sub_63069a();
};

void CXTPControlAction::dtor_body()
{
    *(void**)this = (void*)0x7c6314;
    sub_63bd90();
    sub_63b900();
    sub_63069a();
}
