// from server: 100% by auto
// roc 2012-06 009f53c0  unit: CXTPPropertyGridItemEnum  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f53c0
//
// 009f53c0  56                   push esi
// 009f53c1  8bf1                 mov esi, ecx
// 009f53c3  e8c841fdff           call 0x9c9590
// 009f53c8  8bc8                 mov ecx, eax
// 009f53ca  e88151fdff           call 0x9ca550
// 009f53cf  68d0000000           push 0xd0
// 009f53d4  6a00                 push 0
// 009f53d6  56                   push esi
// 009f53d7  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 009f53dd  e892dff8ff           call 0x983374
// 009f53e2  83c40c               add esp, 0xc
// 009f53e5  68e4a3c100           push 0xc1a3e4
// 009f53ea  ff154822b200         call dword ptr [0xb22248]
// 009f53f0  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 009f53f6  8bc6                 mov eax, esi
// 009f53f8  5e                   pop esi
// 009f53f9  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinThemeWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
