// from server: 33% by colin
extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Geometry {
    char pad0[0x0c];
    int* field_0c;
    char pad10[0x04];
    int* field_10;
};

struct Ball {
    char pad0[0x0c];
    int* field_0c;
    char pad10[0x04];
    int* field_10;
    void method_6108f0(int a, int b, int c);
};

int __cdecl sub_5c7000(int, const char*);
int __cdecl sub_5c72c0(int, int, int);
int __cdecl sub_610070(int, int, int);
int __cdecl sub_610120(int, int);
int __cdecl sub_610220(int, int, int, int);
int __cdecl sub_612d70(int, int, int);
int __cdecl sub_613460(int, int, int);
int __cdecl sub_630d4c(int, int, int);

void Ball::method_6108f0(int a, int b, int c)
{
    int* pThis = (int*)this;
    int i = c;
    int j = a;
    int k;
    int n;
    int total;
    int idx;
    int cnt;
    int* p;
    int* q;
    int len;
    char buf[32];
    int* arr;

    for (;;) {
        k = (i + 1) << 4;
        k += pThis[3];
        n = 4;
        if (*(int*)(k - 0x18) != 4) {
            if (*(int*)(k - 0x18) == 3) {
                sprintf(buf, "%.14g", *(double*)(k - 0x20));
                len = 0;
                while (buf[len]) len++;
                *(int*)(k - 0x20) = sub_612d70(j, (int)buf, len);
                *(int*)(k - 0x18) = n;
            }
        }
        if (*(int*)(k - 8) != n) {
            if (sub_610120(j, k - 0x10) == 0) {
                goto L986;
            }
        }
        {
            int* eax;
            eax = (int*)sub_610070(j, k - 0x20, 0xf);
            if (eax[2] == 0) {
                eax = (int*)sub_610070(j, k - 0x10, 0xf);
            }
            if (eax[2] == 6) {
                sub_610220(k - 0x20, k - 0x10, j, (int)eax);
                goto Lb17;
            }
            sub_5c72c0(j, k - 0x20, k - 0x10);
            goto Lb14;
        }
L986:
        {
            int* v = *(int**)(k - 0x10);
            int vc = v[3];
            if (vc <= 0) goto Lb17;
            total = vc;
            idx = 1;
            if (b <= 1) goto La96;
            {
                int* esi = (int*)(k - 0x20);
                for (;;) {
                    if (esi[2] != 4) {
                        if (esi[2] != 3) goto La96;
                        sprintf(buf, "%.14g", *(double*)esi);
                        len = 0;
                        while (buf[len]) len++;
                        *esi = sub_612d70(j, (int)buf, len);
                        esi[2] = 4;
                    }
                    {
                        int* vv = (int*)*esi;
                        int vvc = vv[3];
                        if (vvc >= (unsigned)(0xfffffffd - total)) {
                            sub_5c7000(j, "string length overflow");
                        }
                        total += vvc;
                        j = pThis[2];
                        idx++;
                        esi -= 4;
                        if (idx < b) continue;
                        break;
                    }
                }
            }
La96:
            {
                int* ecx = (int*)pThis[4];
                arr = (int*)sub_613460(j, (int)(ecx + 0xd), total);
                cnt = *(int*)(k - 0x10);
                {
                    int off = 0;
                    int rem = cnt;
                    int* ebx = (int*)k;
                    if (rem > 0) {
                        ebx -= rem << 4;
                        for (;;) {
                            int* vv = (int*)*ebx;
                            int vvc = vv[3];
                            sub_630d4c((int)arr + off, (int)(vv + 4), vvc);
                            rem--;
                            off += vvc;
                            ebx += 4;
                            if (rem > 0) continue;
                            break;
                        }
                    }
                }
                {
                    int* dst = (int*)(k - (idx << 4));
                    *dst = sub_612d70(j, (int)arr, total);
                    dst[2] = 4;
                }
            }
Lb14:
            ;
        }
Lb17:
        {
            int eax2 = b + (1 - idx);
            c = c + (1 - idx);
            b = eax2;
            if (eax2 > 1) continue;
            break;
        }
    }
}
