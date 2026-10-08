// from server: 73% by colin
// roc 2007-08 006d4120  unit: CXTPReportRow_Batch  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4120
//
// 006d4120  56                   push esi
// 006d4121  8bf1                 mov esi, ecx
// 006d4123  8b06                 mov eax, dword ptr [esi]
// 006d4125  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 006d412b  ffd2                 call edx
// 006d412d  85c0                 test eax, eax
// 006d412f  7529                 jne 0x6d415a
// 006d4131  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d4134  85c9                 test ecx, ecx
// 006d4136  7422                 je 0x6d415a
// 006d4138  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d413b  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 006d4141  83ba5002000000       cmp dword ptr [edx + 0x250], 0
// 006d4148  7410                 je 0x6d415a
// 006d414a  e811a4f8ff           call 0x65e560
// 006d414f  85c0                 test eax, eax
// 006d4151  7407                 je 0x6d415a
// 006d4153  b801000000           mov eax, 1
// 006d4158  5e                   pop esi
// 006d4159  c3                   ret 
// 006d415a  33c0                 xor eax, eax
// 006d415c  5e                   pop esi
// 006d415d  c3                   ret 

struct CXTPReportRow_Batch {
    void* vtable;
    char pad[0x1c];
    void* field_20;
    void* field_24;
    int IsSelected();
};

extern "C" void __cdecl sub_65E560();

int CXTPReportRow_Batch::IsSelected() {
    int result = ((int (__thiscall*)(void*))*(void**)((char*)vtable + 0x88))(this);
    if (result != 0)
        return 0;
    void* p = field_20;
    if (p == 0)
        return 0;
    void* q = *(void**)((char*)field_24 + 0xb0);
    if (*(int*)((char*)q + 0x250) == 0)
        return 0;
    sub_65E560();
    if (result == 0)
        return 0;
    return 1;
}
