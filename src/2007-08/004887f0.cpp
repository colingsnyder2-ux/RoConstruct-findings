// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RESOLUTIONENTRY {
    int width;
    int height;
};

struct CRenderSettings {
    char pad0[8];
    RESOLUTIONENTRY* begin;
    RESOLUTIONENTRY* end;
    char pad1[4];
    void* field14;
    void addResolution(RESOLUTIONENTRY* entry);
    void setFullscreenSize(RESOLUTIONENTRY* entry, int count);
};

void CRenderSettings::setFullscreenSize(RESOLUTIONENTRY* entry, int count)
{
    int i = 0;
    int total = 0;
    if (begin != 0)
        total = (int)(((char*)end - (char*)begin) >> 2);
    void* saved = field14;
    field14 = &saved;
    if (total > 0) {
        while (i < total) {
            if (begin == 0 || (unsigned)i >= (unsigned)(((char*)end - (char*)begin) >> 2))
                _invalid_parameter_noinfo();
            RESOLUTIONENTRY* cur = &begin[i];
            RESOLUTIONENTRY copy = *cur;
            if (entry != 0)
                _InterlockedExchangeAdd((volatile long*)((char*)entry + 4), 1);
            addResolution(&copy);
            i++;
        }
    }
    field14 = saved;
    if (entry != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)entry + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))entry)(entry);
            if (_InterlockedExchangeAdd((volatile long*)((char*)entry + 8), -1) == 1)
                (*(void(__thiscall**)(void*))(*(void**)entry))(entry);
        }
    }
}
