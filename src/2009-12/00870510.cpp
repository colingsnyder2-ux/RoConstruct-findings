// roc 2009-12 00870510  unit: CXTPHookManagerHookAble  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870510
//
// 00870510  53                   push ebx
// 00870511  55                   push ebp
// 00870512  56                   push esi
// 00870513  57                   push edi
// 00870514  8bf9                 mov edi, ecx
// 00870516  8b7708               mov esi, dword ptr [edi + 8]
// 00870519  83ee01               sub esi, 1
// 0087051c  783e                 js 0x87055c
// 0087051e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00870522  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00870526  85f6                 test esi, esi
// 00870528  7c47                 jl 0x870571
// 0087052a  3b7708               cmp esi, dword ptr [edi + 8]
// 0087052d  7d42                 jge 0x870571
// 0087052f  8b4704               mov eax, dword ptr [edi + 4]
// 00870532  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00870535  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00870539  8b11                 mov edx, dword ptr [ecx]
// 0087053b  8b5204               mov edx, dword ptr [edx + 4]
// 0087053e  53                   push ebx
// 0087053f  55                   push ebp
// 00870540  50                   push eax
// 00870541  8b442424             mov eax, dword ptr [esp + 0x24]
// 00870545  50                   push eax
// 00870546  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087054a  50                   push eax
// 0087054b  ffd2                 call edx
// 0087054d  83f801               cmp eax, 1
// 00870550  7413                 je 0x870565
// 00870552  83f802               cmp eax, 2
// 00870555  7405                 je 0x87055c
// 00870557  83ee01               sub esi, 1
// 0087055a  79ca                 jns 0x870526
// 0087055c  5f                   pop edi
// 0087055d  5e                   pop esi
// 0087055e  5d                   pop ebp
// 0087055f  33c0                 xor eax, eax
// 00870561  5b                   pop ebx
// 00870562  c21400               ret 0x14
// 00870565  5f                   pop edi
// 00870566  5e                   pop esi
// 00870567  5d                   pop ebp
// 00870568  b801000000           mov eax, 1
// 0087056d  5b                   pop ebx
// 0087056e  c21400               ret 0x14
// 00870571  e89635f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnHookMessage@CHookSink@CXTPHookManager@@QAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPHookManager.cpp