// from server: 100% by auto
// roc 2007-08 006d10b0  unit: CXTPReportInplaceList  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d10b0
//
// 006d10b0  56                   push esi
// 006d10b1  6a00                 push 0
// 006d10b3  8bf1                 mov esi, ecx
// 006d10b5  e88616fbff           call 0x682740
// 006d10ba  8b4654               mov eax, dword ptr [esi + 0x54]
// 006d10bd  8b5004               mov edx, dword ptr [eax + 4]
// 006d10c0  8d4e54               lea ecx, [esi + 0x54]
// 006d10c3  83c404               add esp, 4
// 006d10c6  6a00                 push 0
// 006d10c8  ffd2                 call edx
// 006d10ca  8bce                 mov ecx, esi
// 006d10cc  5e                   pop esi
// 006d10cd  e916edf5ff           jmp 0x62fde8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportInplaceControls.cpp (function ?PostNcDestroy@CXTPReportInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportInplaceControls.cpp
