// roc 2009-12 00858e30  unit: CXTPTabClientWnd::CSingleWorkspace  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858e30
//
// 00858e30  53                   push ebx
// 00858e31  56                   push esi
// 00858e32  57                   push edi
// 00858e33  8bf9                 mov edi, ecx
// 00858e35  33f6                 xor esi, esi
// 00858e37  e814d8ffff           call 0x856650
// 00858e3c  85c0                 test eax, eax
// 00858e3e  7e24                 jle 0x858e64
// 00858e40  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00858e44  53                   push ebx
// 00858e45  56                   push esi
// 00858e46  8bcf                 mov ecx, edi
// 00858e48  e8f3e6ffff           call 0x857540
// 00858e4d  8bc8                 mov ecx, eax
// 00858e4f  e80ce0ffff           call 0x856e60
// 00858e54  85c0                 test eax, eax
// 00858e56  750e                 jne 0x858e66
// 00858e58  8bcf                 mov ecx, edi
// 00858e5a  46                   inc esi
// 00858e5b  e8f0d7ffff           call 0x856650
// 00858e60  3bf0                 cmp esi, eax
// 00858e62  7ce0                 jl 0x858e44
// 00858e64  33c0                 xor eax, eax
// 00858e66  5f                   pop edi
// 00858e67  5e                   pop esi
// 00858e68  5b                   pop ebx
// 00858e69  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPTabClientWnd@@QBEPAVCXTPTabManagerItem@@QAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp