// from server: 68% by colin




struct SleepStageArg;

struct SleepStage {
    void* vtbl;
    char pad[4];
    void* field8;
    char pad2[0x10];
    void* field1c;
    char pad3[4];
    void* field24;
    int someFunc(SleepStageArg* arg, int param2);
};

struct SleepStageArg {
    char pad0[4];
    void* field4;
    char pad2[0x10];
    int* field18;
    char pad3[8];
    void* field24;
};

extern "C" {
    int __stdcall sub_5e8c40(void* a, void* b, void* c);
    int __stdcall sub_5e9f60(void* a, void* b);
    int __stdcall sub_613e80(void* a);
    int __stdcall sub_614040(void* a, void* b);
    int __stdcall sub_614170(void* a);
    int __stdcall sub_64a550(void* a, int b, void* c);
    int __stdcall sub_64d200(void* a, void* b);
    int __stdcall sub_64d2a0(void* a, void* b);
}

extern int g_97d580;
extern char g_97d568;

int SleepStage::someFunc(SleepStageArg* arg, int param2) {
    int edi;
    if (arg->field4 != 0) {
        int t1 = ((int (__thiscall*)(void*))((*(void***)arg->field4)[1]))(arg->field4);
        int t2 = ((int (__thiscall*)(SleepStage*))((*(void***)this)[1]))(this);
        if (t1 >= t2) {
            edi = *arg->field18;
        } else {
            edi = 0;
        }
    } else {
        edi = 0;
    }

    int local20;
    int r1 = sub_64a550(this, edi, &local20);
    sub_5e9f60((void*)r1, &local20);

    int ebp = param2;
    int local14;
    int r2 = sub_64a550(this, ebp, &local14);
    sub_5e8c40((void*)r2, &local14, &local20);

    if ((edi == 4 || edi == 5) && ebp != 4 && ebp != 5) {
        void* p = *(void**)((char*)arg->field24 + 0x1c);
        void* q = *(void**)((char*)p + 0xa0);
        void* r = *(void**)((char*)q + 0x10);
        void* s = *(void**)((char*)r + 0x2c);
        if (s != 0) {
            sub_613e80(s);
        }
    }

    if (ebp == 3) {
        int t1 = ((int (__thiscall*)(void*))((*(void***)arg->field4)[1]))(arg->field4);
        int t2 = ((int (__thiscall*)(SleepStage*))((*(void***)this)[1]))(this);
        if (t1 <= t2) {
            sub_64d200(this->field8, arg);
        }
    } else if (ebp == 4 || ebp == 5) {
        if (!(g_97d580 & 1)) {
            g_97d580 |= 1;
            sub_614170(&g_97d568);
        }
        void* p = *(void**)((char*)arg->field24 + 0x1c);
        void* q = *(void**)((char*)p + 0xa0);
        sub_614040(q, &g_97d568);
    }

    if (ebp == 4 || ebp == 5 || ebp == 6) {
        int t1 = ((int (__thiscall*)(SleepStage*))((*(void***)this)[1]))(this);
        void* f4 = arg->field4;
        int t2 = ((int (__thiscall*)(void*))((*(void***)f4)[1]))(f4);
        if (t2 > t1) {
            sub_64d2a0(this->field8, arg);
        }
    }

    int* p18 = arg->field18;
    p18[1] = 0;
    *p18 = ebp;
    return 0;
}
