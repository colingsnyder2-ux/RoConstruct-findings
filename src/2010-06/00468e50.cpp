// roc 2010-06 00468e50  unit: RBX::VInstance::?$NonFactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00468e50
//
// 00468e50  8b442404             mov eax, dword ptr [esp + 4]
// 00468e54  8b4804               mov ecx, dword ptr [eax + 4]
// 00468e57  8b10                 mov edx, dword ptr [eax]
// 00468e59  51                   push ecx
// 00468e5a  ffd2                 call edx
// 00468e5c  8b00                 mov eax, dword ptr [eax]
// 00468e5e  83c404               add esp, 4
// 00468e61  c3                   ret 
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