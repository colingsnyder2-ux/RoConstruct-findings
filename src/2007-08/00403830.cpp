// from server: 44% by colin
// roc 2007-08 00403830  unit: VCWorkspace::?$CComObject  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403830
//
// 00403830  51                   push ecx
// 00403831  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00403834  33d2                 xor edx, edx
// 00403836  3bca                 cmp ecx, edx
// 00403838  891424               mov dword ptr [esp], edx
// 0040383b  7412                 je 0x40384f
// 0040383d  56                   push esi
// 0040383e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00403842  56                   push esi
// 00403843  e8b8ffffff           call 0x403800
// 00403848  8bc6                 mov eax, esi
// 0040384a  5e                   pop esi
// 0040384b  59                   pop ecx
// 0040384c  c20400               ret 4
// 0040384f  8b442408             mov eax, dword ptr [esp + 8]
// 00403853  8910                 mov dword ptr [eax], edx
// 00403855  895004               mov dword ptr [eax + 4], edx
// 00403858  59                   pop ecx
// 00403859  c20400               ret 4

struct VCWorkspace_CComObject {
    int field_0x78;
    void* getSomething(void** out);
};

void* VCWorkspace_CComObject::getSomething(void** out) {
    int* p = (int*)this->field_0x78;
    if (p != 0) {
        void* result = 0;
        // call 0x403800 with esi = out
        // The callee at 0x403800 takes (void** out) and returns void
        extern void __stdcall sub_403800(void** out);
        sub_403800(out);
        return out;
    }
    out[0] = 0;
    out[1] = 0;
    return out;
}
