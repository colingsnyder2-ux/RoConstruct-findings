// from server: 100% by auto
// roc 2009-06 00526030  unit: RBX::ViewRbxGfx  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00526030
//
// 00526030  6aff                 push -1
// 00526032  68146f8500           push 0x856f14
// 00526037  64a100000000         mov eax, dword ptr fs:[0]
// 0052603d  50                   push eax
// 0052603e  64892500000000       mov dword ptr fs:[0], esp
// 00526045  83ec08               sub esp, 8
// 00526048  56                   push esi
// 00526049  8bf1                 mov esi, ecx
// 0052604b  8b4604               mov eax, dword ptr [esi + 4]
// 0052604e  3b4608               cmp eax, dword ptr [esi + 8]
// 00526051  8b0e                 mov ecx, dword ptr [esi]
// 00526053  89742404             mov dword ptr [esp + 4], esi
// 00526057  7d3a                 jge 0x526093
// 00526059  8d0c81               lea ecx, [ecx + eax*4]
// 0052605c  894c2408             mov dword ptr [esp + 8], ecx
// 00526060  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00526068  85c9                 test ecx, ecx
// 0052606a  7412                 je 0x52607e
// 0052606c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00526070  c70100000000         mov dword ptr [ecx], 0
// 00526076  8b02                 mov eax, dword ptr [edx]
// 00526078  50                   push eax
// 00526079  e8e297f7ff           call 0x49f860
// 0052607e  ff4604               inc dword ptr [esi + 4]
// 00526081  5e                   pop esi
// 00526082  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00526086  64890d00000000       mov dword ptr fs:[0], ecx
// 0052608d  83c414               add esp, 0x14
// 00526090  c20400               ret 4
// 00526093  57                   push edi
// 00526094  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00526098  3bf9                 cmp edi, ecx
// 0052609a  0f8281000000         jb 0x526121
// 005260a0  8d0c81               lea ecx, [ecx + eax*4]
// 005260a3  3bf9                 cmp edi, ecx
// 005260a5  737a                 jae 0x526121
// 005260a7  8b3f                 mov edi, dword ptr [edi]
// 005260a9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005260b1  85ff                 test edi, edi
// 005260b3  740e                 je 0x5260c3
// 005260b5  8d4704               lea eax, [edi + 4]
// 005260b8  50                   push eax
// 005260b9  897c2424             mov dword ptr [esp + 0x24], edi
// 005260bd  ff15d0e18900         call dword ptr [0x89e1d0]
// 005260c3  8d542420             lea edx, [esp + 0x20]
// 005260c7  52                   push edx
// 005260c8  8bce                 mov ecx, esi
// 005260ca  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005260d2  e859ffffff           call 0x526030
// 005260d7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005260db  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005260e3  85c0                 test eax, eax
// 005260e5  7456                 je 0x52613d
// 005260e7  83c004               add eax, 4
// 005260ea  50                   push eax
// 005260eb  ff15a4e18900         call dword ptr [0x89e1a4]
// 005260f1  85c0                 test eax, eax
// 005260f3  7548                 jne 0x52613d
// 005260f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005260f9  e882ecf1ff           call 0x444d80
// 005260fe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526102  85c9                 test ecx, ecx
// 00526104  7437                 je 0x52613d
// 00526106  8b01                 mov eax, dword ptr [ecx]
// 00526108  8b10                 mov edx, dword ptr [eax]
// 0052610a  6a01                 push 1
// 0052610c  ffd2                 call edx
// 0052610e  5f                   pop edi
// 0052610f  5e                   pop esi
// 00526110  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00526114  64890d00000000       mov dword ptr fs:[0], ecx
// 0052611b  83c414               add esp, 0x14
// 0052611e  c20400               ret 4
// 00526121  6a00                 push 0
// 00526123  40                   inc eax
// 00526124  50                   push eax
// 00526125  8bce                 mov ecx, esi
// 00526127  e884fcffff           call 0x525db0
// 0052612c  8b07                 mov eax, dword ptr [edi]
// 0052612e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00526131  8b16                 mov edx, dword ptr [esi]
// 00526133  50                   push eax
// 00526134  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00526138  e82397f7ff           call 0x49f860
// 0052613d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00526141  5f                   pop edi
// 00526142  5e                   pop esi
// 00526143  64890d00000000       mov dword ptr fs:[0], ecx
// 0052614a  83c414               add esp, 0x14
// 0052614d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
