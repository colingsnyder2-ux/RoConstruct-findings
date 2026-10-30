// roc 2009-12 008f03c0  unit: CXTPRibbonQuickAccessControls  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f03c0
//
// 008f03c0  53                   push ebx
// 008f03c1  55                   push ebp
// 008f03c2  8bd9                 mov ebx, ecx
// 008f03c4  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 008f03c7  56                   push esi
// 008f03c8  33f6                 xor esi, esi
// 008f03ca  57                   push edi
// 008f03cb  85c0                 test eax, eax
// 008f03cd  7e51                 jle 0x8f0420
// 008f03cf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008f03d3  85f6                 test esi, esi
// 008f03d5  7c11                 jl 0x8f03e8
// 008f03d7  3bf0                 cmp esi, eax
// 008f03d9  7d0d                 jge 0x8f03e8
// 008f03db  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 008f03de  7d49                 jge 0x8f0429
// 008f03e0  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008f03e3  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008f03e6  eb02                 jmp 0x8f03ea
// 008f03e8  33ff                 xor edi, edi
// 008f03ea  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 008f03f0  3b8d84000000         cmp ecx, dword ptr [ebp + 0x84]
// 008f03f6  7520                 jne 0x8f0418
// 008f03f8  8b17                 mov edx, dword ptr [edi]
// 008f03fa  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f0400  6a00                 push 0
// 008f0402  8bcf                 mov ecx, edi
// 008f0404  ffd0                 call eax
// 008f0406  85c0                 test eax, eax
// 008f0408  740e                 je 0x8f0418
// 008f040a  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008f0410  3b8dfc000000         cmp ecx, dword ptr [ebp + 0xfc]
// 008f0416  7416                 je 0x8f042e
// 008f0418  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 008f041b  46                   inc esi
// 008f041c  3bf0                 cmp esi, eax
// 008f041e  7cb3                 jl 0x8f03d3
// 008f0420  5f                   pop edi
// 008f0421  5e                   pop esi
// 008f0422  5d                   pop ebp
// 008f0423  33c0                 xor eax, eax
// 008f0425  5b                   pop ebx
// 008f0426  c20400               ret 4
// 008f0429  e8de36f0ff           call 0x7f3b0c
// 008f042e  8bc7                 mov eax, edi
// 008f0430  5f                   pop edi
// 008f0431  5e                   pop esi
// 008f0432  5d                   pop ebp
// 008f0433  5b                   pop ebx
// 008f0434  c20400               ret 4
// copied from an identical function in another client (function ?FindDuplicate@CXTPRibbonQuickAccessControls@@QAEPAVCXTPControl@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp