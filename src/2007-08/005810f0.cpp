// from server: 68% by colin
// roc 2007-08 005810f0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005810f0
//
// 005810f0  8b442404             mov eax, dword ptr [esp + 4]
// 005810f4  85c0                 test eax, eax
// 005810f6  8bd1                 mov edx, ecx
// 005810f8  7405                 je 0x5810ff
// 005810fa  83c0fc               add eax, -4
// 005810fd  eb02                 jmp 0x581101
// 005810ff  33c0                 xor eax, eax
// 00581101  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581105  56                   push esi
// 00581106  8b7220               mov esi, dword ptr [edx + 0x20]
// 00581109  51                   push ecx
// 0058110a  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00581110  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00581113  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00581116  8b5218               mov edx, dword ptr [edx + 0x18]
// 00581119  8d8c01f8000000       lea ecx, [ecx + eax + 0xf8]
// 00581120  ffd2                 call edx
// 00581122  5e                   pop esi
// 00581123  c20800               ret 8

struct GetSetImpl {
    int get;
    int set;
    void invoke(int a, int b);
};

void GetSetImpl::invoke(int a, int b) {
    int* p = (int*)a;
    int* self = (int*)this;
    if (p) {
        p = (int*)((char*)p - 4);
    } else {
        p = 0;
    }
    int idx = *(int*)((char*)self + 0x20);
    int* base = (int*)((char*)p + 0xf8);
    int v = *(int*)((char*)base + idx * 4);
    v += *(int*)((char*)self + 0x1c);
    int fn = *(int*)((char*)self + 0x18);
    int self2 = (int)((char*)p + 0xf8) + v;
    ((void (__fastcall*)(int, int))fn)(self2, b);
}
