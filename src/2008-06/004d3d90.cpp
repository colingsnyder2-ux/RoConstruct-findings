// roc 2008-06 004d3d90  unit: seg_004d0000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3d90
//
// 004d3d90  53                   push ebx
// 004d3d91  57                   push edi
// 004d3d92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d3d96  57                   push edi
// 004d3d97  8bd9                 mov ebx, ecx
// 004d3d99  e892ffffff           call 0x4d3d30
// 004d3d9e  3cff                 cmp al, 0xff
// 004d3da0  7567                 jne 0x4d3e09
// 004d3da2  56                   push esi
// 004d3da3  6a0c                 push 0xc
// 004d3da5  e876cb1c00           call 0x6a0920
// 004d3daa  8bf0                 mov esi, eax
// 004d3dac  8bc7                 mov eax, edi
// 004d3dae  83c404               add esp, 4
// 004d3db1  8d5001               lea edx, [eax + 1]
// 004d3db4  8a08                 mov cl, byte ptr [eax]
// 004d3db6  40                   inc eax
// 004d3db7  84c9                 test cl, cl
// 004d3db9  75f9                 jne 0x4d3db4
// 004d3dbb  2bc2                 sub eax, edx
// 004d3dbd  40                   inc eax
// 004d3dbe  50                   push eax
// 004d3dbf  e85ccb1c00           call 0x6a0920
// 004d3dc4  83c404               add esp, 4
// 004d3dc7  8906                 mov dword ptr [esi], eax
// 004d3dc9  8bcf                 mov ecx, edi
// 004d3dcb  8bd0                 mov edx, eax
// 004d3dcd  8d4900               lea ecx, [ecx]
// 004d3dd0  8a01                 mov al, byte ptr [ecx]
// 004d3dd2  8802                 mov byte ptr [edx], al
// 004d3dd4  41                   inc ecx
// 004d3dd5  42                   inc edx
// 004d3dd6  84c0                 test al, al
// 004d3dd8  75f6                 jne 0x4d3dd0
// 004d3dda  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d3dde  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 004d3de2  894604               mov dword ptr [esi + 4], eax
// 004d3de5  884e08               mov byte ptr [esi + 8], cl
// 004d3de8  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004d3deb  33c0                 xor eax, eax
// 004d3ded  85c9                 test ecx, ecx
// 004d3def  760f                 jbe 0x4d3e00
// 004d3df1  8b13                 mov edx, dword ptr [ebx]
// 004d3df3  833a00               cmp dword ptr [edx], 0
// 004d3df6  7416                 je 0x4d3e0e
// 004d3df8  40                   inc eax
// 004d3df9  83c204               add edx, 4
// 004d3dfc  3bc1                 cmp eax, ecx
// 004d3dfe  72f3                 jb 0x4d3df3
// 004d3e00  56                   push esi
// 004d3e01  8bcb                 mov ecx, ebx
// 004d3e03  e81883feff           call 0x4bc120
// 004d3e08  5e                   pop esi
// 004d3e09  5f                   pop edi
// 004d3e0a  5b                   pop ebx
// 004d3e0b  c20c00               ret 0xc
// 004d3e0e  50                   push eax
// 004d3e0f  6a00                 push 0
// 004d3e11  56                   push esi
// 004d3e12  8bcb                 mov ecx, ebx
// 004d3e14  e8e7aeffff           call 0x4ced00
// 004d3e19  5e                   pop esi
// 004d3e1a  5f                   pop edi
// 004d3e1b  5b                   pop ebx
// 004d3e1c  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierWithFunction@RPCMap@@QAEXPBDPAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
