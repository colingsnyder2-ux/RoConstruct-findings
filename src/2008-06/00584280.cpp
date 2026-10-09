// roc 2008-06 00584280  unit: RBX::ModelInstance  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584280
//
// 00584280  53                   push ebx
// 00584281  55                   push ebp
// 00584282  56                   push esi
// 00584283  57                   push edi
// 00584284  8bd9                 mov ebx, ecx
// 00584286  33ff                 xor edi, edi
// 00584288  e8936bf0ff           call 0x48ae20
// 0058428d  85c0                 test eax, eax
// 0058428f  7668                 jbe 0x5842f9
// 00584291  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00584295  eb09                 jmp 0x5842a0
// 00584297  8da42400000000       lea esp, [esp]
// 0058429e  8bff                 mov edi, edi
// 005842a0  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005842a6  8b4610               mov eax, dword ptr [esi + 0x10]
// 005842a9  2b460c               sub eax, dword ptr [esi + 0xc]
// 005842ac  c1f803               sar eax, 3
// 005842af  3bf8                 cmp edi, eax
// 005842b1  7206                 jb 0x5842b9
// 005842b3  ff1590288000         call dword ptr [0x802890]
// 005842b9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005842bc  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 005842bf  6a00                 push 0
// 005842c1  681c7f9400           push 0x947f1c
// 005842c6  687c909200           push 0x92907c
// 005842cb  6a00                 push 0
// 005842cd  50                   push eax
// 005842ce  e8f3d41100           call 0x6a17c6
// 005842d3  83c414               add esp, 0x14
// 005842d6  85c0                 test eax, eax
// 005842d8  7413                 je 0x5842ed
// 005842da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005842de  8b10                 mov edx, dword ptr [eax]
// 005842e0  8b5260               mov edx, dword ptr [edx + 0x60]
// 005842e3  55                   push ebp
// 005842e4  51                   push ecx
// 005842e5  8bc8                 mov ecx, eax
// 005842e7  ffd2                 call edx
// 005842e9  84c0                 test al, al
// 005842eb  7515                 jne 0x584302
// 005842ed  8bcb                 mov ecx, ebx
// 005842ef  47                   inc edi
// 005842f0  e82b6bf0ff           call 0x48ae20
// 005842f5  3bf8                 cmp edi, eax
// 005842f7  72a7                 jb 0x5842a0
// 005842f9  5f                   pop edi
// 005842fa  5e                   pop esi
// 005842fb  5d                   pop ebp
// 005842fc  32c0                 xor al, al
// 005842fe  5b                   pop ebx
// 005842ff  c20800               ret 8
// 00584302  5f                   pop edi
// 00584303  5e                   pop esi
// 00584304  5d                   pop ebp
// 00584305  b001                 mov al, 1
// 00584307  5b                   pop ebx
// 00584308  c20800               ret 8
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ?hitTest@ModelInstance@RBX@@UAE_NABVRay@G3D@@AAVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp
