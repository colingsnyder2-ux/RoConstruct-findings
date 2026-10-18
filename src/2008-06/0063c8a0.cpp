// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct V3 { float x, y, z; };

struct Seat {
    char pad[0x418];
    void* weld;
    void createSeatWeld(void* h);
};

extern float g_81c3b8;
extern float g_81e380;
extern float g_82f838;
extern char g_97d580;
extern char g_97d568;
extern char g_849cf4;

extern "C" void* __stdcall sub_802458(const char*);
extern "C" void* __stdcall sub_802468(void*);

void* sub_598cb0(void* self);
void sub_513220(void* self, void* arg);
void sub_4782d0(void* self);
void sub_518b90(void* self, void* arg);
void* sub_476700(void* self, void* arg);
void* sub_478330(void* self, void* arg);
void* sub_5d90a0(void* self);
void* sub_5e7570(void* self);
void sub_5e8200(void* self, void* arg);
void* sub_5e82c0(void* self);
void* sub_60e8f0(void* self, void* arg);
void sub_614170(void* self);
void sub_5e7760(void* self, void* arg);
void* sub_4b2620(void* arg);
void sub_4025b0(void* self, void* arg);
void sub_5e4450(void* self, void* arg);
void* sub_5d8b10(void* self);
void sub_5e4470(void* self, void* arg);
void sub_5e4490(void* self, void* arg);
void sub_5e44c0(void* self, void* arg);
void sub_55a8f0(void* self, void* arg);

void Seat::createSeatWeld(void* h)
{
    void* a = sub_598cb0(this);
    char buf1[0x80];
    sub_513220(buf1, a);

    V3 v1;
    v1.x = *(float*)((char*)a + 0x24);
    v1.y = *(float*)((char*)a + 0x28);
    v1.z = *(float*)((char*)a + 0x2c);

    char m1[0x30];
    sub_4782d0(m1);

    float zero = 0.0f;
    V3 t1;
    t1.x = zero;
    t1.y = zero;
    t1.z = g_81c3b8;
    char r1[0x30];
    sub_518b90(r1, &t1);

    char m2[0x30];
    sub_4782d0(m2);

    V3 t2;
    t2.x = zero;
    t2.y = g_81e380;
    t2.z = zero;
    char r2[0x30];
    sub_518b90(r2, &t2);

    V3 t3;
    t3.x = zero;
    t3.y = g_82f838;
    t3.z = zero;

    void* b = sub_598cb0(this);
    sub_476700(b, &t3);

    char tmp[0x30];
    sub_478330(tmp, &v1);
    sub_476700(b, tmp);

    void* c = sub_5d90a0(h);
    void* d = sub_5e7570(c);
    void* e = *(void**)((char*)d + 0x24);
    void* f = *(void**)((char*)e + 0x1c);

    if (f == c) {
        char tmp2[0x30];
        sub_5e8200(c, tmp2);
        if (!(g_97d580 & 1)) {
            g_97d580 |= 1;
            sub_614170(&g_97d568);
        }
        sub_5e7760(c, &g_97d568);
    } else {
        void* g = sub_5e82c0(f);
        char tmp3[0x30];
        sub_60e8f0(g, tmp3);
        char tmp4[0x30];
        sub_476700(tmp4, tmp3);
        sub_5e8200(f, tmp4);
        if (!(g_97d580 & 1)) {
            g_97d580 |= 1;
            sub_614170(&g_97d568);
        }
        sub_5e7760(f, &g_97d568);
    }

    void* hh = sub_598cb0(this);
    sub_476700(hh, &v1);

    void* ii = sub_5e82c0(c);
    sub_476700(ii, &t2);

    void* jj = sub_4b2620(&tmp);
    void* kk = *(void**)jj;
    this->weld = kk;
    sub_4025b0(&this->pad[0], (char*)jj + 4);

    if (jj) {
        long old = _InterlockedExchangeAdd((volatile long*)((char*)jj + 4), -1);
        if (old == 1) {
            void** vt = *(void***)jj;
            ((void(__thiscall*)(void*))vt[1])(jj);
            long old2 = _InterlockedExchangeAdd((volatile long*)((char*)jj + 8), -1);
            if (old2 == 1) {
                void** vt2 = *(void***)jj;
                ((void(__thiscall*)(void*))vt2[2])(jj);
            }
        }
    }

    sub_802458(&g_849cf4);

    void* w = this->weld;
    void** vt = *(void***)w;
    ((void(__thiscall*)(void*, void*))vt[1])(w, &tmp);

    sub_802468(&tmp);

    sub_5e4450(this->weld, this);
    void* n = sub_5d8b10(h);
    sub_5e4470(this->weld, n);
    sub_5e4490(this->weld, &v1);
    sub_5e44c0(this->weld, &t2);
    sub_55a8f0(this->weld, this);
}
