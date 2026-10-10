// from server: 26% by colin
// roc 2007-08 0044aec0 156 bytes
// ErrorUploader::Udata::?$sp_counted_impl_p

struct Udata {
    int f(int a, int b, int c, int d);
};

int Udata::f(int a, int b, int c, int d)
{
    int *p = (int *)this;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;

    int local[3];
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;

    int saved = 0;

    if (a != 0) {
        local[2] = d;
        local[0] = a;
        int r = ((int (__stdcall *)(int, int))a)(c, 0);
        local[1] = r;
    }

    ((void (__thiscall *)(void *))0x44ad20)(this);

    saved = -1;

    if (a != 0) {
        ((void (__stdcall *)(int, int))a)(saved, 1);
    }

    return (int)this;
}
