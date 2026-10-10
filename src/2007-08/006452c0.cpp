// from server: 78% by colin
struct S_func_006452c0 {
    int f(int a1);
};

extern "C" int __stdcall sub_00677380(int);
extern "C" int __stdcall sub_00630202(int, int);
extern "C" int __stdcall sub_007383c4(int, int);
extern "C" int __stdcall sub_00671ea0(int, int, int, int, int);

int S_func_006452c0::f(int a1)
{
    int* p = (int*)a1;
    int* self = (int*)((char*)this - 0x5c);
    *p = 0;

    int v = sub_00677380((int)self);
    int r = sub_00630202(v, (int)self);
    if (r != 0) {
        int x = *(int*)(r + 0x180);
        if (x != 0) {
            int y = sub_007383c4(x, 1);
            *p = y;
            return 0;
        }
    } else {
        if (self != 0 && *(int*)((char*)self + 0x20) != 0) {
            int s = *(int*)((char*)self + 0x20);
            sub_00671ea0((int)this, s, 0, 0x7c4e7c, (int)p);
            return 0;
        }
    }
    return (int)0x80004005;
}
