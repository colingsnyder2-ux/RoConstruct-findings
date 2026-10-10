// from server: 20% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MarshaledListener
{
    void* vptr;
    int field4;
    int field8;
    int fieldC;
    char field10[4];
};

extern "C" void __stdcall sub_4A6C60(void*, void*);
extern "C" void __stdcall sub_454150(void*, void*);

void sub_454500(MarshaledListener* self, int a2, int a3, int a4, int a5)
{
    self->vptr = (void*)0x7921F0;
    self->field4 = 0;
    self->field8 = 0;
    self->fieldC = a2;
    sub_4A6C60(self->field10, (void*)&a3);
    sub_454150(self, (void*)a4);
    if (a5)
    {
        if (_InterlockedExchangeAdd((volatile long*)(a5 + 4), -1) == 1)
        {
            (*(void (__stdcall**)(int))(*(int*)a5 + 4))(a5);
            if (_InterlockedExchangeAdd((volatile long*)(a5 + 8), -1) == 1)
            {
                (*(void (__stdcall**)(int))(*(int*)a5 + 8))(a5);
            }
        }
    }
}
