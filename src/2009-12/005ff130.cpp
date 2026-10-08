// roc 2009-12 005ff130  unit: G3D::_internal::DialogTemplate  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff130
//
// 005ff130  56                   push esi
// 005ff131  8bf1                 mov esi, ecx
// 005ff133  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ff136  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ff139  83c004               add eax, 4
// 005ff13c  3bc8                 cmp ecx, eax
// 005ff13e  7c02                 jl 0x5ff142
// 005ff140  8bc1                 mov eax, ecx
// 005ff142  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ff145  894634               mov dword ptr [esi + 0x34], eax
// 005ff148  7e0a                 jle 0x5ff154
// 005ff14a  51                   push ecx
// 005ff14b  6a04                 push 4
// 005ff14d  8bce                 mov ecx, esi
// 005ff14f  e85cfeffff           call 0x5fefb0
// 005ff154  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 005ff158  743b                 je 0x5ff195
// 005ff15a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ff15d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ff160  8a54240b             mov dl, byte ptr [esp + 0xb]
// 005ff164  881408               mov byte ptr [eax + ecx], dl
// 005ff167  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ff16a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ff16d  8a54240a             mov dl, byte ptr [esp + 0xa]
// 005ff171  88540801             mov byte ptr [eax + ecx + 1], dl
// 005ff175  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ff178  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ff17b  8b442408             mov eax, dword ptr [esp + 8]
// 005ff17f  88641102             mov byte ptr [ecx + edx + 2], ah
// 005ff183  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ff186  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ff189  88441103             mov byte ptr [ecx + edx + 3], al
// 005ff18d  83463c04             add dword ptr [esi + 0x3c], 4
// 005ff191  5e                   pop esi
// 005ff192  c20400               ret 4
// 005ff195  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ff198  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ff19b  8b542408             mov edx, dword ptr [esp + 8]
// 005ff19f  891408               mov dword ptr [eax + ecx], edx
// 005ff1a2  83463c04             add dword ptr [esi + 0x3c], 4
// 005ff1a6  5e                   pop esi
// 005ff1a7  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt32@BinaryOutput@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
