// from server: 100% by tester
// roc 2008-06 005450f0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005450f0
//
// 005450f0  55                   push ebp
// 005450f1  8bec                 mov ebp, esp
// 005450f3  8b4508               mov eax, dword ptr [ebp + 8]
// 005450f6  50                   push eax
// 005450f7  e834750000           call 0x54c630
// 005450fc  83c404               add esp, 4
// 005450ff  8b08                 mov ecx, dword ptr [eax]
// 00545101  51                   push ecx
// 00545102  e8f9dcffff           call 0x542e00
// 00545107  83c404               add esp, 4
// 0054510a  0fbe10               movsx edx, byte ptr [eax]
// 0054510d  85d2                 test edx, edx
// 0054510f  7513                 jne 0x545124
// 00545111  8b4508               mov eax, dword ptr [ebp + 8]
// 00545114  50                   push eax
// 00545115  e816750000           call 0x54c630
// 0054511a  83c404               add esp, 4
// 0054511d  8b08                 mov ecx, dword ptr [eax]
// 0054511f  894d08               mov dword ptr [ebp + 8], ecx
// 00545122  ebcf                 jmp 0x5450f3
// 00545124  8b4508               mov eax, dword ptr [ebp + 8]
// 00545127  5d                   pop ebp
// 00545128  c3                   ret 

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
