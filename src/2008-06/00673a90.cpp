// from server: 23% by colin
struct Mesh;
struct String;

extern void (__thiscall *destroyMesh)(Mesh *);
extern void (__thiscall *destroyString)(String *);

struct Mesh {
    char data[28];
    ~Mesh();
};

struct String {
    char data[12];
    ~String();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall mfc800();
extern "C" void __stdcall OgreMaterialPtrDtor(void*);
extern "C" void* __stdcall OgreNodeGetName(void*);

struct ListBase {
    void* next;
    void* prev;
};

struct ListHead {
    ListBase* sentinel;
    int count;
};

struct Obj {
    void** vtable;
};

struct S {
    void** vtable;
    char pad0[0x20];
    ListHead list24;
    char pad1[0x10];
    ListHead list38;
    char pad2[0x0c];
    void* ptr48;
    char pad3[0x08];
    void** vec54;
    void** vec54end;
    void** vec54cap;
    char pad4[0x08];
    void* ptr60;
    char pad5[0x08];
    void** vec6c;
    void** vec6cend;
    void** vec6ccap;
    char pad6[0x04];
    ListHead list78;
    char pad7[0x14];
    void* ptr90;
    char pad8[0x04];
    void* ptr98;
    void* ptr9c;
    char pad9[0x04];
    void** vecac;
    void** vecacend;
    char pad10[0x04];
    ListHead listb8;
    char pad11[0x18];
    ListHead listdc;
    char pad12[0x0c];
    ListHead listf4;
    char pad13[0x14];
    ListHead list10c;

