// from server: 17% by 41k
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct RBX_Network_ErrorCompPhysicsSender {
    void* this_ptr;
    void* field_14;
    void* field_20;

    void func_1();
};

extern "C" void __stdcall __stdcall_call_0x5af750(void* param);

void RBX_Network_ErrorCompPhysicsSender::func_1() {
    void* local_esi = 0;
    if (this_ptr) {
        local_esi = *(void**)((char*)this_ptr + 0x70);
    }
    void* local_eax = local_esi ? local_esi : 0;
    if (*(DWORD*)local_eax == *(DWORD*)this_ptr) {
        local_eax = *(void**)((char*)this_ptr + 0x14);
        if (*(DWORD*)local_eax != *(DWORD*)this_ptr) {
            *(DWORD*)local_eax = *(DWORD*)this_ptr;
        }
    }
    void* local_edx = *(void**)((char*)this_ptr + 0x20);
    local_eax = *(void**)((char*)this_ptr + 0x14);
    char* local_esi_2 = (char*)local_edx + *(int*)local_eax;
    while (*(DWORD*)local_esi_2 != *(DWORD*)local_esi_2) {
        local_esi_2 += 4;
    }
    *(int*)((char*)this_ptr + 0x20) = *(int*)local_esi_2;
    __stdcall_call_0x5af750(this_ptr);
}
