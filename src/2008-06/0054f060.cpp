// from server: 100% by colin
// roc 2008-06 0054f060  unit: seg_00540000  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054f060
//
// 0054f060  55                   push ebp
// 0054f061  8bec                 mov ebp, esp
// 0054f063  83ec08               sub esp, 8
// 0054f066  894df8               mov dword ptr [ebp - 8], ecx
// 0054f069  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054f06c  e89f33ebff           call 0x402410
// 0054f071  0fb6c0               movzx eax, al
// 0054f074  85c0                 test eax, eax
// 0054f076  7506                 jne 0x54f07e
// 0054f078  ff1590288000         call dword ptr [0x802890]
// 0054f07e  33c9                 xor ecx, ecx
// 0054f080  75fc                 jne 0x54f07e
// 0054f082  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054f085  8b4204               mov eax, dword ptr [edx + 4]
// 0054f088  50                   push eax
// 0054f089  e872d5ffff           call 0x54c600
// 0054f08e  83c404               add esp, 4
// 0054f091  0fbe08               movsx ecx, byte ptr [eax]
// 0054f094  85c9                 test ecx, ecx
// 0054f096  740b                 je 0x54f0a3
// 0054f098  ff1590288000         call dword ptr [0x802890]
// 0054f09e  e994000000           jmp 0x54f137
// 0054f0a3  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054f0a6  8b4204               mov eax, dword ptr [edx + 4]
// 0054f0a9  50                   push eax
// 0054f0aa  e8f12cffff           call 0x541da0
// 0054f0af  83c404               add esp, 4
// 0054f0b2  8b08                 mov ecx, dword ptr [eax]
// 0054f0b4  51                   push ecx
// 0054f0b5  e846d5ffff           call 0x54c600
// 0054f0ba  83c404               add esp, 4
// 0054f0bd  0fbe10               movsx edx, byte ptr [eax]
// 0054f0c0  85d2                 test edx, edx
// 0054f0c2  7522                 jne 0x54f0e6
// 0054f0c4  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054f0c7  8b4804               mov ecx, dword ptr [eax + 4]
// 0054f0ca  51                   push ecx
// 0054f0cb  e8d02cffff           call 0x541da0
// 0054f0d0  83c404               add esp, 4
// 0054f0d3  8b10                 mov edx, dword ptr [eax]
// 0054f0d5  52                   push edx
// 0054f0d6  e8a5ddffff           call 0x54ce80
// 0054f0db  83c404               add esp, 4
// 0054f0de  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054f0e1  894104               mov dword ptr [ecx + 4], eax
// 0054f0e4  eb51                 jmp 0x54f137
// 0054f0e6  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054f0e9  8b4204               mov eax, dword ptr [edx + 4]
// 0054f0ec  50                   push eax
// 0054f0ed  e84ed5ffff           call 0x54c640
// 0054f0f2  83c404               add esp, 4
// 0054f0f5  8b08                 mov ecx, dword ptr [eax]
// 0054f0f7  894dfc               mov dword ptr [ebp - 4], ecx
// 0054f0fa  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054f0fd  52                   push edx
// 0054f0fe  e8fdd4ffff           call 0x54c600
// 0054f103  83c404               add esp, 4
// 0054f106  0fbe00               movsx eax, byte ptr [eax]
// 0054f109  85c0                 test eax, eax
// 0054f10b  7521                 jne 0x54f12e
// 0054f10d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054f110  51                   push ecx
// 0054f111  e88a2cffff           call 0x541da0
// 0054f116  83c404               add esp, 4
// 0054f119  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054f11c  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054f11f  3b08                 cmp ecx, dword ptr [eax]
// 0054f121  750b                 jne 0x54f12e
// 0054f123  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054f126  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054f129  894204               mov dword ptr [edx + 4], eax
// 0054f12c  ebb8                 jmp 0x54f0e6
// 0054f12e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054f131  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054f134  895104               mov dword ptr [ecx + 4], edx
// 0054f137  8be5                 mov esp, ebp
// 0054f139  5d                   pop ebp
// 0054f13a  c3                   ret 

#pragma optimize("", off)

struct VChunk;

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" char* __cdecl left_slot(VChunk*);
extern "C" char* __cdecl flag_slot(VChunk*);
extern "C" char* __cdecl parent_slot(VChunk*);
extern "C" VChunk* __cdecl next_slot(VChunk*);

struct S {
    void* container;
    VChunk* node;

    bool __thiscall has_container() const;
    void __thiscall decrement();
};

void S::decrement()
{
    if (!has_container())
        invalid_parameter_noinfo();

    do {
    } while (false);

    if (*flag_slot(node))
        invalid_parameter_noinfo();
    else if (!*flag_slot(*reinterpret_cast<VChunk**>(left_slot(node))))
        node = next_slot(*reinterpret_cast<VChunk**>(left_slot(node)));
    else {
        VChunk* parent;
        while (!*flag_slot(parent = *reinterpret_cast<VChunk**>(parent_slot(node)))
            && node == *reinterpret_cast<VChunk**>(left_slot(parent)))
            node = parent;
        node = parent;
    }
}
