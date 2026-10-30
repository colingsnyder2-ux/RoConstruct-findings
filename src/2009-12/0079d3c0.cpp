// roc 2009-12 0079d3c0  unit: seg_00790000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079d3c0
//
// 0079d3c0  51                   push ecx
// 0079d3c1  53                   push ebx
// 0079d3c2  55                   push ebp
// 0079d3c3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079d3c7  56                   push esi
// 0079d3c8  8bf0                 mov esi, eax
// 0079d3ca  807e015e             cmp byte ptr [esi + 1], 0x5e
// 0079d3ce  57                   push edi
// 0079d3cf  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0079d3d7  7509                 jne 0x79d3e2
// 0079d3d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0079d3e1  46                   inc esi
// 0079d3e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079d3e6  46                   inc esi
// 0079d3e7  3bf1                 cmp esi, ecx
// 0079d3e9  7357                 jae 0x79d442
// 0079d3eb  8d7e02               lea edi, [esi + 2]
// 0079d3ee  8bff                 mov edi, edi
// 0079d3f0  8a06                 mov al, byte ptr [esi]
// 0079d3f2  3c25                 cmp al, 0x25
// 0079d3f4  7517                 jne 0x79d40d
// 0079d3f6  0fb65e01             movzx ebx, byte ptr [esi + 1]
// 0079d3fa  46                   inc esi
// 0079d3fb  8bc5                 mov eax, ebp
// 0079d3fd  47                   inc edi
// 0079d3fe  e89dfeffff           call 0x79d2a0
// 0079d403  85c0                 test eax, eax
// 0079d405  7524                 jne 0x79d42b
// 0079d407  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079d40b  eb2f                 jmp 0x79d43c
// 0079d40d  807e012d             cmp byte ptr [esi + 1], 0x2d
// 0079d411  7522                 jne 0x79d435
// 0079d413  3bf9                 cmp edi, ecx
// 0079d415  731e                 jae 0x79d435
// 0079d417  0fb606               movzx eax, byte ptr [esi]
// 0079d41a  83c602               add esi, 2
// 0079d41d  83c702               add edi, 2
// 0079d420  3bc5                 cmp eax, ebp
// 0079d422  7f18                 jg 0x79d43c
// 0079d424  0fb616               movzx edx, byte ptr [esi]
// 0079d427  3bea                 cmp ebp, edx
// 0079d429  7f11                 jg 0x79d43c
// 0079d42b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079d42f  5f                   pop edi
// 0079d430  5e                   pop esi
// 0079d431  5d                   pop ebp
// 0079d432  5b                   pop ebx
// 0079d433  59                   pop ecx
// 0079d434  c3                   ret 
// 0079d435  0fb6c0               movzx eax, al
// 0079d438  3bc5                 cmp eax, ebp
// 0079d43a  74ef                 je 0x79d42b
// 0079d43c  46                   inc esi
// 0079d43d  47                   inc edi
// 0079d43e  3bf1                 cmp esi, ecx
// 0079d440  72ae                 jb 0x79d3f0
// 0079d442  5f                   pop edi
// 0079d443  33c0                 xor eax, eax
// 0079d445  3944240c             cmp dword ptr [esp + 0xc], eax
// 0079d449  5e                   pop esi
// 0079d44a  5d                   pop ebp
// 0079d44b  0f94c0               sete al
// 0079d44e  5b                   pop ebx
// 0079d44f  59                   pop ecx
// 0079d450  c3                   ret 
// copied from an identical function in another client (function _matchbracketclass)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c