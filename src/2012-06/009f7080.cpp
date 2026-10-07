// roc 2012-06 009f7080  unit: CXTCaption  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7080
//
// 009f7080  56                   push esi
// 009f7081  8bf1                 mov esi, ecx
// 009f7083  e856b6f8ff           call 0x9826de
// 009f7088  83becc00000000       cmp dword ptr [esi + 0xcc], 0
// 009f708f  7413                 je 0x9f70a4
// 009f7091  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f7094  6805010000           push 0x105
// 009f7099  6a00                 push 0
// 009f709b  6a00                 push 0
// 009f709d  50                   push eax
// 009f709e  ff15403db200         call dword ptr [0xb23d40]
// 009f70a4  5e                   pop esi
// 009f70a5  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTCaption.cpp (function ?OnSize@CXTCaption@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaption.cpp
