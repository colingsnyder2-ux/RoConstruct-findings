// roc 2007-08 00671310  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671310
//
// 00671310  56                   push esi
// 00671311  8bf1                 mov esi, ecx
// 00671313  837e0800             cmp dword ptr [esi + 8], 0
// 00671317  7506                 jne 0x67131f
// 00671319  33c0                 xor eax, eax
// 0067131b  5e                   pop esi
// 0067131c  c20c00               ret 0xc
// 0067131f  57                   push edi
// 00671320  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00671324  85ff                 test edi, edi
// 00671326  742c                 je 0x671354
// 00671328  e8c3ffffff           call 0x6712f0
// 0067132d  8bc8                 mov ecx, eax
// 0067132f  8bd7                 mov edx, edi
// 00671331  c1e910               shr ecx, 0x10
// 00671334  c1ea10               shr edx, 0x10
// 00671337  663bd1               cmp dx, cx
// 0067133a  7707                 ja 0x671343
// 0067133c  7516                 jne 0x671354
// 0067133e  663bf8               cmp di, ax
// 00671341  7611                 jbe 0x671354
// 00671343  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00671347  5f                   pop edi
// 00671348  c70000000000         mov dword ptr [eax], 0
// 0067134e  33c0                 xor eax, eax
// 00671350  5e                   pop esi
// 00671351  c20c00               ret 0xc
// 00671354  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671358  8b5608               mov edx, dword ptr [esi + 8]
// 0067135b  51                   push ecx
// 0067135c  52                   push edx
// 0067135d  ff1588d27700         call dword ptr [0x77d288]
// 00671363  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00671367  33d2                 xor edx, edx
// 00671369  85c0                 test eax, eax
// 0067136b  0f95c2               setne dl
// 0067136e  5f                   pop edi
// 0067136f  8901                 mov dword ptr [ecx], eax
// 00671371  5e                   pop esi
// 00671372  8bc2                 mov eax, edx
// 00671374  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetProcAddress@CXTPModuleHandle@@QAEHPAP6GHXZPBDK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
