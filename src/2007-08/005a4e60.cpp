// from server: 61% by colin
// roc 2007-08 005a4e60  unit: RBX::P8Humanoid::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4e60
//
// 005a4e60  8b442404             mov eax, dword ptr [esp + 4]
// 005a4e64  85c0                 test eax, eax
// 005a4e66  8bd1                 mov edx, ecx
// 005a4e68  7405                 je 0x5a4e6f
// 005a4e6a  83c0fc               add eax, -4
// 005a4e6d  eb02                 jmp 0x5a4e71
// 005a4e6f  33c0                 xor eax, eax
// 005a4e71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4e75  56                   push esi
// 005a4e76  8b7220               mov esi, dword ptr [edx + 0x20]
// 005a4e79  51                   push ecx
// 005a4e7a  8b8808010000         mov ecx, dword ptr [eax + 0x108]
// 005a4e80  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005a4e83  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005a4e86  8b5218               mov edx, dword ptr [edx + 0x18]
// 005a4e89  8d8c0108010000       lea ecx, [ecx + eax + 0x108]
// 005a4e90  ffd2                 call edx
// 005a4e92  5e                   pop esi
// 005a4e93  c20800               ret 8

struct GetSetImpl {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int Invoke(int a, int b);
};

int GetSetImpl::Invoke(int a, int b) {
    int* p = (int*)a;
    if (p != 0) {
        p = (int*)((char*)p - 4);
    } else {
        p = 0;
    }
    int idx = *(int*)((char*)this + 0x20);
    int* base = (int*)((char*)p + 0x108);
    int off = *(int*)((char*)base + idx);
    off += *(int*)((char*)this + 0x1C);
    int (*fn)(int) = (int (*)(int))*(int*)((char*)this + 0x18);
    return fn(off + (int)(char*)p + 0x108);
}
