// from server: 92% by colin
extern "C" {
    int __cdecl __iob_func();
    int __cdecl fprintf(int, const char*, ...);
}

struct S {
    char pad[0x68];
    unsigned int flags;
    char pad2[0x15c - 0x6c];
    float gamma;
};

extern "C" {
    void __cdecl sub_51E8E0(S*, const char*);
    void __cdecl sub_51E990(S*, const char*);
    int __cdecl sub_521750(S*, int);
    int __cdecl sub_5206A0(S*, int*, int);
    int __cdecl sub_520650(int*);
    void __cdecl sub_513EC0(S*, void*, double);
    void __cdecl sub_513F40(S*, void*, int);
}

void __cdecl sub_521B70(S* self, void* arg1, int arg2, int arg3)
{
    unsigned int f = self->flags;
    if (!(f & 1)) {
        sub_51E8E0(self, (const char*)0x7a399c);
    } else if (f & 4) {
        sub_51E990(self, (const char*)0x7a3984);
        sub_521750(self, arg3);
        return;
    } else if (f & 2) {
        sub_51E990(self, (const char*)0x7a396c);
    }

    if (arg1 != 0) {
        unsigned int af = *(unsigned int*)((char*)arg1 + 8);
        if ((af & 1) && !(af & 0x800)) {
            sub_51E990(self, (const char*)0x7a3954);
            sub_521750(self, arg3);
            return;
        }
    }

    if (arg2 != 4) {
        sub_51E990(self, (const char*)0x7a3938);
        sub_521750(self, arg2);
        return;
    }

    int local;
    sub_5206A0(self, &local, 4);
    if (sub_521750(self, 0) != 0)
        return;

    int val = sub_520650(&local);
    if (val == 0) {
        sub_51E990(self, (const char*)0x7a3914);
        return;
    }

    if (*(unsigned int*)((char*)arg1 + 8) & 0x800) {
        if (val < 0xafc8 || val > 0xb3b0) {
            sub_51E990(self, (const char*)0x7a38dc);
            fprintf(__iob_func(), (const char*)0x7a38c4, val);
            return;
        }
    }

    float g = (float)val / *(double*)0x7a1148;
    self->gamma = g;
    sub_513EC0(self, arg1, (double)g);
    sub_513F40(self, arg1, val);
}
