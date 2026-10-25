// from server: 100% by king_originala
// roc 2008-06 0054c610  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c610
//
// 0054c610  55                   push ebp
// 0054c611  8bec                 mov ebp, esp
// 0054c613  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c616  50                   push eax
// 0054c617  e82470ffff           call 0x543640
// 0054c61c  83c404               add esp, 4
// 0054c61f  50                   push eax
// 0054c620  e80b000000           call 0x54c630
// 0054c625  83c404               add esp, 4
// 0054c628  5d                   pop ebp
// 0054c629  c3                   ret 

struct VChunk { char pad[0xc]; };

extern char* __cdecl chunk_data(VChunk* p);
extern void* __cdecl convert_pointer(void* p);

#pragma optimize("", off)
void* __cdecl f(VChunk* p)
{
    return convert_pointer(chunk_data(p));
}
#pragma optimize("", on)
