// roc 2009-12 0055d570  unit: RBX::Network::NetworkOwnerJob  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055d570
//
// 0055d570  8b442404             mov eax, dword ptr [esp + 4]
// 0055d574  85c0                 test eax, eax
// 0055d576  7405                 je 0x55d57d
// 0055d578  83c008               add eax, 8
// 0055d57b  eb02                 jmp 0x55d57f
// 0055d57d  33c0                 xor eax, eax
// 0055d57f  8b5104               mov edx, dword ptr [ecx + 4]
// 0055d582  56                   push esi
// 0055d583  8b7204               mov esi, dword ptr [edx + 4]
// 0055d586  897004               mov dword ptr [eax + 4], esi
// 0055d589  8906                 mov dword ptr [esi], eax
// 0055d58b  894204               mov dword ptr [edx + 4], eax
// 0055d58e  8910                 mov dword ptr [eax], edx
// 0055d590  ff01                 inc dword ptr [ecx]
// 0055d592  5e                   pop esi
// 0055d593  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEXPAX@Z)

namespace ns_ROCX000002 {
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
}
