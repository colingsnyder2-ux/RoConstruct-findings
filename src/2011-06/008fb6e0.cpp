// from server: 65% by atomic.potato
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct CControlGroupsScroll {
    int field_100;  // offset 0x100
    int field_174;  // offset 0x174

    void* func_008fb6e0(int arg);
};

void* CControlGroupsScroll::func_008fb6e0(int arg) {
    void* (__thiscall *func_0081ab50)(void*) = (void* (__thiscall*)(void*))0x0081ab50;
    
    void* ecx_val = func_0081ab50((void*)((char*)this + 0x100));
    void* (__thiscall *vtable_func)(void*, CControlGroupsScroll*, int, int) = 
        *(void* (__thiscall **)(void*, CControlGroupsScroll*, int, int))(*((DWORD*)ecx_val) + 0x16C);
    
    return vtable_func(ecx_val, this, arg, this->field_174);
}
