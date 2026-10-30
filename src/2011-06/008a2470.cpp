// roc 2011-06 008a2470  unit: ATL::CRegObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2470
//
// 008a2470  8b4108               mov eax, dword ptr [ecx + 8]
// 008a2473  33d2                 xor edx, edx
// 008a2475  85c0                 test eax, eax
// 008a2477  7e3d                 jle 0x8a24b6
// 008a2479  56                   push esi
// 008a247a  53                   push ebx
// 008a247b  33f6                 xor esi, esi
// 008a247d  57                   push edi
// 008a247e  8bff                 mov edi, edi
// 008a2480  85f6                 test esi, esi
// 008a2482  7c33                 jl 0x8a24b7
// 008a2484  3bd0                 cmp edx, eax
// 008a2486  7d2f                 jge 0x8a24b7
// 008a2488  8b4104               mov eax, dword ptr [ecx + 4]
// 008a248b  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 008a248f  8b7c3008             mov edi, dword ptr [eax + esi + 8]
// 008a2493  8d443004             lea eax, [eax + esi + 4]
// 008a2497  895804               mov dword ptr [eax + 4], ebx
// 008a249a  8938                 mov dword ptr [eax], edi
// 008a249c  8b5808               mov ebx, dword ptr [eax + 8]
// 008a249f  8b780c               mov edi, dword ptr [eax + 0xc]
// 008a24a2  89580c               mov dword ptr [eax + 0xc], ebx
// 008a24a5  897808               mov dword ptr [eax + 8], edi
// 008a24a8  8b4108               mov eax, dword ptr [ecx + 8]
// 008a24ab  42                   inc edx
// 008a24ac  83c630               add esi, 0x30
// 008a24af  3bd0                 cmp edx, eax
// 008a24b1  7ccd                 jl 0x8a2480
// 008a24b3  5f                   pop edi
// 008a24b4  5b                   pop ebx
// 008a24b5  5e                   pop esi
// 008a24b6  c3                   ret 
// 008a24b7  e84e7ef6ff           call 0x80a30a
// copied from an identical function in another client (function ?InvertRects@CDockInfoArray@CXTPDockBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp