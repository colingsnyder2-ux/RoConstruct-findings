// roc 2012-06 00776a90  unit: RBX::VHandles::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00776a90
//
// 00776a90  6aff                 push -1
// 00776a92  68ebd7a900           push 0xa9d7eb
// 00776a97  64a100000000         mov eax, dword ptr fs:[0]
// 00776a9d  50                   push eax
// 00776a9e  64892500000000       mov dword ptr fs:[0], esp
// 00776aa5  83ec08               sub esp, 8
// 00776aa8  c7042400000000       mov dword ptr [esp], 0
// 00776aaf  688c010000           push 0x18c
// 00776ab4  c644240400           mov byte ptr [esp + 4], 0
// 00776ab9  e85cb62000           call 0x98211a
// 00776abe  83c404               add esp, 4
// 00776ac1  89442404             mov dword ptr [esp + 4], eax
// 00776ac5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00776acd  85c0                 test eax, eax
// 00776acf  7409                 je 0x776ada
// 00776ad1  8bc8                 mov ecx, eax
// 00776ad3  e8c8391600           call 0x8da4a0
// 00776ad8  eb02                 jmp 0x776adc
// 00776ada  33c0                 xor eax, eax
// 00776adc  8b0c24               mov ecx, dword ptr [esp]
// 00776adf  56                   push esi
// 00776ae0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00776ae4  51                   push ecx
// 00776ae5  50                   push eax
// 00776ae6  8bce                 mov ecx, esi
// 00776ae8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00776af0  e82bffffff           call 0x776a20
// 00776af5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00776af9  8bc6                 mov eax, esi
// 00776afb  5e                   pop esi
// 00776afc  64890d00000000       mov dword ptr fs:[0], ecx
// 00776b03  83c414               add esp, 0x14
// 00776b06  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VRocket@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VRocket@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
