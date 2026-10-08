// roc 2007-08 0059eb70  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059eb70
//
// 0059eb70  6aff                 push -1
// 0059eb72  6890b87500           push 0x75b890
// 0059eb77  64a100000000         mov eax, dword ptr fs:[0]
// 0059eb7d  50                   push eax
// 0059eb7e  64892500000000       mov dword ptr fs:[0], esp
// 0059eb85  83ec14               sub esp, 0x14
// 0059eb88  53                   push ebx
// 0059eb89  55                   push ebp
// 0059eb8a  56                   push esi
// 0059eb8b  8bf1                 mov esi, ecx
// 0059eb8d  57                   push edi
// 0059eb8e  89742410             mov dword ptr [esp + 0x10], esi
// 0059eb92  e8d9f0ffff           call 0x59dc70
// 0059eb97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059eb9b  51                   push ecx
// 0059eb9c  50                   push eax
// 0059eb9d  8bce                 mov ecx, esi
// 0059eb9f  e86c18fdff           call 0x570410
// 0059eba4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059eba8  6aff                 push -1
// 0059ebaa  52                   push edx
// 0059ebab  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059ebb3  c70688277b00         mov dword ptr [esi], 0x7b2788
// 0059ebb9  e882ddf8ff           call 0x52c940
// 0059ebbe  83c408               add esp, 8
// 0059ebc1  89442414             mov dword ptr [esp + 0x14], eax
// 0059ebc5  e826ebfcff           call 0x56d6f0
// 0059ebca  8d4c241c             lea ecx, [esp + 0x1c]
// 0059ebce  89442418             mov dword ptr [esp + 0x18], eax
// 0059ebd2  e8e9e7fcff           call 0x56d3c0
// 0059ebd7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0059ebda  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0059ebdd  8d7e18               lea edi, [esi + 0x18]
// 0059ebe0  8d442414             lea eax, [esp + 0x14]
// 0059ebe4  50                   push eax
// 0059ebe5  51                   push ecx
// 0059ebe6  55                   push ebp
// 0059ebe7  8bcf                 mov ecx, edi
// 0059ebe9  c644243801           mov byte ptr [esp + 0x38], 1
// 0059ebee  e84d66e7ff           call 0x415240
// 0059ebf3  6a01                 push 1
// 0059ebf5  8bcf                 mov ecx, edi
// 0059ebf7  8bd8                 mov ebx, eax
// 0059ebf9  e8725ae7ff           call 0x414670
// 0059ebfe  895d04               mov dword ptr [ebp + 4], ebx
// 0059ec01  8b4304               mov eax, dword ptr [ebx + 4]
// 0059ec04  8918                 mov dword ptr [eax], ebx
// 0059ec06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ec0a  85c9                 test ecx, ecx
// 0059ec0c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059ec11  7408                 je 0x59ec1b
// 0059ec13  8b11                 mov edx, dword ptr [ecx]
// 0059ec15  8b02                 mov eax, dword ptr [edx]
// 0059ec17  6a01                 push 1
// 0059ec19  ffd0                 call eax
// 0059ec1b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ec1f  5f                   pop edi
// 0059ec20  8bc6                 mov eax, esi
// 0059ec22  5e                   pop esi
// 0059ec23  5d                   pop ebp
// 0059ec24  5b                   pop ebx
// 0059ec25  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ec2c  83c420               add esp, 0x20
// 0059ec2f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
