// from server: 72% by colin
// roc 2007-08 005d1fb0  unit: RBX::P8Tool::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1fb0
//
// 005d1fb0  8b442404             mov eax, dword ptr [esp + 4]
// 005d1fb4  85c0                 test eax, eax
// 005d1fb6  8bd1                 mov edx, ecx
// 005d1fb8  7405                 je 0x5d1fbf
// 005d1fba  83c0fc               add eax, -4
// 005d1fbd  eb02                 jmp 0x5d1fc1
// 005d1fbf  33c0                 xor eax, eax
// 005d1fc1  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 005d1fc7  56                   push esi
// 005d1fc8  8b7210               mov esi, dword ptr [edx + 0x10]
// 005d1fcb  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d1fce  034a0c               add ecx, dword ptr [edx + 0xc]
// 005d1fd1  8b5208               mov edx, dword ptr [edx + 8]
// 005d1fd4  8d8c0168010000       lea ecx, [ecx + eax + 0x168]
// 005d1fdb  ffd2                 call edx
// 005d1fdd  5e                   pop esi
// 005d1fde  c20400               ret 4

struct GetSetImpl {
    char pad0[8];
    int (GetSetImpl::*set)(int);
    char pad1[4];
    int (GetSetImpl::*get)(int);
    int invoke(int arg);
};

int GetSetImpl::invoke(int arg)
{
    int* p = (int*)arg;
    if (p)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int offset = *(int*)((char*)p + 0x168);
    int idx = *(int*)((char*)this + 0x10);
    int val = *(int*)(offset + idx);
    val += *(int*)((char*)this + 0xc);
    int (GetSetImpl::*fn)(int) = *(int (GetSetImpl::**)(int))((char*)this + 8);
    return (this->*fn)(val + (int)p + 0x168);
}
