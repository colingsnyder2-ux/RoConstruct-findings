// from server: 100% by auto
// roc 2007-08 00716bb0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716bb0
//
// 00716bb0  83ec10               sub esp, 0x10
// 00716bb3  53                   push ebx
// 00716bb4  55                   push ebp
// 00716bb5  56                   push esi
// 00716bb6  8bd9                 mov ebx, ecx
// 00716bb8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00716bbb  57                   push edi
// 00716bbc  33ff                 xor edi, edi
// 00716bbe  85c0                 test eax, eax
// 00716bc0  7e61                 jle 0x716c23
// 00716bc2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00716bc6  85ff                 test edi, edi
// 00716bc8  7c11                 jl 0x716bdb
// 00716bca  3bf8                 cmp edi, eax
// 00716bcc  7d0d                 jge 0x716bdb
// 00716bce  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 00716bd1  7d5c                 jge 0x716c2f
// 00716bd3  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00716bd6  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00716bd9  eb02                 jmp 0x716bdd
// 00716bdb  33f6                 xor esi, esi
// 00716bdd  8bce                 mov ecx, esi
// 00716bdf  e8dc260000           call 0x7192c0
// 00716be4  85c0                 test eax, eax
// 00716be6  7431                 je 0x716c19
// 00716be8  8b5638               mov edx, dword ptr [esi + 0x38]
// 00716beb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00716bee  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00716bf1  89542414             mov dword ptr [esp + 0x14], edx
// 00716bf5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00716bf9  55                   push ebp
// 00716bfa  8944241c             mov dword ptr [esp + 0x1c], eax
// 00716bfe  894c2414             mov dword ptr [esp + 0x14], ecx
// 00716c02  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00716c05  52                   push edx
// 00716c06  8d442418             lea eax, [esp + 0x18]
// 00716c0a  50                   push eax
// 00716c0b  894c2428             mov dword ptr [esp + 0x28], ecx
// 00716c0f  ff1594ed7700         call dword ptr [0x77ed94]
// 00716c15  85c0                 test eax, eax
// 00716c17  751b                 jne 0x716c34
// 00716c19  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00716c1c  83c701               add edi, 1
// 00716c1f  3bf8                 cmp edi, eax
// 00716c21  7ca3                 jl 0x716bc6
// 00716c23  5f                   pop edi
// 00716c24  5e                   pop esi
// 00716c25  5d                   pop ebp
// 00716c26  33c0                 xor eax, eax
// 00716c28  5b                   pop ebx
// 00716c29  83c410               add esp, 0x10
// 00716c2c  c20800               ret 8
// 00716c2f  e8ec92f1ff           call 0x62ff20
// 00716c34  5f                   pop edi
// 00716c35  8bc6                 mov eax, esi
// 00716c37  5e                   pop esi
// 00716c38  5d                   pop ebp
// 00716c39  5b                   pop ebx
// 00716c3a  83c410               add esp, 0x10
// 00716c3d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?HitTest@CXTPRibbonGroups@@QBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
