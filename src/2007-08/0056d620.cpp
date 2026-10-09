// from server: 35% by colin
// roc 2007-08 0056d620  unit: RBX::VContentId::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d620
//
// 0056d620  6aff                 push -1
// 0056d622  681bb67500           push 0x75b61b
// 0056d627  64a100000000         mov eax, dword ptr fs:[0]
// 0056d62d  50                   push eax
// 0056d62e  64892500000000       mov dword ptr fs:[0], esp
// 0056d635  51                   push ecx
// 0056d636  56                   push esi
// 0056d637  6a24                 push 0x24
// 0056d639  8bf1                 mov esi, ecx
// 0056d63b  e8b6280c00           call 0x62fef6
// 0056d640  83c404               add esp, 4
// 0056d643  89442404             mov dword ptr [esp + 4], eax
// 0056d647  85c0                 test eax, eax
// 0056d649  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d651  741b                 je 0x56d66e
// 0056d653  83c604               add esi, 4
// 0056d656  56                   push esi
// 0056d657  8bc8                 mov ecx, eax
// 0056d659  e852ffffff           call 0x56d5b0
// 0056d65e  5e                   pop esi
// 0056d65f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d663  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d66a  83c410               add esp, 0x10
// 0056d66d  c3                   ret 
// 0056d66e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d672  33c0                 xor eax, eax
// 0056d674  5e                   pop esi
// 0056d675  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d67c  83c410               add esp, 0x10
// 0056d67f  c3                   ret 

struct ContentId {
    char pad[4];
    void* id;
    ContentId* construct(const char* s);
};

ContentId* ContentId::construct(const char* s) {
    void* mem = operator new(0x24);
    if (mem) {
        ContentId* p = (ContentId*)mem;
        p->construct(s);
        return p;
    }
    return 0;
}
