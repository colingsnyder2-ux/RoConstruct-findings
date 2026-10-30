// roc 2009-12 008f4380  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4380
//
// 008f4380  56                   push esi
// 008f4381  57                   push edi
// 008f4382  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f4386  8bf1                 mov esi, ecx
// 008f4388  8b06                 mov eax, dword ptr [esi]
// 008f438a  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f438d  57                   push edi
// 008f438e  ffd2                 call edx
// 008f4390  85c0                 test eax, eax
// 008f4392  7412                 je 0x8f43a6
// 008f4394  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f4398  57                   push edi
// 008f4399  50                   push eax
// 008f439a  8bce                 mov ecx, esi
// 008f439c  e8effcffff           call 0x8f4090
// 008f43a1  5f                   pop edi
// 008f43a2  5e                   pop esi
// 008f43a3  c20800               ret 8
// 008f43a6  8a44240c             mov al, byte ptr [esp + 0xc]
// 008f43aa  a804                 test al, 4
// 008f43ac  7413                 je 0x8f43c1
// 008f43ae  e81db6f3ff           call 0x82f9d0
// 008f43b3  6a11                 push 0x11
// 008f43b5  8bc8                 mov ecx, eax
// 008f43b7  e844adf3ff           call 0x82f100
// 008f43bc  5f                   pop edi
// 008f43bd  5e                   pop esi
// 008f43be  c20800               ret 8
// 008f43c1  a801                 test al, 1
// 008f43c3  7416                 je 0x8f43db
// 008f43c5  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008f43cb  83f8ff               cmp eax, -1
// 008f43ce  7540                 jne 0x8f4410
// 008f43d0  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008f43d6  5f                   pop edi
// 008f43d7  5e                   pop esi
// 008f43d8  c20800               ret 8
// 008f43db  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008f43e2  750b                 jne 0x8f43ef
// 008f43e4  ff1528cc9800         call dword ptr [0x98cc28]
// 008f43ea  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008f43ed  7516                 jne 0x8f4405
// 008f43ef  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008f43f5  83f8ff               cmp eax, -1
// 008f43f8  7516                 jne 0x8f4410
// 008f43fa  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008f4400  5f                   pop edi
// 008f4401  5e                   pop esi
// 008f4402  c20800               ret 8
// 008f4405  8b4634               mov eax, dword ptr [esi + 0x34]
// 008f4408  83f8ff               cmp eax, -1
// 008f440b  7503                 jne 0x8f4410
// 008f440d  8b4630               mov eax, dword ptr [esi + 0x30]
// 008f4410  5f                   pop edi
// 008f4411  5e                   pop esi
// 008f4412  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
