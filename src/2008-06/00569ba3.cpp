// from server: 43% by tester





extern "C" int __cdecl sub_5F9C30(int, void*, int, int, int);
extern "C" int __cdecl sub_5F8B60(int, void*, int, int, int);

extern int g_946274;

struct StandardOut {
    void print_exception(int f, int type, int rethrow);
};

void StandardOut::print_exception(int f, int type, int rethrow)
{
    if (g_946274 == 0) {
        sub_5F9C30(0, (void*)0, 0, type, rethrow);
    } else if (g_946274 == 1) {
        sub_5F8B60(0, (void*)0, 0, type, rethrow);
    }
}
