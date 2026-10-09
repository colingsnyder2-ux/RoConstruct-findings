// roc 2011-06 005d4aa0  unit: RBX::VFire::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d4aa0
//
// 005d4aa0  6aff                 push -1
// 005d4aa2  688b579e00           push 0x9e578b
// 005d4aa7  64a100000000         mov eax, dword ptr fs:[0]
// 005d4aad  50                   push eax
// 005d4aae  64892500000000       mov dword ptr fs:[0], esp
// 005d4ab5  83ec08               sub esp, 8
// 005d4ab8  c7042400000000       mov dword ptr [esp], 0
// 005d4abf  6868020000           push 0x268
// 005d4ac4  c644240400           mov byte ptr [esp + 4], 0
// 005d4ac9  e890552300           call 0x80a05e
// 005d4ace  83c404               add esp, 4
// 005d4ad1  89442404             mov dword ptr [esp + 4], eax
// 005d4ad5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d4add  85c0                 test eax, eax
// 005d4adf  7409                 je 0x5d4aea
// 005d4ae1  8bc8                 mov ecx, eax
// 005d4ae3  e8d87c1200           call 0x6fc7c0
// 005d4ae8  eb02                 jmp 0x5d4aec
// 005d4aea  33c0                 xor eax, eax
// 005d4aec  8b0c24               mov ecx, dword ptr [esp]
// 005d4aef  56                   push esi
// 005d4af0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d4af4  51                   push ecx
// 005d4af5  50                   push eax
// 005d4af6  8bce                 mov ecx, esi
// 005d4af8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d4b00  e8ebfeffff           call 0x5d49f0
// 005d4b05  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d4b09  8bc6                 mov eax, esi
// 005d4b0b  5e                   pop esi
// 005d4b0c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4b13  83c414               add esp, 0x14
// 005d4b16  c3                   ret 
// library openrbx-client/App\v8datamodel\Lighting.cpp (function ??$create@VLighting@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VLighting@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Lighting.cpp
