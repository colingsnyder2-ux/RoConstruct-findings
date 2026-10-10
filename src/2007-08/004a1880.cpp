// from server: 75% by colin
struct BoundFuncDesc
{
    void construct(int a, int b);
};

extern void __stdcall sub_4A1070(int, void*);
extern void __stdcall sub_4A1790(void*);

void BoundFuncDesc::construct(int a, int b)
{
    int local = 0xC2;
    sub_4A1070(b, &local);
    sub_4A1790(&local);
}
