// roc 2011-06 00901b90  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901b90
//
// 00901b90  56                   push esi
// 00901b91  57                   push edi
// 00901b92  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00901b96  8bf1                 mov esi, ecx
// 00901b98  8b06                 mov eax, dword ptr [esi]
// 00901b9a  8b5014               mov edx, dword ptr [eax + 0x14]
// 00901b9d  57                   push edi
// 00901b9e  ffd2                 call edx
// 00901ba0  85c0                 test eax, eax
// 00901ba2  7412                 je 0x901bb6
// 00901ba4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00901ba8  57                   push edi
// 00901ba9  50                   push eax
// 00901baa  8bce                 mov ecx, esi
// 00901bac  e8effcffff           call 0x9018a0
// 00901bb1  5f                   pop edi
// 00901bb2  5e                   pop esi
// 00901bb3  c20800               ret 8
// 00901bb6  8a44240c             mov al, byte ptr [esp + 0xc]
// 00901bba  a804                 test al, 4
// 00901bbc  7413                 je 0x901bd1
// 00901bbe  e81d38f4ff           call 0x8453e0
// 00901bc3  6a11                 push 0x11
// 00901bc5  8bc8                 mov ecx, eax
// 00901bc7  e8e42ff4ff           call 0x844bb0
// 00901bcc  5f                   pop edi
// 00901bcd  5e                   pop esi
// 00901bce  c20800               ret 8
// 00901bd1  a801                 test al, 1
// 00901bd3  7416                 je 0x901beb
// 00901bd5  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00901bdb  83f8ff               cmp eax, -1
// 00901bde  7540                 jne 0x901c20
// 00901be0  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00901be6  5f                   pop edi
// 00901be7  5e                   pop esi
// 00901be8  c20800               ret 8
// 00901beb  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00901bf2  750b                 jne 0x901bff
// 00901bf4  ff15381ba400         call dword ptr [0xa41b38]
// 00901bfa  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00901bfd  7516                 jne 0x901c15
// 00901bff  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00901c05  83f8ff               cmp eax, -1
// 00901c08  7516                 jne 0x901c20
// 00901c0a  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00901c10  5f                   pop edi
// 00901c11  5e                   pop esi
// 00901c12  c20800               ret 8
// 00901c15  8b4634               mov eax, dword ptr [esi + 0x34]
// 00901c18  83f8ff               cmp eax, -1
// 00901c1b  7503                 jne 0x901c20
// 00901c1d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00901c20  5f                   pop edi
// 00901c21  5e                   pop esi
// 00901c22  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
