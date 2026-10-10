// from server: 33% by tester
struct C1 { char pad[0x40]; };
struct C2 { char pad[0x35]; char b; };
struct C3 { int a; int b; int c; };
struct C4 { int a; int b; };

extern "C" void __fastcall f570d10(void* dst, void* src);
extern "C" bool __fastcall f570ea0(void* self, void* other);
extern "C" void __fastcall f409f60(void* self);
extern "C" bool __fastcall f5ecca0(void* self, void* other);
extern "C" void* __fastcall f571870(void* self, void* a, int b, void* c);
extern "C" void* __fastcall f571a70(void* self, void* a, void* b);

struct S {
    void* f(void* a, void* b, void* c, void* d);
};

void* S::f(void* a, void* b, void* c, void* d) {
    void* ebx = b;
    void* edi = d;
    void* esi = a;
    void* ebp;
    C3 tmp1;
    C3 tmp2;
    C4 tmp3;
    C4 tmp4;

    f570d10(&tmp1, c);
    if (!f570ea0(ebx, &tmp1)) {
        f570d10(&tmp2, (char*)c + 0xc);
        f570d10(&tmp3, edi);
        if (!f570ea0(ebx, &tmp3)) {
            goto L_eff;
        }
    }

    {
        C2* p = (C2*)b;
        void* q = (void*)((char*)p + 8);
        if (((C2*)q)->b == 0) {
            f571870(esi, edi, 0, b);
        } else {
            f571870(esi, edi, 1, ebp);
        }
        return edi;
    }

L_eff:
    {
        void* r = f571a70(esi, &tmp4, edi);
        *(int*)c = *(int*)r;
        *(int*)((char*)c + 4) = *(int*)((char*)r + 4);
        return c;
    }
}