    void f();
};

void S::f()
{
    vtable = (void**)0x84d2a4;

    void* p90 = ptr90;
    int v = *(int*)((char*)p90 + 4);
    destroyMesh((Mesh*)((char*)&list78 + 0));
    (void)v;

    ListBase* s = (ListBase*)list78.sentinel;
    s->next = s;
    list78.count = 0;
    s->prev = s;
    ListBase* s2 = (ListBase*)list78.sentinel;
    s2->prev = s2;

    void* p4 = *(void**)((char*)this + 4);
    void* p4b = *(void**)((char*)p4 + 4);
    void** vt = *(void***)p4b;
    void* (__thiscall *fn)(void*) = (void* (__thiscall *)(void*))vt[0xb4/4];
    void* r = fn(p4b);

    void* p30 = *(void**)((char*)this + 0x30);
    void** rvt = *(void***)r;
    void* (__thiscall *fn2)(void*, void*) = (void* (__thiscall *)(void*, void*))*(void**)((char*)rvt + 0x170);
    void* name = OgreNodeGetName(p30);
    fn2(r, name);

    void* p4c = *(void**)((char*)this + 4);
    void* p4d = *(void**)((char*)p4c + 4);
    void** vt2 = *(void***)p4d;
    void* (__thiscall *fn3)(void*) = (void* (__thiscall *)(void*))vt2[0xb4/4];
    void* r2 = fn3(p4d);

    void* p34 = *(void**)((char*)this + 0x34);
    void** vt3 = *(void***)r2;
    void (__thiscall *fn4)(void*, void*) = (void (__thiscall *)(void*, void*))vt3[0xe4/4];
    fn4(r2, p34);

    void* p34b = *(void**)((char*)this + 0x34);
    if (p34b) {
        void** vt4 = *(void***)p34b;
        void (__thiscall *fn5)(void*, int) = (void (__thiscall *)(void*, int))vt4[0];
        fn5(p34b, 1);
    }

    void* p98 = *(void**)((char*)this + 0x98);
    if (p98) {
        void** vt5 = *(void***)p98;
        void (__thiscall *fn6)(void*, int) = (void (__thiscall *)(void*, int))vt5[0];
        fn6(p98, 1);
    }

    int n = (int)((char*)vec54end - (char*)vec54);
    if ((n & 0xfffffffc) > 0) {
        int i = 0;
        do {
            int cnt = (int)((char*)vec54end - (char*)vec54) >> 2;
            if ((unsigned)i >= (unsigned)cnt) _invalid_parameter_noinfo();
            void* e = vec54[i];
            if (e) {
                void** vt6 = *(void***)e;
                void (__thiscall *fn7)(void*, int) = (void (__thiscall *)(void*, int))vt6[0];
                fn7(e, 1);
            }
            i++;
            int cnt2 = (int)((char*)vec54end - (char*)vec54) >> 2;
            if (i >= cnt2) break;
        } while (true);
    }

    int n2 = (int)((char*)vec6cend - (char*)vec6c);
    if ((n2 & 0xfffffffc) > 0) {
        int i = 0;
        do {
            int cnt = (int)((char*)vec6cend - (char*)vec6c) >> 2;
            if ((unsigned)i >= (unsigned)cnt) _invalid_parameter_noinfo();
            void* e = vec6c[i];
            if (e) {
                void** vt7 = *(void***)e;
                void (__thiscall *fn8)(void*, int) = (void (__thiscall *)(void*, int))vt7[0];
                fn8(e, 1);
            }
            i++;
            int cnt2 = (int)((char*)vec6cend - (char*)vec6c) >> 2;
            if (i >= cnt2) break;
        } while (true);
    }

    int n3 = (int)((char*)vecacend - (char*)vecac);
    if ((n3 & 0xfffffffc) > 0) {
        int i = 0;
        do {
            int cnt = (int)((char*)vecacend - (char*)vecac) >> 2;
            if ((unsigned)i >= (unsigned)cnt) _invalid_parameter_noinfo();
            void* e = vecac[i];
            void** vt8 = *(void***)e;
            void* (__thiscall *fn9)(void*, int) = (void* (__thiscall *)(void*, int))*(void**)((char*)vt8 + 0x13c);
            void* r3 = fn9(e, 0);
            void* adj = r3 ? (void*)((char*)r3 - 0x20) : 0;
            void* p4e = *(void**)((char*)this + 4);
            void* p4f = *(void**)((char*)p4e + 4);
            void** vt9 = *(void***)p4f;
            void* (__thiscall *fn10)(void*) = (void* (__thiscall *)(void*))*(void**)((char*)vt9 + 0x134);
            void* nm = fn10((char*)adj + 0x20);
            void** vt10 = *(void***)p4f;
            void (__thiscall *fn11)(void*, void*) = (void (__thiscall *)(void*, void*))*(void**)((char*)vt10 + 0x134);
            fn11(p4f, nm);

            void* p4g = *(void**)((char*)this + 4);
            void* p4h = *(void**)((char*)p4g + 4);
            void** vt11 = *(void***)p4h;
            void* (__thiscall *fn12)(void*) = (void* (__thiscall *)(void*))*(void**)((char*)vt11 + 0xb0);
            void* nm2 = fn12(e);
            void** vt12 = *(void***)p4h;
            void (__thiscall *fn13)(void*, void*) = (void (__thiscall *)(void*, void*))*(void**)((char*)vt12 + 0xb0);
            fn13(p4h, nm2);

            i++;
            int cnt2 = (int)((char*)vecacend - (char*)vecac) >> 2;
            if (i >= cnt2) break;
        } while (true);
    }

    void* p9c = *(void**)((char*)this + 0x9c);
    if (p9c) {
        void* p4i = *(void**)((char*)this + 4);
        void* p4j = *(void**)((char*)p4i + 4);
        void** vt13 = *(void***)p4j;
        void* (__thiscall *fn14)(void*) = (void* (__thiscall *)(void*))*(void**)((char*)vt13 + 0xb0);
        void* nm3 = fn14(p9c);
        void** vt14 = *(void***)p4j;
        void (__thiscall *fn15)(void*, void*) = (void (__thiscall *)(void*, void*))*(void**)((char*)vt14 + 0xb0);
        fn15(p4j, nm3);
    }

    int n4 = (int)((char*)listdc.count - (char*)listdc.sentinel);
    (void)n4;
}
