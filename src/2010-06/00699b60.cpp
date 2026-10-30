// roc 2010-06 00699b60  unit: RBX::PolyContact  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699b60
//
// 00699b60  56                   push esi
// 00699b61  8bf1                 mov esi, ecx
// 00699b63  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00699b69  8b01                 mov eax, dword ptr [ecx]
// 00699b6b  8b5010               mov edx, dword ptr [eax + 0x10]
// 00699b6e  57                   push edi
// 00699b6f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00699b73  57                   push edi
// 00699b74  ffd2                 call edx
// 00699b76  85ff                 test edi, edi
// 00699b78  740a                 je 0x699b84
// 00699b7a  8b07                 mov eax, dword ptr [edi]
// 00699b7c  8b10                 mov edx, dword ptr [eax]
// 00699b7e  6a01                 push 1
// 00699b80  8bcf                 mov ecx, edi
// 00699b82  ffd2                 call edx
// 00699b84  ff8e98000000         dec dword ptr [esi + 0x98]
// 00699b8a  5f                   pop edi
// 00699b8b  5e                   pop esi
// 00699b8c  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000011@@QAEXPAX@Z)

namespace ns_ROCX000011 {
struct S {
    char pad[0x98];
    int count;
    char pad2[0x3c];
    void* table;
    void f(void* p);
};

void S::f(void* p)
{
    void** v = *(void***)table;
    ((void (__thiscall *)(void*, void*))v[4])(table, p);
    if (p != 0)
        ((void (__thiscall *)(void*, int))(*(void***)p)[0])(p, 1);
    --count;
}
}
