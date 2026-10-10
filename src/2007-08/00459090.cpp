// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxWnd {
    void* field_0;
    void* field_4;
    void func_00459090(void* arg1, void* arg2);
};

void CRobloxWnd::func_00459090(void* arg1, void* arg2) {
    void* local_esi = arg1;
    void* local_edi;
    void* local_ecx;
    void* local_edx;
    void* local_eax;

    this->field_0 = local_esi;
    ((CRobloxWnd*)((char*)this + 4))->func_00459090(local_esi, arg2);

    if (local_esi != 0) {
        local_edi = (char*)local_esi + 0xa4;
        if (local_edi != 0) {
            *(void**)local_edi = local_esi;
            local_esi = this->field_4;
            if (local_esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)local_esi + 8), 1);
            }
            local_ecx = *(void**)((char*)local_edi + 4);
            if (local_ecx != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)local_ecx + 8), -1) == 1) {
                    local_eax = *(void**)local_ecx;
                    local_edx = *(void**)((char*)local_eax + 8);
                    ((void (__thiscall*)(void*))local_edx)(local_ecx);
                }
            }
            *(void**)((char*)local_edi + 4) = local_esi;
        }
    }
}
