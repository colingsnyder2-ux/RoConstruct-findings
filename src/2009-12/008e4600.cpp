// roc 2009-12 008e4600  unit: CXTCaptionButtonThemeOfficeXP  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4600
//
// 008e4600  6aff                 push -1
// 008e4602  68ca459600           push 0x9645ca
// 008e4607  64a100000000         mov eax, dword ptr fs:[0]
// 008e460d  50                   push eax
// 008e460e  51                   push ecx
// 008e460f  56                   push esi
// 008e4610  a10052b600           mov eax, dword ptr [0xb65200]
// 008e4615  33c4                 xor eax, esp
// 008e4617  50                   push eax
// 008e4618  8d44240c             lea eax, [esp + 0xc]
// 008e461c  64a300000000         mov dword ptr fs:[0], eax
// 008e4622  6a14                 push 0x14
// 008e4624  e837f2f0ff           call 0x7f3860
// 008e4629  8bf0                 mov esi, eax
// 008e462b  83c404               add esp, 4
// 008e462e  89742408             mov dword ptr [esp + 8], esi
// 008e4632  33c0                 xor eax, eax
// 008e4634  89442414             mov dword ptr [esp + 0x14], eax
// 008e4638  3bf0                 cmp esi, eax
// 008e463a  740f                 je 0x8e464b
// 008e463c  8bce                 mov ecx, esi
// 008e463e  e85d5ff7ff           call 0x85a5a0
// 008e4643  c706ccc3a000         mov dword ptr [esi], 0xa0c3cc
// 008e4649  8bc6                 mov eax, esi
// 008e464b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e464f  64890d00000000       mov dword ptr fs:[0], ecx
// 008e4656  59                   pop ecx
// 008e4657  5e                   pop esi
// 008e4658  83c410               add esp, 0x10
// 008e465b  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTButtonThemeFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp