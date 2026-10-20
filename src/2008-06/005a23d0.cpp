// from server: 100% by colin
// roc 2008-06 005a23d0  unit: RBX::Workspace  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a23d0
//
// 005a23d0  8b442404             mov eax, dword ptr [esp + 4]
// 005a23d4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005a23d7  8b5008               mov edx, dword ptr [eax + 8]
// 005a23da  51                   push ecx
// 005a23db  8b4804               mov ecx, dword ptr [eax + 4]
// 005a23de  8b00                 mov eax, dword ptr [eax]
// 005a23e0  03ca                 add ecx, edx
// 005a23e2  ffd0                 call eax
// 005a23e4  c3                   ret 

// from server: 85% by king_originala
typedef void (__thiscall *Callback)(void*, int);

struct S {
    Callback volatile callback;
    char* volatile object;
    volatile int adjustment;
    volatile int argument;
};

void __cdecl f(S* p)
{
    int argument = p->argument;
    int adjustment = p->adjustment;
    p->callback(p->object + adjustment, argument);
}
