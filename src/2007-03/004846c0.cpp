// roc 2007-03 004846c0  unit: seg_00480000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004846c0
//
// 004846c0  803d2a768b0000       cmp byte ptr [0x8b762a], 0
// 004846c7  56                   push esi
// 004846c8  8bf1                 mov esi, ecx
// 004846ca  7410                 je 0x4846dc
// 004846cc  8b442408             mov eax, dword ptr [esp + 8]
// 004846d0  05c0840000           add eax, 0x84c0
// 004846d5  50                   push eax
// 004846d6  ff15ac7f8b00         call dword ptr [0x8b7fac]
// 004846dc  6878800000           push 0x8078
// 004846e1  ff1570ec7700         call dword ptr [0x77ec70]
// 004846e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004846ea  8b5608               mov edx, dword ptr [esi + 8]
// 004846ed  8b4618               mov eax, dword ptr [esi + 0x18]
// 004846f0  51                   push ecx
// 004846f1  52                   push edx
// 004846f2  50                   push eax
// 004846f3  50                   push eax
// 004846f4  e877a1ffff           call 0x47e870
// 004846f9  8bc8                 mov ecx, eax
// 004846fb  8b4608               mov eax, dword ptr [esi + 8]
// 004846fe  33d2                 xor edx, edx
// 00484700  f7f1                 div ecx
// 00484702  83c404               add esp, 4
// 00484705  50                   push eax
// 00484706  ff1578ec7700         call dword ptr [0x77ec78]
// 0048470c  803d2a768b0000       cmp byte ptr [0x8b762a], 0
// 00484713  5e                   pop esi
// 00484714  740e                 je 0x484724
// 00484716  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 0048471e  ff25ac7f8b00         jmp dword ptr [0x8b7fac]
// 00484724  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VAR.cpp
