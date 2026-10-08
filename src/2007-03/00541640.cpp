// roc 2007-03 00541640  unit: seg_00540000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541640
//
// 00541640  6aff                 push -1
// 00541642  6820937500           push 0x759320
// 00541647  64a100000000         mov eax, dword ptr fs:[0]
// 0054164d  50                   push eax
// 0054164e  64892500000000       mov dword ptr fs:[0], esp
// 00541655  83ec14               sub esp, 0x14
// 00541658  53                   push ebx
// 00541659  55                   push ebp
// 0054165a  56                   push esi
// 0054165b  8bf1                 mov esi, ecx
// 0054165d  57                   push edi
// 0054165e  89742410             mov dword ptr [esp + 0x10], esi
// 00541662  e8f984edff           call 0x419b60
// 00541667  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054166b  51                   push ecx
// 0054166c  50                   push eax
// 0054166d  8bce                 mov ecx, esi
// 0054166f  e8bcec0200           call 0x570330
// 00541674  8b542438             mov edx, dword ptr [esp + 0x38]
// 00541678  6aff                 push -1
// 0054167a  52                   push edx
// 0054167b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00541683  c70668677a00         mov dword ptr [esi], 0x7a6768
// 00541689  e852c2feff           call 0x52d8e0
// 0054168e  83c408               add esp, 8
// 00541691  89442414             mov dword ptr [esp + 0x14], eax
// 00541695  e866bd0200           call 0x56d400
// 0054169a  8d4c241c             lea ecx, [esp + 0x1c]
// 0054169e  89442418             mov dword ptr [esp + 0x18], eax
// 005416a2  e8a9b70200           call 0x56ce50
// 005416a7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005416aa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005416ad  8d7e18               lea edi, [esi + 0x18]
// 005416b0  8d442414             lea eax, [esp + 0x14]
// 005416b4  50                   push eax
// 005416b5  51                   push ecx
// 005416b6  55                   push ebp
// 005416b7  8bcf                 mov ecx, edi
// 005416b9  c644243801           mov byte ptr [esp + 0x38], 1
// 005416be  e8dd4bedff           call 0x4162a0
// 005416c3  6a01                 push 1
// 005416c5  8bcf                 mov ecx, edi
// 005416c7  8bd8                 mov ebx, eax
// 005416c9  e8b23fedff           call 0x415680
// 005416ce  895d04               mov dword ptr [ebp + 4], ebx
// 005416d1  8b4304               mov eax, dword ptr [ebx + 4]
// 005416d4  8918                 mov dword ptr [eax], ebx
// 005416d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005416da  85c9                 test ecx, ecx
// 005416dc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005416e1  7408                 je 0x5416eb
// 005416e3  8b11                 mov edx, dword ptr [ecx]
// 005416e5  8b02                 mov eax, dword ptr [edx]
// 005416e7  6a01                 push 1
// 005416e9  ffd0                 call eax
// 005416eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005416ef  5f                   pop edi
// 005416f0  8bc6                 mov eax, esi
// 005416f2  5e                   pop esi
// 005416f3  5d                   pop ebp
// 005416f4  5b                   pop ebx
// 005416f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005416fc  83c420               add esp, 0x20
// 005416ff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
