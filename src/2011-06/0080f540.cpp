// roc 2011-06 0080f540  unit: CRobloxControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f540
//
// 0080f540  56                   push esi
// 0080f541  6854010000           push 0x154
// 0080f546  8bf1                 mov esi, ecx
// 0080f548  6a00                 push 0
// 0080f54a  56                   push esi
// 0080f54b  e894bdffff           call 0x80b2e4
// 0080f550  83c40c               add esp, 0xc
// 0080f553  6a00                 push 0
// 0080f555  56                   push esi
// 0080f556  6854010000           push 0x154
// 0080f55b  6a29                 push 0x29
// 0080f55d  c70654010000         mov dword ptr [esi], 0x154
// 0080f563  ff155c1ba400         call dword ptr [0xa41b5c]
// 0080f569  8bc6                 mov eax, esi
// 0080f56b  5e                   pop esi
// 0080f56c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
