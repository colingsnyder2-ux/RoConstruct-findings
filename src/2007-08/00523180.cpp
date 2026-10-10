// from server: 51% by colin
// roc 2007-08 00523180  unit: seg_00520000  size: 603 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523180

extern "C" int __cdecl sub_51E8E0(int, const char*);
extern "C" int __cdecl sub_51E990(int, const char*);
extern "C" int __cdecl sub_51ECD0(int, void*);
extern "C" void* __cdecl sub_51ED00(int, int);
extern "C" void* __cdecl sub_520650(const char*);
extern "C" int __cdecl sub_5206A0(int, void*, int);
extern "C" int __cdecl sub_521750(int, int);
extern "C" int __cdecl sub_5142E0(int, int, int, int, int, int, int, int, int);

struct S {
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    int local10;
    int local14;
    int local18;
    int local1c;
    char local0f;
    char local24;
    int local20;
    int local28;
    int local2c;
    int local30;
    int local34;
    int local38;

    if ((*(unsigned char*)(a + 0x68) & 1) == 0) {
        sub_51E8E0(a, (const char*)0x7a4150);
        goto L_52319D;
    }
    if ((*(unsigned char*)(a + 0x68) & 4) != 0) {
        sub_51E990(a, (const char*)0x7a411c);
        sub_521750(a, b);
        return 0;
    }
    if (b != 0 && (*(unsigned int*)(b + 8) & 0x400) != 0) {
        sub_51E990(a, (const char*)0x7a4104);
        sub_521750(a, b);
        return 0;
    }

L_52319D:
    {
        int esi = c;
        int edx = esi + 1;
        int ebx = (int)sub_51ED00(a, edx);
        if (ebx == 0) {
            sub_51E990(a, (const char*)0x7a4134);
            return 0;
        }
        sub_5206A0(a, (void*)ebx, esi);
        if (sub_521750(a, 0) != 0) {
            sub_51ECD0(a, (void*)ebx);
            return 0;
        }
        {
            int eax = ebx + esi;
            *(char*)eax = 0;
            local10 = eax;
            if (*(char*)ebx == 0) {
                esi = ebx;
            } else {
                esi = ebx;
                do {
                    esi++;
                } while (*(char*)esi != 0);
            }
            {
                int ecx = esi + 0xc;
                if ((unsigned int)eax > (unsigned int)ecx) {
                    int edx2 = esi + 1;
                    local20 = (int)sub_520650((const char*)edx2);
                    local20 = (int)sub_520650((const char*)(esi + 5));
                    {
                        char cl = *(char*)(esi + 0xa);
                        char al = *(char*)(esi + 9);
                        esi += 0xb;
                        local0f = al;
                        local24 = cl;
                        local14 = esi;
                        if (al == 0) {
                            if (cl != 2) {
                                goto L_5232C7;
                            }
                            goto L_5232F9;
                        }
                        if (al == 1) {
                            if (cl != 3) {
                                goto L_5232C7;
                            }
                            goto L_5232F9;
                        }
                        if (al == 2) {
                            if (cl != 3) {
                                goto L_5232C7;
                            }
                            goto L_5232F9;
                        }
                        if (al == 3) {
                            if (cl == 4) {
                                goto L_5232F9;
                            }
                            goto L_5232C7;
                        }
                        if (al < 4) {
                            goto L_5232F9;
                        }
                        sub_51E990(a, (const char*)0x7a34bc);
                        cl = local24;
                        goto L_5232F9;
                    }
                } else {
                    sub_51E990(a, (const char*)0x7a40f0);
                    sub_51ECD0(a, (void*)ebx);
                    return 0;
                }
            }
        L_5232C7:
            sub_51E990(a, (const char*)0x7a40c4);
            sub_51ECD0(a, (void*)ebx);
            return 0;
        L_5232F9:
            if (*(char*)esi != 0) {
                do {
                    esi++;
                } while (*(char*)esi != 0);
            }
            {
                unsigned int eax2 = (unsigned char)local24;
                int ecx2 = eax2 * 4;
                int ebp = (int)sub_51ED00(a, ecx2);
                local30 = eax2;
                if (ebp == 0) {
                    sub_51ECD0(a, (void*)ebx);
                    sub_51E990(a, (const char*)0x7a40a8);
                    return 0;
                }
                {
                    int ecx3 = local28;
                    int eax3 = 0;
                    if (ecx3 > 0) {
                        do {
                            esi++;
                            *(int*)(ebp + eax3 * 4) = esi;
                            if (*(char*)esi == 0) {
                                if ((unsigned int)esi > (unsigned int)local14) {
                                    goto L_5233B7;
                                }
                            } else {
                                do {
                                    if ((unsigned int)esi > (unsigned int)local14) {
                                        goto L_5233B7;
                                    }
                                    esi++;
                                } while (*(char*)esi != 0);
                            }
                            if ((unsigned int)esi > (unsigned int)local14) {
                                goto L_5233B7;
                            }
                            eax3++;
                        } while (eax3 < ecx3);
                    }
                    {
                        int edx3 = local18;
                        unsigned int eax4 = (unsigned char)local0f;
                        sub_5142E0(a, ebx, local20, edx3, eax4, local2c, local28, ebp, local34);
                        sub_51ECD0(a, (void*)ebx);
                        sub_51ECD0(a, (void*)ebp);
                        return 0;
                    }
                L_5233B7:
                    sub_51E990(a, (const char*)0x7a40f0);
                    sub_51ECD0(a, (void*)ebx);
                    sub_51ECD0(a, (void*)ebp);
                    return 0;
                }
            }
        }
    }
}
