// from server: 100% by king_originala
// roc 2008-06 0054ce40  unit: RBX::RenderBase::Mesh  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ce40
//
// 0054ce40  55                   push ebp
// 0054ce41  8bec                 mov ebp, esp
// 0054ce43  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ce46  50                   push eax
// 0054ce47  e8544fffff           call 0x541da0
// 0054ce4c  83c404               add esp, 4
// 0054ce4f  8b08                 mov ecx, dword ptr [eax]
// 0054ce51  51                   push ecx
// 0054ce52  e8a9f7ffff           call 0x54c600
// 0054ce57  83c404               add esp, 4
// 0054ce5a  0fbe10               movsx edx, byte ptr [eax]
// 0054ce5d  85d2                 test edx, edx
// 0054ce5f  7513                 jne 0x54ce74
// 0054ce61  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ce64  50                   push eax
// 0054ce65  e8364fffff           call 0x541da0
// 0054ce6a  83c404               add esp, 4
// 0054ce6d  8b08                 mov ecx, dword ptr [eax]
// 0054ce6f  894d08               mov dword ptr [ebp + 8], ecx
// 0054ce72  ebcf                 jmp 0x54ce43
// 0054ce74  8b4508               mov eax, dword ptr [ebp + 8]
// 0054ce77  5d                   pop ebp
// 0054ce78  c3                   ret 

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
