// from server: 100% by tester
// roc 2008-06 00545510  unit: seg_00540000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545510
//
// 00545510  55                   push ebp
// 00545511  8bec                 mov ebp, esp
// 00545513  8b4508               mov eax, dword ptr [ebp + 8]
// 00545516  50                   push eax
// 00545517  e814710000           call 0x54c630
// 0054551c  83c404               add esp, 4
// 0054551f  8b08                 mov ecx, dword ptr [eax]
// 00545521  51                   push ecx
// 00545522  e869c8ffff           call 0x541d90
// 00545527  83c404               add esp, 4
// 0054552a  0fbe10               movsx edx, byte ptr [eax]
// 0054552d  85d2                 test edx, edx
// 0054552f  7513                 jne 0x545544
// 00545531  8b4508               mov eax, dword ptr [ebp + 8]
// 00545534  50                   push eax
// 00545535  e8f6700000           call 0x54c630
// 0054553a  83c404               add esp, 4
// 0054553d  8b08                 mov ecx, dword ptr [eax]
// 0054553f  894d08               mov dword ptr [ebp + 8], ecx
// 00545542  ebcf                 jmp 0x545513
// 00545544  8b4508               mov eax, dword ptr [ebp + 8]
// 00545547  5d                   pop ebp
// 00545548  c3                   ret 

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
