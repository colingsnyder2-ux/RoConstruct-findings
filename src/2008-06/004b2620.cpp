// roc 2008-06 004b2620  unit: RBX::VSnap::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2620
//
// 004b2620  6aff                 push -1
// 004b2622  683b467d00           push 0x7d463b
// 004b2627  64a100000000         mov eax, dword ptr fs:[0]
// 004b262d  50                   push eax
// 004b262e  64892500000000       mov dword ptr fs:[0], esp
// 004b2635  83ec08               sub esp, 8
// 004b2638  c7042400000000       mov dword ptr [esp], 0
// 004b263f  6854010000           push 0x154
// 004b2644  c644240400           mov byte ptr [esp + 4], 0
// 004b2649  ff15b0288000         call dword ptr [0x8028b0]
// 004b264f  83c404               add esp, 4
// 004b2652  89442404             mov dword ptr [esp + 4], eax
// 004b2656  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b265e  85c0                 test eax, eax
// 004b2660  7409                 je 0x4b266b
// 004b2662  8bc8                 mov ecx, eax
// 004b2664  e8a7211300           call 0x5e4810
// 004b2669  eb02                 jmp 0x4b266d
// 004b266b  33c0                 xor eax, eax
// 004b266d  8b0c24               mov ecx, dword ptr [esp]
// 004b2670  56                   push esi
// 004b2671  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b2675  51                   push ecx
// 004b2676  50                   push eax
// 004b2677  8bce                 mov ecx, esi
// 004b2679  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b2681  e8eafeffff           call 0x4b2570
// 004b2686  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b268a  8bc6                 mov eax, esi
// 004b268c  5e                   pop esi
// 004b268d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2694  83c414               add esp, 0x14
// 004b2697  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
