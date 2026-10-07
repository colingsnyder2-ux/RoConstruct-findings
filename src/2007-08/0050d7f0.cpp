// roc 2007-08 0050d7f0  unit: G3D::TextInput::TokenException  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d7f0
//
// 0050d7f0  6aff                 push -1
// 0050d7f2  6819fe7400           push 0x74fe19
// 0050d7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0050d7fd  50                   push eax
// 0050d7fe  83ec20               sub esp, 0x20
// 0050d801  55                   push ebp
// 0050d802  56                   push esi
// 0050d803  57                   push edi
// 0050d804  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050d809  33c4                 xor eax, esp
// 0050d80b  50                   push eax
// 0050d80c  8d442430             lea eax, [esp + 0x30]
// 0050d810  64a300000000         mov dword ptr fs:[0], eax
// 0050d816  8bf1                 mov esi, ecx
// 0050d818  89742410             mov dword ptr [esp + 0x10], esi
// 0050d81c  8b442448             mov eax, dword ptr [esp + 0x48]
// 0050d820  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0050d824  8b542440             mov edx, dword ptr [esp + 0x40]
// 0050d828  50                   push eax
// 0050d829  51                   push ecx
// 0050d82a  52                   push edx
// 0050d82b  8bce                 mov ecx, esi
// 0050d82d  e89efdffff           call 0x50d5d0
// 0050d832  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0050d836  55                   push ebp
// 0050d837  8d4e44               lea ecx, [esi + 0x44]
// 0050d83a  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0050d842  c706e80d7a00         mov dword ptr [esi], 0x7a0de8
// 0050d848  ff159ce67700         call dword ptr [0x77e69c]
// 0050d84e  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0050d852  57                   push edi
// 0050d853  8d4e60               lea ecx, [esi + 0x60]
// 0050d856  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0050d85b  ff159ce67700         call dword ptr [0x77e69c]
// 0050d861  b810000000           mov eax, 0x10
// 0050d866  394718               cmp dword ptr [edi + 0x18], eax
// 0050d869  c644243802           mov byte ptr [esp + 0x38], 2
// 0050d86e  7205                 jb 0x50d875
// 0050d870  8b7f04               mov edi, dword ptr [edi + 4]
// 0050d873  eb03                 jmp 0x50d878
// 0050d875  83c704               add edi, 4
// 0050d878  394518               cmp dword ptr [ebp + 0x18], eax
// 0050d87b  7205                 jb 0x50d882
// 0050d87d  8b4504               mov eax, dword ptr [ebp + 4]
// 0050d880  eb03                 jmp 0x50d885
// 0050d882  8d4504               lea eax, [ebp + 4]
// 0050d885  57                   push edi
// 0050d886  50                   push eax
// 0050d887  8d44241c             lea eax, [esp + 0x1c]
// 0050d88b  68b80d7a00           push 0x7a0db8
// 0050d890  50                   push eax
// 0050d891  e82a3fffff           call 0x5017c0
// 0050d896  83c410               add esp, 0x10
// 0050d899  50                   push eax
// 0050d89a  8d4e28               lea ecx, [esi + 0x28]
// 0050d89d  c644243c03           mov byte ptr [esp + 0x3c], 3
// 0050d8a2  ff1564e67700         call dword ptr [0x77e664]
// 0050d8a8  8d4c2414             lea ecx, [esp + 0x14]
// 0050d8ac  c644243802           mov byte ptr [esp + 0x38], 2
// 0050d8b1  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d8b7  8bc6                 mov eax, esi
// 0050d8b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0050d8bd  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d8c4  59                   pop ecx
// 0050d8c5  5f                   pop edi
// 0050d8c6  5e                   pop esi
// 0050d8c7  5d                   pop ebp
// 0050d8c8  83c42c               add esp, 0x2c
// 0050d8cb  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
