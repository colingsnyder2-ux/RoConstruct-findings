// from server: 55% by colin
struct CNameItem {
    char pad[0x30];
    CNameItem();
};

struct Feature {
    char pad[0xE8];
    bool sub_5DA6D0(int* out);
    void sub_5DA760(int a, int b);
};

extern "C" {
    void __stdcall sub_62E7A0(int* out, int a, int b, float f1, float f2, int c);
    int __stdcall sub_62E290();
}

extern float dword_7A8340;
extern float dword_79F758;

void Feature::sub_5DA760(int a, int b)
{
    CNameItem item;
    if (this->sub_5DA6D0((int*)&item))
    {
        int tmp;
        sub_62E290();
        tmp = 0;
        sub_62E7A0(&tmp, a, b, dword_7A8340, dword_79F758, 2);
    }
}
