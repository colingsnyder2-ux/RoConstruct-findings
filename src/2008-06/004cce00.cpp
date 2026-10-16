// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct BoundFuncDesc {
    void* field0;
    unsigned int field4;
    void* field8;
    void* fieldC;
    unsigned char field10;
    char field11;
    void* construct(unsigned int size);
};

struct BitStream {
    void Reset();
    void Grow(unsigned int size);
};

struct PhysicsSender {
    char pad0[0x38];
    void* field38;
    void* field3c;
    void sendPacket();
};

extern "C" void* __cdecl sub_4a50c0(unsigned int size);
extern "C" void __cdecl sub_4a51c0(BitStream* bs);
extern "C" void __cdecl sub_4a51a0(BitStream* bs);
extern "C" void __cdecl sub_4a6350(void* dst, unsigned int size);
extern "C" void* __cdecl sub_4c9910();
extern "C" void __cdecl sub_4a61a0(void* dst, void* src);
extern "C" void __cdecl sub_4a8ae0(void* self, void* arg);
extern "C" void __cdecl sub_4c9d90(void* self, void* arg);
extern "C" char __cdecl sub_4ca980(void* self, void* a, void* b);
extern "C" void __cdecl sub_4cca10(void* self, void* a, void* b, void* c);
extern "C" void* __cdecl sub_4ccc30(void* self, void* a, void* b);
extern "C" void* __cdecl sub_598cb0(void* self);
extern "C" int __cdecl sub_5e7570(void* self);

extern float g_93cc40;

