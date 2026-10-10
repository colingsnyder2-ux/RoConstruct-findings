// from server: 24% by colin
struct C {
    int f0;
    int f4;
    char pad8[0x28];
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;

    int f(int* a1);
};

extern "C" int __stdcall sub_617400(int);
extern "C" int __stdcall sub_6132f0(int);
extern "C" void __stdcall sub_617630();
extern "C" int __stdcall sub_617ae0();
extern "C" void __stdcall sub_60eeb0(void*, void*, int);
extern "C" int __stdcall sub_60ee90(int, int, int, int, int);
extern "C" void __stdcall sub_5c6020(int, int);
extern "C" int __stdcall sub_612d70(int, int, int);
extern "C" int __stdcall sub_612bc0(int, int, int);

extern int dword_7C3928;
extern char byte_7C39A4[];
extern char byte_7C39BC[];
extern char byte_7C395C[];
extern char byte_7B9778[];

int C::f(int* a1) {
    char buf[0x50];
    int v;
    int* p;
    int i;

    sub_617400(this->f0);
    {
        int* q = (int*)this->f38;
        int c = *q;
        *q = c - 1;
        if (c > 0) {
            int* r = (int*)this->f38;
            unsigned char b = *(unsigned char*)r[1];
            r[1] = r[1] + 1;
            v = b;
        } else {
            v = sub_6132f0(this->f38);
        }
    }
    this->f0 = v;
    if (v == 0xa || v == 0xd) {
        sub_617630();
    }
    for (;;) {
        int c = this->f0;
        unsigned int idx = (unsigned int)(c + 1);
        if (idx > 0x5e) {
            if (a1 != 0) {
                sub_617400(c);
            }
            {
                int* q = (int*)this->f38;
                int cc = *q;
                *q = cc - 1;
                if (cc > 0) {
                    int* r = (int*)this->f38;
                    unsigned char b = *(unsigned char*)r[1];
                    r[1] = r[1] + 1;
                    this->f0 = b;
                } else {
                    this->f0 = sub_6132f0(this->f38);
                }
            }
            continue;
        }
        switch (idx) {
        case 0x18:
            {
                char* s;
                if (a1 == 0) s = byte_7C39A4; else s = byte_7C39BC;
                sub_60eeb0(buf, (char*)this->f40 + 0x10, 0x50);
                {
                    int r = sub_60ee90(this->f34, (int)byte_7B9778, (int)buf, this->f4, (int)s);
                    r = sub_60ee90(this->f34, (int)byte_7C395C, r, dword_7C3928, 0);
                }
                sub_5c6020(this->f34, 3);
            }
            continue;
        case 0x2c:
            {
                int r = sub_617ae0();
                if (r != a1[0]) continue;
                sub_617400(this->f0);
                {
                    int* q = (int*)this->f38;
                    int cc = *q;
                    *q = cc - 1;
                    if (cc > 0) {
                        int* rr = (int*)this->f38;
                        unsigned char b = *(unsigned char*)rr[1];
                        rr[1] = rr[1] + 1;
                        v = b;
                    } else {
                        v = sub_6132f0(this->f38);
                    }
                }
                this->f0 = v;
                if (a1 != 0) {
                    int* q = (int*)this->f3c;
                    q[1] = 0;
                }
            }
            continue;
        case 0x0b:
            sub_617400(0xa);
            sub_617630();
            if (a1 == 0) {
                int* q = (int*)this->f3c;
                q[1] = 0;
            }
            continue;
        default:
            {
                int r = sub_617ae0();
                if (r != a1[0]) continue;
                sub_617400(this->f0);
                {
                    int* q = (int*)this->f38;
                    int cc = *q;
                    *q = cc - 1;
                    if (cc > 0) {
                        int* rr = (int*)this->f38;
                        unsigned char b = *(unsigned char*)rr[1];
                        rr[1] = rr[1] + 1;
                        v = b;
                    } else {
                        v = sub_6132f0(this->f38);
                    }
                }
                this->f0 = v;
                if (a1 != 0) {
                    int* q = (int*)this->f3c;
                    int e = q[1];
                    int b = q[0];
                    int off = r + r;
                    e = e - off - 4;
                    b = b + r + 2;
                    i = sub_612d70(this->f34, b, e);
                    p = (int*)sub_612bc0(this->f34, ((int*)this->f30)[1], i);
                    if (p[2] == 0) {
                        p[0] = 1;
                        p[2] = 1;
                    }
                    a1[0] = i;
                }
            }
            continue;
        }
    }
}
