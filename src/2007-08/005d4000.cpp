// roc 2007-08 005d4000  unit: RBX::Tool  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4000
//
// 005d4000  6aff                 push -1
// 005d4002  6890b87500           push 0x75b890
// 005d4007  64a100000000         mov eax, dword ptr fs:[0]
// 005d400d  50                   push eax
// 005d400e  64892500000000       mov dword ptr fs:[0], esp
// 005d4015  83ec14               sub esp, 0x14
// 005d4018  53                   push ebx
// 005d4019  55                   push ebp
// 005d401a  56                   push esi
// 005d401b  8bf1                 mov esi, ecx
// 005d401d  57                   push edi
// 005d401e  89742410             mov dword ptr [esp + 0x10], esi
// 005d4022  e839cdfbff           call 0x590d60
// 005d4027  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d402b  51                   push ecx
// 005d402c  50                   push eax
// 005d402d  8bce                 mov ecx, esi
// 005d402f  e8dcc3f9ff           call 0x570410
// 005d4034  8b542438             mov edx, dword ptr [esp + 0x38]
// 005d4038  6aff                 push -1
// 005d403a  52                   push edx
// 005d403b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d4043  c7062cb47b00         mov dword ptr [esi], 0x7bb42c
// 005d4049  e8f288f5ff           call 0x52c940
// 005d404e  83c408               add esp, 8
// 005d4051  89442414             mov dword ptr [esp + 0x14], eax
// 005d4055  e89696f9ff           call 0x56d6f0
// 005d405a  8d4c241c             lea ecx, [esp + 0x1c]
// 005d405e  89442418             mov dword ptr [esp + 0x18], eax
// 005d4062  e85993f9ff           call 0x56d3c0
// 005d4067  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005d406a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d406d  8d7e18               lea edi, [esi + 0x18]
// 005d4070  8d442414             lea eax, [esp + 0x14]
// 005d4074  50                   push eax
// 005d4075  51                   push ecx
// 005d4076  55                   push ebp
// 005d4077  8bcf                 mov ecx, edi
// 005d4079  c644243801           mov byte ptr [esp + 0x38], 1
// 005d407e  e8bd11e4ff           call 0x415240
// 005d4083  6a01                 push 1
// 005d4085  8bcf                 mov ecx, edi
// 005d4087  8bd8                 mov ebx, eax
// 005d4089  e8e205e4ff           call 0x414670
// 005d408e  895d04               mov dword ptr [ebp + 4], ebx
// 005d4091  8b4304               mov eax, dword ptr [ebx + 4]
// 005d4094  8918                 mov dword ptr [eax], ebx
// 005d4096  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d409a  85c9                 test ecx, ecx
// 005d409c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d40a1  7408                 je 0x5d40ab
// 005d40a3  8b11                 mov edx, dword ptr [ecx]
// 005d40a5  8b02                 mov eax, dword ptr [edx]
// 005d40a7  6a01                 push 1
// 005d40a9  ffd0                 call eax
// 005d40ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d40af  5f                   pop edi
// 005d40b0  8bc6                 mov eax, esi
// 005d40b2  5e                   pop esi
// 005d40b3  5d                   pop ebp
// 005d40b4  5b                   pop ebx
// 005d40b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d40bc  83c420               add esp, 0x20
// 005d40bf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
