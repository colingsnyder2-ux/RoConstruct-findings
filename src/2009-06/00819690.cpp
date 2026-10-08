// roc 2009-06 00819690  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819690
//
// 00819690  56                   push esi
// 00819691  57                   push edi
// 00819692  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00819696  8bf1                 mov esi, ecx
// 00819698  8b06                 mov eax, dword ptr [esi]
// 0081969a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0081969d  57                   push edi
// 0081969e  ffd2                 call edx
// 008196a0  85c0                 test eax, eax
// 008196a2  7412                 je 0x8196b6
// 008196a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008196a8  57                   push edi
// 008196a9  50                   push eax
// 008196aa  8bce                 mov ecx, esi
// 008196ac  e8effcffff           call 0x8193a0
// 008196b1  5f                   pop edi
// 008196b2  5e                   pop esi
// 008196b3  c20800               ret 8
// 008196b6  8a44240c             mov al, byte ptr [esp + 0xc]
// 008196ba  a804                 test al, 4
// 008196bc  7413                 je 0x8196d1
// 008196be  e85db4f3ff           call 0x754b20
// 008196c3  6a11                 push 0x11
// 008196c5  8bc8                 mov ecx, eax
// 008196c7  e8d4abf3ff           call 0x7542a0
// 008196cc  5f                   pop edi
// 008196cd  5e                   pop esi
// 008196ce  c20800               ret 8
// 008196d1  a801                 test al, 1
// 008196d3  7416                 je 0x8196eb
// 008196d5  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008196db  83f8ff               cmp eax, -1
// 008196de  7540                 jne 0x819720
// 008196e0  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008196e6  5f                   pop edi
// 008196e7  5e                   pop esi
// 008196e8  c20800               ret 8
// 008196eb  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008196f2  750b                 jne 0x8196ff
// 008196f4  ff153cee8900         call dword ptr [0x89ee3c]
// 008196fa  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008196fd  7516                 jne 0x819715
// 008196ff  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00819705  83f8ff               cmp eax, -1
// 00819708  7516                 jne 0x819720
// 0081970a  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00819710  5f                   pop edi
// 00819711  5e                   pop esi
// 00819712  c20800               ret 8
// 00819715  8b4634               mov eax, dword ptr [esi + 0x34]
// 00819718  83f8ff               cmp eax, -1
// 0081971b  7503                 jne 0x819720
// 0081971d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00819720  5f                   pop edi
// 00819721  5e                   pop esi
// 00819722  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
