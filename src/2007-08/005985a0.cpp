// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct AIFleeController
{
    void* vtable0;
    void* vtable1;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;

    void destruct();
};

extern "C" void __stdcall sub_432530(void*, void*);

void AIFleeController::destruct()
{
    this->vtable0 = (void*)0x7b1240;
    this->vtable1 = (void*)0x7b1234;

    if (this->field10)
    {
        sub_432530((char*)this->field10 + 0xe8, &this->vtable1);
    }

    if (this->field1C)
    {
        void* p = this->field1C;
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
        {
            void** vt = *(void***)p;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[2];
            fn(p);
        }
    }

    if (this->field14)
    {
        void* p = this->field14;
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
        {
            void** vt = *(void***)p;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[1];
            fn(p);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
        {
            void** vt = *(void***)p;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[2];
            fn(p);
        }
    }

    this->vtable1 = (void*)0x795b60;
    this->vtable0 = (void*)0x797984;
}
