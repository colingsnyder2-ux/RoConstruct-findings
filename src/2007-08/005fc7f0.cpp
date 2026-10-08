// roc 2007-08 005fc7f0  unit: RBX::ResizeTool  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fc7f0
//
// 005fc7f0  55                   push ebp
// 005fc7f1  8bec                 mov ebp, esp
// 005fc7f3  6aff                 push -1
// 005fc7f5  68c0bc7500           push 0x75bcc0
// 005fc7fa  64a100000000         mov eax, dword ptr fs:[0]
// 005fc800  50                   push eax
// 005fc801  64892500000000       mov dword ptr fs:[0], esp
// 005fc808  83ec08               sub esp, 8
// 005fc80b  53                   push ebx
// 005fc80c  56                   push esi
// 005fc80d  57                   push edi
// 005fc80e  8bf9                 mov edi, ecx
// 005fc810  8b4704               mov eax, dword ptr [edi + 4]
// 005fc813  8d4f04               lea ecx, [edi + 4]
// 005fc816  33d2                 xor edx, edx
// 005fc818  3bc2                 cmp eax, edx
// 005fc81a  8965f0               mov dword ptr [ebp - 0x10], esp
// 005fc81d  8955ec               mov dword ptr [ebp - 0x14], edx
// 005fc820  7405                 je 0x5fc827
// 005fc822  395004               cmp dword ptr [eax + 4], edx
// 005fc825  751b                 jne 0x5fc842
// 005fc827  8b4508               mov eax, dword ptr [ebp + 8]
// 005fc82a  8910                 mov dword ptr [eax], edx
// 005fc82c  895004               mov dword ptr [eax + 4], edx
// 005fc82f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005fc832  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc839  5f                   pop edi
// 005fc83a  5e                   pop esi
// 005fc83b  5b                   pop ebx
// 005fc83c  8be5                 mov esp, ebp
// 005fc83e  5d                   pop ebp
// 005fc83f  c20400               ret 4
// 005fc842  8b7508               mov esi, dword ptr [ebp + 8]
// 005fc845  51                   push ecx
// 005fc846  8d4e04               lea ecx, [esi + 4]
// 005fc849  8955fc               mov dword ptr [ebp - 4], edx
// 005fc84c  e87f0ce1ff           call 0x40d4d0
// 005fc851  8b07                 mov eax, dword ptr [edi]
// 005fc853  8906                 mov dword ptr [esi], eax
// 005fc855  8bc6                 mov eax, esi
// 005fc857  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005fc85a  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc861  5f                   pop edi
// 005fc862  5e                   pop esi
// 005fc863  5b                   pop ebx
// 005fc864  8be5                 mov esp, ebp
// 005fc866  5d                   pop ebp
// 005fc867  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?lock@?$weak_ptr@VPartInstance@RBX@@@boost@@QBE?AV?$shared_ptr@VPartInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
