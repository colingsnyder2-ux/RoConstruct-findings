// roc 2010-06 008a9590  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9590
//
// 008a9590  83ec18               sub esp, 0x18
// 008a9593  53                   push ebx
// 008a9594  57                   push edi
// 008a9595  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008a9599  8bd9                 mov ebx, ecx
// 008a959b  85ff                 test edi, edi
// 008a959d  0f848f010000         je 0x8a9732
// 008a95a3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 008a95a7  0f8485010000         je 0x8a9732
// 008a95ad  56                   push esi
// 008a95ae  8bcf                 mov ecx, edi
// 008a95b0  e86b03ffff           call 0x899920
// 008a95b5  8bf0                 mov esi, eax
// 008a95b7  85f6                 test esi, esi
// 008a95b9  0f8472010000         je 0x8a9731
// 008a95bf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a95c3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008a95c7  8b03                 mov eax, dword ptr [ebx]
// 008a95c9  55                   push ebp
// 008a95ca  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008a95ce  57                   push edi
// 008a95cf  6a00                 push 0
// 008a95d1  51                   push ecx
// 008a95d2  52                   push edx
// 008a95d3  8b5050               mov edx, dword ptr [eax + 0x50]
// 008a95d6  55                   push ebp
// 008a95d7  8d4c2424             lea ecx, [esp + 0x24]
// 008a95db  51                   push ecx
// 008a95dc  8bcb                 mov ecx, ebx
// 008a95de  ffd2                 call edx
// 008a95e0  8a442430             mov al, byte ptr [esp + 0x30]
// 008a95e4  8bcf                 mov ecx, edi
// 008a95e6  a804                 test al, 4
// 008a95e8  7420                 je 0x8a960a
// 008a95ea  8d442418             lea eax, [esp + 0x18]
// 008a95ee  50                   push eax
// 008a95ef  e80c0bffff           call 0x89a100
// 008a95f4  8b4804               mov ecx, dword ptr [eax + 4]
// 008a95f7  8b10                 mov edx, dword ptr [eax]
// 008a95f9  51                   push ecx
// 008a95fa  52                   push edx
// 008a95fb  6a01                 push 1
// 008a95fd  8bce                 mov ecx, esi
// 008a95ff  e83cacf1ff           call 0x7c4240
// 008a9604  50                   push eax
// 008a9605  e914010000           jmp 0x8a971e
// 008a960a  a801                 test al, 1
// 008a960c  741e                 je 0x8a962c
// 008a960e  8d542418             lea edx, [esp + 0x18]
// 008a9612  52                   push edx
// 008a9613  e8e80affff           call 0x89a100
// 008a9618  8b4804               mov ecx, dword ptr [eax + 4]
// 008a961b  8b10                 mov edx, dword ptr [eax]
// 008a961d  51                   push ecx
// 008a961e  52                   push edx
// 008a961f  8bce                 mov ecx, esi
// 008a9621  e8ba56f1ff           call 0x7bece0
// 008a9626  50                   push eax
// 008a9627  e9f2000000           jmp 0x8a971e
// 008a962c  e85ff1feff           call 0x898790
// 008a9631  85c0                 test eax, eax
// 008a9633  0f84b8000000         je 0x8a96f1
// 008a9639  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 008a9640  7478                 je 0x8a96ba
// 008a9642  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a9646  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008a964a  8d442420             lea eax, [esp + 0x20]
// 008a964e  42                   inc edx
// 008a964f  50                   push eax
// 008a9650  8bcf                 mov ecx, edi
// 008a9652  43                   inc ebx
// 008a9653  89542420             mov dword ptr [esp + 0x20], edx
// 008a9657  e8a40affff           call 0x89a100
// 008a965c  8b4804               mov ecx, dword ptr [eax + 4]
// 008a965f  8b10                 mov edx, dword ptr [eax]
// 008a9661  51                   push ecx
// 008a9662  52                   push edx
// 008a9663  8bce                 mov ecx, esi
// 008a9665  e8b6abf1ff           call 0x7c4220
// 008a966a  50                   push eax
// 008a966b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a966f  50                   push eax
// 008a9670  53                   push ebx
// 008a9671  55                   push ebp
// 008a9672  8bce                 mov ecx, esi
// 008a9674  e8d7b8f1ff           call 0x7c4f50
// 008a9679  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a967d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008a9681  49                   dec ecx
// 008a9682  8d542420             lea edx, [esp + 0x20]
// 008a9686  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a968a  52                   push edx
// 008a968b  8bcf                 mov ecx, edi
// 008a968d  4b                   dec ebx
// 008a968e  e86d0affff           call 0x89a100
// 008a9693  8b4804               mov ecx, dword ptr [eax + 4]
// 008a9696  8b10                 mov edx, dword ptr [eax]
// 008a9698  51                   push ecx
// 008a9699  52                   push edx
// 008a969a  8bce                 mov ecx, esi
// 008a969c  e8ff55f1ff           call 0x7beca0
// 008a96a1  50                   push eax
// 008a96a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a96a6  50                   push eax
// 008a96a7  53                   push ebx
// 008a96a8  55                   push ebp
// 008a96a9  8bce                 mov ecx, esi
// 008a96ab  e8a0b8f1ff           call 0x7c4f50
// 008a96b0  5d                   pop ebp
// 008a96b1  5e                   pop esi
// 008a96b2  5f                   pop edi
// 008a96b3  5b                   pop ebx
// 008a96b4  83c418               add esp, 0x18
// 008a96b7  c21000               ret 0x10
// 008a96ba  8d4c2420             lea ecx, [esp + 0x20]
// 008a96be  51                   push ecx
// 008a96bf  8bcf                 mov ecx, edi
// 008a96c1  e83a0affff           call 0x89a100
// 008a96c6  8b5004               mov edx, dword ptr [eax + 4]
// 008a96c9  8b00                 mov eax, dword ptr [eax]
// 008a96cb  52                   push edx
// 008a96cc  50                   push eax
// 008a96cd  8bce                 mov ecx, esi
// 008a96cf  e8cc55f1ff           call 0x7beca0
// 008a96d4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a96d8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a96dc  50                   push eax
// 008a96dd  51                   push ecx
// 008a96de  52                   push edx
// 008a96df  55                   push ebp
// 008a96e0  8bce                 mov ecx, esi
// 008a96e2  e869b8f1ff           call 0x7c4f50
// 008a96e7  5d                   pop ebp
// 008a96e8  5e                   pop esi
// 008a96e9  5f                   pop edi
// 008a96ea  5b                   pop ebx
// 008a96eb  83c418               add esp, 0x18
// 008a96ee  c21000               ret 0x10
// 008a96f1  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 008a96f8  8bce                 mov ecx, esi
// 008a96fa  7407                 je 0x8a9703
// 008a96fc  e8efaaf1ff           call 0x7c41f0
// 008a9701  eb05                 jmp 0x8a9708
// 008a9703  e8d83bf1ff           call 0x7bd2e0
// 008a9708  8bd8                 mov ebx, eax
// 008a970a  8d442420             lea eax, [esp + 0x20]
// 008a970e  50                   push eax
// 008a970f  8bcf                 mov ecx, edi
// 008a9711  e8ea09ffff           call 0x89a100
// 008a9716  8b4804               mov ecx, dword ptr [eax + 4]
// 008a9719  8b10                 mov edx, dword ptr [eax]
// 008a971b  51                   push ecx
// 008a971c  52                   push edx
// 008a971d  53                   push ebx
// 008a971e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a9722  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a9726  50                   push eax
// 008a9727  51                   push ecx
// 008a9728  55                   push ebp
// 008a9729  8bce                 mov ecx, esi
// 008a972b  e820b8f1ff           call 0x7c4f50
// 008a9730  5d                   pop ebp
// 008a9731  5e                   pop esi
// 008a9732  5f                   pop edi
// 008a9733  5b                   pop ebx
// 008a9734  83c418               add esp, 0x18
// 008a9737  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
