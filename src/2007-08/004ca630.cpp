// roc 2007-08 004ca630  unit: seg_004c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca630
//
// 004ca630  833dc8f98b0000       cmp dword ptr [0x8bf9c8], 0
// 004ca637  7e2f                 jle 0x4ca668
// 004ca639  832dc8f98b0001       sub dword ptr [0x8bf9c8], 1
// 004ca640  7526                 jne 0x4ca668
// 004ca642  8b0dc4f98b00         mov ecx, dword ptr [0x8bf9c4]
// 004ca648  85c9                 test ecx, ecx
// 004ca64a  56                   push esi
// 004ca64b  8bf1                 mov esi, ecx
// 004ca64d  740e                 je 0x4ca65d
// 004ca64f  e81cffffff           call 0x4ca570
// 004ca654  56                   push esi
// 004ca655  e808561600           call 0x62fc62
// 004ca65a  83c404               add esp, 4
// 004ca65d  c705c4f98b0000000000 mov dword ptr [0x8bf9c4], 0
// 004ca667  5e                   pop esi
// 004ca668  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
