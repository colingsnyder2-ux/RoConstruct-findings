// roc 2007-08 005a7830  unit: RBX::VHumanoid::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7830
//
// 005a7830  6aff                 push -1
// 005a7832  6890b87500           push 0x75b890
// 005a7837  64a100000000         mov eax, dword ptr fs:[0]
// 005a783d  50                   push eax
// 005a783e  64892500000000       mov dword ptr fs:[0], esp
// 005a7845  83ec14               sub esp, 0x14
// 005a7848  53                   push ebx
// 005a7849  55                   push ebp
// 005a784a  56                   push esi
// 005a784b  8bf1                 mov esi, ecx
// 005a784d  57                   push edi
// 005a784e  89742410             mov dword ptr [esp + 0x10], esi
// 005a7852  e8696dfeff           call 0x58e5c0
// 005a7857  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a785b  51                   push ecx
// 005a785c  50                   push eax
// 005a785d  8bce                 mov ecx, esi
// 005a785f  e8ac8bfcff           call 0x570410
// 005a7864  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a7868  6aff                 push -1
// 005a786a  52                   push edx
// 005a786b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005a7873  c7063c577b00         mov dword ptr [esi], 0x7b573c
// 005a7879  e8c250f8ff           call 0x52c940
// 005a787e  83c408               add esp, 8
// 005a7881  89442414             mov dword ptr [esp + 0x14], eax
// 005a7885  e82660fcff           call 0x56d8b0
// 005a788a  8d4c241c             lea ecx, [esp + 0x1c]
// 005a788e  89442418             mov dword ptr [esp + 0x18], eax
// 005a7892  e8295bfcff           call 0x56d3c0
// 005a7897  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005a789a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a789d  8d7e18               lea edi, [esi + 0x18]
// 005a78a0  8d442414             lea eax, [esp + 0x14]
// 005a78a4  50                   push eax
// 005a78a5  51                   push ecx
// 005a78a6  55                   push ebp
// 005a78a7  8bcf                 mov ecx, edi
// 005a78a9  c644243801           mov byte ptr [esp + 0x38], 1
// 005a78ae  e88dd9e6ff           call 0x415240
// 005a78b3  6a01                 push 1
// 005a78b5  8bcf                 mov ecx, edi
// 005a78b7  8bd8                 mov ebx, eax
// 005a78b9  e8b2cde6ff           call 0x414670
// 005a78be  895d04               mov dword ptr [ebp + 4], ebx
// 005a78c1  8b4304               mov eax, dword ptr [ebx + 4]
// 005a78c4  8918                 mov dword ptr [eax], ebx
// 005a78c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a78ca  85c9                 test ecx, ecx
// 005a78cc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a78d1  7408                 je 0x5a78db
// 005a78d3  8b11                 mov edx, dword ptr [ecx]
// 005a78d5  8b02                 mov eax, dword ptr [edx]
// 005a78d7  6a01                 push 1
// 005a78d9  ffd0                 call eax
// 005a78db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a78df  5f                   pop edi
// 005a78e0  8bc6                 mov eax, esi
// 005a78e2  5e                   pop esi
// 005a78e3  5d                   pop ebp
// 005a78e4  5b                   pop ebx
// 005a78e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a78ec  83c420               add esp, 0x20
// 005a78ef  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
