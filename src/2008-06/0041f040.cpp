// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Str {
    void ctor(const char*);
    void ctor(const Str&);
    void dtor();
    const char* c_str() const;
    void assign(const Str&);
};

struct Vec2 {
    float x;
    float y;
};

struct InsertDecal {
    void* vptr;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    Ref* field20;
    void doInsert(const Str&);
};

extern "C" void __stdcall sub_803f04(void*);
extern "C" void __stdcall sub_8032c0(void*, unsigned int);
extern "C" void* __stdcall sub_803ee0(void*);
extern "C" void __stdcall sub_803f14(void*);
extern "C" void __stdcall sub_80245c(void*, void*);
extern "C" void __stdcall sub_802458(void*, void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_802464(void*, void*);

void sub_6a0e72(void*, int, int, int, void*, int, int, int);
int sub_6a0e6c(void*);
void sub_6a0e66(void*, void*);
void sub_6a0e60(void*, void*);
void sub_6a0e5a(void*);

void sub_41eea0(Ref*);
void sub_41dd90(void*, void*);
void sub_41ef90(InsertDecal*, void*);
void sub_598610(void*, void*);
void sub_55a8f0(void*, void*);
void sub_567770(void*, void*);
void sub_58c5c0(void*, void*);

void InsertDecal::doInsert(const Str& name)
{
    char buf[0x230];
    Str local1;
    Str local2;
    Str local3;
    void* tmp;

    sub_803f04(buf);
    sub_8032c0(buf, 0x84);

    sub_6a0e72(buf, 1, 0, 0, 0, 0, 0, 1);
    int r = sub_6a0e6c(buf);
    if (r != 1)
        goto cleanup;

    {
        void* p = 0;
        sub_6a0e66(buf, &p);
        Str* s = (Str*)p;

        if (field20)
            sub_41eea0(field20);

        void* q = sub_803ee0(s);
        void* out = 0;
        sub_41dd90(&out, q);
        sub_803f14(&p);

        void* v = 0;
        void* vt = *(void**)this;
        void (*fn)(InsertDecal*, void*) = *(void (**)(InsertDecal*, void*))((char*)vt + 0x14);
        fn(this, &v);

        char tmpbuf[0x20];
        sub_80245c(tmpbuf, &v);
        *(void**)(tmpbuf + 0x1c) = *(void**)(buf + 0x58);
        sub_598610(*(void**)(buf + 0x2c), 0);

        void* s2 = *(void**)(buf + 0x0c);
        void* p2 = 0;
        sub_6a0e60(buf + 0x58, &p2);
        void* q2 = sub_803ee0(p2);
        void* r2 = 0;
        sub_802458(&r2, q2);
        void* vt2 = *(void**)s2;
        void (*fn2)(void*, void*) = *(void (**)(void*, void*))((char*)vt2 + 4);
        fn2(s2, r2);
        sub_802468(&r2);
        sub_803f14(&p2);

        void* s3 = *(void**)(buf + 0x0c);
        void* arg = 0;
        sub_41ef90(this, &arg);
        sub_55a8f0(s3, arg);

        Ref* ref = field20;
        void* res;
        if (ref) {
            _InterlockedExchangeAdd(&ref->strong, -1);
            res = ref;
        } else {
            res = 0;
        }
        sub_567770(res, s3);

        void* a = *(void**)((char*)this + 0xc);
        void* b = *(void**)((char*)this + 4);
        void* c = 0;
        sub_802464((char*)b + 4, &c);
        sub_58c5c0(&c, a);

        void* ref2 = *(void**)(buf + 0x18);
        if (ref2) {
            Ref* rr = (Ref*)ref2;
            if (_InterlockedExchangeAdd(&rr->strong, -1) == 1) {
                void* vt3 = *(void**)rr;
                void (*d)(Ref*) = *(void (**)(Ref*))((char*)vt3 + 4);
                d(rr);
                if (_InterlockedExchangeAdd(&rr->weak, -1) == 1) {
                    void* vt4 = *(void**)rr;
                    void (*d2)(Ref*) = *(void (**)(Ref*))((char*)vt4 + 8);
                    d2(rr);
                }
            }
        }
        sub_802468(&out);
    }

cleanup:
    sub_6a0e5a(buf);
    sub_803f14(buf);
}
