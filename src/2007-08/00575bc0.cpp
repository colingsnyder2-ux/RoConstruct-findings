// from server: 20% by colin
struct PropDesc {
    int f0;
    int f4;
    int f8;
    int f12;
    int f16;
    int f20;
    int f24;
    int f28;
};

struct List {
    PropDesc* head;
    PropDesc* tail;
};

extern "C" void __cdecl sub_4a7af0(float* out, float* in);
extern "C" void* __cdecl sub_62fef6(unsigned int size);

extern int g_8c2294;
extern int g_8c22e4;
extern int g_8c2274;
extern int g_8c22b0;
extern int g_8c22c8;
extern int g_8c2260;
extern int g_8c2284;
extern int g_8c22b4;
extern int g_8c22a8;
extern int g_8c2280;
extern int g_8c227c;
extern int g_8c2264;

void appendProp(List* list, float val, int tag) {
    PropDesc* p = (PropDesc*)sub_62fef6(0x20);
    if (p) {
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->f12 = tag;
        p->f16 = 7;
        p->f20 = *(int*)&val;
        p->f24 = 0;
        p->f28 = 0;
    }
    if (list->tail == 0) {
        list->head = p;
    } else {
        list->tail->f0 = (int)p;
    }
    list->tail = p;
}

void __stdcall func(float* a, float* b, List* list) {
    float tmp[12];
    sub_4a7af0(tmp, a);
    appendProp(list, tmp[0], g_8c2294);
    appendProp(list, tmp[1], g_8c22e4);
    appendProp(list, tmp[2], g_8c2274);
    appendProp(list, tmp[3], g_8c22b0);
    appendProp(list, tmp[4], g_8c22c8);
    appendProp(list, tmp[5], g_8c2260);
    appendProp(list, tmp[6], g_8c2284);
    appendProp(list, tmp[7], g_8c22b4);
    appendProp(list, tmp[8], g_8c22a8);
    appendProp(list, tmp[9], g_8c2280);
    appendProp(list, tmp[10], g_8c227c);
    appendProp(list, tmp[11], g_8c2264);
}
