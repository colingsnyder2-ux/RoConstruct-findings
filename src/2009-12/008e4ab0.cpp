// roc 2009-12 008e4ab0  unit: CXTCaptionThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4ab0
//
// 008e4ab0  6aff                 push -1
// 008e4ab2  68ca459600           push 0x9645ca
// 008e4ab7  64a100000000         mov eax, dword ptr fs:[0]
// 008e4abd  50                   push eax
// 008e4abe  51                   push ecx
// 008e4abf  56                   push esi
// 008e4ac0  a10052b600           mov eax, dword ptr [0xb65200]
// 008e4ac5  33c4                 xor eax, esp
// 008e4ac7  50                   push eax
// 008e4ac8  8d44240c             lea eax, [esp + 0xc]
// 008e4acc  64a300000000         mov dword ptr fs:[0], eax
// 008e4ad2  6a14                 push 0x14
// 008e4ad4  e887edf0ff           call 0x7f3860
// 008e4ad9  8bf0                 mov esi, eax
// 008e4adb  83c404               add esp, 4
// 008e4ade  89742408             mov dword ptr [esp + 8], esi
// 008e4ae2  33c0                 xor eax, eax
// 008e4ae4  89442414             mov dword ptr [esp + 0x14], eax
// 008e4ae8  3bf0                 cmp esi, eax
// 008e4aea  740f                 je 0x8e4afb
// 008e4aec  8bce                 mov ecx, esi
// 008e4aee  e8ad5af7ff           call 0x85a5a0
// 008e4af3  c7062cc4a000         mov dword ptr [esi], 0xa0c42c
// 008e4af9  8bc6                 mov eax, esi
// 008e4afb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e4aff  64890d00000000       mov dword ptr fs:[0], ecx
// 008e4b06  59                   pop ecx
// 008e4b07  5e                   pop esi
// 008e4b08  83c410               add esp, 0x10
// 008e4b0b  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTButtonThemeFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp