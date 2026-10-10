// from server: 39% by colin
struct StreamBuf {
    char pad[0x14];
    char* p14;
    char* p18;
    char* p1c;
    char* p20;
    char flags24;
};

struct Allocator {
    char pad[0x14];
    char* p14;
    char* p18;
    char* p1c;
    char* p20;
    char flags24;
};

struct Outer {
    Allocator* p0;
};

extern "C" void __stdcall sub_5cca40(Allocator* a, int b, int c);
extern "C" int __stdcall sub_5cc990(Allocator* a, void* b, void* c, void* d);
extern "C" int __stdcall sub_5cca30(Allocator* a, int b);
extern "C" int __stdcall sub_5cc9c0(Allocator* a, void* b, void* c, int d);
extern "C" int __stdcall sub_5cc8e0(int a);
extern "C" int __stdcall sub_54dcc0(void* a);
extern "C" int __stdcall sub_77e600(char* a, char* b, int c);

extern int g_7ba5a4;
extern int g_7ba584;

struct S {
    int f(int a, int b);
};

int S::f(int a, int b) {
    Outer* self = (Outer*)this;
    Allocator* al = self->p0;
    if ((al->flags24 & 1) && (*(unsigned char*)&a & 1)) {
        al->flags24 = 0;
        al = self->p0;
        al->p1c = al->p14;
        al->p20 = al->p14;
        sub_5cca40(self->p0, 0, 1);
    }
    al = self->p0;
    if ((al->flags24 & 2) && (*(unsigned char*)&a & 2)) {
        char local13;
        char* p13 = &local13;
        char* p20 = al->p20;
        char* p1c = al->p1c;
        int local2c = 0;
        char local38 = 1;
        char* p14 = (char*)&p13;
        char** pp1c = &p20;
        char** pp18 = &p1c;
        while (1) {
            char* cur20 = *pp1c;
            if (*pp18 == cur20) {
                goto after;
            }
            {
                Allocator* esi = self->p0;
                sub_5cc990(esi, &p13, pp18, &cur20);
                int eax = sub_5cca30(esi, g_7ba5a4);
                int edi = eax;
                sub_5cc9c0(esi, &p13, pp18, 0);
                sub_5cc8e0(edi);
                if (edi != g_7ba584) {
                    local38 = 0;
                }
            }
        after:
            {
                Allocator* e = self->p0;
                char* c14 = e->p14;
                int diff = (int)(e->p1c - c14);
                int esi2 = 0;
                char* ebx = c14;
                if (diff > 0) {
                    do {
                        char* edx = *(char**)&b;
                        char* ecx = *(char**)edx;
                        int eax2 = diff - esi2;
                        sub_77e600(esi2 + ebx, ecx, eax2);
                        esi2 += eax2;
                    } while (esi2 < diff);
                }
                e = self->p0;
                char* c14b = e->p14;
                char* c18 = e->p18;
                int ebx2 = (int)(c14b - esi2) + diff;
                char* ecx2 = c14b + (int)c18;
                e->p1c = (char*)ebx2;
                e->p20 = ecx2;
                if (local38 != 0) {
                    continue;
                }
                sub_54dcc0(&p13);
                break;
            }
        }
    }
    return 0;
}
