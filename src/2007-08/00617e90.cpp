// from server: 40% by colin
struct C {
    int f(int*);
    char pad0[4];
    int field4;
    char pad8[0x2c];
    int field34;
    int field38;
    int field3c;
    int field40;
};

extern "C" int __cdecl sub_617400(int);
extern "C" int __cdecl sub_6132f0(int);
extern "C" int __cdecl sub_60eeb0(void*, const void*, unsigned int);
extern "C" int __cdecl sub_60ee90(int, const char*, ...);
extern "C" int __cdecl sub_5c6020(int, int);
extern "C" int __cdecl sub_617630(int);
extern "C" int __cdecl sub_612d70(int, int, int);
extern "C" int __cdecl sub_612bc0(int, int, int);
extern "C" int (__stdcall *g_77e89c)(int);

int C::f(int* out)
{
    int c;
    int i;
    int val;
    int n;
    char buf[0x50];

    sub_617400(this->pad0[0]);
    c = this->field38;
    if (*(int*)c > 0) {
        *(int*)c = *(int*)c - 1;
        val = *(char*)(*(int*)(c + 4));
        *(int*)(c + 4) = *(int*)(c + 4) + 1;
    } else {
        val = sub_6132f0(c);
    }
    this->pad0[0] = val;
    if (val == *out) {
        goto done;
    }
    do {
        int ch = this->pad0[0];
        if ((unsigned)(ch + 1) <= 0x5d) {
            switch (ch) {
            case 0x0a:
                sub_60eeb0(buf, (char*)this->field40 + 0x10, 0x50);
                sub_60ee90(this->field34, "%s near '%s'", buf, this->field4);
                sub_5c6020(this->field34, 3);
                goto next;
            case 0x0b:
                sub_60eeb0(buf, (char*)this->field40 + 0x10, 0x50);
                sub_60ee90(this->field34, "%s near '%s'", buf, this->field4);
                sub_617400(0);
                sub_60ee90(this->field34, "%s:%d: %s", this->field3c ? *(char**)this->field3c : "", *(int*)this->field3c, "");
                sub_5c6020(this->field34, 3);
                goto next;
            case 0x0c:
                c = this->field38;
                if (*(int*)c > 0) {
                    *(int*)c = *(int*)c - 1;
                    val = *(char*)(*(int*)(c + 4));
                    *(int*)(c + 4) = *(int*)(c + 4) + 1;
                } else {
                    val = sub_6132f0(c);
                }
                this->pad0[0] = val;
                if ((unsigned)(val + 1) <= 0x77) {
                    switch (val) {
                    case 6: n = 7; break;
                    case 7: n = 8; break;
                    case 8: n = 0xc; break;
                    case 9: n = 0xa; break;
                    case 10: n = 0xd; break;
                    case 11: n = 9; break;
                    case 12: n = 0xb; break;
                    default: n = val; break;
                    }
                } else {
                    n = val;
                }
                sub_617400(n);
                c = this->field38;
                if (*(int*)c > 0) {
                    *(int*)c = *(int*)c - 1;
                    val = *(char*)(*(int*)(c + 4));
                    *(int*)(c + 4) = *(int*)(c + 4) + 1;
                } else {
                    val = sub_6132f0(c);
                }
                this->pad0[0] = val;
                goto next;
            case 0x0d:
                sub_617400(0x0a);
                sub_617630((int)this);
                goto next;
            default:
                break;
            }
        }
        if (g_77e89c(this->pad0[0]) == 0) {
            sub_617400(this->pad0[0]);
            c = this->field38;
            if (*(int*)c > 0) {
                *(int*)c = *(int*)c - 1;
                val = *(char*)(*(int*)(c + 4));
                *(int*)(c + 4) = *(int*)(c + 4) + 1;
            } else {
                val = sub_6132f0(c);
            }
            this->pad0[0] = val;
            goto next;
        }
        i = 0;
        n = 0;
        do {
            n = n * 10 + (this->pad0[0] - '0');
            c = this->field38;
            if (*(int*)c > 0) {
                *(int*)c = *(int*)c - 1;
                val = *(char*)(*(int*)(c + 4));
                *(int*)(c + 4) = *(int*)(c + 4) + 1;
            } else {
                val = sub_6132f0(c);
            }
            this->pad0[0] = val;
            i++;
            if (i >= 3) break;
        } while (g_77e89c(this->pad0[0]) != 0);
        if (n > 0xff) {
            sub_60eeb0(buf, (char*)this->field40 + 0x10, 0x50);
            sub_60ee90(this->field34, "%s near '%s'", buf, this->field4);
            sub_617400(0);
            sub_60ee90(this->field34, "%s:%d: %s", this->field3c ? *(char**)this->field3c : "", *(int*)this->field3c, "escape sequence too large");
            sub_5c6020(this->field34, 3);
        }
        sub_617400(n);
    next:
        if (this->pad0[0] == *out) break;
    } while (1);
done:
    sub_617400(this->pad0[0]);
    c = this->field38;
    if (*(int*)c > 0) {
        *(int*)c = *(int*)c - 1;
        val = *(char*)(*(int*)(c + 4));
        *(int*)(c + 4) = *(int*)(c + 4) + 1;
    } else {
        val = sub_6132f0(c);
    }
    this->pad0[0] = val;
    {
        int a = *(int*)this->field3c;
        int b = *(int*)(this->field3c + 4);
        int r = sub_612d70(this->field34, a + 1, b - 2);
        int* p = (int*)sub_612bc0(this->field34, *(int*)(this->field34 + 4), r);
        if (p[2] == 0) {
            p[0] = 1;
            p[2] = 1;
        }
        *out = r;
    }
    return 0;
}
