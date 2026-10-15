// roc 2008-06 0059abe0  unit: RBX::PartInstance  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059abe0
//
// 0059abe0  6aff                 push -1
// 0059abe2  6828ae7d00           push 0x7dae28
// 0059abe7  64a100000000         mov eax, dword ptr fs:[0]
// 0059abed  50                   push eax
// 0059abee  64892500000000       mov dword ptr fs:[0], esp
// 0059abf5  83ec34               sub esp, 0x34
// 0059abf8  56                   push esi
// 0059abf9  57                   push edi
// 0059abfa  8bf9                 mov edi, ecx
// 0059abfc  8db728020000         lea esi, [edi + 0x228]
// 0059ac02  8bce                 mov ecx, esi
// 0059ac04  e8b7d60400           call 0x5e82c0
// 0059ac09  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0059ac0d  51                   push ecx
// 0059ac0e  8d542424             lea edx, [esp + 0x24]
// 0059ac12  52                   push edx
// 0059ac13  8bc8                 mov ecx, eax
// 0059ac15  e856ddf7ff           call 0x518970
// 0059ac1a  d9ee                 fldz 
// 0059ac1c  d9542408             fst dword ptr [esp + 8]
// 0059ac20  51                   push ecx
// 0059ac21  d9542410             fst dword ptr [esp + 0x10]
// 0059ac25  8d44240c             lea eax, [esp + 0xc]
// 0059ac29  d95c2414             fstp dword ptr [esp + 0x14]
// 0059ac2d  8d4c2424             lea ecx, [esp + 0x24]
// 0059ac31  d9e8                 fld1 
// 0059ac33  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0059ac3b  d91c24               fstp dword ptr [esp]
// 0059ac3e  50                   push eax
// 0059ac3f  51                   push ecx
// 0059ac40  8bcf                 mov ecx, edi
// 0059ac42  e849feffff           call 0x59aa90
// 0059ac47  50                   push eax
// 0059ac48  e833c70d00           call 0x677380
// 0059ac4d  83c410               add esp, 0x10
// 0059ac50  84c0                 test al, al
// 0059ac52  7441                 je 0x59ac95
// 0059ac54  8bce                 mov ecx, esi
// 0059ac56  e865d60400           call 0x5e82c0
// 0059ac5b  8d542408             lea edx, [esp + 8]
// 0059ac5f  52                   push edx
// 0059ac60  8d4c2418             lea ecx, [esp + 0x18]
// 0059ac64  51                   push ecx
// 0059ac65  8bc8                 mov ecx, eax
// 0059ac67  e834baedff           call 0x4766a0
// 0059ac6c  d900                 fld dword ptr [eax]
// 0059ac6e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059ac72  d919                 fstp dword ptr [ecx]
// 0059ac74  5f                   pop edi
// 0059ac75  d94004               fld dword ptr [eax + 4]
// 0059ac78  5e                   pop esi
// 0059ac79  d95904               fstp dword ptr [ecx + 4]
// 0059ac7c  d94008               fld dword ptr [eax + 8]
// 0059ac7f  b001                 mov al, 1
// 0059ac81  d95908               fstp dword ptr [ecx + 8]
// 0059ac84  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ac88  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ac8f  83c440               add esp, 0x40
// 0059ac92  c20800               ret 8
// 0059ac95  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059ac99  5f                   pop edi
// 0059ac9a  32c0                 xor al, al
// 0059ac9c  5e                   pop esi
// 0059ac9d  64890d00000000       mov dword ptr fs:[0], ecx
// 0059aca4  83c440               add esp, 0x40
// 0059aca7  c20800               ret 8
// library rbxgs/roc_unit_4f842e31c2d089ba.cpp (function ?hitTest@PartInstance@RBX@@UAE_NABVRay@G3D@@AAVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4f842e31c2d089ba.cpp
