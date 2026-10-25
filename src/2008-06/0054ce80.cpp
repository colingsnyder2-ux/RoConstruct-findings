// from server: 100% by tester
// roc 2008-06 0054ce80  unit: RBX::RenderBase::Mesh  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ce80
//
// 0054ce80  55                   push ebp
// 0054ce81  8bec                 mov ebp, esp
// 0054ce83  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ce86  50                   push eax
// 0054ce87  e8a4f7ffff           call 0x54c630
// 0054ce8c  83c404               add esp, 4
// 0054ce8f  8b08                 mov ecx, dword ptr [eax]
// 0054ce91  51                   push ecx
// 0054ce92  e869f7ffff           call 0x54c600
// 0054ce97  83c404               add esp, 4
// 0054ce9a  0fbe10               movsx edx, byte ptr [eax]
// 0054ce9d  85d2                 test edx, edx
// 0054ce9f  7513                 jne 0x54ceb4
// 0054cea1  8b4508               mov eax, dword ptr [ebp + 8]
// 0054cea4  50                   push eax
// 0054cea5  e886f7ffff           call 0x54c630
// 0054ceaa  83c404               add esp, 4
// 0054cead  8b08                 mov ecx, dword ptr [eax]
// 0054ceaf  894d08               mov dword ptr [ebp + 8], ecx
// 0054ceb2  ebcf                 jmp 0x54ce83
// 0054ceb4  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ceb7  5d                   pop ebp
// 0054ceb8  c3                   ret 

#pragma optimize("g", off)

struct VChunk;
extern "C" char* __cdecl next_slot(VChunk*);
extern "C" char* __cdecl flag_slot(VChunk*);

VChunk* __cdecl f(VChunk* p)
{
    while (*flag_slot(*reinterpret_cast<VChunk**>(next_slot(p))) == 0)
        p = *reinterpret_cast<VChunk**>(next_slot(p));
    return p;
}
