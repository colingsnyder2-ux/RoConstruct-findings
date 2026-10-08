// from server: 100% by auto
// roc 2010-06 004872d0  unit: G3D::VARArea  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004872d0
//
// 004872d0  6aff                 push -1
// 004872d2  68c4f99800           push 0x98f9c4
// 004872d7  64a100000000         mov eax, dword ptr fs:[0]
// 004872dd  50                   push eax
// 004872de  64892500000000       mov dword ptr fs:[0], esp
// 004872e5  83ec08               sub esp, 8
// 004872e8  56                   push esi
// 004872e9  8bf1                 mov esi, ecx
// 004872eb  8b4604               mov eax, dword ptr [esi + 4]
// 004872ee  3b4608               cmp eax, dword ptr [esi + 8]
// 004872f1  8b0e                 mov ecx, dword ptr [esi]
// 004872f3  89742404             mov dword ptr [esp + 4], esi
// 004872f7  7d3a                 jge 0x487333
// 004872f9  8d0c81               lea ecx, [ecx + eax*4]
// 004872fc  894c2408             mov dword ptr [esp + 8], ecx
// 00487300  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00487308  85c9                 test ecx, ecx
// 0048730a  7412                 je 0x48731e
// 0048730c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00487310  c70100000000         mov dword ptr [ecx], 0
// 00487316  8b02                 mov eax, dword ptr [edx]
// 00487318  50                   push eax
// 00487319  e802faffff           call 0x486d20
// 0048731e  ff4604               inc dword ptr [esi + 4]
// 00487321  5e                   pop esi
// 00487322  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487326  64890d00000000       mov dword ptr fs:[0], ecx
// 0048732d  83c414               add esp, 0x14
// 00487330  c20400               ret 4
// 00487333  57                   push edi
// 00487334  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00487338  3bf9                 cmp edi, ecx
// 0048733a  0f8281000000         jb 0x4873c1
// 00487340  8d0c81               lea ecx, [ecx + eax*4]
// 00487343  3bf9                 cmp edi, ecx
// 00487345  737a                 jae 0x4873c1
// 00487347  8b3f                 mov edi, dword ptr [edi]
// 00487349  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00487351  85ff                 test edi, edi
// 00487353  740e                 je 0x487363
// 00487355  8d4704               lea eax, [edi + 4]
// 00487358  50                   push eax
// 00487359  897c2424             mov dword ptr [esp + 0x24], edi
// 0048735d  ff1580a39e00         call dword ptr [0x9ea380]
// 00487363  8d542420             lea edx, [esp + 0x20]
// 00487367  52                   push edx
// 00487368  8bce                 mov ecx, esi
// 0048736a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00487372  e859ffffff           call 0x4872d0
// 00487377  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048737b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00487383  85c0                 test eax, eax
// 00487385  7456                 je 0x4873dd
// 00487387  83c004               add eax, 4
// 0048738a  50                   push eax
// 0048738b  ff157ca39e00         call dword ptr [0x9ea37c]
// 00487391  85c0                 test eax, eax
// 00487393  7548                 jne 0x4873dd
// 00487395  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00487399  e882c7ffff           call 0x483b20
// 0048739e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004873a2  85c9                 test ecx, ecx
// 004873a4  7437                 je 0x4873dd
// 004873a6  8b01                 mov eax, dword ptr [ecx]
// 004873a8  8b10                 mov edx, dword ptr [eax]
// 004873aa  6a01                 push 1
// 004873ac  ffd2                 call edx
// 004873ae  5f                   pop edi
// 004873af  5e                   pop esi
// 004873b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004873b4  64890d00000000       mov dword ptr fs:[0], ecx
// 004873bb  83c414               add esp, 0x14
// 004873be  c20400               ret 4
// 004873c1  6a00                 push 0
// 004873c3  40                   inc eax
// 004873c4  50                   push eax
// 004873c5  8bce                 mov ecx, esi
// 004873c7  e874fdffff           call 0x487140
// 004873cc  8b07                 mov eax, dword ptr [edi]
// 004873ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 004873d1  8b16                 mov edx, dword ptr [esi]
// 004873d3  50                   push eax
// 004873d4  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004873d8  e843f9ffff           call 0x486d20
// 004873dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004873e1  5f                   pop edi
// 004873e2  5e                   pop esi
// 004873e3  64890d00000000       mov dword ptr fs:[0], ecx
// 004873ea  83c414               add esp, 0x14
// 004873ed  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
