// from server: 16% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void func();
};

struct Inner {
    char pad[0x90];
    int field_90;
    char pad2[0x68];
    void* field_fc;
};

extern "C" int __stdcall GetObjectA(void*, int, void*);
extern "C" unsigned long __stdcall GetSysColor(int);

extern void sub_73858c(void*);
extern int sub_738586(void*);
extern void* sub_6321f0(void*);
extern int sub_73857a(void*, int, int);
extern int sub_64e1a0(void*, void*);
extern int sub_738736(int, void*, int);
extern void* sub_63062e(void*);
extern void sub_648580(void*);
extern void sub_64dfd0();
extern void sub_64b250(void*, void*);
extern void sub_6304c0(void*);
extern void sub_6304a2(void*, void*, int, int, int, int);
extern void sub_41fb40(void*, void*, unsigned long);
extern int sub_649140(void*);
extern void sub_6304ba(void*);
extern void* sub_649160(int);
extern void sub_649660(void*, void*);
extern int sub_648600(void*);
extern void sub_6485e0(void*, void*);
extern int sub_64d8f0(void*, void*);
extern void sub_6496a0(void*);
extern void sub_738568(void*);

void CXTPCustomizeSheet::func()
{
    Inner* p = (Inner*)this->field_b8;
    void* q = *(void**)((char*)p + 0x58);
    if (!q) return;

    char buf1[0x40];
    char buf2[0x40];
    char buf3[0x40];

    sub_73858c(buf1);
    *(int*)(buf1 + 0x40) = 0;
    if (!sub_738586(buf1)) goto cleanup;

    void* r = sub_6321f0(this->field_b8);

    unsigned short c1 = *(unsigned short*)0x8c86e4;
    if (sub_73857a(buf2, c1, 0)) {
        void* r2 = sub_6321f0(this->field_b8);
        int v = sub_64e1a0(r2, buf1);
        if (!v) goto cleanup;
        Inner* inner = (Inner*)q;
        void* fc = inner->field_fc;
        inner->field_90 = v;
        void** vt = *(void***)fc;
        void (__thiscall* fn)(void*) = (void (__thiscall*)(void*))vt[0x17c/4];
        fn(fc);
        goto cleanup;
    }

    if (!sub_73857a(buf2, 2, 0)) goto cleanup;

    void* out;
    if (!sub_738736(2, &out, 0)) goto cleanup;

    void* edi = sub_63062e(out);
    if (!edi) goto cleanup;

    sub_648580(buf3);

    sub_64dfd0();

    unsigned short c2 = *(unsigned short*)0x8c86e8;
    if (sub_73857a(buf2, c2, 0)) {
        sub_64b250(buf3, out);
    } else {
        char gdiBuf[0x18];
        GetObjectA(*(void**)((char*)edi + 4), 0x18, gdiBuf);

        sub_6304c0(buf2);

        sub_6304a2(buf2, gdiBuf, 0x19, 0, 1, 0);

        unsigned long col = GetSysColor(0xf);

        sub_41fb40(buf2, edi, col);

        int cmp = sub_649140(buf2);
        if (cmp != 1) {
            sub_6304ba(buf2);
            goto after;
        }

        void* v2 = sub_649160(0);
        sub_649660(buf3, v2);

        sub_6304ba(buf2);
    }

after:
    if (sub_648600(buf3)) goto cleanup;

    sub_6485e0(buf3, buf3);

    void* r3 = sub_6321f0(this->field_b8);

    int v3 = sub_64d8f0(r3, buf3);

    Inner* inner = (Inner*)q;
    void* fc = inner->field_fc;
    inner->field_90 = v3;
    void** vt = *(void***)fc;
    void (__thiscall* fn)(void*) = (void (__thiscall*)(void*))vt[0x17c/4];
    fn(fc);

    sub_6496a0(buf3);

cleanup:
    sub_738568(buf1);
}
