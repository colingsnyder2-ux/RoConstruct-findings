// roc 2009-12 008e9aa0  unit: CXTPRibbonGroup  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9aa0
//
// 008e9aa0  83ec1c               sub esp, 0x1c
// 008e9aa3  53                   push ebx
// 008e9aa4  55                   push ebp
// 008e9aa5  56                   push esi
// 008e9aa6  8be9                 mov ebp, ecx
// 008e9aa8  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 008e9aab  57                   push edi
// 008e9aac  e8bfb1faff           call 0x894c70
// 008e9ab1  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 008e9ab7  8b7d34               mov edi, dword ptr [ebp + 0x34]
// 008e9aba  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 008e9abd  035d38               add ebx, dword ptr [ebp + 0x38]
// 008e9ac0  33c9                 xor ecx, ecx
// 008e9ac2  83c704               add edi, 4
// 008e9ac5  894c2410             mov dword ptr [esp + 0x10], ecx
// 008e9ac9  85c0                 test eax, eax
// 008e9acb  7f0e                 jg 0x8e9adb
// 008e9acd  5f                   pop edi
// 008e9ace  5e                   pop esi
// 008e9acf  5d                   pop ebp
// 008e9ad0  5b                   pop ebx
// 008e9ad1  83c41c               add esp, 0x1c
// 008e9ad4  c20400               ret 4
// 008e9ad7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e9adb  85c9                 test ecx, ecx
// 008e9add  7c15                 jl 0x8e9af4
// 008e9adf  3bc8                 cmp ecx, eax
// 008e9ae1  7d11                 jge 0x8e9af4
// 008e9ae3  3b4d4c               cmp ecx, dword ptr [ebp + 0x4c]
// 008e9ae6  0f8d82000000         jge 0x8e9b6e
// 008e9aec  8b4548               mov eax, dword ptr [ebp + 0x48]
// 008e9aef  8b3488               mov esi, dword ptr [eax + ecx*4]
// 008e9af2  eb02                 jmp 0x8e9af6
// 008e9af4  33f6                 xor esi, esi
// 008e9af6  8b16                 mov edx, dword ptr [esi]
// 008e9af8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008e9afe  6a00                 push 0
// 008e9b00  8bce                 mov ecx, esi
// 008e9b02  ffd0                 call eax
// 008e9b04  85c0                 test eax, eax
// 008e9b06  7448                 je 0x8e9b50
// 008e9b08  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e9b0c  8b16                 mov edx, dword ptr [esi]
// 008e9b0e  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 008e9b14  50                   push eax
// 008e9b15  8d4c2418             lea ecx, [esp + 0x18]
// 008e9b19  51                   push ecx
// 008e9b1a  8bce                 mov ecx, esi
// 008e9b1c  ffd2                 call edx
// 008e9b1e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e9b22  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e9b26  8d0c38               lea ecx, [eax + edi]
// 008e9b29  83ec10               sub esp, 0x10
// 008e9b2c  8bc4                 mov eax, esp
// 008e9b2e  03d3                 add edx, ebx
// 008e9b30  8938                 mov dword ptr [eax], edi
// 008e9b32  89542438             mov dword ptr [esp + 0x38], edx
// 008e9b36  8b16                 mov edx, dword ptr [esi]
// 008e9b38  8b527c               mov edx, dword ptr [edx + 0x7c]
// 008e9b3b  895804               mov dword ptr [eax + 4], ebx
// 008e9b3e  894808               mov dword ptr [eax + 8], ecx
// 008e9b41  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e9b45  89480c               mov dword ptr [eax + 0xc], ecx
// 008e9b48  8bce                 mov ecx, esi
// 008e9b4a  ffd2                 call edx
// 008e9b4c  037c2414             add edi, dword ptr [esp + 0x14]
// 008e9b50  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e9b54  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 008e9b57  41                   inc ecx
// 008e9b58  3bc8                 cmp ecx, eax
// 008e9b5a  894c2410             mov dword ptr [esp + 0x10], ecx
// 008e9b5e  0f8c73ffffff         jl 0x8e9ad7
// 008e9b64  5f                   pop edi
// 008e9b65  5e                   pop esi
// 008e9b66  5d                   pop ebp
// 008e9b67  5b                   pop ebx
// 008e9b68  83c41c               add esp, 0x1c
// 008e9b6b  c20400               ret 4
// 008e9b6e  e8999ff0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RepositionControls@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp