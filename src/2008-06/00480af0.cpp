// from server: 100% by auto
// roc 2008-06 00480af0  unit: G3D::Win32Window  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480af0
//
// 00480af0  56                   push esi
// 00480af1  8bf1                 mov esi, ecx
// 00480af3  8b4604               mov eax, dword ptr [esi + 4]
// 00480af6  3b4608               cmp eax, dword ptr [esi + 8]
// 00480af9  8b0e                 mov ecx, dword ptr [esi]
// 00480afb  7d16                 jge 0x480b13
// 00480afd  8d0481               lea eax, [ecx + eax*4]
// 00480b00  85c0                 test eax, eax
// 00480b02  7408                 je 0x480b0c
// 00480b04  8b542408             mov edx, dword ptr [esp + 8]
// 00480b08  8b0a                 mov ecx, dword ptr [edx]
// 00480b0a  8908                 mov dword ptr [eax], ecx
// 00480b0c  ff4604               inc dword ptr [esi + 4]
// 00480b0f  5e                   pop esi
// 00480b10  c20400               ret 4
// 00480b13  57                   push edi
// 00480b14  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00480b18  3bf9                 cmp edi, ecx
// 00480b1a  721e                 jb 0x480b3a
// 00480b1c  8d1481               lea edx, [ecx + eax*4]
// 00480b1f  3bfa                 cmp edi, edx
// 00480b21  7317                 jae 0x480b3a
// 00480b23  8b07                 mov eax, dword ptr [edi]
// 00480b25  8d4c240c             lea ecx, [esp + 0xc]
// 00480b29  51                   push ecx
// 00480b2a  8bce                 mov ecx, esi
// 00480b2c  89442410             mov dword ptr [esp + 0x10], eax
// 00480b30  e8bbffffff           call 0x480af0
// 00480b35  5f                   pop edi
// 00480b36  5e                   pop esi
// 00480b37  c20400               ret 4
// 00480b3a  6a00                 push 0
// 00480b3c  40                   inc eax
// 00480b3d  50                   push eax
// 00480b3e  8bce                 mov ecx, esi
// 00480b40  e86bfaffff           call 0x4805b0
// 00480b45  8b0f                 mov ecx, dword ptr [edi]
// 00480b47  8b5604               mov edx, dword ptr [esi + 4]
// 00480b4a  8b06                 mov eax, dword ptr [esi]
// 00480b4c  5f                   pop edi
// 00480b4d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00480b51  5e                   pop esi
// 00480b52  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
