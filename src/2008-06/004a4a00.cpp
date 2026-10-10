// from server: 61% by tester
struct BoundFuncDesc {
    void construct(int a, int b);
};

extern "C" int __cdecl sub_6a17c6(int, int, int, int, int);
extern "C" void __cdecl sub_6a158c(int, int);
extern "C" void __cdecl sub_4a49a0(int, int);

extern "C" void __stdcall sub_802864(int);
extern "C" void __stdcall sub_80ba34(int);

void BoundFuncDesc::construct(int a, int b)
{
    int result = sub_6a17c6(a, 0, 0x939b38, 0x9291fc, 0);
    if (result == 0) {
        sub_802864(0x80ba34);
        sub_6a158c(0x8d362c, 0);
    }
    sub_4a49a0(result, b + 4);
}
