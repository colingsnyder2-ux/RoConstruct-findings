// roc 2007-03 005e3ab0  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3ab0
//
// 005e3ab0  6aff                 push -1
// 005e3ab2  6820937500           push 0x759320
// 005e3ab7  64a100000000         mov eax, dword ptr fs:[0]
// 005e3abd  50                   push eax
// 005e3abe  64892500000000       mov dword ptr fs:[0], esp
// 005e3ac5  83ec14               sub esp, 0x14
// 005e3ac8  53                   push ebx
// 005e3ac9  55                   push ebp
// 005e3aca  56                   push esi
// 005e3acb  8bf1                 mov esi, ecx
// 005e3acd  57                   push edi
// 005e3ace  89742410             mov dword ptr [esp + 0x10], esi
// 005e3ad2  e879e3ffff           call 0x5e1e50
// 005e3ad7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e3adb  51                   push ecx
// 005e3adc  50                   push eax
// 005e3add  8bce                 mov ecx, esi
// 005e3adf  e84cc8f8ff           call 0x570330
// 005e3ae4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3ae8  6aff                 push -1
// 005e3aea  52                   push edx
// 005e3aeb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3af3  c70658ec7b00         mov dword ptr [esi], 0x7bec58
// 005e3af9  e8e29df4ff           call 0x52d8e0
// 005e3afe  83c408               add esp, 8
// 005e3b01  89442414             mov dword ptr [esp + 0x14], eax
// 005e3b05  e8b69bf8ff           call 0x56d6c0
// 005e3b0a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e3b0e  89442418             mov dword ptr [esp + 0x18], eax
// 005e3b12  e83993f8ff           call 0x56ce50
// 005e3b17  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e3b1a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e3b1d  8d7e18               lea edi, [esi + 0x18]
// 005e3b20  8d442414             lea eax, [esp + 0x14]
// 005e3b24  50                   push eax
// 005e3b25  51                   push ecx
// 005e3b26  55                   push ebp
// 005e3b27  8bcf                 mov ecx, edi
// 005e3b29  c644243801           mov byte ptr [esp + 0x38], 1
// 005e3b2e  e86d27e3ff           call 0x4162a0
// 005e3b33  6a01                 push 1
// 005e3b35  8bcf                 mov ecx, edi
// 005e3b37  8bd8                 mov ebx, eax
// 005e3b39  e8421be3ff           call 0x415680
// 005e3b3e  895d04               mov dword ptr [ebp + 4], ebx
// 005e3b41  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3b44  8918                 mov dword ptr [eax], ebx
// 005e3b46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e3b4a  85c9                 test ecx, ecx
// 005e3b4c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3b51  7408                 je 0x5e3b5b
// 005e3b53  8b11                 mov edx, dword ptr [ecx]
// 005e3b55  8b02                 mov eax, dword ptr [edx]
// 005e3b57  6a01                 push 1
// 005e3b59  ffd0                 call eax
// 005e3b5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e3b5f  5f                   pop edi
// 005e3b60  8bc6                 mov eax, esi
// 005e3b62  5e                   pop esi
// 005e3b63  5d                   pop ebp
// 005e3b64  5b                   pop ebx
// 005e3b65  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3b6c  83c420               add esp, 0x20
// 005e3b6f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
