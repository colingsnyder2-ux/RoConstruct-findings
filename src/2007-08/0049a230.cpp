// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Client {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void destroy();
};

void Client::destroy()
{
    if (this->field8 != 0) {
        void* p = this->fieldC;
        void* f = this->field8;
        this->fieldC = ((void* (__stdcall*)(void*, int))f)(p, 1);
    }
    this->field8 = 0;
    this->field10 = 0;

    void* obj = this->field4;
    if (obj != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
            void** vt = *(void***)obj;
            ((void (__stdcall*)(void*))vt[1])(obj);
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                void** vt2 = *(void***)obj;
                ((void (__stdcall*)(void*))vt2[2])(obj);
            }
        }
    }
}
