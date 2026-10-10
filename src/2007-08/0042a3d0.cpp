// from server: 42% by colin
struct LogManager {
    void* log;
    unsigned long threadID;
    char name[8];
    LogManager(const char* n);
};

struct ThreadLogManager : LogManager {
    ThreadLogManager();
    static ThreadLogManager* getCurrent();
};

extern "C" void* __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_725f70(void*);
extern "C" void* __stdcall sub_726210(void*, void*);
extern "C" void* __stdcall sub_725a20(void*, void*);
extern "C" void* __stdcall sub_62fef6(unsigned int);
extern "C" void* __stdcall sub_572180();
extern "C" unsigned long __stdcall GetCurrentThreadId();
extern "C" void* __stdcall sub_77e698(void*, const char*);

extern void* g_8bb8dc;
extern void* g_8bb8ec;

ThreadLogManager* ThreadLogManager::getCurrent()
{
    sub_725520(&g_8bb8ec, (void*)0x42a360);
    void* mgr = g_8bb8dc;
    void* cur = sub_725f70(mgr);
    if (cur != 0)
        return (ThreadLogManager*)cur;

    ThreadLogManager* tlm = (ThreadLogManager*)sub_62fef6(0x28);
    if (tlm != 0)
    {
        void* edi = sub_572180();
        *(void**)tlm = (void*)0x789fa4;
        *(void**)((char*)tlm + 4) = 0;
        unsigned long tid = GetCurrentThreadId();
        *(unsigned long*)((char*)tlm + 8) = tid;
        sub_77e698((char*)tlm + 0xc, (const char*)edi);
        *(void**)tlm = (void*)0x78a158;
    }
    else
    {
        tlm = 0;
    }

    void* mgr2 = g_8bb8dc;
    void* cur2 = sub_725f70(mgr2);
    if (cur2 != tlm)
    {
        sub_726210(mgr2, tlm);
        if (cur2 != 0)
            sub_725a20(mgr2, cur2);
    }
    return tlm;
}
