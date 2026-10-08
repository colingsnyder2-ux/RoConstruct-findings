// roc 2008-06 005d0b40  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0b40
//
// 005d0b40  6aff                 push -1
// 005d0b42  6830a17d00           push 0x7da130
// 005d0b47  64a100000000         mov eax, dword ptr fs:[0]
// 005d0b4d  50                   push eax
// 005d0b4e  64892500000000       mov dword ptr fs:[0], esp
// 005d0b55  83ec14               sub esp, 0x14
// 005d0b58  53                   push ebx
// 005d0b59  55                   push ebp
// 005d0b5a  56                   push esi
// 005d0b5b  8bf1                 mov esi, ecx
// 005d0b5d  57                   push edi
// 005d0b5e  89742410             mov dword ptr [esp + 0x10], esi
// 005d0b62  e8b9f8ffff           call 0x5d0420
// 005d0b67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d0b6b  51                   push ecx
// 005d0b6c  50                   push eax
// 005d0b6d  8bce                 mov ecx, esi
// 005d0b6f  e83caff9ff           call 0x56bab0
// 005d0b74  8b542438             mov edx, dword ptr [esp + 0x38]
// 005d0b78  6aff                 push -1
// 005d0b7a  52                   push edx
// 005d0b7b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d0b83  c7064cb28300         mov dword ptr [esi], 0x83b24c
// 005d0b89  e80234f8ff           call 0x553f90
// 005d0b8e  83c408               add esp, 8
// 005d0b91  89442414             mov dword ptr [esp + 0x14], eax
// 005d0b95  e846bff9ff           call 0x56cae0
// 005d0b9a  8d4c241c             lea ecx, [esp + 0x1c]
// 005d0b9e  89442418             mov dword ptr [esp + 0x18], eax
// 005d0ba2  e8193ffcff           call 0x594ac0
// 005d0ba7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005d0baa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d0bad  8d7e18               lea edi, [esi + 0x18]
// 005d0bb0  8d442414             lea eax, [esp + 0x14]
// 005d0bb4  50                   push eax
// 005d0bb5  51                   push ecx
// 005d0bb6  55                   push ebp
// 005d0bb7  8bcf                 mov ecx, edi
// 005d0bb9  c644243801           mov byte ptr [esp + 0x38], 1
// 005d0bbe  e83d73e4ff           call 0x417f00
// 005d0bc3  6a01                 push 1
// 005d0bc5  8bcf                 mov ecx, edi
// 005d0bc7  8bd8                 mov ebx, eax
// 005d0bc9  e8f2200b00           call 0x682cc0
// 005d0bce  895d04               mov dword ptr [ebp + 4], ebx
// 005d0bd1  8b4304               mov eax, dword ptr [ebx + 4]
// 005d0bd4  8918                 mov dword ptr [eax], ebx
// 005d0bd6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d0bda  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d0bdf  85c9                 test ecx, ecx
// 005d0be1  7408                 je 0x5d0beb
// 005d0be3  8b11                 mov edx, dword ptr [ecx]
// 005d0be5  8b02                 mov eax, dword ptr [edx]
// 005d0be7  6a01                 push 1
// 005d0be9  ffd0                 call eax
// 005d0beb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d0bef  5f                   pop edi
// 005d0bf0  8bc6                 mov eax, esi
// 005d0bf2  5e                   pop esi
// 005d0bf3  5d                   pop ebp
// 005d0bf4  5b                   pop ebx
// 005d0bf5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0bfc  83c420               add esp, 0x20
// 005d0bff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
