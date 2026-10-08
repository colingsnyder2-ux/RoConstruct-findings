// from server: 100% by auto
// roc 2008-06 004174f0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004174f0
//
// 004174f0  56                   push esi
// 004174f1  8bf1                 mov esi, ecx
// 004174f3  807e0400             cmp byte ptr [esi + 4], 0
// 004174f7  740b                 je 0x417504
// 004174f9  8b0e                 mov ecx, dword ptr [esi]
// 004174fb  e800d81700           call 0x594d00
// 00417500  c6460400             mov byte ptr [esi + 4], 0
// 00417504  5e                   pop esi
// 00417505  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
