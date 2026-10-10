// from server: 19% by colin
struct S {
    char pad[0x14];
    int f(const void* a, const void* b);
};

extern "C" {
    void __stdcall sub_77E580(void* out, const void* self);
    void __stdcall sub_77E584(void* out, const void* self);
    int __stdcall sub_77E5E8(const void* self);
    int __stdcall sub_77E64C(const void* self);
    int __stdcall sub_77E990(int c);
    void __stdcall sub_77E6D8();
}

int S::f(const void* a, const void* b)
{
    char buf1[8];
    char buf2[8];
    char it1[8];
    char it2[8];
    char it3[8];
    char it4[8];

    sub_77E580(buf1, a);
    sub_77E580(buf2, b);

    for (;;) {
        sub_77E584(it1, a);
        int* p1 = (int*)it1;
        if (*p1 != -2 && *p1 != 0 && *p1 != *(int*)it1) {
            sub_77E6D8();
        }
        if (*(int*)((char*)it1 + 4) != *(int*)((char*)it1 + 4)) {
            break;
        }

        sub_77E584(it2, b);
        int* p2 = (int*)it2;
        if (*p2 != -2 && *p2 != 0 && *p2 != *(int*)it2) {
            sub_77E6D8();
        }
        if (*(int*)((char*)it2 + 4) == *(int*)((char*)it2 + 4)) {
            break;
        }

        int* q1 = (int*)it1;
        if (*q1 != -2) {
            if (*q1 == 0) {
                sub_77E6D8();
            }
            int sz = sub_77E5E8(q1);
            if (*(int*)((char*)it1 + 4) >= sz + q1[5]) {
                sub_77E6D8();
            }
        }

        int* q2 = (int*)it2;
        if (*q2 != -2) {
            if (*q2 == 0) {
                sub_77E6D8();
            }
            int sz = sub_77E5E8(q2);
            if (*(int*)((char*)it2 + 4) >= sz + q2[5]) {
                sub_77E6D8();
            }
        }

        int c1 = sub_77E990(*(signed char*)(*(int*)((char*)it2 + 4)));
        int c2 = sub_77E990(*(signed char*)(*(int*)((char*)it1 + 4)));

        if (c2 != c1) {
            int* r1 = (int*)it1;
            if (*r1 != -2) {
                if (*r1 == 0) {
                    sub_77E6D8();
                }
                int sz = sub_77E5E8(r1);
                if (*(int*)((char*)it1 + 4) >= sz + r1[5]) {
                    sub_77E6D8();
                }
            }
            int* r2 = (int*)it2;
            if (*r2 != -2) {
                if (*r2 == 0) {
                    sub_77E6D8();
                }
                int sz = sub_77E5E8(r2);
                if (*(int*)((char*)it2 + 4) >= sz + r2[5]) {
                    sub_77E6D8();
                }
            }
            int x = sub_77E990(*(signed char*)(*(int*)((char*)it2 + 4)));
            int y = sub_77E990(*(signed char*)(*(int*)((char*)it1 + 4)));
            return (x >= y) ? 1 : -1;
        }

        int* s1 = (int*)it1;
        if (*s1 != -2) {
            if (*s1 == 0) {
                sub_77E6D8();
            }
            int sz = sub_77E5E8(s1);
            if (*(int*)((char*)it1 + 4) >= sz + s1[5]) {
                sub_77E6D8();
            }
        }
        *(int*)((char*)it1 + 4) += 1;

        int* s2 = (int*)it2;
        if (*s2 != -2) {
            if (*s2 == 0) {
                sub_77E6D8();
            }
            int sz = sub_77E5E8(s2);
            if (*(int*)((char*)it2 + 4) >= sz + s2[5]) {
                sub_77E6D8();
            }
        }
        *(int*)((char*)it2 + 4) += 1;
    }

    int sa = sub_77E64C(a);
    int sb = sub_77E64C(b);
    if (sa == sb) {
        return 0;
    }
    return (sa < sb) ? -1 : 1;
}
