// from server: 100% by king_originala
// roc 2008-06 00553310  unit: RBX::RenderBase::AggregateChunk  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553310
//
// 00553310  55                   push ebp
// 00553311  8bec                 mov ebp, esp
// 00553313  83ec0c               sub esp, 0xc
// 00553316  894df8               mov dword ptr [ebp - 8], ecx
// 00553319  c745fc66666606       mov dword ptr [ebp - 4], 0x6666666
// 00553320  837dfc00             cmp dword ptr [ebp - 4], 0
// 00553324  7608                 jbe 0x55332e
// 00553326  8b45fc               mov eax, dword ptr [ebp - 4]
// 00553329  8945f4               mov dword ptr [ebp - 0xc], eax
// 0055332c  eb07                 jmp 0x553335
// 0055332e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 00553335  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00553338  8be5                 mov esp, ebp
// 0055333a  5d                   pop ebp
// 0055333b  c3                   ret 

struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0x06666666;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)
