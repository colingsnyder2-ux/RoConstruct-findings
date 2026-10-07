// roc 2007-08 0050e810  unit: G3D::TextInput::WrongSymbol  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050e810
//
// 0050e810  6aff                 push -1
// 0050e812  68a8007500           push 0x7500a8
// 0050e817  64a100000000         mov eax, dword ptr fs:[0]
// 0050e81d  50                   push eax
// 0050e81e  83ec34               sub esp, 0x34
// 0050e821  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050e826  33c4                 xor eax, esp
// 0050e828  89442430             mov dword ptr [esp + 0x30], eax
// 0050e82c  53                   push ebx
// 0050e82d  55                   push ebp
// 0050e82e  56                   push esi
// 0050e82f  57                   push edi
// 0050e830  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050e835  33c4                 xor eax, esp
// 0050e837  50                   push eax
// 0050e838  8d442448             lea eax, [esp + 0x48]
// 0050e83c  64a300000000         mov dword ptr fs:[0], eax
// 0050e842  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0050e846  8bf1                 mov esi, ecx
// 0050e848  8b4610               mov eax, dword ptr [esi + 0x10]
// 0050e84b  85c0                 test eax, eax
// 0050e84d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050e855  0f86c0000000         jbe 0x50e91b
// 0050e85b  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0050e85e  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050e864  03c7                 add eax, edi
// 0050e866  3bf8                 cmp edi, eax
// 0050e868  7602                 jbe 0x50e86c
// 0050e86a  ffd5                 call ebp
// 0050e86c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0050e86f  034e0c               add ecx, dword ptr [esi + 0xc]
// 0050e872  3bf9                 cmp edi, ecx
// 0050e874  7202                 jb 0x50e878
// 0050e876  ffd5                 call ebp
// 0050e878  8b4608               mov eax, dword ptr [esi + 8]
// 0050e87b  3bc7                 cmp eax, edi
// 0050e87d  7702                 ja 0x50e881
// 0050e87f  2bf8                 sub edi, eax
// 0050e881  8b5604               mov edx, dword ptr [esi + 4]
// 0050e884  8b3cba               mov edi, dword ptr [edx + edi*4]
// 0050e887  57                   push edi
// 0050e888  8d4c241c             lea ecx, [esp + 0x1c]
// 0050e88c  ff159ce67700         call dword ptr [0x77e69c]
// 0050e892  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0050e895  89442434             mov dword ptr [esp + 0x34], eax
// 0050e899  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0050e89c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0050e8a0  8b5724               mov edx, dword ptr [edi + 0x24]
// 0050e8a3  8954243c             mov dword ptr [esp + 0x3c], edx
// 0050e8a7  8b4728               mov eax, dword ptr [edi + 0x28]
// 0050e8aa  89442440             mov dword ptr [esp + 0x40], eax
// 0050e8ae  33ff                 xor edi, edi
// 0050e8b0  83cdff               or ebp, 0xffffffff
// 0050e8b3  397e10               cmp dword ptr [esi + 0x10], edi
// 0050e8b6  897c2450             mov dword ptr [esp + 0x50], edi
// 0050e8ba  7426                 je 0x50e8e2
// 0050e8bc  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050e8bf  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050e8c2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0050e8c5  ff15ace67700         call dword ptr [0x77e6ac]
// 0050e8cb  83460c01             add dword ptr [esi + 0xc], 1
// 0050e8cf  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050e8d2  394608               cmp dword ptr [esi + 8], eax
// 0050e8d5  7703                 ja 0x50e8da
// 0050e8d7  897e0c               mov dword ptr [esi + 0xc], edi
// 0050e8da  016e10               add dword ptr [esi + 0x10], ebp
// 0050e8dd  7503                 jne 0x50e8e2
// 0050e8df  897e0c               mov dword ptr [esi + 0xc], edi
// 0050e8e2  8d542418             lea edx, [esp + 0x18]
// 0050e8e6  52                   push edx
// 0050e8e7  8bcb                 mov ecx, ebx
// 0050e8e9  ff159ce67700         call dword ptr [0x77e69c]
// 0050e8ef  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050e8f3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0050e8f7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0050e8fb  89431c               mov dword ptr [ebx + 0x1c], eax
// 0050e8fe  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050e902  894b20               mov dword ptr [ebx + 0x20], ecx
// 0050e905  8d4c2418             lea ecx, [esp + 0x18]
// 0050e909  895324               mov dword ptr [ebx + 0x24], edx
// 0050e90c  894328               mov dword ptr [ebx + 0x28], eax
// 0050e90f  896c2450             mov dword ptr [esp + 0x50], ebp
// 0050e913  ff15ace67700         call dword ptr [0x77e6ac]
// 0050e919  eb06                 jmp 0x50e921
// 0050e91b  53                   push ebx
// 0050e91c  e84ff2ffff           call 0x50db70
// 0050e921  8bc3                 mov eax, ebx
// 0050e923  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050e927  64890d00000000       mov dword ptr fs:[0], ecx
// 0050e92e  59                   pop ecx
// 0050e92f  5f                   pop edi
// 0050e930  5e                   pop esi
// 0050e931  5d                   pop ebp
// 0050e932  5b                   pop ebx
// 0050e933  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0050e937  33cc                 xor ecx, esp
// 0050e939  e8e0201200           call 0x630a1e
// 0050e93e  83c440               add esp, 0x40
// 0050e941  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
