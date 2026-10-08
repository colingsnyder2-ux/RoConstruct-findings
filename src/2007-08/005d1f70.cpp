// from server: 74% by colin
// roc 2007-08 005d1f70  unit: RBX::P8Tool::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1f70
//
// 005d1f70  8b442404             mov eax, dword ptr [esp + 4]
// 005d1f74  85c0                 test eax, eax
// 005d1f76  8bd1                 mov edx, ecx
// 005d1f78  7405                 je 0x5d1f7f
// 005d1f7a  83c0fc               add eax, -4
// 005d1f7d  eb02                 jmp 0x5d1f81
// 005d1f7f  33c0                 xor eax, eax
// 005d1f81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d1f85  56                   push esi
// 005d1f86  8b7220               mov esi, dword ptr [edx + 0x20]
// 005d1f89  51                   push ecx
// 005d1f8a  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 005d1f90  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d1f93  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005d1f96  8b5218               mov edx, dword ptr [edx + 0x18]
// 005d1f99  8d8c0168010000       lea ecx, [ecx + eax + 0x168]
// 005d1fa0  ffd2                 call edx
// 005d1fa2  5e                   pop esi
// 005d1fa3  c20800               ret 8

struct GetSetImpl {
    void invoke(void* obj, void* arg);
};

void GetSetImpl::invoke(void* obj, void* arg)
{
    char* p = (char*)obj;
    if (p)
        p -= 4;
    else
        p = 0;

    int offset = *(int*)((char*)this + 0x20);
    int idx = *(int*)(p + 0x168);
    int base = *(int*)(idx + offset);
    base += *(int*)((char*)this + 0x1c);
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)this + 0x18);
    fn((void*)(base + (int)p + 0x168), arg);
}
