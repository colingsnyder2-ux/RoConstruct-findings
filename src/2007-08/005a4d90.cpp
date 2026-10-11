// from server: 100% by colin
// roc 2007-08 005a4d90  unit: RBX::P8Humanoid::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4d90
//
// 005a4d90  8b442404             mov eax, dword ptr [esp + 4]
// 005a4d94  85c0                 test eax, eax
// 005a4d96  8bd1                 mov edx, ecx
// 005a4d98  7405                 je 0x5a4d9f
// 005a4d9a  83c0fc               add eax, -4
// 005a4d9d  eb02                 jmp 0x5a4da1
// 005a4d9f  33c0                 xor eax, eax
// 005a4da1  8b8808010000         mov ecx, dword ptr [eax + 0x108]
// 005a4da7  56                   push esi
// 005a4da8  8b7210               mov esi, dword ptr [edx + 0x10]
// 005a4dab  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005a4dae  034a0c               add ecx, dword ptr [edx + 0xc]
// 005a4db1  8b5208               mov edx, dword ptr [edx + 8]
// 005a4db4  8d8c0108010000       lea ecx, [ecx + eax + 0x108]
// 005a4dbb  ffd2                 call edx
// 005a4dbd  5e                   pop esi
// 005a4dbe  c20400               ret 4

struct GetSetImpl {
    char pad0[8];
    int field8;
    int fieldC;
    int field10;
    void invoke(int arg);
};

void GetSetImpl::invoke(int arg) {
    int* p = (int*)arg;
    if (p != 0) {
        p = (int*)((char*)p - 4);
    } else {
        p = 0;
    }
    int idx = *(int*)((char*)p + 0x108);
    int off = field10;
    int fn = *(int*)(idx + off);
    fn += fieldC;
    int self = (int)((char*)p + 0x108 + fn);
    int call = field8;
    ((void (__thiscall*)(int))call)(self);
}
