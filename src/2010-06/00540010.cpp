// roc 2010-06 00540010  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540010
//
// 00540010  6aff                 push -1
// 00540012  6868f99800           push 0x98f968
// 00540017  64a100000000         mov eax, dword ptr fs:[0]
// 0054001d  50                   push eax
// 0054001e  64892500000000       mov dword ptr fs:[0], esp
// 00540025  51                   push ecx
// 00540026  56                   push esi
// 00540027  8bf1                 mov esi, ecx
// 00540029  57                   push edi
// 0054002a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054002e  8a07                 mov al, byte ptr [edi]
// 00540030  8806                 mov byte ptr [esi], al
// 00540032  8a4f01               mov cl, byte ptr [edi + 1]
// 00540035  884e01               mov byte ptr [esi + 1], cl
// 00540038  d94704               fld dword ptr [edi + 4]
// 0054003b  d95e04               fstp dword ptr [esi + 4]
// 0054003e  8d4e08               lea ecx, [esi + 8]
// 00540041  c70100000000         mov dword ptr [ecx], 0
// 00540047  8b5708               mov edx, dword ptr [edi + 8]
// 0054004a  52                   push edx
// 0054004b  8974240c             mov dword ptr [esp + 0xc], esi
// 0054004f  e8cc6cf4ff           call 0x486d20
// 00540054  8d4e0c               lea ecx, [esi + 0xc]
// 00540057  c70100000000         mov dword ptr [ecx], 0
// 0054005d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00540060  50                   push eax
// 00540061  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00540069  e8b26cf4ff           call 0x486d20
// 0054006e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00540072  5f                   pop edi
// 00540073  8bc6                 mov eax, esi
// 00540075  5e                   pop esi
// 00540076  64890d00000000       mov dword ptr fs:[0], ecx
// 0054007d  83c410               add esp, 0x10
// 00540080  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??0?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
