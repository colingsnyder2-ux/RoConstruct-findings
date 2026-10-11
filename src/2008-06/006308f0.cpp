// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedPtr {
    void* vptr;
    void* obj;
};

struct BodyMover {
    char pad[0x130];
    SharedPtr field130;
    void* field13c;
    SharedPtr field140;
    void* field144;
    void func(void* arg);
};

extern "C" void __stdcall sub_55acc0(void*);
extern "C" void* __stdcall sub_5a3390(void*);
extern "C" void* __stdcall sub_5cab00(void*, void*);
extern "C" void* __stdcall sub_5e9150(void*, void*);
extern "C" void __stdcall sub_5fad50(void*);
extern "C" void __stdcall sub_5fad80(void*);
extern "C" void* __stdcall sub_618a40(void*, void*, void*, void*, void*, void*, void*);
extern "C" void* __stdcall sub_6a17c6(void*, void*, void*, void*, void*);

void BodyMover::func(void* arg)
{
    void** p = (void**)arg;
    sub_55acc0(arg);
    if (p[0] != this)
        goto cleanup;

    {
        void* eax = p[2];
        void* r = sub_6a17c6(eax, 0, (void*)0x92907c, (void*)0x92dd50, 0);
        void* tmp[1];
        sub_618a40(tmp, r, 0, 0, 0, 0, 0);
        void* src = tmp[0];
        this->field140.vptr = *(void**)src;
        void* obj = *((void**)src + 1);
        tmp[0] = 0;
        if (obj) {
            _InterlockedExchangeAdd((volatile long*)((char*)obj + 8), 1);
        }
        void* old = this->field144;
        if (old) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt = *(void***)old;
                void (*fn)(void*) = (void (*)(void*))vt[2];
                fn(old);
            }
        }
        this->field144 = obj;
        void* tmp2 = tmp[0];
        tmp[0] = (void*)-1;
        if (tmp2) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp2 + 4), -1) == 1) {
                void** vt = *(void***)tmp2;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(tmp2);
                if (_InterlockedExchangeAdd((volatile long*)((char*)tmp2 + 8), -1) == 1) {
                    void** vt2 = *(void***)tmp2;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(tmp2);
                }
            }
        }
    }

    {
        void* tmp[1];
        void* r = sub_5cab00(&this->field140, tmp);
        void* result;
        if (*(void**)r != 0) {
            result = sub_5a3390(this);
        } else {
            result = 0;
        }
        void* tmp2 = tmp[0];
        tmp[0] = (void*)-1;
        if (tmp2) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp2 + 4), -1) == 1) {
                void** vt = *(void***)tmp2;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(tmp2);
                if (_InterlockedExchangeAdd((volatile long*)((char*)tmp2 + 8), -1) == 1) {
                    void** vt2 = *(void***)tmp2;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(tmp2);
                }
            }
        }
        void* old = this->field13c;
        if (old != result) {
            if (old) {
                void* r2 = sub_5e9150(&this->field130, old);
                sub_5fad80(r2);
            }
            this->field13c = result;
            if (result) {
                void* r3 = sub_5e9150(&this->field130, result);
                sub_5fad50(r3);
            }
        }
    }

cleanup:
    ;
}
