// from server: 78% by colin
// roc 2007-08 006a0f20  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0f20
//
// 006a0f20  8b442404             mov eax, dword ptr [esp + 4]
// 006a0f24  8b542408             mov edx, dword ptr [esp + 8]
// 006a0f28  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 006a0f2e  f7d8                 neg eax
// 006a0f30  1bc0                 sbb eax, eax
// 006a0f32  83e0fa               and eax, 0xfffffffa
// 006a0f35  83c010               add eax, 0x10
// 006a0f38  f6c240               test dl, 0x40
// 006a0f3b  7403                 je 0x6a0f40
// 006a0f3d  83c801               or eax, 1
// 006a0f40  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 006a0f43  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 006a0f47  7406                 je 0x6a0f4f
// 006a0f49  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 006a0f4d  740a                 je 0x6a0f59
// 006a0f4f  f6c220               test dl, 0x20
// 006a0f52  7405                 je 0x6a0f59
// 006a0f54  0d80000000           or eax, 0x80
// 006a0f59  c20800               ret 8

struct CXTPDockBar
{
    char pad[0x6c];
    int field_6c;
    int func_006a0f20(int, int*);
};

int CXTPDockBar::func_006a0f20(int arg1, int* arg2)
{
    int v = arg2[0x3a];
    int result = (arg1 != 0) ? 0x10 : 0x0a;
    if (v & 0x40)
        result |= 1;
    int* p = (int*)field_6c;
    if (p[0x17] == 0 || p[0x1b] == 0)
    {
        if (v & 0x20)
            result |= 0x80;
    }
    return result;
}
