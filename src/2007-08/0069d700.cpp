// roc 2007-08 0069d700  unit: CXTPPropertyGridToolTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d700
//
// 0069d700  56                   push esi
// 0069d701  8bf1                 mov esi, ecx
// 0069d703  e808e4ffff           call 0x69bb10
// 0069d708  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0069d70e  6a01                 push 1
// 0069d710  6a01                 push 1
// 0069d712  50                   push eax
// 0069d713  8bce                 mov ecx, esi
// 0069d715  e826fcffff           call 0x69d340
// 0069d71a  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 0069d720  85f6                 test esi, esi
// 0069d722  7414                 je 0x69d738
// 0069d724  837e2000             cmp dword ptr [esi + 0x20], 0
// 0069d728  740e                 je 0x69d738
// 0069d72a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0069d72d  6a00                 push 0
// 0069d72f  6a00                 push 0
// 0069d731  51                   push ecx
// 0069d732  ff15dcec7700         call dword ptr [0x77ecdc]
// 0069d738  5e                   pop esi
// 0069d739  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
