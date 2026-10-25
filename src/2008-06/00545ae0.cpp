// from server: 100% by tester
// roc 2008-06 00545ae0  unit: seg_00540000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545ae0
//
// 00545ae0  55                   push ebp
// 00545ae1  8bec                 mov ebp, esp
// 00545ae3  8b4508               mov eax, dword ptr [ebp + 8]
// 00545ae6  50                   push eax
// 00545ae7  e8b4c2ffff           call 0x541da0
// 00545aec  83c404               add esp, 4
// 00545aef  8b08                 mov ecx, dword ptr [eax]
// 00545af1  51                   push ecx
// 00545af2  e809d3ffff           call 0x542e00
// 00545af7  83c404               add esp, 4
// 00545afa  0fbe10               movsx edx, byte ptr [eax]
// 00545afd  85d2                 test edx, edx
// 00545aff  7513                 jne 0x545b14
// 00545b01  8b4508               mov eax, dword ptr [ebp + 8]
// 00545b04  50                   push eax
// 00545b05  e896c2ffff           call 0x541da0
// 00545b0a  83c404               add esp, 4
// 00545b0d  8b08                 mov ecx, dword ptr [eax]
// 00545b0f  894d08               mov dword ptr [ebp + 8], ecx
// 00545b12  ebcf                 jmp 0x545ae3
// 00545b14  8b4508               mov eax, dword ptr [ebp + 8]
// 00545b17  5d                   pop ebp
// 00545b18  c3                   ret 

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
