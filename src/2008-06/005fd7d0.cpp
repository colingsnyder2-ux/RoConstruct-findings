// from server: 100% by colin
// roc 2008-06 005fd7d0  unit: RBX::VTool::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd7d0
//
// 005fd7d0  8b442404             mov eax, dword ptr [esp + 4]
// 005fd7d4  85c0                 test eax, eax
// 005fd7d6  7405                 je 0x5fd7dd
// 005fd7d8  83c0ec               add eax, -0x14
// 005fd7db  eb02                 jmp 0x5fd7df
// 005fd7dd  33c0                 xor eax, eax
// 005fd7df  8b90c0010000         mov edx, dword ptr [eax + 0x1c0]
// 005fd7e5  56                   push esi
// 005fd7e6  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005fd7e9  8b1432               mov edx, dword ptr [edx + esi]
// 005fd7ec  035108               add edx, dword ptr [ecx + 8]
// 005fd7ef  5e                   pop esi
// 005fd7f0  8a8402c0010000       mov al, byte ptr [edx + eax + 0x1c0]
// 005fd7f7  c20400               ret 4

struct S_005fd7d0 {
    char pad[8];
    int offset8;
    int offsetc;
    unsigned char f(void* arg);
};

unsigned char S_005fd7d0::f(void* arg)
{
    char* p = (char*)arg;
    if (p != 0)
        p -= 0x14;
    else
        p = 0;
    int* table = *(int**)(p + 0x1c0);
    int idx = *(int*)((char*)this + 0xc);
    int off = *(int*)((char*)table + idx);
    off += *(int*)((char*)this + 8);
    return *(unsigned char*)(p + off + 0x1c0);
}
