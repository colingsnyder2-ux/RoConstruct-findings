// from server: 92% by king_originala
// roc 2008-06 00543580  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00543580
//
// 00543580  55                   push ebp
// 00543581  8bec                 mov ebp, esp
// 00543583  83ec0c               sub esp, 0xc
// 00543586  894df4               mov dword ptr [ebp - 0xc], ecx
// 00543589  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054358c  e85feeffff           call 0x5423f0
// 00543591  8b00                 mov eax, dword ptr [eax]
// 00543593  8945f8               mov dword ptr [ebp - 8], eax
// 00543596  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00543599  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054359c  8955fc               mov dword ptr [ebp - 4], edx
// 0054359f  8b45f8               mov eax, dword ptr [ebp - 8]
// 005435a2  50                   push eax
// 005435a3  e858f8ffff           call 0x542e00
// 005435a8  83c404               add esp, 4
// 005435ab  0fbe08               movsx ecx, byte ptr [eax]
// 005435ae  85c9                 test ecx, ecx
// 005435b0  754f                 jne 0x543601
// 005435b2  8b5508               mov edx, dword ptr [ebp + 8]
// 005435b5  52                   push edx
// 005435b6  8b45f8               mov eax, dword ptr [ebp - 8]
// 005435b9  50                   push eax
// 005435ba  e851900000           call 0x54c610
// 005435bf  83c404               add esp, 4
// 005435c2  50                   push eax
// 005435c3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005435c6  83c108               add ecx, 8
// 005435c9  e8a2e7ffff           call 0x541d70
// 005435ce  0fb6c8               movzx ecx, al
// 005435d1  85c9                 test ecx, ecx
// 005435d3  7413                 je 0x5435e8
// 005435d5  8b55f8               mov edx, dword ptr [ebp - 8]
// 005435d8  52                   push edx
// 005435d9  e8c2e7ffff           call 0x541da0
// 005435de  83c404               add esp, 4
// 005435e1  8b00                 mov eax, dword ptr [eax]
// 005435e3  8945f8               mov dword ptr [ebp - 8], eax
// 005435e6  eb17                 jmp 0x5435ff
// 005435e8  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005435eb  894dfc               mov dword ptr [ebp - 4], ecx
// 005435ee  8b55f8               mov edx, dword ptr [ebp - 8]
// 005435f1  52                   push edx
// 005435f2  e839900000           call 0x54c630
// 005435f7  83c404               add esp, 4
// 005435fa  8b00                 mov eax, dword ptr [eax]
// 005435fc  8945f8               mov dword ptr [ebp - 8], eax
// 005435ff  eb9e                 jmp 0x54359f
// 00543601  8b45fc               mov eax, dword ptr [ebp - 4]
// 00543604  8be5                 mov esp, ebp
// 00543606  5d                   pop ebp
// 00543607  c20400               ret 4

#pragma optimize("", off)

struct VChunk;

extern "C" char* __cdecl node_flag(VChunk*);
extern "C" char* __cdecl node_value(VChunk*);
extern "C" char* __cdecl node_left(VChunk*);
extern "C" char* __cdecl node_right(VChunk*);

struct Comparator {
    bool less(char*, int);
};

struct S {
    char padding0[8];
    Comparator comparator;
    char padding1[15];
    VChunk* sentinel;

    VChunk** begin();
    VChunk* find(int key);
};

VChunk* S::find(int key)
{
    VChunk* candidate;
    VChunk* current = *begin();
    candidate = sentinel;

    while (*node_flag(current) == 0) {
        if (comparator.less(node_value(current), key)) {
            current = *reinterpret_cast<VChunk**>(node_left(current));
        } else {
            candidate = current;
            current = *reinterpret_cast<VChunk**>(node_right(current));
        }
    }

    return candidate;
}
