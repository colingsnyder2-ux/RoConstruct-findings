// from server: 100% by king_originala
// roc 2008-06 0045c710  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c710
//
// 0045c710  8b442404             mov eax, dword ptr [esp + 4]
// 0045c714  8b4804               mov ecx, dword ptr [eax + 4]
// 0045c717  8b10                 mov edx, dword ptr [eax]
// 0045c719  51                   push ecx
// 0045c71a  ffd2                 call edx
// 0045c71c  8b00                 mov eax, dword ptr [eax]
// 0045c71e  83c404               add esp, 4
// 0045c721  c3                   ret 

struct S {
    int* (__cdecl *function)(void*);
    void* argument;
};

int __cdecl f(S* s)
{
    return *s->function(s->argument);
}
