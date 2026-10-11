// roc 2007-08 0058c640  unit: VStockSound::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058c640
//
// 0058c640  6aff                 push -1
// 0058c642  68bb6a7500           push 0x756abb
// 0058c647  64a100000000         mov eax, dword ptr fs:[0]
// 0058c64d  50                   push eax
// 0058c64e  64892500000000       mov dword ptr fs:[0], esp
// 0058c655  83ec08               sub esp, 8
// 0058c658  c7042400000000       mov dword ptr [esp], 0
// 0058c65f  6828010000           push 0x128
// 0058c664  c644240400           mov byte ptr [esp + 4], 0
// 0058c669  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058c66f  83c404               add esp, 4
// 0058c672  89442404             mov dword ptr [esp + 4], eax
// 0058c676  85c0                 test eax, eax
// 0058c678  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058c680  7409                 je 0x58c68b
// 0058c682  8bc8                 mov ecx, eax
// 0058c684  e8b7feffff           call 0x58c540
// 0058c689  eb02                 jmp 0x58c68d
// 0058c68b  33c0                 xor eax, eax
// 0058c68d  8b0c24               mov ecx, dword ptr [esp]
// 0058c690  56                   push esi
// 0058c691  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058c695  51                   push ecx
// 0058c696  50                   push eax
// 0058c697  8bce                 mov ecx, esi
// 0058c699  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058c6a1  e8bac1ffff           call 0x588860
// 0058c6a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058c6aa  8bc6                 mov eax, esi
// 0058c6ac  5e                   pop esi
// 0058c6ad  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c6b4  83c414               add esp, 0x14
// 0058c6b7  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/Script.cpp
