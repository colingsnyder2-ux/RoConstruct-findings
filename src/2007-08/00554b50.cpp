// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct ServiceProvider {
    char pad0[8];
    void* begin;
    void* end;
    char pad10[4];
    void* field14;
    void addService(void* a, void* b);
};

void ServiceProvider::addService(void* a, void* b)
{
    void* local10 = 0;
    int count;
    if (begin == 0)
        count = 0;
    else
        count = ((char*)end - (char*)begin) >> 2;
    void* saved14 = field14;
    field14 = &local10;
    if ((unsigned)count > 0) {
        int i = 0;
        do {
            if (begin == 0 || (unsigned)i >= (unsigned)(((char*)end - (char*)begin) >> 2))
                _invalid_parameter_noinfo();
            void* item = ((void**)begin)[i];
            void* tmp[2];
            tmp[0] = a;
            tmp[1] = b;
            if (b != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
            }
            addService(item, tmp);
            i++;
        } while ((unsigned)i < (unsigned)count);
    }
    field14 = saved14;
    if (b != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void** vt = *(void***)b;
            ((void (__thiscall*)(void*))vt[1])(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                void** vt2 = *(void***)b;
                ((void (__thiscall*)(void*))vt2[2])(b);
            }
        }
    }
}
