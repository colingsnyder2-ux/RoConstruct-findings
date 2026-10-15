// roc 2008-06 00585b30  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585b30
//
// 00585b30  64a100000000         mov eax, dword ptr fs:[0]
// 00585b36  6aff                 push -1
// 00585b38  68c88d7d00           push 0x7d8dc8
// 00585b3d  50                   push eax
// 00585b3e  64892500000000       mov dword ptr fs:[0], esp
// 00585b45  83ec38               sub esp, 0x38
// 00585b48  55                   push ebp
// 00585b49  56                   push esi
// 00585b4a  8b742450             mov esi, dword ptr [esp + 0x50]
// 00585b4e  8be9                 mov ebp, ecx
// 00585b50  85f6                 test esi, esi
// 00585b52  0f84cc000000         je 0x585c24
// 00585b58  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00585b5e  3be9                 cmp ebp, ecx
// 00585b60  0f84be000000         je 0x585c24
// 00585b66  85c9                 test ecx, ecx
// 00585b68  740e                 je 0x585b78
// 00585b6a  55                   push ebp
// 00585b6b  e870cfe9ff           call 0x422ae0
// 00585b70  84c0                 test al, al
// 00585b72  0f85ac000000         jne 0x585c24
// 00585b78  8d442408             lea eax, [esp + 8]
// 00585b7c  56                   push esi
// 00585b7d  50                   push eax
// 00585b7e  e8bd2e0900           call 0x618a40
// 00585b83  83c408               add esp, 8
// 00585b86  8b08                 mov ecx, dword ptr [eax]
// 00585b88  83c004               add eax, 4
// 00585b8b  898de4010000         mov dword ptr [ebp + 0x1e4], ecx
// 00585b91  50                   push eax
// 00585b92  8d8de8010000         lea ecx, [ebp + 0x1e8]
// 00585b98  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00585ba0  e80bcae7ff           call 0x4025b0
// 00585ba5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00585ba9  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00585bb1  85c0                 test eax, eax
// 00585bb3  742c                 je 0x585be1
// 00585bb5  8bf0                 mov esi, eax
// 00585bb7  83c004               add eax, 4
// 00585bba  83caff               or edx, 0xffffffff
// 00585bbd  f00fc110             lock xadd dword ptr [eax], edx
// 00585bc1  751e                 jne 0x585be1
// 00585bc3  8b06                 mov eax, dword ptr [esi]
// 00585bc5  8b5004               mov edx, dword ptr [eax + 4]
// 00585bc8  8bce                 mov ecx, esi
// 00585bca  ffd2                 call edx
// 00585bcc  8d4608               lea eax, [esi + 8]
// 00585bcf  83c9ff               or ecx, 0xffffffff
// 00585bd2  f00fc108             lock xadd dword ptr [eax], ecx
// 00585bd6  7509                 jne 0x585be1
// 00585bd8  8b16                 mov edx, dword ptr [esi]
// 00585bda  8b4208               mov eax, dword ptr [edx + 8]
// 00585bdd  8bce                 mov ecx, esi
// 00585bdf  ffd0                 call eax
// 00585be1  83bde001000000       cmp dword ptr [ebp + 0x1e0], 0
// 00585be8  744d                 je 0x585c37
// 00585bea  57                   push edi
// 00585beb  8d4c2414             lea ecx, [esp + 0x14]
// 00585bef  e8dc26efff           call 0x4782d0
// 00585bf4  8d95b0010000         lea edx, [ebp + 0x1b0]
// 00585bfa  b909000000           mov ecx, 9
// 00585bff  8bf0                 mov esi, eax
// 00585c01  8bfa                 mov edi, edx
// 00585c03  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00585c05  d94024               fld dword ptr [eax + 0x24]
// 00585c08  d95a24               fstp dword ptr [edx + 0x24]
// 00585c0b  d94028               fld dword ptr [eax + 0x28]
// 00585c0e  d95a28               fstp dword ptr [edx + 0x28]
// 00585c11  d9402c               fld dword ptr [eax + 0x2c]
// 00585c14  d95a2c               fstp dword ptr [edx + 0x2c]
// 00585c17  c785e001000000000000 mov dword ptr [ebp + 0x1e0], 0
// 00585c21  5f                   pop edi
// 00585c22  eb13                 jmp 0x585c37
// 00585c24  8d8de4010000         lea ecx, [ebp + 0x1e4]
// 00585c2a  e85112edff           call 0x456e80
// 00585c2f  56                   push esi
// 00585c30  8bcd                 mov ecx, ebp
// 00585c32  e809deffff           call 0x583a40
// 00585c37  6834549700           push 0x975434
// 00585c3c  8bcd                 mov ecx, ebp
// 00585c3e  e8bd7ee8ff           call 0x40db00
// 00585c43  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00585c47  5e                   pop esi
// 00585c48  5d                   pop ebp
// 00585c49  64890d00000000       mov dword ptr fs:[0], ecx
// 00585c50  83c444               add esp, 0x44
// 00585c53  c20400               ret 4
// library rbxgs/roc_unit_045e4fd4949c7433.cpp (function ?setPrimaryPart@ModelInstance@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_045e4fd4949c7433.cpp
