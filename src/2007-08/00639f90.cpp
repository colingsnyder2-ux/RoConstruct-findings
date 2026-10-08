// from server: 81% by colin
// roc 2007-08 00639f90  unit: CRobloxControlColorSelector  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639f90
//
// 00639f90  56                   push esi
// 00639f91  8bf1                 mov esi, ecx
// 00639f93  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00639f99  6a00                 push 0
// 00639f9b  6aff                 push -1
// 00639f9d  e8ceba0000           call 0x645a70
// 00639fa2  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00639fa8  8b01                 mov eax, dword ptr [ecx]
// 00639faa  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00639fb0  6a00                 push 0
// 00639fb2  6aff                 push -1
// 00639fb4  ffd2                 call edx
// 00639fb6  5e                   pop esi
// 00639fb7  c21000               ret 0x10

struct CRobloxControlColorSelector {
    char pad[0xfc];
    void* field_0xfc;
    void func_00639f90(int, int, int, int);
};

extern "C" void __stdcall sub_00645a70(void*, int, int);

void CRobloxControlColorSelector::func_00639f90(int a, int b, int c, int d)
{
    sub_00645a70(field_0xfc, -1, 0);
    void** vtable = *(void***)field_0xfc;
    void (__stdcall *fn)(void*, int, int) = (void (__stdcall *)(void*, int, int))vtable[0x148 / 4];
    fn(field_0xfc, -1, 0);
}
