// from server: 50% by colin
extern "C" int __stdcall sub_77DF20(int a, int b);
extern "C" int __stdcall sub_77D1AC(int a, int b, int c, int d, char* e);
extern "C" int __stdcall sub_77D1B0(int a, int b, int c, int d, char* e);
extern "C" int __stdcall sub_77DC7C(int a, char* b);

extern "C" void __cdecl sub_630B8C(void* dst, int val, unsigned int size);
extern "C" void __cdecl sub_630A1E();
extern "C" void __cdecl sub_65B730();
extern "C" void __cdecl sub_62FF20();

extern int dword_8C87D8;
extern int dword_8C87D4;

struct CXTPReportControl {
    int f(int a, int b, int c);
};

int CXTPReportControl::f(int a, int b, int c)
{
    char buf[96];
    int count;
    int i;
    int* p;

    sub_65B730();
    count = dword_8C87D8;
    i = 0;
    if (count <= 0)
        return 0;
    while (i >= 0 && i < dword_8C87D8) {
        p = (int*)((char*)dword_8C87D4 + i * 12);
        if (sub_77DF20(p[0], 0) >= 0) {
            sub_630B8C(buf, 0, 0x60);
            if (p[2] != 0) {
                if (sub_77D1AC(a, 0, b, p[1], buf) != 0) {
                    sub_77DC7C(p[0], buf);
                }
            } else {
                if (sub_77D1B0(a, 0, b, p[1], buf) != 0) {
                    sub_77DC7C(p[0], buf);
                }
            }
        }
        i++;
    }
    return 0;
}
