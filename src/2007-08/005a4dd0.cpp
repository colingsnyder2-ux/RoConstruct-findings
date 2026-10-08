// from server: 67% by colin
// roc 2007-08 005a4dd0  unit: RBX::P8Humanoid::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4dd0
//
// 005a4dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005a4dd4  85c0                 test eax, eax
// 005a4dd6  8bd1                 mov edx, ecx
// 005a4dd8  7405                 je 0x5a4ddf
// 005a4dda  83c0fc               add eax, -4
// 005a4ddd  eb02                 jmp 0x5a4de1
// 005a4ddf  33c0                 xor eax, eax
// 005a4de1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4de5  8b09                 mov ecx, dword ptr [ecx]
// 005a4de7  56                   push esi
// 005a4de8  8b7220               mov esi, dword ptr [edx + 0x20]
// 005a4deb  51                   push ecx
// 005a4dec  8b8808010000         mov ecx, dword ptr [eax + 0x108]
// 005a4df2  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005a4df5  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005a4df8  8b5218               mov edx, dword ptr [edx + 0x18]
// 005a4dfb  8d8c0108010000       lea ecx, [ecx + eax + 0x108]
// 005a4e02  ffd2                 call edx
// 005a4e04  5e                   pop esi
// 005a4e05  c20800               ret 8

struct GetSetImpl {
    int get;
    int set;
    int field18;
    int field1c;
    int field20;
    void invoke(int, int);
};

void GetSetImpl::invoke(int a, int b)
{
    int* p = (int*)a;
    if (p)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int idx = *(int*)b;
    int off = *(int*)((char*)this + 0x20);
    int base = *(int*)((char*)p + 0x108);
    int v = *(int*)(base + off);
    v += *(int*)((char*)this + 0x1c);
    int fn = *(int*)((char*)this + 0x18);
    int arg = (int)((char*)p + 0x108 + v);
    ((void (__stdcall*)(int))fn)(arg);
}
