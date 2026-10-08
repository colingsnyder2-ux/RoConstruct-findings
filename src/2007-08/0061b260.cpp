// roc 2007-08 0061b260  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b260
//
// 0061b260  6aff                 push -1
// 0061b262  6890b87500           push 0x75b890
// 0061b267  64a100000000         mov eax, dword ptr fs:[0]
// 0061b26d  50                   push eax
// 0061b26e  64892500000000       mov dword ptr fs:[0], esp
// 0061b275  83ec14               sub esp, 0x14
// 0061b278  53                   push ebx
// 0061b279  55                   push ebp
// 0061b27a  56                   push esi
// 0061b27b  8bf1                 mov esi, ecx
// 0061b27d  57                   push edi
// 0061b27e  89742410             mov dword ptr [esp + 0x10], esi
// 0061b282  e82983fbff           call 0x5d35b0
// 0061b287  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061b28b  51                   push ecx
// 0061b28c  50                   push eax
// 0061b28d  8bce                 mov ecx, esi
// 0061b28f  e87c51f5ff           call 0x570410
// 0061b294  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061b298  6aff                 push -1
// 0061b29a  52                   push edx
// 0061b29b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0061b2a3  c706ac3b7c00         mov dword ptr [esi], 0x7c3bac
// 0061b2a9  e89216f1ff           call 0x52c940
// 0061b2ae  83c408               add esp, 8
// 0061b2b1  89442414             mov dword ptr [esp + 0x14], eax
// 0061b2b5  e84627f5ff           call 0x56da00
// 0061b2ba  8d4c241c             lea ecx, [esp + 0x1c]
// 0061b2be  89442418             mov dword ptr [esp + 0x18], eax
// 0061b2c2  e8f920f5ff           call 0x56d3c0
// 0061b2c7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0061b2ca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0061b2cd  8d7e18               lea edi, [esi + 0x18]
// 0061b2d0  8d442414             lea eax, [esp + 0x14]
// 0061b2d4  50                   push eax
// 0061b2d5  51                   push ecx
// 0061b2d6  55                   push ebp
// 0061b2d7  8bcf                 mov ecx, edi
// 0061b2d9  c644243801           mov byte ptr [esp + 0x38], 1
// 0061b2de  e85d9fdfff           call 0x415240
// 0061b2e3  6a01                 push 1
// 0061b2e5  8bcf                 mov ecx, edi
// 0061b2e7  8bd8                 mov ebx, eax
// 0061b2e9  e88293dfff           call 0x414670
// 0061b2ee  895d04               mov dword ptr [ebp + 4], ebx
// 0061b2f1  8b4304               mov eax, dword ptr [ebx + 4]
// 0061b2f4  8918                 mov dword ptr [eax], ebx
// 0061b2f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061b2fa  85c9                 test ecx, ecx
// 0061b2fc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0061b301  7408                 je 0x61b30b
// 0061b303  8b11                 mov edx, dword ptr [ecx]
// 0061b305  8b02                 mov eax, dword ptr [edx]
// 0061b307  6a01                 push 1
// 0061b309  ffd0                 call eax
// 0061b30b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061b30f  5f                   pop edi
// 0061b310  8bc6                 mov eax, esi
// 0061b312  5e                   pop esi
// 0061b313  5d                   pop ebp
// 0061b314  5b                   pop ebx
// 0061b315  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b31c  83c420               add esp, 0x20
// 0061b31f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
