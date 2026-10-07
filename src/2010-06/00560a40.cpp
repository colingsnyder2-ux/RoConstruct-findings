// roc 2010-06 00560a40  unit: G3D::_internal::DialogTemplate  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560a40
//
// 00560a40  56                   push esi
// 00560a41  8bf1                 mov esi, ecx
// 00560a43  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00560a46  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00560a49  83c002               add eax, 2
// 00560a4c  3bc8                 cmp ecx, eax
// 00560a4e  7c02                 jl 0x560a52
// 00560a50  8bc1                 mov eax, ecx
// 00560a52  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00560a55  894634               mov dword ptr [esi + 0x34], eax
// 00560a58  7e0a                 jle 0x560a64
// 00560a5a  51                   push ecx
// 00560a5b  6a02                 push 2
// 00560a5d  8bce                 mov ecx, esi
// 00560a5f  e8bcfeffff           call 0x560920
// 00560a64  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 00560a68  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00560a6b  741d                 je 0x560a8a
// 00560a6d  8b5630               mov edx, dword ptr [esi + 0x30]
// 00560a70  668b442408           mov ax, word ptr [esp + 8]
// 00560a75  882411               mov byte ptr [ecx + edx], ah
// 00560a78  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00560a7b  8b5630               mov edx, dword ptr [esi + 0x30]
// 00560a7e  88441101             mov byte ptr [ecx + edx + 1], al
// 00560a82  83463c02             add dword ptr [esi + 0x3c], 2
// 00560a86  5e                   pop esi
// 00560a87  c20400               ret 4
// 00560a8a  8b4630               mov eax, dword ptr [esi + 0x30]
// 00560a8d  668b542408           mov dx, word ptr [esp + 8]
// 00560a92  66891408             mov word ptr [eax + ecx], dx
// 00560a96  83463c02             add dword ptr [esi + 0x3c], 2
// 00560a9a  5e                   pop esi
// 00560a9b  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt16@BinaryOutput@G3D@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
