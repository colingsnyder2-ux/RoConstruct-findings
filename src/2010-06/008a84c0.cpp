// roc 2010-06 008a84c0  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a84c0
//
// 008a84c0  56                   push esi
// 008a84c1  57                   push edi
// 008a84c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008a84c6  8bf1                 mov esi, ecx
// 008a84c8  8b06                 mov eax, dword ptr [esi]
// 008a84ca  8b5014               mov edx, dword ptr [eax + 0x14]
// 008a84cd  57                   push edi
// 008a84ce  ffd2                 call edx
// 008a84d0  85c0                 test eax, eax
// 008a84d2  7412                 je 0x8a84e6
// 008a84d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a84d8  57                   push edi
// 008a84d9  50                   push eax
// 008a84da  8bce                 mov ecx, esi
// 008a84dc  e8effcffff           call 0x8a81d0
// 008a84e1  5f                   pop edi
// 008a84e2  5e                   pop esi
// 008a84e3  c20800               ret 8
// 008a84e6  8a44240c             mov al, byte ptr [esp + 0xc]
// 008a84ea  a804                 test al, 4
// 008a84ec  7413                 je 0x8a8501
// 008a84ee  e82db6f3ff           call 0x7e3b20
// 008a84f3  6a11                 push 0x11
// 008a84f5  8bc8                 mov ecx, eax
// 008a84f7  e8b4adf3ff           call 0x7e32b0
// 008a84fc  5f                   pop edi
// 008a84fd  5e                   pop esi
// 008a84fe  c20800               ret 8
// 008a8501  a801                 test al, 1
// 008a8503  7416                 je 0x8a851b
// 008a8505  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008a850b  83f8ff               cmp eax, -1
// 008a850e  7540                 jne 0x8a8550
// 008a8510  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008a8516  5f                   pop edi
// 008a8517  5e                   pop esi
// 008a8518  c20800               ret 8
// 008a851b  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008a8522  750b                 jne 0x8a852f
// 008a8524  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008a852a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008a852d  7516                 jne 0x8a8545
// 008a852f  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008a8535  83f8ff               cmp eax, -1
// 008a8538  7516                 jne 0x8a8550
// 008a853a  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008a8540  5f                   pop edi
// 008a8541  5e                   pop esi
// 008a8542  c20800               ret 8
// 008a8545  8b4634               mov eax, dword ptr [esi + 0x34]
// 008a8548  83f8ff               cmp eax, -1
// 008a854b  7503                 jne 0x8a8550
// 008a854d  8b4630               mov eax, dword ptr [esi + 0x30]
// 008a8550  5f                   pop edi
// 008a8551  5e                   pop esi
// 008a8552  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
