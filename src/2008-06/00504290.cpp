// from server: 12% by colin
struct Vtbl;
struct Obj {
    Vtbl* vt;
    char pad[0x2d8];
    float f2dc;
};

struct Vtbl {
    void* m0;
    void* m1;
    void* m2;
    void* m3;
    void* m4;
    void* m5;
    void* m6;
    void* m7;
};

struct Scene {
    char pad0[8];
    void* arr;
    int count;
    char pad1[0x2c0];
    float f2dc;
    char pad2[0x10];
    float f2e4;
    char pad3[0x10];
    void* list298;
    int count29c;

    void renderScene(void* a, void* b);
};

extern "C" int __stdcall InterlockedDecrement(void*);
extern "C" int __stdcall InterlockedIncrement(void*);
extern "C" int __stdcall mfc800(void*);

void __cdecl sub_4782d0(void*);
void __cdecl sub_510b50(void*, void*);
void __cdecl sub_6a067a(void*);
void __cdecl sub_45ad90(void*);
void __cdecl sub_4d7ae0(void*, void*);
void __cdecl sub_502a40(void*, void*);
void __cdecl sub_502a70(void*);
void __cdecl sub_5035e0(void*, int, int);
void __cdecl sub_503ea0(void*, void*);
void __cdecl sub_548f80(void*, void*, float);
void __cdecl sub_598fa0(void*, void*);

