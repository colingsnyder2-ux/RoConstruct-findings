// from server: 61% by colin
// roc 2007-08 00412e60  unit: std::runtime_error  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412e60
//
// 00412e60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412e64  ff1598dd7700         call dword ptr [0x77dd98]
// 00412e6a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00412e6e  50                   push eax
// 00412e6f  ff15b8dc7700         call dword ptr [0x77dcb8]
// 00412e75  f7d8                 neg eax
// 00412e77  1bc0                 sbb eax, eax
// 00412e79  f7d8                 neg eax
// 00412e7b  c3                   ret 

struct S {
    int f(int a, int b);
};

int S::f(int a, int b)
{
    int r = ((int (__thiscall *)(int))0x77dd98)(b);
    int s = ((int (__thiscall *)(int))0x77dcb8)(r);
    return -(s != 0);
}
