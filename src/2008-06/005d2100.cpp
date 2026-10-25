// from server: 100% by colin
// roc 2008-06 005d2100  unit: RBX::VSpawnLocation::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2100
//
// 005d2100  8b442404             mov eax, dword ptr [esp + 4]
// 005d2104  85c0                 test eax, eax
// 005d2106  7405                 je 0x5d210d
// 005d2108  83c0ec               add eax, -0x14
// 005d210b  eb02                 jmp 0x5d210f
// 005d210d  33c0                 xor eax, eax
// 005d210f  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 005d2115  56                   push esi
// 005d2116  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005d2119  8b1432               mov edx, dword ptr [edx + esi]
// 005d211c  035108               add edx, dword ptr [ecx + 8]
// 005d211f  5e                   pop esi
// 005d2120  8a840234010000       mov al, byte ptr [edx + eax + 0x134]
// 005d2127  c20400               ret 4

struct S
{
    char getValue(void*);
    int value8;
    int valueC;
};

char S::getValue(void* p)
{
    char* base = (char*)p;
    if (base)
        base -= 20;
    else
        base = 0;

    int* index = *(int**)(base + 0x134);
    int offset = *(int*)((char*)this + 0xC);
    int entry = *(int*)((char*)index + offset);
    entry += *(int*)((char*)this + 8);

    return *(char*)(entry + (int)base + 0x134);
}
