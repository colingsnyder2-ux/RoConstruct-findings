// roc 2009-06 0057d2f0  unit: G3D::_internal::DialogTemplate  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d2f0
//
// 0057d2f0  56                   push esi
// 0057d2f1  8bf1                 mov esi, ecx
// 0057d2f3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057d2f6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057d2f9  83c002               add eax, 2
// 0057d2fc  3bc8                 cmp ecx, eax
// 0057d2fe  7c02                 jl 0x57d302
// 0057d300  8bc1                 mov eax, ecx
// 0057d302  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0057d305  894634               mov dword ptr [esi + 0x34], eax
// 0057d308  7e0a                 jle 0x57d314
// 0057d30a  51                   push ecx
// 0057d30b  6a02                 push 2
// 0057d30d  8bce                 mov ecx, esi
// 0057d30f  e8bcfeffff           call 0x57d1d0
// 0057d314  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0057d318  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d31b  741d                 je 0x57d33a
// 0057d31d  8b5630               mov edx, dword ptr [esi + 0x30]
// 0057d320  668b442408           mov ax, word ptr [esp + 8]
// 0057d325  882411               mov byte ptr [ecx + edx], ah
// 0057d328  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057d32b  8b5630               mov edx, dword ptr [esi + 0x30]
// 0057d32e  88441101             mov byte ptr [ecx + edx + 1], al
// 0057d332  83463c02             add dword ptr [esi + 0x3c], 2
// 0057d336  5e                   pop esi
// 0057d337  c20400               ret 4
// 0057d33a  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057d33d  668b542408           mov dx, word ptr [esp + 8]
// 0057d342  66891408             mov word ptr [eax + ecx], dx
// 0057d346  83463c02             add dword ptr [esi + 0x3c], 2
// 0057d34a  5e                   pop esi
// 0057d34b  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt16@BinaryOutput@G3D@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
