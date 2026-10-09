// roc 2009-06 00568c20  unit: RBX::RbxG3D::RenderScene  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568c20
//
// 00568c20  8b442408             mov eax, dword ptr [esp + 8]
// 00568c24  83ec0c               sub esp, 0xc
// 00568c27  56                   push esi
// 00568c28  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568c2c  3bf0                 cmp esi, eax
// 00568c2e  0f84b6000000         je 0x568cea
// 00568c34  53                   push ebx
// 00568c35  8d5e04               lea ebx, [esi + 4]
// 00568c38  3bd8                 cmp ebx, eax
// 00568c3a  0f84a9000000         je 0x568ce9
// 00568c40  8d43fc               lea eax, [ebx - 4]
// 00568c43  8944240c             mov dword ptr [esp + 0xc], eax
// 00568c47  b804000000           mov eax, 4
// 00568c4c  55                   push ebp
// 00568c4d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00568c51  2bc6                 sub eax, esi
// 00568c53  57                   push edi
// 00568c54  89442418             mov dword ptr [esp + 0x18], eax
// 00568c58  8b0b                 mov ecx, dword ptr [ebx]
// 00568c5a  8d542410             lea edx, [esp + 0x10]
// 00568c5e  56                   push esi
// 00568c5f  52                   push edx
// 00568c60  8bfb                 mov edi, ebx
// 00568c62  894c2418             mov dword ptr [esp + 0x18], ecx
// 00568c66  ffd5                 call ebp
// 00568c68  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00568c6c  83c408               add esp, 8
// 00568c6f  84c0                 test al, al
// 00568c71  742d                 je 0x568ca0
// 00568c73  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568c77  03c1                 add eax, ecx
// 00568c79  c1f802               sar eax, 2
// 00568c7c  85c0                 test eax, eax
// 00568c7e  7e18                 jle 0x568c98
// 00568c80  03c0                 add eax, eax
// 00568c82  03c0                 add eax, eax
// 00568c84  50                   push eax
// 00568c85  8bd3                 mov edx, ebx
// 00568c87  56                   push esi
// 00568c88  2bd0                 sub edx, eax
// 00568c8a  50                   push eax
// 00568c8b  83c204               add edx, 4
// 00568c8e  52                   push edx
// 00568c8f  ff155ce98900         call dword ptr [0x89e95c]
// 00568c95  83c410               add esp, 0x10
// 00568c98  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568c9c  8906                 mov dword ptr [esi], eax
// 00568c9e  eb35                 jmp 0x568cd5
// 00568ca0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568ca4  51                   push ecx
// 00568ca5  8d542414             lea edx, [esp + 0x14]
// 00568ca9  52                   push edx
// 00568caa  ffd5                 call ebp
// 00568cac  83c408               add esp, 8
// 00568caf  84c0                 test al, al
// 00568cb1  7418                 je 0x568ccb
// 00568cb3  8b06                 mov eax, dword ptr [esi]
// 00568cb5  8907                 mov dword ptr [edi], eax
// 00568cb7  8bfe                 mov edi, esi
// 00568cb9  83ee04               sub esi, 4
// 00568cbc  8d4c2410             lea ecx, [esp + 0x10]
// 00568cc0  56                   push esi
// 00568cc1  51                   push ecx
// 00568cc2  ffd5                 call ebp
// 00568cc4  83c408               add esp, 8
// 00568cc7  84c0                 test al, al
// 00568cc9  75e8                 jne 0x568cb3
// 00568ccb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00568ccf  8b742420             mov esi, dword ptr [esp + 0x20]
// 00568cd3  8917                 mov dword ptr [edi], edx
// 00568cd5  8344241404           add dword ptr [esp + 0x14], 4
// 00568cda  83c304               add ebx, 4
// 00568cdd  3b5c2424             cmp ebx, dword ptr [esp + 0x24]
// 00568ce1  0f8571ffffff         jne 0x568c58
// 00568ce7  5f                   pop edi
// 00568ce8  5d                   pop ebp
// 00568ce9  5b                   pop ebx
// 00568cea  5e                   pop esi
// 00568ceb  83c40c               add esp, 0xc
// 00568cee  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderSurface.cpp (function ??$_Insertion_sort1@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@ZPAV123@@std@@YAXPAPAVRenderSurface@Render@RBX@@0P6A_NABQAV123@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderSurface.cpp
