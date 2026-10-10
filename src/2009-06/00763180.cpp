// from server: 73% by atomic.potato
struct CXTPCustomizeSheet {
    int* field_B8;

    void func_00763180(int arg_0);
};

extern "C" int __cdecl func_00763080(int);
extern "C" int __cdecl func_0071f670(int);

void CXTPCustomizeSheet::func_00763180(int arg_0) {
    int* eax = this->field_B8;
    int edi = eax[0x16];
    int result = func_00763080(edi);
    if (result != 0) {
        int* esi = reinterpret_cast<int*>(arg_0);
        int* edx = reinterpret_cast<int*>(esi[0]);
        int eax_result = reinterpret_cast<int(__thiscall*)(void*, int)>(edx[0])(esi, 1);
        int* ebx = reinterpret_cast<int*>(esi[0]);
        int ecx_result = func_0071f670(edi);
        int* edx_result = reinterpret_cast<int*>(ebx[1]);
        int ecx = (ecx_result == 3) ? 1 : 0;
        reinterpret_cast<int(__thiscall*)(void*, int)>(edx_result[0])(esi, ecx);
    } else {
        int* ecx = reinterpret_cast<int*>(arg_0);
        int* eax = reinterpret_cast<int*>(ecx[0]);
        int* edx = reinterpret_cast<int*>(eax[0]);
        reinterpret_cast<void(__thiscall*)(void*, int)>(edx[0])(ecx, 0);
    }
}
