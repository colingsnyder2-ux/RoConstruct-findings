// from server: 84% by colin
struct XTextHost {
    void func(char *out);
};

extern "C" void __stdcall sub_62ff3e(void *dst, int val);
extern "C" void __stdcall sub_62ff38(void *p, int val);

void XTextHost::func(char *out)
{
    int local[4];
    sub_62ff3e(local, *(int *)((char *)this - 4));
    *(char **)out = (char *)this + 8;
    if (local[0] != 0) {
        *(int *)(local[0] + 4) = local[1];
    }
    if (local[3] != 0) {
        sub_62ff38((void *)local[2], 0);
    }
}
