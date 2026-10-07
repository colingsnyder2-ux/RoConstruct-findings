// roc 2011-06 00851290  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851290
//
// 00851290  56                   push esi
// 00851291  8bf1                 mov esi, ecx
// 00851293  837e0800             cmp dword ptr [esi + 8], 0
// 00851297  7506                 jne 0x85129f
// 00851299  33c0                 xor eax, eax
// 0085129b  5e                   pop esi
// 0085129c  c20c00               ret 0xc
// 0085129f  57                   push edi
// 008512a0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008512a4  85ff                 test edi, edi
// 008512a6  742c                 je 0x8512d4
// 008512a8  e8c3ffffff           call 0x851270
// 008512ad  8bc8                 mov ecx, eax
// 008512af  8bd7                 mov edx, edi
// 008512b1  c1e910               shr ecx, 0x10
// 008512b4  c1ea10               shr edx, 0x10
// 008512b7  663bd1               cmp dx, cx
// 008512ba  7707                 ja 0x8512c3
// 008512bc  7516                 jne 0x8512d4
// 008512be  663bf8               cmp di, ax
// 008512c1  7611                 jbe 0x8512d4
// 008512c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008512c7  5f                   pop edi
// 008512c8  c70000000000         mov dword ptr [eax], 0
// 008512ce  33c0                 xor eax, eax
// 008512d0  5e                   pop esi
// 008512d1  c20c00               ret 0xc
// 008512d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008512d8  8b5608               mov edx, dword ptr [esi + 8]
// 008512db  51                   push ecx
// 008512dc  52                   push edx
// 008512dd  ff156c03a400         call dword ptr [0xa4036c]
// 008512e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008512e7  33d2                 xor edx, edx
// 008512e9  85c0                 test eax, eax
// 008512eb  0f95c2               setne dl
// 008512ee  5f                   pop edi
// 008512ef  8901                 mov dword ptr [ecx], eax
// 008512f1  5e                   pop esi
// 008512f2  8bc2                 mov eax, edx
// 008512f4  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetProcAddress@CXTPModuleHandle@@QAEHPAP6GHXZPBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
