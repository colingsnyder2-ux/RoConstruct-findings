// from server: 100% by king_originala
// roc 2008-06 00544350  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544350
//
// 00544350  55                   push ebp
// 00544351  8bec                 mov ebp, esp
// 00544353  51                   push ecx
// 00544354  894dfc               mov dword ptr [ebp - 4], ecx
// 00544357  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054435a  e8b1e0ebff           call 0x402410
// 0054435f  0fb6c0               movzx eax, al
// 00544362  85c0                 test eax, eax
// 00544364  7506                 jne 0x54436c
// 00544366  ff1590288000         call dword ptr [0x802890]
// 0054436c  33c9                 xor ecx, ecx
// 0054436e  75fc                 jne 0x54436c
// 00544370  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544373  e888e0ebff           call 0x402400
// 00544378  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054437b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054437e  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00544381  7506                 jne 0x544389
// 00544383  ff1590288000         call dword ptr [0x802890]
// 00544389  33d2                 xor edx, edx
// 0054438b  75fc                 jne 0x544389
// 0054438d  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544390  8b4804               mov ecx, dword ptr [eax + 4]
// 00544393  51                   push ecx
// 00544394  e8a7f2ffff           call 0x543640
// 00544399  83c404               add esp, 4
// 0054439c  8be5                 mov esp, ebp
// 0054439e  5d                   pop ebp
// 0054439f  c3                   ret 

#pragma optimize("g", off)

struct VChunk {
    char pad[0x0c];
};

struct Container {
    char pad[0x18];
    VChunk* end;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();
char* __cdecl chunk_data(VChunk* p);

struct Iterator {
    void* owner;
    VChunk* current;

    bool __thiscall has_container() const;
    const Container* __thiscall get_container() const;
    char* __thiscall get();
};

char* Iterator::get()
{
    if (!has_container())
        invalid_parameter_noinfo();
    do {
    } while (false);

    if (current == get_container()->end)
        invalid_parameter_noinfo();
    do {
    } while (false);

    return chunk_data(current);
}
