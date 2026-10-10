// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refs;
    long weakrefs;
};

struct Obj {
    void* vptr;
};

struct PropDesc {
    void* vptr;
};

struct VPlayer {
    char pad0[0xc0];
    void* field_c0;
};

struct Holder {
    void* vptr;
    long refs;
    long weakrefs;
};

struct String {
    char buf[0x1c];
};

extern "C" void __cdecl string_ctor(String* self, const char* s);
extern "C" void __cdecl string_dtor(String* self);

extern "C" bool __fastcall sub_4915f0(VPlayer* self, void* edx, int a, VPlayer* b);
extern "C" PropDesc* __fastcall sub_488060(VPlayer* self, void* edx);
extern "C" void __fastcall sub_541630(void* self, void* edx, VPlayer* a);
extern "C" void __fastcall sub_488d80(void* self, void* edx, void* out);
extern "C" VPlayer* __fastcall sub_48e170(VPlayer* self, void* edx);
extern "C" unsigned int __fastcall sub_487c10(VPlayer* self, void* edx);
extern "C" void __fastcall sub_5405e0(void* self, void* edx, void* out);
extern "C" void __cdecl sub_412dc0(void* out, void* in);
extern "C" void __cdecl sub_630b9e(void* a, void* b);

void VPlayer_rebuildBackpack(VPlayer* self)
{
    if (!sub_4915f0(self, 0, 1, self)) {
        String s;
        string_ctor(&s, "rebuildBackpack can only be called by the backend server");
        sub_412dc0(&s, 0);
        sub_630b9e(&s, (void*)0x8410c0);
        string_dtor(&s);
    }

    PropDesc* p;
    while ((p = sub_488060(self, 0)) != 0) {
        sub_541630(p, 0, self);
    }

    void* pair[2];
    sub_488d80(self, 0, pair);
    void* a = pair[0];
    void* b = pair[1];
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }

    void* old = pair[1];
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void** vt = *(void***)old;
            ((void (__fastcall*)(void*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__fastcall*)(void*))vt2[2])(old);
            }
        }
    }

    sub_541630(a, 0, self);

    VPlayer* bp = sub_48e170(self, 0);
    if (bp) {
        unsigned int n = sub_487c10(bp, 0);
        unsigned int i = 0;
        while (i < n) {
            void* arr = *(void**)((char*)bp + 0xc0);
            void* base = *(void**)((char*)arr + 4);
            void* end = *(void**)((char*)arr + 8);
            if (!base || i >= (unsigned int)(((char*)end - (char*)base) >> 3)) {
                _invalid_parameter_noinfo();
            }
            void* elem = *(void**)((char*)base + i * 8);
            void* out;
            sub_5405e0(elem, 0, &out);
            sub_541630(out, 0, self);
            void* tmp = out;
            if (tmp) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 4), -1) == 1) {
                    void** vt = *(void***)tmp;
                    ((void (__fastcall*)(void*))vt[1])(tmp);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 8), -1) == 1) {
                        void** vt2 = *(void***)tmp;
                        ((void (__fastcall*)(void*))vt2[2])(tmp);
                    }
                }
            }
            i++;
            n = sub_487c10(bp, 0);
        }
    }

    void* last = pair[1];
    if (last) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)last + 4), -1) == 1) {
            void** vt = *(void***)last;
            ((void (__fastcall*)(void*))vt[1])(last);
            if (_InterlockedExchangeAdd((volatile long*)((char*)last + 8), -1) == 1) {
                void** vt2 = *(void***)last;
                ((void (__fastcall*)(void*))vt2[2])(last);
            }
        }
    }
}
