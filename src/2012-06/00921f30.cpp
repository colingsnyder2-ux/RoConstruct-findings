// roc 2012-06 00921f30  unit: RBX::ManualGlueJoint  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00921f30
//
// 00921f30  6aff                 push -1
// 00921f32  68eb29ad00           push 0xad29eb
// 00921f37  64a100000000         mov eax, dword ptr fs:[0]
// 00921f3d  50                   push eax
// 00921f3e  64892500000000       mov dword ptr fs:[0], esp
// 00921f45  51                   push ecx
// 00921f46  56                   push esi
// 00921f47  57                   push edi
// 00921f48  6a58                 push 0x58
// 00921f4a  8bf1                 mov esi, ecx
// 00921f4c  e8c9010600           call 0x98211a
// 00921f51  83c404               add esp, 4
// 00921f54  89442408             mov dword ptr [esp + 8], eax
// 00921f58  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00921f5c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00921f64  85c0                 test eax, eax
// 00921f66  740b                 je 0x921f73
// 00921f68  57                   push edi
// 00921f69  56                   push esi
// 00921f6a  8bc8                 mov ecx, eax
// 00921f6c  e87f020400           call 0x9621f0
// 00921f71  eb02                 jmp 0x921f75
// 00921f73  33c0                 xor eax, eax
// 00921f75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00921f79  894e04               mov dword ptr [esi + 4], ecx
// 00921f7c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00921f80  897e0c               mov dword ptr [esi + 0xc], edi
// 00921f83  894608               mov dword ptr [esi + 8], eax
// 00921f86  c7060878bf00         mov dword ptr [esi], 0xbf7808
// 00921f8c  5f                   pop edi
// 00921f8d  8bc6                 mov eax, esi
// 00921f8f  5e                   pop esi
// 00921f90  64890d00000000       mov dword ptr fs:[0], ecx
// 00921f97  83c410               add esp, 0x10
// 00921f9a  c20800               ret 8
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??0ClumpStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
