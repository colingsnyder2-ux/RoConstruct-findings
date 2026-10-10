// from server: 36% by colin
struct LocalBackpack {
    char pad[0x128];
    void sub_5D1730(int);
    void sub_5D19C0(int, int, int, int, int);
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" void __cdecl sub_41DA00(void*);

void LocalBackpack::sub_5D19C0(int a1, int a2, int a3, int a4, int a5)
{
    int result = sub_630D36(a5, 0, 0x881F4C, 0x8A65C4, 0);
    if (result != 0) {
        sub_5D1730(result);
    }
    sub_41DA00((char*)this + 0x18);
}
