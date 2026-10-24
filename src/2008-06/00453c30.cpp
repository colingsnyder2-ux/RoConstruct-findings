// from server: 32% by colin
// roc-cl: 21022
// roc-flags: /GS- /EHsc /MD /O2 /Ob0 /Oy-
// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" unsigned long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Result* f(Result* output);
};

struct Doc {
    void* field0;
    void* field4;
    unsigned char pad[0x8c];
    void* field94;
    void __cdecl method(void* arg);
};

extern "C" void* __stdcall sub_6a9640(void* self, void* arg);
extern "C" void* __stdcall sub_6a81e0(void* self);
extern "C" void __stdcall sub_40e470(void* self, int arg);
extern "C" void* __stdcall sub_569620(void* arg);
extern "C" void __stdcall sub_5693a0(void* a, void* b, int c, void* d);
extern "C" int __stdcall sub_55bd10(void* arg);
extern "C" void __stdcall sub_615440(void* dst, void* src);
extern "C" void* __stdcall sub_561f20(void* arg);
extern "C" void __stdcall sub_451300(void* a, void* b, int c);
extern "C" void* __stdcall sub_46a940(void* self, void* arg);
extern "C" void* __stdcall sub_42dfd0(void* self);
extern "C" void __stdcall sub_5b03b0(void* self, int a, void* b, void* c);
extern "C" void __stdcall sub_5773c0(void* self);
extern "C" void* __stdcall sub_41eea0(void* self);
extern "C" void __stdcall sub_411b40(void* self);

extern "C" void* __stdcall ostringstream_ctor(void* self, int mode);
extern "C" void __stdcall ostringstream_dtor(void* self);
extern "C" void __stdcall ostringstream_str(void* out, void* self);
extern "C" void __stdcall string_ctor(void* self, const char* s);
extern "C" void __stdcall string_dtor(void* self);
extern "C" void* __stdcall string_assign(void* self, void* other);
extern "C" const char* __stdcall string_c_str(void* self);

extern void* g_817eac;
extern void* g_817ea8;

void Doc::method(void* arg)
{
    void** pArg = (void**)arg;
    void* esi = pArg[3];
    int* pType = (int*)((char*)esi + 0xfc);
    if (*pType != 5)
        return;

    void* local8 = 0;
    sub_6a9640(esi, &local8);
    void* str1 = (void*)0;
    ostringstream_ctor(&str1, 0);
    string_ctor(&str1, (const char*)0);
    string_dtor(&local8);

    void* obj = sub_6a81e0(esi);
    void** vtable = *(void***)obj;
    int (__stdcall *fn)(void*, void*, int) = (int (__stdcall *)(void*, void*, int))vtable[0x214/4];
    int res = fn(obj, str1, -1);
    if (res == -1) {
        const char* cs = string_c_str(&str1);
        void* hwnd = *(void**)((char*)esi + 0x178);
        void* hwnd2 = *(void**)((char*)hwnd + 0x20);
        SendMessageA(hwnd2, 0x181, 0, (long)cs);
        void* hwnd3 = *(void**)((char*)esi + 0x178);
        void* hwnd4 = *(void**)((char*)hwnd3 + 0x20);
        int r2 = (int)SendMessageA(hwnd4, 0x18b, 0, 0);
        if (r2 > 10) {
            void* hwnd5 = *(void**)((char*)esi + 0x178);
            void* hwnd6 = *(void**)((char*)hwnd5 + 0x20);
            int r3 = (int)SendMessageA(hwnd6, 0x18b, 0, 0);
            sub_40e470(esi, r3 - 1);
        }
    }

    void** vtable2 = *(void***)esi;
    void (__stdcall *fn2)(void*, int) = (void (__stdcall *)(void*, int))vtable2[0x68/4];
    fn2(esi, 0);

    void* local18 = 0;
    sub_569620(&local18);
    void* edi = *(void**)local18;
    const char* cs2 = string_c_str(&str1);
    sub_5693a0(edi, 0, (int)&g_817eac, (void*)cs2);

    void* ref = *(void**)((char*)&local18 + 4);
    if (ref) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
            void** vt = *(void***)ref;
            ((void (__stdcall*)(void*))vt[1])(ref);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                void** vt2 = *(void***)ref;
                ((void (__stdcall*)(void*))vt2[2])(ref);
            }
        }
    }

    if (sub_55bd10(&str1)) {
        char oss[0x20];
        sub_615440(oss, &str1);

        Result res1;
        Result* pr = ((S*)this)->f(&res1);
        void* ctrl = *(void**)pr;
        if (ctrl) {
            ctrl = (void*)sub_41eea0(ctrl);
        } else {
            ctrl = 0;
        }

        void* local28 = 0;
        void* out = sub_561f20(&local28);
        void* edi2 = *(void**)out;
        *(void**)out = 0;

        if (local28) {
            void** vt = *(void***)local28;
            void* base = (char*)local28 + (int)vt[1];
            void** vt2 = *(void***)base;
            ((void (__stdcall*)(void*, int))vt2[0])(base, 1);
        }

        void* ref2 = *(void**)((char*)&res1 + 4);
        if (ref2) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref2 + 4), -1) == 1) {
                void** vt = *(void***)ref2;
                ((void (__stdcall*)(void*))vt[1])(ref2);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ref2 + 8), -1) == 1) {
                    void** vt2 = *(void***)ref2;
                    ((void (__stdcall*)(void*))vt2[2])(ref2);
                }
            }
        }

        char buf[0x20];
        ostringstream_ctor(buf, 2);
        sub_451300(buf, edi2, 0x1000);
        void* str2 = 0;
        ostringstream_str(&str2, buf);
        string_assign(&str1, &str2);
        string_dtor(&str2);
        ostringstream_dtor(buf);

        if (edi2) {
            void** vt = *(void***)edi2;
            void* base = (char*)edi2 + (int)vt[1];
            void** vt2 = *(void***)base;
            ((void (__stdcall*)(void*, int))vt2[0])(base, 1);
        }
    }

    Result res2;
    Result* pr2 = ((S*)this)->f(&res2);
    void* ctrl2b = *(void**)((char*)pr2 + 4);
    if (ctrl2b) {
        _InterlockedExchangeAdd((volatile long*)((char*)ctrl2b + 4), 1);
    }

    void* local54 = 0;
    sub_411b40(&local54);

    void* ref3 = *(void**)((char*)&res2 + 4);
    if (ref3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref3 + 4), -1) == 1) {
            void** vt = *(void***)ref3;
            ((void (__stdcall*)(void*))vt[1])(ref3);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref3 + 8), -1) == 1) {
                void** vt2 = *(void***)ref3;
                ((void (__stdcall*)(void*))vt2[2])(ref3);
            }
        }
    }

    void* field94 = *(void**)((char*)this + 0x94);
    void* r4 = sub_46a940(field94, &local18);
    void* edi3 = *(void**)r4;
    const char* cs3 = string_c_str(&str1);
    void* r5 = sub_42dfd0(edi3);
    sub_5b03b0(r5, 3, (void*)cs3, (void*)&g_817ea8);

    void* ref4 = *(void**)((char*)&local54 + 4);
    if (ref4) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref4 + 4), -1) == 1) {
            void** vt = *(void***)ref4;
            ((void (__stdcall*)(void*))vt[1])(ref4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref4 + 8), -1) == 1) {
                void** vt2 = *(void***)ref4;
                ((void (__stdcall*)(void*))vt2[2])(ref4);
            }
        }
    }

    sub_5773c0(&local54);
    string_dtor(&str1);
}
