// from server: 49% by colin
struct S {
    int f(int a, int b, int c);
};

extern "C" int __stdcall sputn_impl(void*, const char*, int);
extern "C" int __stdcall memmove_s_impl(void*, void*, unsigned int, unsigned int);

int S::f(int a, int b, int c)
{
    int* self = (int*)this;
    int* p = (int*)*self;
    if ((p[9] & 2) == 0) {
        p[9] |= 2;
        p = (int*)*self;
        p[7] = p[5];
        p[8] = p[5] + p[6];
    }

    int start = a;
    int end = b + a;
    int* buf = (int*)(*self + 0x14);
    int* bufptr = buf;

    if (start != end) {
        do {
            if (bufptr[2] == bufptr[3]) {
                int* q = (int*)*self;
                int len = q[7] - q[5];
                int n = sputn_impl((void*)c, (const char*)q[5], len);
                if (n < len && n > 0) {
                    int* r = (int*)*self;
                    memmove_s_impl((void*)r[5], (void*)(r[5] + n), len - n, len - n);
                }
                {
                    int* r = (int*)*self;
                    r[7] = r[5] - n + len;
                    r[8] = r[5] + r[6];
                }
                if (n == 0)
                    break;
            }
            {
                int* q = (int*)*self;
                int tmp;
                int* dst = &tmp;
                int* src = bufptr + 2;
                int* src2 = bufptr + 2;
                int* dst2 = &tmp;
                (void)dst; (void)src; (void)src2; (void)dst2;
                // call 0064da90 with ecx=q, args: &tmp, src, c
                extern void __fastcall f64da90(int*, int*, int*, int*);
                f64da90(q, &tmp, src, (int*)c);
                int v = *(int*)0x84b22c;
                extern int __fastcall f64db20(int*, int);
                int r = f64db20(q, v);
                extern void __fastcall f64dac0(int*, int*, int*, int);
                f64dac0(q, &tmp, src2, 1);
                extern void __cdecl f64d9e0(int);
                f64d9e0(r);
            }
        } while (bufptr != (int*)end);
    }

    return end - start;
}
