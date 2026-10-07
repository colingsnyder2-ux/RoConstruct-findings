// roc 2008-06 00519950  unit: G3D::_internal::DialogTemplate  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519950
//
// 00519950  56                   push esi
// 00519951  8bf1                 mov esi, ecx
// 00519953  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00519956  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00519959  83c002               add eax, 2
// 0051995c  3bc8                 cmp ecx, eax
// 0051995e  7c02                 jl 0x519962
// 00519960  8bc1                 mov eax, ecx
// 00519962  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00519965  894634               mov dword ptr [esi + 0x34], eax
// 00519968  7e0a                 jle 0x519974
// 0051996a  51                   push ecx
// 0051996b  6a02                 push 2
// 0051996d  8bce                 mov ecx, esi
// 0051996f  e8bcfeffff           call 0x519830
// 00519974  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 00519978  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0051997b  741d                 je 0x51999a
// 0051997d  8b5630               mov edx, dword ptr [esi + 0x30]
// 00519980  668b442408           mov ax, word ptr [esp + 8]
// 00519985  882411               mov byte ptr [ecx + edx], ah
// 00519988  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0051998b  8b5630               mov edx, dword ptr [esi + 0x30]
// 0051998e  88441101             mov byte ptr [ecx + edx + 1], al
// 00519992  83463c02             add dword ptr [esi + 0x3c], 2
// 00519996  5e                   pop esi
// 00519997  c20400               ret 4
// 0051999a  8b4630               mov eax, dword ptr [esi + 0x30]
// 0051999d  668b542408           mov dx, word ptr [esp + 8]
// 005199a2  66891408             mov word ptr [eax + ecx], dx
// 005199a6  83463c02             add dword ptr [esi + 0x3c], 2
// 005199aa  5e                   pop esi
// 005199ab  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt16@BinaryOutput@G3D@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
