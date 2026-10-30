// from server: 100% by auto
// roc 2007-08 00696e70  unit: CXTPToolTipContext::CRichEditToolTip  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696e70
//
// 00696e70  56                   push esi
// 00696e71  57                   push edi
// 00696e72  8b3db8ed7700         mov edi, dword ptr [0x77edb8]
// 00696e78  6a31                 push 0x31
// 00696e7a  8bf1                 mov esi, ecx
// 00696e7c  ffd7                 call edi
// 00696e7e  6a32                 push 0x32
// 00696e80  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00696e86  ffd7                 call edi
// 00696e88  6a0a                 push 0xa
// 00696e8a  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00696e90  ffd7                 call edi
// 00696e92  6a09                 push 9
// 00696e94  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00696e9a  ffd7                 call edi
// 00696e9c  6a0f                 push 0xf
// 00696e9e  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00696ea4  ffd7                 call edi
// 00696ea6  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00696eac  b812000000           mov eax, 0x12
// 00696eb1  5f                   pop edi
// 00696eb2  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00696eb8  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00696ebe  5e                   pop esi
// 00696ebf  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTGlobal.cpp (function ?UpdateSysMetrics@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTGlobal.cpp
