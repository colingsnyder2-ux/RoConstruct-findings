// roc 2008-06 00721940  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721940
//
// 00721940  53                   push ebx
// 00721941  56                   push esi
// 00721942  8bf1                 mov esi, ecx
// 00721944  e82737f9ff           call 0x6b5070
// 00721949  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072194d  8bd8                 mov ebx, eax
// 0072194f  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 00721955  7506                 jne 0x72195d
// 00721957  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 0072195d  85db                 test ebx, ebx
// 0072195f  7433                 je 0x721994
// 00721961  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00721967  85c0                 test eax, eax
// 00721969  7429                 je 0x721994
// 0072196b  3bc3                 cmp eax, ebx
// 0072196d  7425                 je 0x721994
// 0072196f  57                   push edi
// 00721970  51                   push ecx
// 00721971  e8acf3f7ff           call 0x6a0d22
// 00721976  8bf8                 mov edi, eax
// 00721978  85ff                 test edi, edi
// 0072197a  7417                 je 0x721993
// 0072197c  8b4704               mov eax, dword ptr [edi + 4]
// 0072197f  50                   push eax
// 00721980  ff15942d8000         call dword ptr [0x802d94]
// 00721986  85c0                 test eax, eax
// 00721988  7409                 je 0x721993
// 0072198a  57                   push edi
// 0072198b  53                   push ebx
// 0072198c  8bce                 mov ecx, esi
// 0072198e  e8fdfcffff           call 0x721690
// 00721993  5f                   pop edi
// 00721994  5e                   pop esi
// 00721995  5b                   pop ebx
// 00721996  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
