// roc 2011-06 00457f50  unit: RBX::VInstance::?$NonFactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00457f50
//
// 00457f50  8b442404             mov eax, dword ptr [esp + 4]
// 00457f54  8b4804               mov ecx, dword ptr [eax + 4]
// 00457f57  8b10                 mov edx, dword ptr [eax]
// 00457f59  51                   push ecx
// 00457f5a  ffd2                 call edx
// 00457f5c  8b00                 mov eax, dword ptr [eax]
// 00457f5e  83c404               add esp, 4
// 00457f61  c3                   ret 
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