// roc 2009-06 004e6900  unit: RBX::Network::Replicator::ChangePropertyItem  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e6900
//
// 004e6900  8b442404             mov eax, dword ptr [esp + 4]
// 004e6904  8b4804               mov ecx, dword ptr [eax + 4]
// 004e6907  8b10                 mov edx, dword ptr [eax]
// 004e6909  51                   push ecx
// 004e690a  ffd2                 call edx
// 004e690c  8b00                 mov eax, dword ptr [eax]
// 004e690e  83c404               add esp, 4
// 004e6911  c3                   ret 
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