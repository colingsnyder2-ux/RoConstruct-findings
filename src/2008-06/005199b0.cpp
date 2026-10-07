// roc 2008-06 005199b0  unit: G3D::_internal::DialogTemplate  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005199b0
//
// 005199b0  56                   push esi
// 005199b1  8bf1                 mov esi, ecx
// 005199b3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005199b6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005199b9  83c004               add eax, 4
// 005199bc  3bc8                 cmp ecx, eax
// 005199be  7c02                 jl 0x5199c2
// 005199c0  8bc1                 mov eax, ecx
// 005199c2  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005199c5  894634               mov dword ptr [esi + 0x34], eax
// 005199c8  7e0a                 jle 0x5199d4
// 005199ca  51                   push ecx
// 005199cb  6a04                 push 4
// 005199cd  8bce                 mov ecx, esi
// 005199cf  e85cfeffff           call 0x519830
// 005199d4  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 005199d8  743b                 je 0x519a15
// 005199da  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005199dd  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005199e0  8a54240b             mov dl, byte ptr [esp + 0xb]
// 005199e4  881408               mov byte ptr [eax + ecx], dl
// 005199e7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005199ea  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005199ed  8a54240a             mov dl, byte ptr [esp + 0xa]
// 005199f1  88540801             mov byte ptr [eax + ecx + 1], dl
// 005199f5  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005199f8  8b5630               mov edx, dword ptr [esi + 0x30]
// 005199fb  8b442408             mov eax, dword ptr [esp + 8]
// 005199ff  88641102             mov byte ptr [ecx + edx + 2], ah
// 00519a03  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00519a06  8b5630               mov edx, dword ptr [esi + 0x30]
// 00519a09  88441103             mov byte ptr [ecx + edx + 3], al
// 00519a0d  83463c04             add dword ptr [esi + 0x3c], 4
// 00519a11  5e                   pop esi
// 00519a12  c20400               ret 4
// 00519a15  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00519a18  8b4630               mov eax, dword ptr [esi + 0x30]
// 00519a1b  8b542408             mov edx, dword ptr [esp + 8]
// 00519a1f  891408               mov dword ptr [eax + ecx], edx
// 00519a22  83463c04             add dword ptr [esi + 0x3c], 4
// 00519a26  5e                   pop esi
// 00519a27  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt32@BinaryOutput@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
