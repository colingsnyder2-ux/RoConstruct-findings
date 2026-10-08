// roc 2007-03 005e3770  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3770
//
// 005e3770  6aff                 push -1
// 005e3772  6820937500           push 0x759320
// 005e3777  64a100000000         mov eax, dword ptr fs:[0]
// 005e377d  50                   push eax
// 005e377e  64892500000000       mov dword ptr fs:[0], esp
// 005e3785  83ec14               sub esp, 0x14
// 005e3788  53                   push ebx
// 005e3789  55                   push ebp
// 005e378a  56                   push esi
// 005e378b  8bf1                 mov esi, ecx
// 005e378d  57                   push edi
// 005e378e  89742410             mov dword ptr [esp + 0x10], esi
// 005e3792  e8f9e4ffff           call 0x5e1c90
// 005e3797  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e379b  51                   push ecx
// 005e379c  50                   push eax
// 005e379d  8bce                 mov ecx, esi
// 005e379f  e88ccbf8ff           call 0x570330
// 005e37a4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e37a8  6aff                 push -1
// 005e37aa  52                   push edx
// 005e37ab  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e37b3  c70618ec7b00         mov dword ptr [esi], 0x7bec18
// 005e37b9  e822a1f4ff           call 0x52d8e0
// 005e37be  83c408               add esp, 8
// 005e37c1  89442414             mov dword ptr [esp + 0x14], eax
// 005e37c5  e8369cf8ff           call 0x56d400
// 005e37ca  8d4c241c             lea ecx, [esp + 0x1c]
// 005e37ce  89442418             mov dword ptr [esp + 0x18], eax
// 005e37d2  e87996f8ff           call 0x56ce50
// 005e37d7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e37da  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e37dd  8d7e18               lea edi, [esi + 0x18]
// 005e37e0  8d442414             lea eax, [esp + 0x14]
// 005e37e4  50                   push eax
// 005e37e5  51                   push ecx
// 005e37e6  55                   push ebp
// 005e37e7  8bcf                 mov ecx, edi
// 005e37e9  c644243801           mov byte ptr [esp + 0x38], 1
// 005e37ee  e8ad2ae3ff           call 0x4162a0
// 005e37f3  6a01                 push 1
// 005e37f5  8bcf                 mov ecx, edi
// 005e37f7  8bd8                 mov ebx, eax
// 005e37f9  e8821ee3ff           call 0x415680
// 005e37fe  895d04               mov dword ptr [ebp + 4], ebx
// 005e3801  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3804  8918                 mov dword ptr [eax], ebx
// 005e3806  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e380a  85c9                 test ecx, ecx
// 005e380c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3811  7408                 je 0x5e381b
// 005e3813  8b11                 mov edx, dword ptr [ecx]
// 005e3815  8b02                 mov eax, dword ptr [edx]
// 005e3817  6a01                 push 1
// 005e3819  ffd0                 call eax
// 005e381b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e381f  5f                   pop edi
// 005e3820  8bc6                 mov eax, esi
// 005e3822  5e                   pop esi
// 005e3823  5d                   pop ebp
// 005e3824  5b                   pop ebx
// 005e3825  64890d00000000       mov dword ptr fs:[0], ecx
// 005e382c  83c420               add esp, 0x20
// 005e382f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
