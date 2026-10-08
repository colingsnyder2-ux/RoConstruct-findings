// from server: 59% by colin
// roc 2007-08 007204e0  unit: CXTWndHook  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007204e0
//
// 007204e0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 007204e4  740a                 je 0x7204f0
// 007204e6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007204e9  8b01                 mov eax, dword ptr [ecx]
// 007204eb  8b4020               mov eax, dword ptr [eax + 0x20]
// 007204ee  ffe0                 jmp eax
// 007204f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007204f4  8b442408             mov eax, dword ptr [esp + 8]
// 007204f8  52                   push edx
// 007204f9  8b542408             mov edx, dword ptr [esp + 8]
// 007204fd  50                   push eax
// 007204fe  8b4104               mov eax, dword ptr [ecx + 4]
// 00720501  8b4908               mov ecx, dword ptr [ecx + 8]
// 00720504  52                   push edx
// 00720505  50                   push eax
// 00720506  51                   push ecx
// 00720507  ff1538ec7700         call dword ptr [0x77ec38]
// 0072050d  c20c00               ret 0xc

struct CXTWndHook
{
    int sub_007204e0(int, int, int);
};

extern "C" int __stdcall CallWindowProcA(int, int, int, int, int);

int CXTWndHook::sub_007204e0(int a, int b, int c)
{
    if (*(int*)((char*)this + 0xc) == 0)
    {
        int p = *(int*)((char*)this + 0xc);
        int* vt = *(int**)p;
        int (*fn)(int, int, int, int) = (int (*)(int, int, int, int))vt[8];
        return fn(p, a, b, c);
    }
    return CallWindowProcA(*(int*)((char*)this + 4), *(int*)((char*)this + 8), a, b, c);
}
