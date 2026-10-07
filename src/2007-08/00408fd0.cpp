// roc 2007-08 00408fd0  unit: VCApp::?$CComObject  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408fd0
//
// 00408fd0  56                   push esi
// 00408fd1  8bf1                 mov esi, ecx
// 00408fd3  807e0400             cmp byte ptr [esi + 4], 0
// 00408fd7  740b                 je 0x408fe4
// 00408fd9  8b0e                 mov ecx, dword ptr [esi]
// 00408fdb  e890c73100           call 0x725770
// 00408fe0  c6460400             mov byte ptr [esi + 4], 0
// 00408fe4  5e                   pop esi
// 00408fe5  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
