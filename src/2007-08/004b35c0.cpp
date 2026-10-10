// from server: 52% by colin
struct ReplicatorStatsItem {
    void updateStats();
};

extern "C" int __cdecl sub_596A60(int);
extern "C" int __cdecl sub_596AE0(int, ...);
extern "C" int __cdecl sub_596CD0(int, void*);

extern float g_786f70;
extern double g_78fee8;
extern char g_79ddd4[];
extern char g_79dddc[];

void ReplicatorStatsItem::updateStats()
{
    int* p124 = *(int**)((char*)this + 0x124);
    if (*(int*)((char*)p124 + 0x1e14) == 0)
        return;

    int* p12c = *(int**)((char*)this + 0x12c);
    double d = *(double*)((char*)p12c + 0xb8);
    int iv = (int)d;
    unsigned int shifted = (unsigned int)iv >> 3;

    int* p120 = *(int**)((char*)this + 0x120);
    sub_596A60(shifted);

    int* p124b = *(int**)((char*)this + 0x124);
    int* ebx = *(int**)((char*)p124b + 0x1e14);
    int* ecx1 = *(int**)((char*)p124b + 0x1e1c);
    int* edx1 = *(int**)((char*)p124b + 0x1e18);

    int* vtbl = *(int**)ebx;
    int (*fn94)(void*, int*, int*) = *(int (**)(void*, int*, int*))((char*)vtbl + 0x94);
    int r1 = fn94(ebx, edx1, ecx1);

    int* ecx2 = *(int**)((char*)p124b + 0x1e18);
    int* vtbl2 = *(int**)ebx;
    int (*fn8c)(void*, int*, int*, int) = *(int (**)(void*, int*, int*, int))((char*)vtbl2 + 0x8c);
    int* eax2 = *(int**)((char*)p124b + 0x1e1c);
    int r2 = fn8c(ebx, ecx2, eax2, r1);

    int* ecx3 = *(int**)((char*)p124b + 0x1e1c);
    int* edx3 = *(int**)((char*)p124b + 0x1e18);
    int* vtbl3 = *(int**)ebx;
    int (*fn90)(void*, int*, int*, int) = *(int (**)(void*, int*, int*, int))((char*)vtbl3 + 0x90);
    int r3 = fn90(ebx, edx3, ecx3, r2);

    int* ecx4 = *(int**)((char*)p124b + 0x1e18);
    int* vtbl4 = *(int**)ebx;
    int (*fn90b)(void*, int*, int*, int, char*) = *(int (**)(void*, int*, int*, int, char*))((char*)vtbl4 + 0x90);
    int* eax4 = *(int**)((char*)p124b + 0x1e1c);
    int r4 = fn90b(ebx, ecx4, eax4, r3, g_79dddc);

    double dv = (double)r4;

    int* p118 = *(int**)((char*)this + 0x118);
    sub_596AE0((int)p118, dv);

    int* p124c = *(int**)((char*)this + 0x124);
    int edx5 = *(int*)((char*)p124c + 0xf8);
    int* p110 = *(int**)((char*)this + 0x110);
    int local;
    local = edx5;
    sub_596CD0((int)p110, &local);

    int* p12c2 = *(int**)((char*)this + 0x12c);
    int ecx6 = *(int*)((char*)p12c2 + 0x5c);
    float f1 = (float)ecx6;
    if (ecx6 < 0)
        f1 += g_786f70;

    int edx6 = *(int*)((char*)p12c2 + 0x78);
    float f2 = (float)edx6;
    if (edx6 < 0)
        f2 += g_786f70;

    float ratio = f1 / f2;

    int* p114 = *(int**)((char*)this + 0x114);
    double d2 = (double)ratio * g_78fee8;
    sub_596AE0((int)p114, d2, g_79ddd4);

    int eax7 = *(int*)((char*)this + 0x130);
    if (eax7 != 0)
    {
        unsigned int divisor = (unsigned int)eax7 * 8;
        unsigned int eax8 = *(unsigned int*)((char*)this + 0x134);
        unsigned int result = eax8 / divisor;
        int* p11c = *(int**)((char*)this + 0x11c);
        sub_596A60((int)result);
    }
    else
    {
        int* p11c = *(int**)((char*)this + 0x11c);
        sub_596A60(0);
    }
}
