// from server: 100% by king_originala
// roc 2008-06 0054cec0  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054cec0
//
// 0054cec0  55                   push ebp
// 0054cec1  8bec                 mov ebp, esp
// 0054cec3  51                   push ecx
// 0054cec4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054cec7  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054ceca  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054cecd  51                   push ecx
// 0054cece  e8cd4effff           call 0x541da0
// 0054ced3  83c404               add esp, 4
// 0054ced6  8be5                 mov esp, ebp
// 0054ced8  5d                   pop ebp
// 0054ced9  c3                   ret 

struct VChunk { char pad[8]; };
extern char* __cdecl f(VChunk*);

struct S {
    char pad[0x18];
    VChunk* chunk;
    char* get();
};

#pragma optimize("", off)
char* S::get()
{
    return f(chunk);
}
