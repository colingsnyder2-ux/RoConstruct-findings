// from server: 48% by colin
// roc 2007-08 0056dd30  unit: RBX::VContentId::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056dd30
//
// 0056dd30  6aff                 push -1
// 0056dd32  681bb67500           push 0x75b61b
// 0056dd37  64a100000000         mov eax, dword ptr fs:[0]
// 0056dd3d  50                   push eax
// 0056dd3e  64892500000000       mov dword ptr fs:[0], esp
// 0056dd45  51                   push ecx
// 0056dd46  56                   push esi
// 0056dd47  6a24                 push 0x24
// 0056dd49  8bf1                 mov esi, ecx
// 0056dd4b  e8a6210c00           call 0x62fef6
// 0056dd50  83c404               add esp, 4
// 0056dd53  89442404             mov dword ptr [esp + 4], eax
// 0056dd57  85c0                 test eax, eax
// 0056dd59  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056dd61  740e                 je 0x56dd71
// 0056dd63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056dd67  51                   push ecx
// 0056dd68  8bc8                 mov ecx, eax
// 0056dd6a  e841f8ffff           call 0x56d5b0
// 0056dd6f  eb02                 jmp 0x56dd73
// 0056dd71  33c0                 xor eax, eax
// 0056dd73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056dd77  8906                 mov dword ptr [esi], eax
// 0056dd79  8bc6                 mov eax, esi
// 0056dd7b  5e                   pop esi
// 0056dd7c  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dd83  83c410               add esp, 0x10
// 0056dd86  c20400               ret 4

struct ContentId {
    void* id;
    ContentId(const char*);
};

ContentId::ContentId(const char* s)
{
    void* mem = operator new(0x24);
    if (mem) {
        id = (void*)0;
        id = ((void* (*)(void*, const char*))0x56d5b0)(mem, s);
    } else {
        id = 0;
    }
}
