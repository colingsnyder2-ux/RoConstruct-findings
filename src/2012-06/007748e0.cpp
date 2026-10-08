// roc 2012-06 007748e0  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007748e0
//
// 007748e0  6aff                 push -1
// 007748e2  68ebd7a900           push 0xa9d7eb
// 007748e7  64a100000000         mov eax, dword ptr fs:[0]
// 007748ed  50                   push eax
// 007748ee  64892500000000       mov dword ptr fs:[0], esp
// 007748f5  83ec08               sub esp, 8
// 007748f8  c7042400000000       mov dword ptr [esp], 0
// 007748ff  684c010000           push 0x14c
// 00774904  c644240400           mov byte ptr [esp + 4], 0
// 00774909  e80cd82000           call 0x98211a
// 0077490e  83c404               add esp, 4
// 00774911  89442404             mov dword ptr [esp + 4], eax
// 00774915  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0077491d  85c0                 test eax, eax
// 0077491f  7409                 je 0x77492a
// 00774921  8bc8                 mov ecx, eax
// 00774923  e818dc1500           call 0x8d2540
// 00774928  eb02                 jmp 0x77492c
// 0077492a  33c0                 xor eax, eax
// 0077492c  8b0c24               mov ecx, dword ptr [esp]
// 0077492f  56                   push esi
// 00774930  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00774934  51                   push ecx
// 00774935  50                   push eax
// 00774936  8bce                 mov ecx, esi
// 00774938  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00774940  e82bffffff           call 0x774870
// 00774945  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00774949  8bc6                 mov eax, esi
// 0077494b  5e                   pop esi
// 0077494c  64890d00000000       mov dword ptr fs:[0], ecx
// 00774953  83c414               add esp, 0x14
// 00774956  c3                   ret 
// library rbxgs/v8datamodel\IEquipable.cpp (function ??$create@VWeld@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VWeld@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/IEquipable.cpp
