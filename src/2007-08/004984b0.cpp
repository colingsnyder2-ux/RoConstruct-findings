// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Plugin {
    void setPluginManager(void* pluginManager_, void* a, void* b);
};

void Plugin::setPluginManager(void* pluginManager_, void* a, void* b)
{
    void* mgr = pluginManager_;
    void* tmp = a;
    if (mgr) {
        _InterlockedExchangeAdd((volatile long*)((char*)mgr + 4), 1);
    }
    extern void sub_498330(Plugin*, void*, void*);
    sub_498330(this, tmp, b);
    if (mgr) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)mgr + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))mgr)(mgr);
            if (_InterlockedExchangeAdd((volatile long*)((char*)mgr + 8), -1) == 1) {
                (*(void (__thiscall**)(void*))(*(void**)mgr))(mgr);
            }
        }
    }
}
