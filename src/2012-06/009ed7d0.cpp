// roc 2012-06 009ed7d0  unit: CXTPToolTipContextToolTip  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed7d0
//
// 009ed7d0  56                   push esi
// 009ed7d1  57                   push edi
// 009ed7d2  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009ed7d8  6a31                 push 0x31
// 009ed7da  8bf1                 mov esi, ecx
// 009ed7dc  ffd7                 call edi
// 009ed7de  6a32                 push 0x32
// 009ed7e0  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 009ed7e6  ffd7                 call edi
// 009ed7e8  6a0a                 push 0xa
// 009ed7ea  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 009ed7f0  ffd7                 call edi
// 009ed7f2  6a09                 push 9
// 009ed7f4  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 009ed7fa  ffd7                 call edi
// 009ed7fc  6a0f                 push 0xf
// 009ed7fe  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 009ed804  ffd7                 call edi
// 009ed806  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 009ed80c  b812000000           mov eax, 0x12
// 009ed811  5f                   pop edi
// 009ed812  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 009ed818  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 009ed81e  5e                   pop esi
// 009ed81f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ?UpdateSysMetrics@CXTPAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
