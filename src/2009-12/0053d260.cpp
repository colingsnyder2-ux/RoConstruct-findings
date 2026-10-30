// roc 2009-12 0053d260  unit: RBX::Network::Replicator::ChangePropertyItem  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053d260
//
// 0053d260  8b442404             mov eax, dword ptr [esp + 4]
// 0053d264  8b4804               mov ecx, dword ptr [eax + 4]
// 0053d267  8b10                 mov edx, dword ptr [eax]
// 0053d269  51                   push ecx
// 0053d26a  ffd2                 call edx
// 0053d26c  8b00                 mov eax, dword ptr [eax]
// 0053d26e  83c404               add esp, 4
// 0053d271  c3                   ret 
// copied from an identical function in another client (function ?f@@YAHPAUS@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    int* (__cdecl *function)(void*);
    void* argument;
};

int __cdecl f(S* s)
{
    return *s->function(s->argument);
}