// roc 2009-12 00806320  unit: CXTPCommandBarList  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806320
//
// 00806320  56                   push esi
// 00806321  57                   push edi
// 00806322  8bf9                 mov edi, ecx
// 00806324  33f6                 xor esi, esi
// 00806326  e845f5ccff           call 0x4d5870
// 0080632b  85c0                 test eax, eax
// 0080632d  7e1c                 jle 0x80634b
// 0080632f  90                   nop 
// 00806330  56                   push esi
// 00806331  8bcf                 mov ecx, edi
// 00806333  e81829c2ff           call 0x428c50
// 00806338  8bc8                 mov ecx, eax
// 0080633a  e89ddafeff           call 0x7f3ddc
// 0080633f  8bcf                 mov ecx, edi
// 00806341  46                   inc esi
// 00806342  e829f5ccff           call 0x4d5870
// 00806347  3bf0                 cmp esi, eax
// 00806349  7ce5                 jl 0x806330
// 0080634b  6aff                 push -1
// 0080634d  6a00                 push 0
// 0080634f  8d4f24               lea ecx, [edi + 0x24]
// 00806352  e849f00400           call 0x8553a0
// 00806357  5f                   pop edi
// 00806358  5e                   pop esi
// 00806359  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPCommandBarList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp