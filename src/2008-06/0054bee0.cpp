// from server: 100% by king_originala
// roc 2008-06 0054bee0  unit: RBX::RenderBase::Mesh  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bee0
//
// 0054bee0  55                   push ebp
// 0054bee1  8bec                 mov ebp, esp
// 0054bee3  83ec08               sub esp, 8
// 0054bee6  894df8               mov dword ptr [ebp - 8], ecx
// 0054bee9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054bef0  eb09                 jmp 0x54befb
// 0054bef2  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054bef5  83c001               add eax, 1
// 0054bef8  8945fc               mov dword ptr [ebp - 4], eax
// 0054befb  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054befe  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054bf01  3b5104               cmp edx, dword ptr [ecx + 4]
// 0054bf04  7d14                 jge 0x54bf1a
// 0054bf06  6a00                 push 0
// 0054bf08  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054bf0b  8b08                 mov ecx, dword ptr [eax]
// 0054bf0d  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054bf10  8d0c91               lea ecx, [ecx + edx*4]
// 0054bf13  e8c8b7f8ff           call 0x4d76e0
// 0054bf18  ebd8                 jmp 0x54bef2
// 0054bf1a  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054bf1d  8b08                 mov ecx, dword ptr [eax]
// 0054bf1f  51                   push ecx
// 0054bf20  e8fbbdfbff           call 0x507d20
// 0054bf25  83c404               add esp, 4
// 0054bf28  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054bf2b  c70200000000         mov dword ptr [edx], 0
// 0054bf31  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054bf34  c7400400000000       mov dword ptr [eax + 4], 0
// 0054bf3b  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054bf3e  c7410800000000       mov dword ptr [ecx + 8], 0
// 0054bf45  8be5                 mov esp, ebp
// 0054bf47  5d                   pop ebp
// 0054bf48  c3                   ret 

struct Entry {
    void* value;
    void reset(void* value);
};

extern "C" void __cdecl alignedFree(void* memory);

struct S {
    Entry* entries;
    int count;
    int capacity;
    void clear();
};

#pragma optimize("", off)
void S::clear()
{
    for (int i = 0; i < count; i++)
        entries[i].reset(0);

    alignedFree(entries);
    entries = 0;
    count = 0;
    capacity = 0;
}
