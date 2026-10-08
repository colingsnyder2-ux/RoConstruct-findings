// from server: 100% by auto
// roc 2008-06 00710240  unit: CXTPStatusBar  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710240
//
// 00710240  56                   push esi
// 00710241  57                   push edi
// 00710242  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 00710248  6a31                 push 0x31
// 0071024a  8bf1                 mov esi, ecx
// 0071024c  ffd7                 call edi
// 0071024e  6a32                 push 0x32
// 00710250  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00710256  ffd7                 call edi
// 00710258  6a0a                 push 0xa
// 0071025a  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00710260  ffd7                 call edi
// 00710262  6a09                 push 9
// 00710264  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0071026a  ffd7                 call edi
// 0071026c  6a0f                 push 0xf
// 0071026e  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00710274  ffd7                 call edi
// 00710276  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0071027c  b812000000           mov eax, 0x12
// 00710281  5f                   pop edi
// 00710282  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00710288  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0071028e  5e                   pop esi
// 0071028f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?UpdateSysMetrics@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
