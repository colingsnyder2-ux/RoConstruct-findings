// roc 2012-06 0046bc90  unit: RBX::VInstance::?$NonFactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046bc90
//
// 0046bc90  8b442404             mov eax, dword ptr [esp + 4]
// 0046bc94  8b4804               mov ecx, dword ptr [eax + 4]
// 0046bc97  8b10                 mov edx, dword ptr [eax]
// 0046bc99  51                   push ecx
// 0046bc9a  ffd2                 call edx
// 0046bc9c  8b00                 mov eax, dword ptr [eax]
// 0046bc9e  83c404               add esp, 4
// 0046bca1  c3                   ret 
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