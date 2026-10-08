// from server: 100% by auto
// roc 2008-06 00407160  unit: VCApp::?$CComObject  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407160
//
// 00407160  56                   push esi
// 00407161  8bf1                 mov esi, ecx
// 00407163  807e0400             cmp byte ptr [esi + 4], 0
// 00407167  740b                 je 0x407174
// 00407169  8b0e                 mov ecx, dword ptr [esi]
// 0040716b  e870bf1500           call 0x5630e0
// 00407170  c6460400             mov byte ptr [esi + 4], 0
// 00407174  5e                   pop esi
// 00407175  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