void PhysicsSender::sendPacket()
{
    void* local18;
    void* p = (char*)this + 4;
    if (p != 0) {
        local18 = (char*)p + 0xc;
    } else {
        local18 = 0;
    }

    void* a = *(void**)((char*)this + 0x3c);
    void* ecx = *(void**)((char*)a + 0x2d50);
    void* esi = *(void**)((char*)a + 0x2d58);
    void* eax = *(void**)((char*)a + 0x2d54);
    void** vt = *(void***)ecx;
    void* fn = vt[0xb0/4];
    typedef void* (__thiscall *Fn)(void*, void*, void*);
    void* ret = ((Fn)fn)(ecx, eax, esi);
    int edi = (int)ret;
    void* g = sub_4c9910();
    edi += *(int*)((char*)g + 0x144);

    char bs[0x100];
    sub_4a50c0((unsigned int)edi);
    sub_4a51c0((BitStream*)bs);

    int local14 = 0;
    char local13 = 0;
    int local1c = edi;

    void* esi2 = local18;
    void* eax2;
    if (esi2 != 0) {
        eax2 = (char*)esi2 - 0xc;
    } else {
        eax2 = 0;
    }
    unsigned int v = *(unsigned int*)((char*)eax2 + 4);
    if (*(unsigned int*)((char*)this + 0x38) == v) {
        if (local13 != 0) {
            void* c = *(void**)((char*)this + 0x3c);
            sub_4a8ae0(c, bs);
            void* a2 = *(void**)((char*)this + 0x3c);
            void* esi3 = *(void**)((char*)a2 + 0x2d58);
            void* ecx2 = *(void**)((char*)a2 + 0x2d50);
            void* eax3 = *(void**)((char*)a2 + 0x2d54);
            void** vt2 = *(void***)ecx2;
            void* fn2 = vt2[0x34/4];
            typedef void (__thiscall *Fn2)(void*, void*, void*, void*, int, int, void*);
            ((Fn2)fn2)(ecx2, eax3, esi3, 0, 4, 2, bs);
        }
        goto done;
    }

    for (;;) {
        if (local13 == 0) {
            if (local14 >= local1c) {
                goto done;
            }
            sub_4a51c0((BitStream*)bs);
            local14++;
            sub_4a6350(bs, 0x18);
            local13 = 1;
            void* r = sub_4c9910();
            sub_4a61a0(bs, r);
            sub_4a6350((char*)bs + 0x10, 0x50);
        }

        void* f38 = *(void**)((char*)this + 0x38);
        char tmp[0x10];
        sub_4c9d90(tmp, f38);
        char out;
        out = sub_4ca980(this, tmp, bs);
        if (out != 0) {
            void* c = *(void**)((char*)tmp + 0x228);
            int r = sub_5e7570((char*)c + 0x228);
            if (r != 0) {
                float f = g_93cc40;
                void* c2 = *(void**)((char*)tmp + 0x228);
                void* s = sub_598cb0(c2);
                char buf[0x24];
                for (int i = 0; i < 9; i++) ((int*)buf)[i] = ((int*)s)[i];
                float f1 = *(float*)((char*)s + 0x24);
                float f2 = *(float*)((char*)s + 0x28);
                float f3 = *(float*)((char*)s + 0x2c);
                void* edx = *(void**)((char*)this + 0x38);
                void* ecx3 = local18;
                if (ecx3 != 0) ecx3 = (char*)ecx3 - 0xc;
                else ecx3 = 0;
                sub_4cca10((void*)0x4c9cf0, ecx3, edx, buf);
                void* f38b = *(void**)((char*)this + 0x38);
                void* eax4;
                if (f38b != 0) eax4 = (char*)f38b + 0x60;
                else eax4 = 0;
                void* ecx4 = *(void**)((char*)eax4 + 8);
                if (ecx4 != 0) {
                    void* e = ecx4;
                    for (;;) {
                        void* n = *(void**)((char*)e + 4);
                        if (n == 0) break;
                        e = n;
                    }
                    eax4 = e;
                } else {
                    void* ecx5 = *(void**)eax4;
                    ecx5 = (void*)((unsigned int)ecx5 & 0xfffffffe);
                    while (eax4 == *(void**)((char*)ecx5 + 8)) {
                        eax4 = ecx5;
                        ecx5 = *(void**)ecx5;
                        ecx5 = (void*)((unsigned int)ecx5 & 0xfffffffe);
                    }
                    if (*(void**)((char*)eax4 + 8) != ecx5) {
                        eax4 = ecx5;
                    }
                }
                if (eax4 != 0) {
                    *(void**)((char*)this + 0x38) = (char*)eax4 - 0x60;
                } else {
                    *(void**)((char*)this + 0x38) = 0;
                }
            } else {
                void* f38c = *(void**)((char*)this + 0x38);
                void* r2 = sub_4ccc30(this, tmp, f38c);
                *(void**)((char*)this + 0x38) = *(void**)r2;
            }
        }

        {
            int sz = *(int*)bs;
            sz = (sz + 7) >> 3;
            if ((unsigned int)sz > (unsigned int)local1c) {
                sub_4a8ae0(*(void**)((char*)this + 0x3c), bs);
                void* a3 = *(void**)((char*)this + 0x3c);
                void* esi4 = *(void**)((char*)a3 + 0x2d58);
                void* ecx6 = *(void**)((char*)a3 + 0x2d50);
                void* eax5 = *(void**)((char*)a3 + 0x2d54);
                void** vt3 = *(void***)ecx6;
                void* fn3 = vt3[0x34/4];
                typedef void (__thiscall *Fn3)(void*, void*, void*, void*, int, int, void*);
                ((Fn3)fn3)(ecx6, eax5, esi4, 0, 4, 2, bs);
                local13 = 0;
            }
        }

        void* esi5 = *(void**)((char*)tmp + 0x2c);
        if (esi5 != 0) {
            long old = _InterlockedExchangeAdd((volatile long*)((char*)esi5 + 4), -1);
            if (old == 1) {
                void** vt4 = *(void***)esi5;
                void* fn4 = vt4[1];
                typedef void (__thiscall *Fn4)(void*);
                ((Fn4)fn4)(esi5);
                long old2 = _InterlockedExchangeAdd((volatile long*)((char*)esi5 + 8), -1);
                if (old2 == 1) {
                    void** vt5 = *(void***)esi5;
                    void* fn5 = vt5[2];
                    typedef void (__thiscall *Fn5)(void*);
                    ((Fn5)fn5)(esi5);
                }
            }
        }
    }

done:
    sub_4a51a0((BitStream*)bs);
}
