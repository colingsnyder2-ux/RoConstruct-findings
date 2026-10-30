// roc 2009-12 0085a510  unit: CXTThemeManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a510
//
// 0085a510  6aff                 push -1
// 0085a512  68dac49500           push 0x95c4da
// 0085a517  64a100000000         mov eax, dword ptr fs:[0]
// 0085a51d  50                   push eax
// 0085a51e  51                   push ecx
// 0085a51f  a10052b600           mov eax, dword ptr [0xb65200]
// 0085a524  33c4                 xor eax, esp
// 0085a526  50                   push eax
// 0085a527  8d442408             lea eax, [esp + 8]
// 0085a52b  64a300000000         mov dword ptr fs:[0], eax
// 0085a531  6a2c                 push 0x2c
// 0085a533  e8f2be0c00           call 0x92642a
// 0085a538  89442404             mov dword ptr [esp + 4], eax
// 0085a53c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0085a544  85c0                 test eax, eax
// 0085a546  7417                 je 0x85a55f
// 0085a548  8bc8                 mov ecx, eax
// 0085a54a  e811ffffff           call 0x85a460
// 0085a54f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085a553  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a55a  59                   pop ecx
// 0085a55b  83c410               add esp, 0x10
// 0085a55e  c3                   ret 
// 0085a55f  33c0                 xor eax, eax
// 0085a561  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085a565  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a56c  59                   pop ecx
// 0085a56d  83c410               add esp, 0x10
// 0085a570  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@?$CProcessLocal@VCXTThemeManager@@@@SGPAVCNoTrackObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp