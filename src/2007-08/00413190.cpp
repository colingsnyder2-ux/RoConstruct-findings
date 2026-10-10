// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall atoi(const char*);

struct Inner {
    char pad0[0xc];
    volatile long refcount;
    char pad1[0x10];
};

struct Outer {
    char pad0[0x1226];
    unsigned short field1226;
    char pad1[0x2];
    int field1228;
};

struct Ctx {
    char pad0[0x10];
    Inner* ptr;
    char pad1[0x4];
    char buf[0x82a];
    char pad2[0x4];
    char buf2[0x80];
    char pad3[0x4];
    char buf3[0x82a];
};

struct S {
    void f(int);
};

void S::f(int arg) {
    char* p = (char*)arg;
    if (p == 0) {
        // error path
    }
    Ctx* ctx = (Ctx*)this;
    Outer* outer = (Outer*)this;
    Inner* inner = ctx->ptr;
    char* base = (char*)inner + 0x10;
    int v1 = *(int*)(base - 8);
    int v2 = *(int*)(base - 4);
    int ecx = 1 - v2;
    int eax = v1 - 0x82a;
    if ((eax | ecx) < 0) {
        // call 0x413140
    }
    char al = *p;
    char* edi = base;
    int ebx = 0;
    int flag20 = 0;
    int flag18 = 0;
    int flag1c = 0;
    int flag28 = 0;
    while (al != 0 && ebx < 0x829) {
        if (al == ':') {
            *edi = 0;
            if (flag20 == 0) {
                // call 0x412f30
                if (*(p + 1) == '/') {
                    flag20 = 1;
                    if (*(p + 2) == '/') {
                        if (outer->field1228 == 6) goto fail;
                        p += 2;
                    }
                    p += 1;
                    if (outer->field1228 == 4) goto label45c;
                    goto label3fa;
                }
                flag20 = 1;
                p += 1;
                if (outer->field1228 == 4) goto label45c;
                goto label3fa;
            } else {
                if (flag18 != 0 && flag1c != 0) goto label3fa;
                p += 1;
                *edi = 0;
                al = *p;
                ebx = 0;
                int edx = 0;
                edi = base;
                char* ecx = (char*)&flag28;
                if (al != '/' && al != '@' && al != 0) {
                    while (1) {
                        if (edx >= 0x80) goto fail;
                        p += 1;
                        *ecx = al;
                        al = *p;
                        ecx += 1;
                        edx += 1;
                        if (al == '/' || al == '@' || al == 0) break;
                    }
                }
                *ecx = 0;
                if (flag1c == 0) {
                    if (al == '/' || al == 0) {
                        // call 0x412b60
                        if (atoi((char*)&flag28) == 0) goto fail;
                        flag28 = 1;
                        flag1c = 1;
                        goto label3fa;
                    }
                    if (flag18 == 0 && al == '@') {
                        // call 0x412bc0
                        // call 0x412c20
                        flag18 = 1;
                        p += 1;
                        goto label3fa;
                    }
                    goto fail;
                }
                if (flag18 == 0 && al == '@') {
                    // call 0x412bc0
                    p += 1;
                    flag18 = 1;
                    edi = base;
                    ebx = 0;
                    goto label3fa;
                }
                if (al == '/' || al == '?') {
                    if (*(p + 1) != 0) goto label431;
                }
                if (al == '/' || al == '?') goto label431;
                if (ebx >= 0x828) goto fail;
                *edi = al;
                edi += 1;
                p += 1;
                goto label431;
            }
        } else if (al == '@') {
            if (flag18 != 0) goto fail;
            *edi = 0;
            // call 0x412bc0
            p += 1;
            flag18 = 1;
            edi = base;
            ebx = 0;
            goto label3fa;
        } else if (al == '/' || al == '?') {
            if (*(p + 1) == 0) {
                if (al == '/' || al == '?') goto label431;
                if (ebx >= 0x828) goto fail;
                *edi = al;
                edi += 1;
                p += 1;
                goto label431;
            }
            goto label431;
        } else {
            if (*(p + 1) == 0) {
                if (al == '/' || al == '?') goto label431;
                if (ebx >= 0x828) goto fail;
                *edi = al;
                edi += 1;
                p += 1;
                goto label431;
            }
            *edi = al;
            edi += 1;
            p += 1;
            ebx += 1;
            goto label3fa;
        }
    label431:
        if (flag28 == 0) {
            // call 0x412b60
            if (atoi((char*)&flag28) == 0) goto fail;
        }
        edi = base;
        ebx = 0;
    label3fa:
        al = *p;
        if (al == 0) goto label451;
        continue;
    label451:
        if (flag20 == 0) goto fail;
        goto label45c;
    label45c:
        al = *p;
        if (al != 0) {
            int ecx = 4;
            while (1) {
                if (ebx >= 0x829) goto fail;
                if (outer->field1228 != ecx && al != '#' && al != '?') {
                    p += 1;
                    *edi = al;
                    al = *p;
                    edi += 1;
                    ebx += 1;
                    if (al == 0) break;
                } else {
                    break;
                }
            }
        }
        *edi = 0;
        if (*base != 0) {
            // call 0x412ca0
            if (atoi(base) == 0) goto fail;
        }
        al = *p;
        int edx = 0;
        char* ecx2 = base;
        if (al != 0) {
            while (1) {
                p += 1;
                if (edx >= 0x829) goto fail;
                *ecx2 = al;
                al = *p;
                ecx2 += 1;
                edx += 1;
                if (al == 0) break;
            }
        }
        *ecx2 = 0;
        if (*base != 0) {
            // call 0x412d00
            if (atoi(base) == 0) goto fail;
        }
        goto label51c;
    }
    goto fail;
label51c:
    {
        int ecx = outer->field1228;
        int eax = ecx - 4;
        if (eax == 0 || eax == 1 || eax == 2) {
            outer->field1226 = 0;
        } else if (flag1c == 0) {
            outer->field1226 = (unsigned short)atoi((char*)&flag28);
        }
    }
    // call 0x413010
    return;
fail:
    // call 0x412d60
    {
        Inner* obj = (Inner*)((char*)inner);
        obj = (Inner*)((char*)obj - 0x10);
        long old = _InterlockedExchangeAdd(&obj->refcount, -1);
        if (old == 1) {
            void** vt = (void**)*((void**)obj);
            ((void (__thiscall*)(void*))vt[1])(obj);
        }
    }
    return;
}
