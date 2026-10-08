// roc 2009-12 005ff0d0  unit: G3D::_internal::DialogTemplate  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff0d0
//
// 005ff0d0  56                   push esi
// 005ff0d1  8bf1                 mov esi, ecx
// 005ff0d3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ff0d6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ff0d9  83c002               add eax, 2
// 005ff0dc  3bc8                 cmp ecx, eax
// 005ff0de  7c02                 jl 0x5ff0e2
// 005ff0e0  8bc1                 mov eax, ecx
// 005ff0e2  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ff0e5  894634               mov dword ptr [esi + 0x34], eax
// 005ff0e8  7e0a                 jle 0x5ff0f4
// 005ff0ea  51                   push ecx
// 005ff0eb  6a02                 push 2
// 005ff0ed  8bce                 mov ecx, esi
// 005ff0ef  e8bcfeffff           call 0x5fefb0
// 005ff0f4  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 005ff0f8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ff0fb  741d                 je 0x5ff11a
// 005ff0fd  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ff100  668b442408           mov ax, word ptr [esp + 8]
// 005ff105  882411               mov byte ptr [ecx + edx], ah
// 005ff108  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ff10b  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ff10e  88441101             mov byte ptr [ecx + edx + 1], al
// 005ff112  83463c02             add dword ptr [esi + 0x3c], 2
// 005ff116  5e                   pop esi
// 005ff117  c20400               ret 4
// 005ff11a  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ff11d  668b542408           mov dx, word ptr [esp + 8]
// 005ff122  66891408             mov word ptr [eax + ecx], dx
// 005ff126  83463c02             add dword ptr [esi + 0x3c], 2
// 005ff12a  5e                   pop esi
// 005ff12b  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt16@BinaryOutput@G3D@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
