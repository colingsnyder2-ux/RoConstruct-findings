// roc 2007-08 0050d8d0  unit: G3D::TextInput::TokenException  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d8d0
//
// 0050d8d0  6aff                 push -1
// 0050d8d2  6854fe7400           push 0x74fe54
// 0050d8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0050d8dd  50                   push eax
// 0050d8de  51                   push ecx
// 0050d8df  56                   push esi
// 0050d8e0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050d8e5  33c4                 xor eax, esp
// 0050d8e7  50                   push eax
// 0050d8e8  8d44240c             lea eax, [esp + 0xc]
// 0050d8ec  64a300000000         mov dword ptr fs:[0], eax
// 0050d8f2  8bf1                 mov esi, ecx
// 0050d8f4  89742408             mov dword ptr [esp + 8], esi
// 0050d8f8  8d4e60               lea ecx, [esi + 0x60]
// 0050d8fb  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0050d903  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d909  8d4e44               lea ecx, [esi + 0x44]
// 0050d90c  c644241400           mov byte ptr [esp + 0x14], 0
// 0050d911  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d917  8bce                 mov ecx, esi
// 0050d919  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050d921  e86afbffff           call 0x50d490
// 0050d926  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d92a  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d931  59                   pop ecx
// 0050d932  5e                   pop esi
// 0050d933  83c410               add esp, 0x10
// 0050d936  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
