// from server: 100% by auto
// roc 2007-08 00666f80  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666f80
//
// 00666f80  83ec10               sub esp, 0x10
// 00666f83  57                   push edi
// 00666f84  8bf9                 mov edi, ecx
// 00666f86  837f0400             cmp dword ptr [edi + 4], 0
// 00666f8a  7444                 je 0x666fd0
// 00666f8c  56                   push esi
// 00666f8d  e8def0ffff           call 0x666070
// 00666f92  8bf0                 mov esi, eax
// 00666f94  85f6                 test esi, esi
// 00666f96  7437                 je 0x666fcf
// 00666f98  53                   push ebx
// 00666f99  8b1ddcec7700         mov ebx, dword ptr [0x77ecdc]
// 00666f9f  90                   nop 
// 00666fa0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666fa3  6a01                 push 1
// 00666fa5  8d442410             lea eax, [esp + 0x10]
// 00666fa9  50                   push eax
// 00666faa  56                   push esi
// 00666fab  e8ce94fcff           call 0x63047e
// 00666fb0  8b5734               mov edx, dword ptr [edi + 0x34]
// 00666fb3  8b4220               mov eax, dword ptr [edx + 0x20]
// 00666fb6  6a01                 push 1
// 00666fb8  8d4c2410             lea ecx, [esp + 0x10]
// 00666fbc  51                   push ecx
// 00666fbd  50                   push eax
// 00666fbe  ffd3                 call ebx
// 00666fc0  56                   push esi
// 00666fc1  8bcf                 mov ecx, edi
// 00666fc3  e8f8f0ffff           call 0x6660c0
// 00666fc8  8bf0                 mov esi, eax
// 00666fca  85f6                 test esi, esi
// 00666fcc  75d2                 jne 0x666fa0
// 00666fce  5b                   pop ebx
// 00666fcf  5e                   pop esi
// 00666fd0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666fd3  e86692fcff           call 0x63023e
// 00666fd8  5f                   pop edi
// 00666fd9  83c410               add esp, 0x10
// 00666fdc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnSetFocus@CXTTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