void Scene::renderScene(void* a, void* b) {
    char buf[0x100];
    sub_4782d0(buf);
    sub_510b50(a, buf);
    float v = -((float*)a)[4];
    float w = f2dc;
    float x = (v > w) ? v : w;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            void* p = ((void**)arr)[i];
            if (!p) continue;
            void* vt = *(void**)p;
            void* r;
            ((void(__thiscall*)(void*, void**))((void**)vt)[6])(p, &r);
            bool b1 = (r != 0);
            if (r) {
                if (InterlockedDecrement((char*)r + 4) == 0) {
                    void* n = *((void**)((char*)r + 8));
                    while (n) {
                        void* nn = *(void**)n;
                        ((void(__thiscall*)(void*))((void**)nn)[1])(n);
                        void* nx = *((void**)((char*)n + 4));
                        sub_6a067a(n);
                        n = nx;
                    }
                    if (r) ((void(__thiscall*)(void*, int))**(void***)r)(r, 1);
                }
                r = 0;
            }
            void* r2;
            ((void(__thiscall*)(void*, void**))((void**)vt)[5])(p, &r2);
            bool b2 = (r2 != 0);
            if (r2) {
                if (InterlockedDecrement((char*)r2 + 4) == 0) {
                    void* n = *((void**)((char*)r2 + 8));
                    while (n) {
                        void* nn = *(void**)n;
                        ((void(__thiscall*)(void*))((void**)nn)[1])(n);
                        void* nx = *((void**)((char*)n + 4));
                        sub_6a067a(n);
                        n = nx;
                    }
                    if (r2) ((void(__thiscall*)(void*, int))**(void***)r2)(r2, 1);
                }
                r2 = 0;
            }
            if (!b1 || !b2) continue;
            void* ext = ((void*(__thiscall*)(void*))((void**)vt)[7])(p);
            float px = ((float*)ext)[9] - ((float*)b)[0];
            float py = ((float*)ext)[10] - ((float*)b)[1];
            float pz = ((float*)ext)[11] - ((float*)b)[2];
            float d = px * ((float*)b)[3] + py * ((float*)b)[4] + pz * ((float*)b)[5];
            bool c1 = (d + ((float*)p)[7] > ((float*)b)[6]);
            bool c2 = (d - ((float*)p)[7] < ((float*)b)[7]);
            bool c3 = (d + ((float*)p)[7] > ((float*)b)[6] * 0.5f);
            bool c4 = false;
            if (c3) {
                c4 = ((char(__thiscall*)(void*))((void**)vt)[4])(p) != 0;
            }
            bool c5 = ((char(__thiscall*)(void*))((void**)vt)[3])(p) != 0;
            bool c6 = false;
            if (c5 && !c4) {
                void* r3;
                ((void(__thiscall*)(void*, void**))((void**)vt)[5])(p, &r3);
                void* inner = *(void**)r3;
                c6 = ((char(__thiscall*)(void*))((void**)inner)[7])(inner) == 0;
                if (r3) {
                    if (InterlockedDecrement((char*)r3 + 4) == 0) {
                        sub_45ad90(r3);
                        if (r3) ((void(__thiscall*)(void*, int))**(void***)r3)(r3, 1);
                    }
                    r3 = 0;
                }
            }
            if (c6) {
                if (((char(__thiscall*)(void*))((void**)vt)[1])(p)) {
                    sub_4d7ae0((char*)b + 0x2a4, (char*)arr + i * 4);
                } else {
                    sub_5035e0((char*)b + 0x298, count29c + 1, 0);
                    void* slot = (char*)list298 + (count29c * 17 - 17) * 4;
                    *(int*)((char*)slot + 0x34) = 0;
                    for (int k = 0; k < 9; k++) ((int*)slot)[k] = ((int*)ext)[k];
                    ((float*)slot)[9] = ((float*)ext)[9];
                    ((float*)slot)[10] = ((float*)ext)[10];
                    ((float*)slot)[11] = ((float*)ext)[11];
                    void* r4;
                    ((void(__thiscall*)(void*, void**))((void**)vt)[6])(p, &r4);
                    void* inner = *(void**)r4;
                    void* r5;
                    sub_502a40(inner, &r5);
                    *(void**)((char*)slot + 0x3c) = *(void**)r5;
                    sub_502a70(&r5);
                    sub_502a70(&r4);
                    void* r6;
                    ((void(__thiscall*)(void*, void**))((void**)vt)[6])(p, &r6);
                    void* inner2 = *(void**)r6;
                    sub_598fa0((char*)slot + 0x40, inner2);
                    sub_502a70(&r6);
                }
            }
            if (c1 || c2) continue;
            int idx = 0;
            void* r7;
            ((void(__thiscall*)(void*, void**))((void**)vt)[5])(p, &r7);
            void* inner3 = *(void**)r7;
            int n = ((int(__thiscall*)(void*))((void**)inner3)[4])(inner3);
            bool has = (idx < n);
            if (r7) {
                if (InterlockedDecrement((char*)r7 + 4) == 0) {
                    sub_45ad90(r7);
                    if (r7) ((void(__thiscall*)(void*, int))**(void***)r7)(r7, 1);
                }
                r7 = 0;
            }
            if (!has) continue;
            void* r8;
            ((void(__thiscall*)(void*, void**))((void**)vt)[5])(p, &r8);
            void* inner4 = *(void**)r8;
            void* item = ((void*(__thiscall*)(void*, int))((void**)inner4)[5])(inner4, idx);
            bool flag = ((char(__thiscall*)(void*))**(void***)item)(item) != 0;
            if (r8) {
                if (InterlockedDecrement((char*)r8 + 4) == 0) {
                    sub_45ad90(r8);
                    if (r8) ((void(__thiscall*)(void*, int))**(void***)r8)(r8, 1);
                }
                r8 = 0;
            }
            if (flag) continue;
            char buf2[0x100];
            sub_4782d0(buf2);
            *(int*)(buf2 + 0x34) = 0;
            *(int*)(buf2 + 0x3c) = 0;
            *(int*)(buf2 + 0x40) = 0;
            for (int k = 0; k < 9; k++) ((int*)buf2)[k] = ((int*)ext)[k];
            ((float*)buf2)[9] = ((float*)ext)[9];
            ((float*)buf2)[10] = ((float*)ext)[10];
            ((float*)buf2)[11] = ((float*)ext)[11];
            ((float*)buf2)[12] = ((float*)p)[6];
            ((float*)buf2)[13] = d - ((float*)p)[6];
            void* r9;
            ((void(__thiscall*)(void*, void**))((void**)vt)[6])(p, &r9);
            void* inner5 = *(void**)r9;
            void* r10;
            ((void(__thiscall*)(void*, void**))((void**)vt)[5])(p, &r10);
            void* inner6 = *(void**)r10;
            void* item2 = ((void*(__thiscall*)(void*, int))((void**)inner6)[5])(inner6, idx);
            *(void**)(buf2 + 0x3c) = item2;
            sub_502a70(&r10);
            sub_502a70(&r9);
            if (item2) {
                void* r11;
                ((void(__thiscall*)(void*, void**))((void**)vt)[2])(p, &r11);
                void* inner7 = *(void**)r11;
                void* r12;
                ((void(__thiscall*)(void*, void**))((void**)inner7)[2])(inner7, &r12);
                sub_502a70(&r12);
                sub_502a70(&r11);
                float f = ((float*)buf2)[13];
                float g = -((float*)buf2)[12];
                float h = (1.0f - (f - g) / (w - g));
                if (h < 0.0f) h = 0.0f;
                if (h > 1.0f) h = 1.0f;
                if (h + f2e4 <= w) {
                    ((float*)buf2)[14] = h;
                    void* r13;
                    ((void(__thiscall*)(void*, void**))((void**)vt)[6])(p, &r13);
                    void* inner8 = *(void**)r13;
                    void* r14;
                    sub_548f80(inner8, &r14, h);
                    *(void**)(buf2 + 0x38) = *(void**)r14;
                    sub_502a70(&r14);
                    sub_502a70(&r13);
                    sub_503ea0((char*)b + 0x268, buf2);
                }
            }
            if (buf2[0x40]) {
                if (InterlockedDecrement((char*)buf2 + 0x44) == 0) {
                    sub_45ad90(buf2 + 0x40);
                    if (*(void**)(buf2 + 0x40)) ((void(__thiscall*)(void*, int))**(void***)(buf2 + 0x40))(buf2 + 0x40, 1);
                }
                *(int*)(buf2 + 0x40) = 0;
            }
        }
    }
}
