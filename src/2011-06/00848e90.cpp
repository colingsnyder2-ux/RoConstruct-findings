// roc 2011-06 00848e90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848e90
//
// 00848e90  83ec10               sub esp, 0x10
// 00848e93  57                   push edi
// 00848e94  8bf9                 mov edi, ecx
// 00848e96  837f0400             cmp dword ptr [edi + 4], 0
// 00848e9a  7444                 je 0x848ee0
// 00848e9c  56                   push esi
// 00848e9d  e8cef0ffff           call 0x847f70
// 00848ea2  8bf0                 mov esi, eax
// 00848ea4  85f6                 test esi, esi
// 00848ea6  7437                 je 0x848edf
// 00848ea8  53                   push ebx
// 00848ea9  8b1dec19a400         mov ebx, dword ptr [0xa419ec]
// 00848eaf  90                   nop 
// 00848eb0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848eb3  6a01                 push 1
// 00848eb5  8d442410             lea eax, [esp + 0x10]
// 00848eb9  50                   push eax
// 00848eba  56                   push esi
// 00848ebb  e8341bfcff           call 0x80a9f4
// 00848ec0  8b5734               mov edx, dword ptr [edi + 0x34]
// 00848ec3  8b4220               mov eax, dword ptr [edx + 0x20]
// 00848ec6  6a01                 push 1
// 00848ec8  8d4c2410             lea ecx, [esp + 0x10]
// 00848ecc  51                   push ecx
// 00848ecd  50                   push eax
// 00848ece  ffd3                 call ebx
// 00848ed0  56                   push esi
// 00848ed1  8bcf                 mov ecx, edi
// 00848ed3  e8e8f0ffff           call 0x847fc0
// 00848ed8  8bf0                 mov esi, eax
// 00848eda  85f6                 test esi, esi
// 00848edc  75d2                 jne 0x848eb0
// 00848ede  5b                   pop ebx
// 00848edf  5e                   pop esi
// 00848ee0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848ee3  e84617fcff           call 0x80a62e
// 00848ee8  5f                   pop edi
// 00848ee9  83c410               add esp, 0x10
// 00848eec  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnSetFocus@CXTPTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
