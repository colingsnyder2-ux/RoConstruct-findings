// from server: 100% by king_originala
// roc 2008-06 0054c220  unit: RBX::RenderBase::Mesh  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c220
//
// 0054c220  55                   push ebp
// 0054c221  8bec                 mov ebp, esp
// 0054c223  83ec08               sub esp, 8
// 0054c226  894df8               mov dword ptr [ebp - 8], ecx
// 0054c229  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054c230  eb09                 jmp 0x54c23b
// 0054c232  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c235  83c001               add eax, 1
// 0054c238  8945fc               mov dword ptr [ebp - 4], eax
// 0054c23b  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054c23e  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c241  3b5104               cmp edx, dword ptr [ecx + 4]
// 0054c244  7d14                 jge 0x54c25a
// 0054c246  6a00                 push 0
// 0054c248  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c24b  6bc918               imul ecx, ecx, 0x18
// 0054c24e  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054c251  0308                 add ecx, dword ptr [eax]
// 0054c253  e858020000           call 0x54c4b0
// 0054c258  ebd8                 jmp 0x54c232
// 0054c25a  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054c25d  8b11                 mov edx, dword ptr [ecx]
// 0054c25f  52                   push edx
// 0054c260  e8bbbafbff           call 0x507d20
// 0054c265  83c404               add esp, 4
// 0054c268  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054c26b  c70000000000         mov dword ptr [eax], 0
// 0054c271  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054c274  c7410400000000       mov dword ptr [ecx + 4], 0
// 0054c27b  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054c27e  c7420800000000       mov dword ptr [edx + 8], 0
// 0054c285  8be5                 mov esp, ebp
// 0054c287  5d                   pop ebp
// 0054c288  c3                   ret 

struct Element {
    char storage[24];
    void *destroy(unsigned int);
};

extern "C" void __cdecl alignedFree(void *);

struct S {
    Element *data;
    int count;
    int capacity;
    void clear();
};

#pragma optimize("", off)
void S::clear() {
    for (int i = 0; i < count; i++)
        data[i].destroy(0);

    alignedFree(data);
    data = 0;
    count = 0;
    capacity = 0;
}
