// from server: 80% by Yeetserama
struct BoundFuncDesc
{
};

extern void __stdcall sub_4A1070(int, void*);
extern void __stdcall sub_4A1790(void*);

void __cdecl construct(int a, int b)
{
    int local = 0xC2;
    sub_4A1070(b, &local);
    sub_4A1790(&local);
}
