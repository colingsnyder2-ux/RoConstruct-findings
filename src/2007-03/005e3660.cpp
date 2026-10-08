// roc 2007-03 005e3660  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3660
//
// 005e3660  6aff                 push -1
// 005e3662  6820937500           push 0x759320
// 005e3667  64a100000000         mov eax, dword ptr fs:[0]
// 005e366d  50                   push eax
// 005e366e  64892500000000       mov dword ptr fs:[0], esp
// 005e3675  83ec14               sub esp, 0x14
// 005e3678  53                   push ebx
// 005e3679  55                   push ebp
// 005e367a  56                   push esi
// 005e367b  8bf1                 mov esi, ecx
// 005e367d  57                   push edi
// 005e367e  89742410             mov dword ptr [esp + 0x10], esi
// 005e3682  e899e5ffff           call 0x5e1c20
// 005e3687  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e368b  51                   push ecx
// 005e368c  50                   push eax
// 005e368d  8bce                 mov ecx, esi
// 005e368f  e89cccf8ff           call 0x570330
// 005e3694  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3698  6aff                 push -1
// 005e369a  52                   push edx
// 005e369b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e36a3  c70608ec7b00         mov dword ptr [esi], 0x7bec08
// 005e36a9  e832a2f4ff           call 0x52d8e0
// 005e36ae  83c408               add esp, 8
// 005e36b1  89442414             mov dword ptr [esp + 0x14], eax
// 005e36b5  e8f69bf8ff           call 0x56d2b0
// 005e36ba  8d4c241c             lea ecx, [esp + 0x1c]
// 005e36be  89442418             mov dword ptr [esp + 0x18], eax
// 005e36c2  e88997f8ff           call 0x56ce50
// 005e36c7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e36ca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e36cd  8d7e18               lea edi, [esi + 0x18]
// 005e36d0  8d442414             lea eax, [esp + 0x14]
// 005e36d4  50                   push eax
// 005e36d5  51                   push ecx
// 005e36d6  55                   push ebp
// 005e36d7  8bcf                 mov ecx, edi
// 005e36d9  c644243801           mov byte ptr [esp + 0x38], 1
// 005e36de  e8bd2be3ff           call 0x4162a0
// 005e36e3  6a01                 push 1
// 005e36e5  8bcf                 mov ecx, edi
// 005e36e7  8bd8                 mov ebx, eax
// 005e36e9  e8921fe3ff           call 0x415680
// 005e36ee  895d04               mov dword ptr [ebp + 4], ebx
// 005e36f1  8b4304               mov eax, dword ptr [ebx + 4]
// 005e36f4  8918                 mov dword ptr [eax], ebx
// 005e36f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e36fa  85c9                 test ecx, ecx
// 005e36fc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3701  7408                 je 0x5e370b
// 005e3703  8b11                 mov edx, dword ptr [ecx]
// 005e3705  8b02                 mov eax, dword ptr [edx]
// 005e3707  6a01                 push 1
// 005e3709  ffd0                 call eax
// 005e370b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e370f  5f                   pop edi
// 005e3710  8bc6                 mov eax, esi
// 005e3712  5e                   pop esi
// 005e3713  5d                   pop ebp
// 005e3714  5b                   pop ebx
// 005e3715  64890d00000000       mov dword ptr fs:[0], ecx
// 005e371c  83c420               add esp, 0x20
// 005e371f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
