// roc 2009-12 007ed710  unit: W4_D3DFORMAT::?$EnumDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ed710
//
// 007ed710  6aff                 push -1
// 007ed712  6809849500           push 0x958409
// 007ed717  64a100000000         mov eax, dword ptr fs:[0]
// 007ed71d  50                   push eax
// 007ed71e  83ec44               sub esp, 0x44
// 007ed721  a10052b600           mov eax, dword ptr [0xb65200]
// 007ed726  33c4                 xor eax, esp
// 007ed728  50                   push eax
// 007ed729  8d442448             lea eax, [esp + 0x48]
// 007ed72d  64a300000000         mov dword ptr fs:[0], eax
// 007ed733  6870189a00           push 0x9a1870
// 007ed738  8d4c2408             lea ecx, [esp + 8]
// 007ed73c  ff15f4b69800         call dword ptr [0x98b6f4]
// 007ed742  8d442404             lea eax, [esp + 4]
// 007ed746  50                   push eax
// 007ed747  8d4c2424             lea ecx, [esp + 0x24]
// 007ed74b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007ed753  e8f83cc1ff           call 0x401450
// 007ed758  68e4efa800           push 0xa8efe4
// 007ed75d  8d4c2424             lea ecx, [esp + 0x24]
// 007ed761  51                   push ecx
// 007ed762  c744242890f49900     mov dword ptr [esp + 0x28], 0x99f490
// 007ed76a  e809710000           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
