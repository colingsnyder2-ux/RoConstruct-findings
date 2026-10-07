// roc 2009-06 0057d350  unit: G3D::_internal::DialogTemplate  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d350
//
// 0057d350  56                   push esi
// 0057d351  8bf1                 mov esi, ecx
// 0057d353  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057d356  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057d359  83c004               add eax, 4
// 0057d35c  3bc8                 cmp ecx, eax
// 0057d35e  7c02                 jl 0x57d362
// 0057d360  8bc1                 mov eax, ecx
// 0057d362  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0057d365  894634               mov dword ptr [esi + 0x34], eax
// 0057d368  7e0a                 jle 0x57d374
// 0057d36a  51                   push ecx
// 0057d36b  6a04                 push 4
// 0057d36d  8bce                 mov ecx, esi
// 0057d36f  e85cfeffff           call 0x57d1d0
// 0057d374  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0057d378  743b                 je 0x57d3b5
// 0057d37a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057d37d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057d380  8a54240b             mov dl, byte ptr [esp + 0xb]
// 0057d384  881408               mov byte ptr [eax + ecx], dl
// 0057d387  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057d38a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057d38d  8a54240a             mov dl, byte ptr [esp + 0xa]
// 0057d391  88540801             mov byte ptr [eax + ecx + 1], dl
// 0057d395  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d398  8b5630               mov edx, dword ptr [esi + 0x30]
// 0057d39b  8b442408             mov eax, dword ptr [esp + 8]
// 0057d39f  88641102             mov byte ptr [ecx + edx + 2], ah
// 0057d3a3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d3a6  8b5630               mov edx, dword ptr [esi + 0x30]
// 0057d3a9  88441103             mov byte ptr [ecx + edx + 3], al
// 0057d3ad  83463c04             add dword ptr [esi + 0x3c], 4
// 0057d3b1  5e                   pop esi
// 0057d3b2  c20400               ret 4
// 0057d3b5  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d3b8  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057d3bb  8b542408             mov edx, dword ptr [esp + 8]
// 0057d3bf  891408               mov dword ptr [eax + ecx], edx
// 0057d3c2  83463c04             add dword ptr [esi + 0x3c], 4
// 0057d3c6  5e                   pop esi
// 0057d3c7  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt32@BinaryOutput@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
