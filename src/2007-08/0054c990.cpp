// from server: 38% by colin
extern "C" int __stdcall sub_0054B740(int, int, int, int);
extern "C" int __stdcall sub_0077E604();

struct S {
    char pad0[0x14];
    int* field14;
    char pad18[0x0C];
    int* field24;
    char pad28[0x1C];
    int field44;
    int field40;
    int method();
};

int S::method()
{
    int result = 1;
    int diff = *field24 - *field14;
    if (diff > 0) {
        sub_0054B740((int)&field40, field44, *field14, diff);
    }
    if (field44 != 0) {
        if (sub_0077E604() == -1) {
            result = 0;
        }
    }
    return result;
}
