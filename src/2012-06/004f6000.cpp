// from server: 100% by auto
// roc 2012-06 004f6000  unit: RBX::VPBBBuilder::?$BuilderLevelGenFunc  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f6000
//
// 004f6000  56                   push esi
// 004f6001  8bf1                 mov esi, ecx
// 004f6003  8b4604               mov eax, dword ptr [esi + 4]
// 004f6006  3b4608               cmp eax, dword ptr [esi + 8]
// 004f6009  8b0e                 mov ecx, dword ptr [esi]
// 004f600b  7d18                 jge 0x4f6025
// 004f600d  8d0441               lea eax, [ecx + eax*2]
// 004f6010  85c0                 test eax, eax
// 004f6012  740a                 je 0x4f601e
// 004f6014  8b542408             mov edx, dword ptr [esp + 8]
// 004f6018  668b0a               mov cx, word ptr [edx]
// 004f601b  668908               mov word ptr [eax], cx
// 004f601e  ff4604               inc dword ptr [esi + 4]
// 004f6021  5e                   pop esi
// 004f6022  c20400               ret 4
// 004f6025  57                   push edi
// 004f6026  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f602a  3bf9                 cmp edi, ecx
// 004f602c  721f                 jb 0x4f604d
// 004f602e  8d1441               lea edx, [ecx + eax*2]
// 004f6031  3bfa                 cmp edi, edx
// 004f6033  7318                 jae 0x4f604d
// 004f6035  0fb707               movzx eax, word ptr [edi]
// 004f6038  8d4c240c             lea ecx, [esp + 0xc]
// 004f603c  51                   push ecx
// 004f603d  8bce                 mov ecx, esi
// 004f603f  89442410             mov dword ptr [esp + 0x10], eax
// 004f6043  e8b8ffffff           call 0x4f6000
// 004f6048  5f                   pop edi
// 004f6049  5e                   pop esi
// 004f604a  c20400               ret 4
// 004f604d  6a00                 push 0
// 004f604f  40                   inc eax
// 004f6050  50                   push eax
// 004f6051  8bce                 mov ecx, esi
// 004f6053  e8c8d9ffff           call 0x4f3a20
// 004f6058  668b0f               mov cx, word ptr [edi]
// 004f605b  8b5604               mov edx, dword ptr [esi + 4]
// 004f605e  8b06                 mov eax, dword ptr [esi]
// 004f6060  5f                   pop edi
// 004f6061  66894c50fe           mov word ptr [eax + edx*2 - 2], cx
// 004f6066  5e                   pop esi
// 004f6067  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\UserInput.cpp (function ?append@?$Array@G@G3D@@QAEXABG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/UserInput.cpp
