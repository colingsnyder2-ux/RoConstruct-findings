// roc 2010-06 00524c20  unit: RBX::Mesh::Level  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00524c20
//
// 00524c20  53                   push ebx
// 00524c21  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00524c25  55                   push ebp
// 00524c26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00524c2a  56                   push esi
// 00524c2b  8bf1                 mov esi, ecx
// 00524c2d  8b06                 mov eax, dword ptr [esi]
// 00524c2f  57                   push edi
// 00524c30  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00524c34  3bf8                 cmp edi, eax
// 00524c36  720e                 jb 0x524c46
// 00524c38  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524c3b  8d1488               lea edx, [eax + ecx*4]
// 00524c3e  3bfa                 cmp edi, edx
// 00524c40  0f82d8000000         jb 0x524d1e
// 00524c46  3bd8                 cmp ebx, eax
// 00524c48  720e                 jb 0x524c58
// 00524c4a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524c4d  8d1488               lea edx, [eax + ecx*4]
// 00524c50  3bda                 cmp ebx, edx
// 00524c52  0f82c6000000         jb 0x524d1e
// 00524c58  3be8                 cmp ebp, eax
// 00524c5a  720e                 jb 0x524c6a
// 00524c5c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524c5f  8d1488               lea edx, [eax + ecx*4]
// 00524c62  3bea                 cmp ebp, edx
// 00524c64  0f82b4000000         jb 0x524d1e
// 00524c6a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00524c6e  3bc8                 cmp ecx, eax
// 00524c70  720e                 jb 0x524c80
// 00524c72  8b5604               mov edx, dword ptr [esi + 4]
// 00524c75  8d1490               lea edx, [eax + edx*4]
// 00524c78  3bca                 cmp ecx, edx
// 00524c7a  0f82a2000000         jb 0x524d22
// 00524c80  8b4e04               mov ecx, dword ptr [esi + 4]
// 00524c83  8d5103               lea edx, [ecx + 3]
// 00524c86  3b5608               cmp edx, dword ptr [esi + 8]
// 00524c89  7d4e                 jge 0x524cd9
// 00524c8b  8d0488               lea eax, [eax + ecx*4]
// 00524c8e  85c0                 test eax, eax
// 00524c90  7404                 je 0x524c96
// 00524c92  8b0f                 mov ecx, dword ptr [edi]
// 00524c94  8908                 mov dword ptr [eax], ecx
// 00524c96  8b5604               mov edx, dword ptr [esi + 4]
// 00524c99  8b06                 mov eax, dword ptr [esi]
// 00524c9b  8d449004             lea eax, [eax + edx*4 + 4]
// 00524c9f  85c0                 test eax, eax
// 00524ca1  7404                 je 0x524ca7
// 00524ca3  8b0b                 mov ecx, dword ptr [ebx]
// 00524ca5  8908                 mov dword ptr [eax], ecx
// 00524ca7  8b5604               mov edx, dword ptr [esi + 4]
// 00524caa  8b06                 mov eax, dword ptr [esi]
// 00524cac  8d449008             lea eax, [eax + edx*4 + 8]
// 00524cb0  85c0                 test eax, eax
// 00524cb2  7405                 je 0x524cb9
// 00524cb4  8b4d00               mov ecx, dword ptr [ebp]
// 00524cb7  8908                 mov dword ptr [eax], ecx
// 00524cb9  8b5604               mov edx, dword ptr [esi + 4]
// 00524cbc  8b06                 mov eax, dword ptr [esi]
// 00524cbe  8d44900c             lea eax, [eax + edx*4 + 0xc]
// 00524cc2  85c0                 test eax, eax
// 00524cc4  7408                 je 0x524cce
// 00524cc6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00524cca  8b11                 mov edx, dword ptr [ecx]
// 00524ccc  8910                 mov dword ptr [eax], edx
// 00524cce  83460404             add dword ptr [esi + 4], 4
// 00524cd2  5f                   pop edi
// 00524cd3  5e                   pop esi
// 00524cd4  5d                   pop ebp
// 00524cd5  5b                   pop ebx
// 00524cd6  c21000               ret 0x10
// 00524cd9  83c104               add ecx, 4
// 00524cdc  6a00                 push 0
// 00524cde  51                   push ecx
// 00524cdf  8bce                 mov ecx, esi
// 00524ce1  e8ba44f6ff           call 0x4891a0
// 00524ce6  8b4604               mov eax, dword ptr [esi + 4]
// 00524ce9  8b0e                 mov ecx, dword ptr [esi]
// 00524ceb  8b17                 mov edx, dword ptr [edi]
// 00524ced  895481f0             mov dword ptr [ecx + eax*4 - 0x10], edx
// 00524cf1  8b4604               mov eax, dword ptr [esi + 4]
// 00524cf4  8b0e                 mov ecx, dword ptr [esi]
// 00524cf6  8b13                 mov edx, dword ptr [ebx]
// 00524cf8  895481f4             mov dword ptr [ecx + eax*4 - 0xc], edx
// 00524cfc  8b4604               mov eax, dword ptr [esi + 4]
// 00524cff  8b0e                 mov ecx, dword ptr [esi]
// 00524d01  8b5500               mov edx, dword ptr [ebp]
// 00524d04  895481f8             mov dword ptr [ecx + eax*4 - 8], edx
// 00524d08  8b4604               mov eax, dword ptr [esi + 4]
// 00524d0b  8b0e                 mov ecx, dword ptr [esi]
// 00524d0d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00524d11  8b12                 mov edx, dword ptr [edx]
// 00524d13  5f                   pop edi
// 00524d14  5e                   pop esi
// 00524d15  5d                   pop ebp
// 00524d16  895481fc             mov dword ptr [ecx + eax*4 - 4], edx
// 00524d1a  5b                   pop ebx
// 00524d1b  c21000               ret 0x10
// 00524d1e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00524d22  8b07                 mov eax, dword ptr [edi]
// 00524d24  8b13                 mov edx, dword ptr [ebx]
// 00524d26  8b09                 mov ecx, dword ptr [ecx]
// 00524d28  89442418             mov dword ptr [esp + 0x18], eax
// 00524d2c  8b4500               mov eax, dword ptr [ebp]
// 00524d2f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00524d33  8d542420             lea edx, [esp + 0x20]
// 00524d37  52                   push edx
// 00524d38  89442418             mov dword ptr [esp + 0x18], eax
// 00524d3c  894c2424             mov dword ptr [esp + 0x24], ecx
// 00524d40  8d442418             lea eax, [esp + 0x18]
// 00524d44  50                   push eax
// 00524d45  8d4c2424             lea ecx, [esp + 0x24]
// 00524d49  51                   push ecx
// 00524d4a  8d542424             lea edx, [esp + 0x24]
// 00524d4e  52                   push edx
// 00524d4f  8bce                 mov ecx, esi
// 00524d51  e8cafeffff           call 0x524c20
// 00524d56  5f                   pop edi
// 00524d57  5e                   pop esi
// 00524d58  5d                   pop ebp
// 00524d59  5b                   pop ebx
// 00524d5a  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
