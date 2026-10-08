// roc 2007-08 0058e810  unit: RBX::SoundService  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e810
//
// 0058e810  6aff                 push -1
// 0058e812  687b6b7500           push 0x756b7b
// 0058e817  64a100000000         mov eax, dword ptr fs:[0]
// 0058e81d  50                   push eax
// 0058e81e  64892500000000       mov dword ptr fs:[0], esp
// 0058e825  51                   push ecx
// 0058e826  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058e82a  53                   push ebx
// 0058e82b  55                   push ebp
// 0058e82c  8be9                 mov ebp, ecx
// 0058e82e  56                   push esi
// 0058e82f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058e833  50                   push eax
// 0058e834  8d5d04               lea ebx, [ebp + 4]
// 0058e837  56                   push esi
// 0058e838  8bcb                 mov ecx, ebx
// 0058e83a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058e83e  897500               mov dword ptr [ebp], esi
// 0058e841  e83affffff           call 0x58e780
// 0058e846  85f6                 test esi, esi
// 0058e848  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058e850  7453                 je 0x58e8a5
// 0058e852  57                   push edi
// 0058e853  8dbea4000000         lea edi, [esi + 0xa4]
// 0058e859  85ff                 test edi, edi
// 0058e85b  7431                 je 0x58e88e
// 0058e85d  8937                 mov dword ptr [edi], esi
// 0058e85f  8b33                 mov esi, dword ptr [ebx]
// 0058e861  85f6                 test esi, esi
// 0058e863  740c                 je 0x58e871
// 0058e865  8d4e08               lea ecx, [esi + 8]
// 0058e868  ba01000000           mov edx, 1
// 0058e86d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058e871  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058e874  85c9                 test ecx, ecx
// 0058e876  7413                 je 0x58e88b
// 0058e878  8d4108               lea eax, [ecx + 8]
// 0058e87b  83caff               or edx, 0xffffffff
// 0058e87e  f00fc110             lock xadd dword ptr [eax], edx
// 0058e882  7507                 jne 0x58e88b
// 0058e884  8b01                 mov eax, dword ptr [ecx]
// 0058e886  8b5008               mov edx, dword ptr [eax + 8]
// 0058e889  ffd2                 call edx
// 0058e88b  897704               mov dword ptr [edi + 4], esi
// 0058e88e  5f                   pop edi
// 0058e88f  5e                   pop esi
// 0058e890  8bc5                 mov eax, ebp
// 0058e892  5d                   pop ebp
// 0058e893  5b                   pop ebx
// 0058e894  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058e898  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e89f  83c410               add esp, 0x10
// 0058e8a2  c20800               ret 8
// 0058e8a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058e8a9  5e                   pop esi
// 0058e8aa  8bc5                 mov eax, ebp
// 0058e8ac  5d                   pop ebp
// 0058e8ad  5b                   pop ebx
// 0058e8ae  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e8b5  83c410               add esp, 0x10
// 0058e8b8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
