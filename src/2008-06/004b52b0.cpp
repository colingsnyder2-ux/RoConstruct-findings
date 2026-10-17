// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Func0 {
    void* vptr;
    void* obj;
};

struct TypedStatsItem {
    void* vptr;
    Func0 func;
    void* value;
    unsigned char flag;
};

extern "C" void __cdecl func_4abd20(void*, void*);
extern "C" void __cdecl func_4aec10(void*, void*, void*);
extern "C" void __cdecl func_4ab8c0(void*);
extern "C" void __cdecl func_4025b0(void*, void*);
extern "C" void __cdecl func_4b4410(void*, void*);
extern "C" void __cdecl func_4a3340(void*, void*, void*, void*);
extern "C" void __cdecl func_5953f0(void*, void*);
extern "C" void __cdecl func_595370(void*);
extern "C" void __cdecl func_49f710(void*);
extern "C" void __cdecl func_4af830(void*, void*, void*, void*);
extern "C" void __cdecl func_4b4d80(void*, void*);
extern "C" void __cdecl func_42b680(void*, void*, void*, void*);
extern "C" void __cdecl func_4aea80(void*);
extern "C" void __cdecl func_595230(void*);

extern unsigned char g_byte_971648;

struct TypedStatsItemClass {
    TypedStatsItem* method(void* arg1, void* arg2, void* arg3);
};

TypedStatsItem* TypedStatsItemClass::method(void* arg1, void* arg2, void* arg3)
{
    void* self = this;
    unsigned char localbuf[0x8c];
    (void)localbuf;

    void* v1 = 0;
    unsigned char b1 = 0;

    void* tmp1[8];
    tmp1[0] = arg1;
    func_4abd20(tmp1, &v1);

    void* tmp2[4];
    func_4aec10((char*)self + 0x2c38, tmp2, tmp1);

    func_4ab8c0(tmp1);
    func_4ab8c0(&v1);

    void* eax = tmp2[0];
    void* ebp = *(void**)0x802890;

    if (b1 == 0) {
        if (eax == 0) {
            ((void(*)())ebp)();
            void* esi = tmp2[1];
            if (esi != *(void**)((char*)0 + 0x18)) {
                ((void(*)())ebp)();
            }
            void* ecx = arg1;
            esi = (char*)esi + 0x10;
            *(void**)esi = ecx;
            func_4025b0((char*)esi + 4, arg2);
            void* fn = (void*)0x4aff70;
            void* zero = 0;
            void* local[2];
            local[0] = fn;
            local[1] = zero;
            *(unsigned char*)((char*)esi + 0x28) = 0;
            void* local2[2];
            local2[0] = self;
            func_4b4410(local2, local);
            void* p = arg1;
            if (p != 0) {
                p = (char*)p + 0x14;
            } else {
                p = 0;
            }
            void* out[4];
            func_4a3340((void*)0x973e90, out, p, local2);
            func_5953f0((char*)esi + 8, out);
            func_595370(out);
            func_49f710(local2);
            if (*(unsigned char*)((char*)arg2 + 4) != 0) {
                void* a = arg1;
                void* b = *(void**)((char*)arg2 + 8);
                void* local3[2];
                local3[0] = a;
                local3[1] = b;
                if (a != 0) {
                    _InterlockedExchangeAdd((volatile long*)((char*)a + 4), 1);
                }
                void* out2[4];
                func_4af830(out2, (void*)0x4b0540, 0, self);
                func_4b4d80(local2, out2);
                void* p2 = arg1;
                if (p2 != 0) {
                    p2 = (char*)p2 + 0x14;
                } else {
                    p2 = 0;
                }
                void* out3[4];
                func_42b680((void*)0x973f48, out3, p2, local2);
                func_5953f0((char*)esi + 0x18, out3);
                func_595370(out3);
                func_49f710(local2);
                void* rc = *(void**)((char*)arg2 + 0x10);
                if (rc != 0) {
                    if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                        void* vt = *(void**)rc;
                        ((void(*)(void*))*(void**)((char*)vt + 4))(rc);
                        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                            void* vt2 = *(void**)rc;
                            ((void(*)(void*))*(void**)((char*)vt2 + 8))(rc);
                        }
                    }
                }
            }
            void* rc2 = *(void**)((char*)arg2 + 0x10);
            if (rc2 != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)rc2 + 4), -1) == 1) {
                    void* vt = *(void**)rc2;
                    ((void(*)(void*))*(void**)((char*)vt + 4))(rc2);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)rc2 + 8), -1) == 1) {
                        void* vt2 = *(void**)rc2;
                        ((void(*)(void*))*(void**)((char*)vt2 + 8))(rc2);
                    }
                }
            }
            return (TypedStatsItem*)esi;
        } else {
            eax = *(void**)eax;
            goto loop1;
        }
    } else {
        if (eax == 0) {
            ((void(*)())ebp)();
            void* esi = tmp2[1];
            if (esi != *(void**)((char*)0 + 0x18)) {
                ((void(*)())ebp)();
            }
            void* ebp2 = (char*)esi + 0x10;
            if (*(unsigned char*)((char*)arg2 + 4) == 0) {
                func_595230((char*)ebp2 + 0x18);
            } else {
                void* p = *(void**)((char*)ebp2 + 0x1c);
                void* esi2 = (char*)ebp2 + 0x18;
                if (p != 0 && *(void**)((char*)p + 8) != 0) {
                    goto done;
                }
                void* a = arg1;
                void* b = *(void**)((char*)arg2 + 8);
                void* local3[2];
                local3[0] = a;
                local3[1] = b;
                if (a != 0) {
                    _InterlockedExchangeAdd((volatile long*)((char*)a + 4), 1);
                }
                void* out2[4];
                func_4af830(out2, (void*)0x4b0540, 0, self);
                void* local2[2];
                func_4b4d80(local2, out2);
                void* p2 = arg1;
                if (p2 != 0) {
                    p2 = (char*)p2 + 0x14;
                } else {
                    p2 = 0;
                }
                void* out3[4];
                func_42b680((void*)0x973f48, out3, p2, local2);
                func_5953f0(esi2, out3);
                func_595370(out3);
                func_49f710(local2);
                func_4aea80(local3);
            }
        done:
            void* rc = *(void**)((char*)arg2 + 0x10);
            if (rc != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                    void* vt = *(void**)rc;
                    ((void(*)(void*))*(void**)((char*)vt + 4))(rc);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                        void* vt2 = *(void**)rc;
                        ((void(*)(void*))*(void**)((char*)vt2 + 8))(rc);
                    }
                }
            }
            return (TypedStatsItem*)ebp2;
        } else {
            eax = *(void**)eax;
            goto loop1;
        }
    }
loop1:
    goto loop1;
}
