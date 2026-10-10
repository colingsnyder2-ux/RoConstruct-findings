// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MarshaledListener {
    void* vptr;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;

    void method(void* a, void* b, void* c);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl func_4A6C60(void* dst, void* src);
extern "C" void __cdecl func_62FEF6();
extern "C" void __cdecl func_464EC0(void* dst, void* src);
extern "C" void __cdecl func_433140(void* obj, void* arg);
extern "C" void* __cdecl func_454500(void* obj, void* a, void* b);

void MarshaledListener::method(void* a, void* b, void* c) {
    void* mem = operator_new(0x18);
    MarshaledListener* obj = (MarshaledListener*)mem;
    MarshaledListener* result;
    if (obj != 0) {
        func_4A6C60(&a, &a);
        result = (MarshaledListener*)func_454500(obj, this, a);
    } else {
        result = 0;
    }
    func_464EC0((char*)this + 4, &result);
    func_433140(*(void**)((char*)this + 0x18), result);
    if (result != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)result + 4), -1) == 1) {
            void** vt = *(void***)result;
            ((void (__thiscall*)(void*))vt[1])(result);
            if (_InterlockedExchangeAdd((volatile long*)((char*)result + 8), -1) == 1) {
                void** vt2 = *(void***)result;
                ((void (__thiscall*)(void*))vt2[2])(result);
            }
        }
    }
}
