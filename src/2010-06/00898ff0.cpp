// roc 2010-06 00898ff0  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898ff0
//
// 00898ff0  53                   push ebx
// 00898ff1  8a5c2408             mov bl, byte ptr [esp + 8]
// 00898ff5  57                   push edi
// 00898ff6  8bf9                 mov edi, ecx
// 00898ff8  f6c304               test bl, 4
// 00898ffb  7413                 je 0x899010
// 00898ffd  e81eabf4ff           call 0x7e3b20
// 00899002  6a11                 push 0x11
// 00899004  8bc8                 mov ecx, eax
// 00899006  e8a5a2f4ff           call 0x7e32b0
// 0089900b  5f                   pop edi
// 0089900c  5b                   pop ebx
// 0089900d  c20800               ret 8
// 00899010  56                   push esi
// 00899011  8b742414             mov esi, dword ptr [esp + 0x14]
// 00899015  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0089901c  7546                 jne 0x899064
// 0089901e  ff1584bc9e00         call dword ptr [0x9ebc84]
// 00899024  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00899027  743b                 je 0x899064
// 00899029  f6c301               test bl, 1
// 0089902c  7536                 jne 0x899064
// 0089902e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 00899034  85f6                 test esi, esi
// 00899036  7504                 jne 0x89903c
// 00899038  33c0                 xor eax, eax
// 0089903a  eb03                 jmp 0x89903f
// 0089903c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089903f  50                   push eax
// 00899040  ff1528bc9e00         call dword ptr [0x9ebc28]
// 00899046  85c0                 test eax, eax
// 00899048  7409                 je 0x899053
// 0089904a  8b4678               mov eax, dword ptr [esi + 0x78]
// 0089904d  5e                   pop esi
// 0089904e  5f                   pop edi
// 0089904f  5b                   pop ebx
// 00899050  c20800               ret 8
// 00899053  8b4734               mov eax, dword ptr [edi + 0x34]
// 00899056  83f8ff               cmp eax, -1
// 00899059  751a                 jne 0x899075
// 0089905b  8b4730               mov eax, dword ptr [edi + 0x30]
// 0089905e  5e                   pop esi
// 0089905f  5f                   pop edi
// 00899060  5b                   pop ebx
// 00899061  c20800               ret 8
// 00899064  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0089906a  83f8ff               cmp eax, -1
// 0089906d  7506                 jne 0x899075
// 0089906f  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00899075  5e                   pop esi
// 00899076  5f                   pop edi
// 00899077  5b                   pop ebx
// 00899078  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
