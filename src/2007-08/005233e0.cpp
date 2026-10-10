// from server: 85% by colin
extern "C" __declspec(dllimport) double __cdecl strtod(const char*, char**);

struct S {
    char pad[0x68];
    unsigned int flags;
};

extern "C" void __cdecl sub_51E8E0(S*, const char*);
extern "C" void __cdecl sub_51E990(S*, const char*);
extern "C" char* __cdecl sub_51ED00(S*, int);
extern "C" void __cdecl sub_51ECD0(S*, char*);
extern "C" void __cdecl sub_5206A0(S*, char*, int);
extern "C" int __cdecl sub_521750(S*, int);
extern "C" void __cdecl sub_514480(S*, int, int, double, double);

void __cdecl sub_5233E0(S* self, int a, int b)
{
    char* p;
    char* q;
    char* end;
    double d1;
    double d2;
    int n;

    if ((self->flags & 1) == 0)
    {
        sub_51E8E0(self, (const char*)0x7A422C);
    }
    else if ((self->flags & 4) != 0)
    {
        sub_51E990(self, (const char*)0x7A41E8);
        sub_521750(self, b);
        return;
    }
    else if (a != 0 && (*(unsigned int*)(a + 8) & 0x4000) != 0)
    {
        sub_51E990(self, (const char*)0x7A41D0);
        sub_521750(self, b);
        return;
    }

    p = sub_51ED00(self, b + 1);
    if (p == 0)
    {
        sub_51E990(self, (const char*)0x7A4200);
        return;
    }

    sub_5206A0(self, p, b);
    if (sub_521750(self, 0) != 0)
    {
        sub_51ECD0(self, p);
        return;
    }

    q = p + b;
    *q = 0;
    d1 = strtod(p + 1, &end);
    if (*end != 0)
    {
        sub_51E990(self, (const char*)0x7A41A8);
        return;
    }

    q = p;
    if (*q != 0)
    {
        while (*++q != 0)
            ;
    }
    q++;
    d2 = strtod(q, &end);
    if (*end != 0)
    {
        sub_51E990(self, (const char*)0x7A4180);
        return;
    }

    if ((unsigned int)(p + b) < (unsigned int)q)
    {
        sub_51E990(self, (const char*)0x7A416C);
        sub_51ECD0(self, p);
        return;
    }

    if (!(d1 > 0.0) || !(d2 > 0.0))
    {
        sub_51E990(self, (const char*)0x7A416C);
        sub_51ECD0(self, p);
        return;
    }

    n = (int)*p;
    sub_514480(self, b, n, d1, d2);
    sub_51ECD0(self, p);
}
