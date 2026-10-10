// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VDHTMLWindow_SignalDesc
{
    void* field0;
    void* field4;
    void assign(void* arg1, void* arg2);
};

extern "C" void sub_41c140(void* self, void* arg1, void* arg2);

void VDHTMLWindow_SignalDesc::assign(void* arg1, void* arg2)
{
    this->field0 = arg1;
    sub_41c140(&this->field4, arg1, arg2);
    if (arg1 != 0)
    {
        void** p = (void**)((char*)arg1 + 0xa4);
        if (p != 0)
        {
            *p = arg1;
            void* old = this->field4;
            if (old != 0)
            {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* prev = p[1];
            if (prev != 0)
            {
                if (_InterlockedExchangeAdd((volatile long*)((char*)prev + 8), -1) == 1)
                {
                    void** vtbl = *(void***)prev;
                    void (__stdcall* fn)(void*) = (void (__stdcall*)(void*))vtbl[2];
                    fn(prev);
                }
            }
            p[1] = old;
        }
    }
}
