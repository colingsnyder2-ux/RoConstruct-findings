// from server: 100% by king_originala
// roc 2008-06 005445d0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005445d0
//
// 005445d0  55                   push ebp
// 005445d1  8bec                 mov ebp, esp
// 005445d3  83ec08               sub esp, 8
// 005445d6  894df8               mov dword ptr [ebp - 8], ecx
// 005445d9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005445dc  e82fdeebff           call 0x402410
// 005445e1  0fb6c0               movzx eax, al
// 005445e4  85c0                 test eax, eax
// 005445e6  7506                 jne 0x5445ee
// 005445e8  ff1590288000         call dword ptr [0x802890]
// 005445ee  33c9                 xor ecx, ecx
// 005445f0  75fc                 jne 0x5445ee
// 005445f2  8b55f8               mov edx, dword ptr [ebp - 8]
// 005445f5  8b4204               mov eax, dword ptr [edx + 4]
// 005445f8  50                   push eax
// 005445f9  e892d7ffff           call 0x541d90
// 005445fe  83c404               add esp, 4
// 00544601  0fbe08               movsx ecx, byte ptr [eax]
// 00544604  85c9                 test ecx, ecx
// 00544606  740b                 je 0x544613
// 00544608  ff1590288000         call dword ptr [0x802890]
// 0054460e  e994000000           jmp 0x5446a7
// 00544613  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544616  8b4204               mov eax, dword ptr [edx + 4]
// 00544619  50                   push eax
// 0054461a  e881d7ffff           call 0x541da0
// 0054461f  83c404               add esp, 4
// 00544622  8b08                 mov ecx, dword ptr [eax]
// 00544624  51                   push ecx
// 00544625  e866d7ffff           call 0x541d90
// 0054462a  83c404               add esp, 4
// 0054462d  0fbe10               movsx edx, byte ptr [eax]
// 00544630  85d2                 test edx, edx
// 00544632  7522                 jne 0x544656
// 00544634  8b45f8               mov eax, dword ptr [ebp - 8]
// 00544637  8b4804               mov ecx, dword ptr [eax + 4]
// 0054463a  51                   push ecx
// 0054463b  e860d7ffff           call 0x541da0
// 00544640  83c404               add esp, 4
// 00544643  8b10                 mov edx, dword ptr [eax]
// 00544645  52                   push edx
// 00544646  e8c50e0000           call 0x545510
// 0054464b  83c404               add esp, 4
// 0054464e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544651  894104               mov dword ptr [ecx + 4], eax
// 00544654  eb51                 jmp 0x5446a7
// 00544656  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544659  8b4204               mov eax, dword ptr [edx + 4]
// 0054465c  50                   push eax
// 0054465d  e8de7f0000           call 0x54c640
// 00544662  83c404               add esp, 4
// 00544665  8b08                 mov ecx, dword ptr [eax]
// 00544667  894dfc               mov dword ptr [ebp - 4], ecx
// 0054466a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054466d  52                   push edx
// 0054466e  e81dd7ffff           call 0x541d90
// 00544673  83c404               add esp, 4
// 00544676  0fbe00               movsx eax, byte ptr [eax]
// 00544679  85c0                 test eax, eax
// 0054467b  7521                 jne 0x54469e
// 0054467d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544680  51                   push ecx
// 00544681  e81ad7ffff           call 0x541da0
// 00544686  83c404               add esp, 4
// 00544689  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054468c  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054468f  3b08                 cmp ecx, dword ptr [eax]
// 00544691  750b                 jne 0x54469e
// 00544693  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544696  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544699  894204               mov dword ptr [edx + 4], eax
// 0054469c  ebb8                 jmp 0x544656
// 0054469e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005446a1  8b55fc               mov edx, dword ptr [ebp - 4]
// 005446a4  895104               mov dword ptr [ecx + 4], edx
// 005446a7  8be5                 mov esp, ebp
// 005446a9  5d                   pop ebp
// 005446aa  c3                   ret 

#pragma optimize("g", off)

struct VChunk;

extern "C" void (__cdecl * const invalid_parameter_noinfo)();
extern "C" char* __cdecl flag_slot(VChunk*);
extern "C" char* __cdecl left_slot(VChunk*);
extern "C" char* __cdecl parent_slot(VChunk*);
extern "C" VChunk* __cdecl next_slot(VChunk*);

struct Iterator {
    void* container;
    VChunk* node;

    bool has_container() const;
    void decrement();
};

void Iterator::decrement()
{
    if (!has_container())
        invalid_parameter_noinfo();

    do {
    } while (0);

    if (*flag_slot(node)) {
        invalid_parameter_noinfo();
    } else if (!*flag_slot(*reinterpret_cast<VChunk**>(left_slot(node)))) {
        node = next_slot(*reinterpret_cast<VChunk**>(left_slot(node)));
    } else {
        VChunk* parent;
        while (!*flag_slot(parent = *reinterpret_cast<VChunk**>(parent_slot(node)))
            && node == *reinterpret_cast<VChunk**>(left_slot(parent))) {
            node = parent;
        }
        node = parent;
    }
}
