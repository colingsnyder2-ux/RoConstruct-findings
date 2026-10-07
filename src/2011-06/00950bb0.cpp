// roc 2011-06 00950bb0  unit: RBX::VVerticalCylinderBuilder::?$BuilderLevelGenFunc  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00950bb0
//
// 00950bb0  56                   push esi
// 00950bb1  8bf1                 mov esi, ecx
// 00950bb3  8b4604               mov eax, dword ptr [esi + 4]
// 00950bb6  3b4608               cmp eax, dword ptr [esi + 8]
// 00950bb9  8b0e                 mov ecx, dword ptr [esi]
// 00950bbb  7d18                 jge 0x950bd5
// 00950bbd  8d0441               lea eax, [ecx + eax*2]
// 00950bc0  85c0                 test eax, eax
// 00950bc2  740a                 je 0x950bce
// 00950bc4  8b542408             mov edx, dword ptr [esp + 8]
// 00950bc8  668b0a               mov cx, word ptr [edx]
// 00950bcb  668908               mov word ptr [eax], cx
// 00950bce  ff4604               inc dword ptr [esi + 4]
// 00950bd1  5e                   pop esi
// 00950bd2  c20400               ret 4
// 00950bd5  57                   push edi
// 00950bd6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00950bda  3bf9                 cmp edi, ecx
// 00950bdc  721f                 jb 0x950bfd
// 00950bde  8d1441               lea edx, [ecx + eax*2]
// 00950be1  3bfa                 cmp edi, edx
// 00950be3  7318                 jae 0x950bfd
// 00950be5  0fb707               movzx eax, word ptr [edi]
// 00950be8  8d4c240c             lea ecx, [esp + 0xc]
// 00950bec  51                   push ecx
// 00950bed  8bce                 mov ecx, esi
// 00950bef  89442410             mov dword ptr [esp + 0x10], eax
// 00950bf3  e8b8ffffff           call 0x950bb0
// 00950bf8  5f                   pop edi
// 00950bf9  5e                   pop esi
// 00950bfa  c20400               ret 4
// 00950bfd  6a00                 push 0
// 00950bff  40                   inc eax
// 00950c00  50                   push eax
// 00950c01  8bce                 mov ecx, esi
// 00950c03  e8782fbfff           call 0x543b80
// 00950c08  668b0f               mov cx, word ptr [edi]
// 00950c0b  8b5604               mov edx, dword ptr [esi + 4]
// 00950c0e  8b06                 mov eax, dword ptr [esi]
// 00950c10  5f                   pop edi
// 00950c11  66894c50fe           mov word ptr [eax + edx*2 - 2], cx
// 00950c16  5e                   pop esi
// 00950c17  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\UserInput.cpp (function ?append@?$Array@G@G3D@@QAEXABG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/UserInput.cpp
