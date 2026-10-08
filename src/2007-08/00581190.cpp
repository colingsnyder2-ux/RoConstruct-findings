// from server: 87% by colin
// roc 2007-08 00581190  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581190
//
// 00581190  8b442404             mov eax, dword ptr [esp + 4]
// 00581194  85c0                 test eax, eax
// 00581196  8bd1                 mov edx, ecx
// 00581198  7405                 je 0x58119f
// 0058119a  83c0fc               add eax, -4
// 0058119d  eb02                 jmp 0x5811a1
// 0058119f  33c0                 xor eax, eax
// 005811a1  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 005811a7  56                   push esi
// 005811a8  8b7210               mov esi, dword ptr [edx + 0x10]
// 005811ab  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005811ae  034a0c               add ecx, dword ptr [edx + 0xc]
// 005811b1  8b5208               mov edx, dword ptr [edx + 8]
// 005811b4  8d8c01f8000000       lea ecx, [ecx + eax + 0xf8]
// 005811bb  ffd2                 call edx
// 005811bd  5e                   pop esi
// 005811be  c20400               ret 4

struct GetSetImpl {
    int get;
    int set;
    void invoke(int arg);
};

void GetSetImpl::invoke(int arg) {
    int* p = (int*)arg;
    if (p) {
        p = (int*)((char*)p - 4);
    } else {
        p = 0;
    }
    int* base = (int*)((char*)p + 0xf8);
    int idx = *(int*)((char*)this + 0x10);
    int val = base[idx];
    val += *(int*)((char*)this + 0xc);
    int fn = *(int*)((char*)this + 8);
    ((void (__thiscall*)(void*))fn)((void*)((char*)p + 0xf8 + val));
}
