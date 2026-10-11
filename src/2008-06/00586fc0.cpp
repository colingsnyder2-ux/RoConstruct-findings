// from server: 61% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char pad[0x1c];
    void* field_1c;
};

struct Inner {
    char pad[0x1c];
    void* field_1c;
};

extern "C" int __stdcall sub_55bd60(void*, void*);
extern "C" void* __stdcall sub_80240c(void*, void*);
extern "C" void __stdcall sub_40db00(void*, const char*);
extern "C" void __stdcall sub_586b10(void*, void**);

struct Outer {
    char pad[0x138];
    Inner inner;
    void method(void* arg);
};

void Outer::method(void* arg)
{
    String* s = (String*)arg;
    if (sub_55bd60(&inner, arg)) {
        sub_80240c(&inner, arg);
        inner.field_1c = s->field_1c;
        void* tmp;
        sub_586b10(this, &tmp);
        void* p = tmp;
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                void** vt = *(void***)p;
                ((void (__thiscall*)(void*))vt[1])(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    ((void (__thiscall*)(void*))vt2[2])(p);
                }
            }
        }
        sub_40db00(this, (const char*)0x975738);
    }
}
