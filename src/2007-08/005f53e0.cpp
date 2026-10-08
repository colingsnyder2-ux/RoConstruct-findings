// roc 2007-08 005f53e0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f53e0
//
// 005f53e0  6aff                 push -1
// 005f53e2  6890b87500           push 0x75b890
// 005f53e7  64a100000000         mov eax, dword ptr fs:[0]
// 005f53ed  50                   push eax
// 005f53ee  64892500000000       mov dword ptr fs:[0], esp
// 005f53f5  83ec14               sub esp, 0x14
// 005f53f8  53                   push ebx
// 005f53f9  55                   push ebp
// 005f53fa  56                   push esi
// 005f53fb  8bf1                 mov esi, ecx
// 005f53fd  57                   push edi
// 005f53fe  89742410             mov dword ptr [esp + 0x10], esi
// 005f5402  e8e9e4ffff           call 0x5f38f0
// 005f5407  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f540b  51                   push ecx
// 005f540c  50                   push eax
// 005f540d  8bce                 mov ecx, esi
// 005f540f  e8fcaff7ff           call 0x570410
// 005f5414  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f5418  6aff                 push -1
// 005f541a  52                   push edx
// 005f541b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f5423  c706f40e7c00         mov dword ptr [esi], 0x7c0ef4
// 005f5429  e81275f3ff           call 0x52c940
// 005f542e  83c408               add esp, 8
// 005f5431  89442414             mov dword ptr [esp + 0x14], eax
// 005f5435  e8c685f7ff           call 0x56da00
// 005f543a  8d4c241c             lea ecx, [esp + 0x1c]
// 005f543e  89442418             mov dword ptr [esp + 0x18], eax
// 005f5442  e8797ff7ff           call 0x56d3c0
// 005f5447  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f544a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f544d  8d7e18               lea edi, [esi + 0x18]
// 005f5450  8d442414             lea eax, [esp + 0x14]
// 005f5454  50                   push eax
// 005f5455  51                   push ecx
// 005f5456  55                   push ebp
// 005f5457  8bcf                 mov ecx, edi
// 005f5459  c644243801           mov byte ptr [esp + 0x38], 1
// 005f545e  e8ddfde1ff           call 0x415240
// 005f5463  6a01                 push 1
// 005f5465  8bcf                 mov ecx, edi
// 005f5467  8bd8                 mov ebx, eax
// 005f5469  e802f2e1ff           call 0x414670
// 005f546e  895d04               mov dword ptr [ebp + 4], ebx
// 005f5471  8b4304               mov eax, dword ptr [ebx + 4]
// 005f5474  8918                 mov dword ptr [eax], ebx
// 005f5476  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f547a  85c9                 test ecx, ecx
// 005f547c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f5481  7408                 je 0x5f548b
// 005f5483  8b11                 mov edx, dword ptr [ecx]
// 005f5485  8b02                 mov eax, dword ptr [edx]
// 005f5487  6a01                 push 1
// 005f5489  ffd0                 call eax
// 005f548b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f548f  5f                   pop edi
// 005f5490  8bc6                 mov eax, esi
// 005f5492  5e                   pop esi
// 005f5493  5d                   pop ebp
// 005f5494  5b                   pop ebx
// 005f5495  64890d00000000       mov dword ptr fs:[0], ecx
// 005f549c  83c420               add esp, 0x20
// 005f549f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
