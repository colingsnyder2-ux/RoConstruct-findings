// from server: 100% by king_originala
// roc 2008-06 0045c6e0  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c6e0
//
// 0045c6e0  8b442408             mov eax, dword ptr [esp + 8]
// 0045c6e4  8b4804               mov ecx, dword ptr [eax + 4]
// 0045c6e7  8b10                 mov edx, dword ptr [eax]
// 0045c6e9  56                   push esi
// 0045c6ea  57                   push edi
// 0045c6eb  51                   push ecx
// 0045c6ec  ffd2                 call edx
// 0045c6ee  8bf0                 mov esi, eax
// 0045c6f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045c6f4  83c404               add esp, 4
// 0045c6f7  b916000000           mov ecx, 0x16
// 0045c6fc  8bf8                 mov edi, eax
// 0045c6fe  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0045c700  5f                   pop edi
// 0045c701  5e                   pop esi
// 0045c702  c3                   ret 

struct Result {
    int data[22];
};

struct S {
    Result* (__cdecl *function)(void*);
    void* argument;
};

Result __cdecl f(S* s)
{
    return *s->function(s->argument);
}
