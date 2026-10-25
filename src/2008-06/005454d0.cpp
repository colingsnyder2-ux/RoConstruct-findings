// from server: 100% by tester
// roc 2008-06 005454d0  unit: seg_00540000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005454d0
//
// 005454d0  55                   push ebp
// 005454d1  8bec                 mov ebp, esp
// 005454d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005454d6  50                   push eax
// 005454d7  e8c4c8ffff           call 0x541da0
// 005454dc  83c404               add esp, 4
// 005454df  8b08                 mov ecx, dword ptr [eax]
// 005454e1  51                   push ecx
// 005454e2  e8a9c8ffff           call 0x541d90
// 005454e7  83c404               add esp, 4
// 005454ea  0fbe10               movsx edx, byte ptr [eax]
// 005454ed  85d2                 test edx, edx
// 005454ef  7513                 jne 0x545504
// 005454f1  8b4508               mov eax, dword ptr [ebp + 8]
// 005454f4  50                   push eax
// 005454f5  e8a6c8ffff           call 0x541da0
// 005454fa  83c404               add esp, 4
// 005454fd  8b08                 mov ecx, dword ptr [eax]
// 005454ff  894d08               mov dword ptr [ebp + 8], ecx
// 00545502  ebcf                 jmp 0x5454d3
// 00545504  8b4508               mov eax, dword ptr [ebp + 8]
// 00545507  5d                   pop ebp
// 00545508  c3                   ret 

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
