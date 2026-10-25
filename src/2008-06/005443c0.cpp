// from server: 100% by king_originala
// roc 2008-06 005443c0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005443c0
//
// 005443c0  55                   push ebp
// 005443c1  8bec                 mov ebp, esp
// 005443c3  83ec08               sub esp, 8
// 005443c6  894df8               mov dword ptr [ebp - 8], ecx
// 005443c9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005443cc  e83fe0ebff           call 0x402410
// 005443d1  0fb6c0               movzx eax, al
// 005443d4  85c0                 test eax, eax
// 005443d6  7506                 jne 0x5443de
// 005443d8  ff1590288000         call dword ptr [0x802890]
// 005443de  33c9                 xor ecx, ecx
// 005443e0  75fc                 jne 0x5443de
// 005443e2  8b55f8               mov edx, dword ptr [ebp - 8]
// 005443e5  8b4204               mov eax, dword ptr [edx + 4]
// 005443e8  50                   push eax
// 005443e9  e812eaffff           call 0x542e00
// 005443ee  83c404               add esp, 4
// 005443f1  0fbe08               movsx ecx, byte ptr [eax]
// 005443f4  85c9                 test ecx, ecx
// 005443f6  740b                 je 0x544403
// 005443f8  ff1590288000         call dword ptr [0x802890]
// 005443fe  e994000000           jmp 0x544497
// 00544403  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544406  8b4204               mov eax, dword ptr [edx + 4]
// 00544409  50                   push eax
// 0054440a  e891d9ffff           call 0x541da0
// 0054440f  83c404               add esp, 4
// 00544412  8b08                 mov ecx, dword ptr [eax]
// 00544414  51                   push ecx
// 00544415  e8e6e9ffff           call 0x542e00
// 0054441a  83c404               add esp, 4
// 0054441d  0fbe10               movsx edx, byte ptr [eax]
// 00544420  85d2                 test edx, edx
// 00544422  7522                 jne 0x544446
// 00544424  8b45f8               mov eax, dword ptr [ebp - 8]
// 00544427  8b4804               mov ecx, dword ptr [eax + 4]
// 0054442a  51                   push ecx
// 0054442b  e870d9ffff           call 0x541da0
// 00544430  83c404               add esp, 4
// 00544433  8b10                 mov edx, dword ptr [eax]
// 00544435  52                   push edx
// 00544436  e8b50c0000           call 0x5450f0
// 0054443b  83c404               add esp, 4
// 0054443e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544441  894104               mov dword ptr [ecx + 4], eax
// 00544444  eb51                 jmp 0x544497
// 00544446  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544449  8b4204               mov eax, dword ptr [edx + 4]
// 0054444c  50                   push eax
// 0054444d  e8ee810000           call 0x54c640
// 00544452  83c404               add esp, 4
// 00544455  8b08                 mov ecx, dword ptr [eax]
// 00544457  894dfc               mov dword ptr [ebp - 4], ecx
// 0054445a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054445d  52                   push edx
// 0054445e  e89de9ffff           call 0x542e00
// 00544463  83c404               add esp, 4
// 00544466  0fbe00               movsx eax, byte ptr [eax]
// 00544469  85c0                 test eax, eax
// 0054446b  7521                 jne 0x54448e
// 0054446d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544470  51                   push ecx
// 00544471  e82ad9ffff           call 0x541da0
// 00544476  83c404               add esp, 4
// 00544479  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054447c  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054447f  3b08                 cmp ecx, dword ptr [eax]
// 00544481  750b                 jne 0x54448e
// 00544483  8b55f8               mov edx, dword ptr [ebp - 8]
// 00544486  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544489  894204               mov dword ptr [edx + 4], eax
// 0054448c  ebb8                 jmp 0x544446
// 0054448e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544491  8b55fc               mov edx, dword ptr [ebp - 4]
// 00544494  895104               mov dword ptr [ecx + 4], edx
// 00544497  8be5                 mov esp, ebp
// 00544499  5d                   pop ebp
// 0054449a  c3                   ret 

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
