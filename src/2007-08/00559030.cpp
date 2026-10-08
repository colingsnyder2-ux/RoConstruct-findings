// roc 2007-08 00559030  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559030
//
// 00559030  6aff                 push -1
// 00559032  687b6b7500           push 0x756b7b
// 00559037  64a100000000         mov eax, dword ptr fs:[0]
// 0055903d  50                   push eax
// 0055903e  64892500000000       mov dword ptr fs:[0], esp
// 00559045  51                   push ecx
// 00559046  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055904a  53                   push ebx
// 0055904b  55                   push ebp
// 0055904c  8be9                 mov ebp, ecx
// 0055904e  56                   push esi
// 0055904f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00559053  50                   push eax
// 00559054  8d5d04               lea ebx, [ebp + 4]
// 00559057  56                   push esi
// 00559058  8bcb                 mov ecx, ebx
// 0055905a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055905e  897500               mov dword ptr [ebp], esi
// 00559061  e87af8ffff           call 0x5588e0
// 00559066  85f6                 test esi, esi
// 00559068  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00559070  7453                 je 0x5590c5
// 00559072  57                   push edi
// 00559073  8dbea4000000         lea edi, [esi + 0xa4]
// 00559079  85ff                 test edi, edi
// 0055907b  7431                 je 0x5590ae
// 0055907d  8937                 mov dword ptr [edi], esi
// 0055907f  8b33                 mov esi, dword ptr [ebx]
// 00559081  85f6                 test esi, esi
// 00559083  740c                 je 0x559091
// 00559085  8d4e08               lea ecx, [esi + 8]
// 00559088  ba01000000           mov edx, 1
// 0055908d  f00fc111             lock xadd dword ptr [ecx], edx
// 00559091  8b4f04               mov ecx, dword ptr [edi + 4]
// 00559094  85c9                 test ecx, ecx
// 00559096  7413                 je 0x5590ab
// 00559098  8d4108               lea eax, [ecx + 8]
// 0055909b  83caff               or edx, 0xffffffff
// 0055909e  f00fc110             lock xadd dword ptr [eax], edx
// 005590a2  7507                 jne 0x5590ab
// 005590a4  8b01                 mov eax, dword ptr [ecx]
// 005590a6  8b5008               mov edx, dword ptr [eax + 8]
// 005590a9  ffd2                 call edx
// 005590ab  897704               mov dword ptr [edi + 4], esi
// 005590ae  5f                   pop edi
// 005590af  5e                   pop esi
// 005590b0  8bc5                 mov eax, ebp
// 005590b2  5d                   pop ebp
// 005590b3  5b                   pop ebx
// 005590b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005590b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005590bf  83c410               add esp, 0x10
// 005590c2  c20800               ret 8
// 005590c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005590c9  5e                   pop esi
// 005590ca  8bc5                 mov eax, ebp
// 005590cc  5d                   pop ebp
// 005590cd  5b                   pop ebx
// 005590ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005590d5  83c410               add esp, 0x10
// 005590d8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
