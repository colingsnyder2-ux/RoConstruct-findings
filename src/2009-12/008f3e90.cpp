// roc 2009-12 008f3e90  unit: CXTButtonThemeFactory  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3e90
//
// 008f3e90  6aff                 push -1
// 008f3e92  68786c9600           push 0x966c78
// 008f3e97  64a100000000         mov eax, dword ptr fs:[0]
// 008f3e9d  50                   push eax
// 008f3e9e  51                   push ecx
// 008f3e9f  56                   push esi
// 008f3ea0  a10052b600           mov eax, dword ptr [0xb65200]
// 008f3ea5  33c4                 xor eax, esp
// 008f3ea7  50                   push eax
// 008f3ea8  8d44240c             lea eax, [esp + 0xc]
// 008f3eac  64a300000000         mov dword ptr fs:[0], eax
// 008f3eb2  8bf1                 mov esi, ecx
// 008f3eb4  89742408             mov dword ptr [esp + 8], esi
// 008f3eb8  e86360f6ff           call 0x859f20
// 008f3ebd  33c0                 xor eax, eax
// 008f3ebf  8d4e20               lea ecx, [esi + 0x20]
// 008f3ec2  89442414             mov dword ptr [esp + 0x14], eax
// 008f3ec6  c70664fba000         mov dword ptr [esi], 0xa0fb64
// 008f3ecc  c7461401000000       mov dword ptr [esi + 0x14], 1
// 008f3ed3  c7461801000000       mov dword ptr [esi + 0x18], 1
// 008f3eda  89461c               mov dword ptr [esi + 0x1c], eax
// 008f3edd  e82eaff3ff           call 0x82ee10
// 008f3ee2  8d4e2c               lea ecx, [esi + 0x2c]
// 008f3ee5  e826aff3ff           call 0x82ee10
// 008f3eea  8d4e38               lea ecx, [esi + 0x38]
// 008f3eed  e81eaff3ff           call 0x82ee10
// 008f3ef2  8d4e44               lea ecx, [esi + 0x44]
// 008f3ef5  e816aff3ff           call 0x82ee10
// 008f3efa  8d4e50               lea ecx, [esi + 0x50]
// 008f3efd  e80eaff3ff           call 0x82ee10
// 008f3f02  8d4e5c               lea ecx, [esi + 0x5c]
// 008f3f05  e806aff3ff           call 0x82ee10
// 008f3f0a  8d4e68               lea ecx, [esi + 0x68]
// 008f3f0d  e8feaef3ff           call 0x82ee10
// 008f3f12  6a01                 push 1
// 008f3f14  8d4e74               lea ecx, [esi + 0x74]
// 008f3f17  e82478f7ff           call 0x86b740
// 008f3f1c  8bc6                 mov eax, esi
// 008f3f1e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3f22  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3f29  59                   pop ecx
// 008f3f2a  5e                   pop esi
// 008f3f2b  83c410               add esp, 0x10
// 008f3f2e  c3                   ret 
// copied from an identical function in another client (function ??0CXTButtonTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp