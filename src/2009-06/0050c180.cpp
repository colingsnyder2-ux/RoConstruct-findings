// from server: 100% by tester
// roc 2009-06 0050c180  unit: RBX::Network::RoundRobinPhysicsSender  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050c180
//
// 0050c180  8b442404             mov eax, dword ptr [esp + 4]
// 0050c184  85c0                 test eax, eax
// 0050c186  7405                 je 0x50c18d
// 0050c188  83c008               add eax, 8
// 0050c18b  eb02                 jmp 0x50c18f
// 0050c18d  33c0                 xor eax, eax
// 0050c18f  8b5104               mov edx, dword ptr [ecx + 4]
// 0050c192  56                   push esi
// 0050c193  8b7204               mov esi, dword ptr [edx + 4]
// 0050c196  897004               mov dword ptr [eax + 4], esi
// 0050c199  8906                 mov dword ptr [esi], eax
// 0050c19b  894204               mov dword ptr [edx + 4], eax
// 0050c19e  8910                 mov dword ptr [eax], edx
// 0050c1a0  ff01                 inc dword ptr [ecx]
// 0050c1a2  5e                   pop esi
// 0050c1a3  c20400               ret 4

struct S
{
    int count;
    void* list;
    void f(void* node);
};

void S::f(void* node)
{
    char* p = (char*)node;
    if (p)
        p += 8;
    else
        p = 0;

    char* head = (char*)list;
    char* next = *(char**)(head + 4);

    *(char**)(p + 4) = next;
    *(char**)next = p;
    *(char**)(head + 4) = p;
    *(char**)p = head;
    ++count;
}
