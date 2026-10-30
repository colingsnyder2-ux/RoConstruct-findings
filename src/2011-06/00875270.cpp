// from server: 100% by auto
// roc 2011-06 00875270  unit: CXTPToolTipContextToolTip  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875270
//
// 00875270  56                   push esi
// 00875271  57                   push edi
// 00875272  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00875278  6a31                 push 0x31
// 0087527a  8bf1                 mov esi, ecx
// 0087527c  ffd7                 call edi
// 0087527e  6a32                 push 0x32
// 00875280  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00875286  ffd7                 call edi
// 00875288  6a0a                 push 0xa
// 0087528a  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00875290  ffd7                 call edi
// 00875292  6a09                 push 9
// 00875294  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0087529a  ffd7                 call edi
// 0087529c  6a0f                 push 0xf
// 0087529e  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 008752a4  ffd7                 call edi
// 008752a6  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 008752ac  b812000000           mov eax, 0x12
// 008752b1  5f                   pop edi
// 008752b2  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008752b8  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008752be  5e                   pop esi
// 008752bf  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ?UpdateSysMetrics@CXTPAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
