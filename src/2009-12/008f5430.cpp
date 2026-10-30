// roc 2009-12 008f5430  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5430
//
// 008f5430  83ec18               sub esp, 0x18
// 008f5433  53                   push ebx
// 008f5434  57                   push edi
// 008f5435  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008f5439  8bd9                 mov ebx, ecx
// 008f543b  85ff                 test edi, edi
// 008f543d  0f848f010000         je 0x8f55d2
// 008f5443  837b1400             cmp dword ptr [ebx + 0x14], 0
// 008f5447  0f8485010000         je 0x8f55d2
// 008f544d  56                   push esi
// 008f544e  8bcf                 mov ecx, edi
// 008f5450  e8dbfed6ff           call 0x665330
// 008f5455  8bf0                 mov esi, eax
// 008f5457  85f6                 test esi, esi
// 008f5459  0f8472010000         je 0x8f55d1
// 008f545f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f5463  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008f5467  8b03                 mov eax, dword ptr [ebx]
// 008f5469  55                   push ebp
// 008f546a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008f546e  57                   push edi
// 008f546f  6a00                 push 0
// 008f5471  51                   push ecx
// 008f5472  52                   push edx
// 008f5473  8b5050               mov edx, dword ptr [eax + 0x50]
// 008f5476  55                   push ebp
// 008f5477  8d4c2424             lea ecx, [esp + 0x24]
// 008f547b  51                   push ecx
// 008f547c  8bcb                 mov ecx, ebx
// 008f547e  ffd2                 call edx
// 008f5480  8a442430             mov al, byte ptr [esp + 0x30]
// 008f5484  8bcf                 mov ecx, edi
// 008f5486  a804                 test al, 4
// 008f5488  7420                 je 0x8f54aa
// 008f548a  8d442418             lea eax, [esp + 0x18]
// 008f548e  50                   push eax
// 008f548f  e84c09ffff           call 0x8e5de0
// 008f5494  8b4804               mov ecx, dword ptr [eax + 4]
// 008f5497  8b10                 mov edx, dword ptr [eax]
// 008f5499  51                   push ecx
// 008f549a  52                   push edx
// 008f549b  6a01                 push 1
// 008f549d  8bce                 mov ecx, esi
// 008f549f  e8fcacf1ff           call 0x8101a0
// 008f54a4  50                   push eax
// 008f54a5  e914010000           jmp 0x8f55be
// 008f54aa  a801                 test al, 1
// 008f54ac  741e                 je 0x8f54cc
// 008f54ae  8d542418             lea edx, [esp + 0x18]
// 008f54b2  52                   push edx
// 008f54b3  e82809ffff           call 0x8e5de0
// 008f54b8  8b4804               mov ecx, dword ptr [eax + 4]
// 008f54bb  8b10                 mov edx, dword ptr [eax]
// 008f54bd  51                   push ecx
// 008f54be  52                   push edx
// 008f54bf  8bce                 mov ecx, esi
// 008f54c1  e8ca56f1ff           call 0x80ab90
// 008f54c6  50                   push eax
// 008f54c7  e9f2000000           jmp 0x8f55be
// 008f54cc  e8afeffeff           call 0x8e4480
// 008f54d1  85c0                 test eax, eax
// 008f54d3  0f84b8000000         je 0x8f5591
// 008f54d9  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 008f54e0  7478                 je 0x8f555a
// 008f54e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f54e6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f54ea  8d442420             lea eax, [esp + 0x20]
// 008f54ee  42                   inc edx
// 008f54ef  50                   push eax
// 008f54f0  8bcf                 mov ecx, edi
// 008f54f2  43                   inc ebx
// 008f54f3  89542420             mov dword ptr [esp + 0x20], edx
// 008f54f7  e8e408ffff           call 0x8e5de0
// 008f54fc  8b4804               mov ecx, dword ptr [eax + 4]
// 008f54ff  8b10                 mov edx, dword ptr [eax]
// 008f5501  51                   push ecx
// 008f5502  52                   push edx
// 008f5503  8bce                 mov ecx, esi
// 008f5505  e876acf1ff           call 0x810180
// 008f550a  50                   push eax
// 008f550b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f550f  50                   push eax
// 008f5510  53                   push ebx
// 008f5511  55                   push ebp
// 008f5512  8bce                 mov ecx, esi
// 008f5514  e897b9f1ff           call 0x810eb0
// 008f5519  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f551d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f5521  49                   dec ecx
// 008f5522  8d542420             lea edx, [esp + 0x20]
// 008f5526  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008f552a  52                   push edx
// 008f552b  8bcf                 mov ecx, edi
// 008f552d  4b                   dec ebx
// 008f552e  e8ad08ffff           call 0x8e5de0
// 008f5533  8b4804               mov ecx, dword ptr [eax + 4]
// 008f5536  8b10                 mov edx, dword ptr [eax]
// 008f5538  51                   push ecx
// 008f5539  52                   push edx
// 008f553a  8bce                 mov ecx, esi
// 008f553c  e80f56f1ff           call 0x80ab50
// 008f5541  50                   push eax
// 008f5542  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f5546  50                   push eax
// 008f5547  53                   push ebx
// 008f5548  55                   push ebp
// 008f5549  8bce                 mov ecx, esi
// 008f554b  e860b9f1ff           call 0x810eb0
// 008f5550  5d                   pop ebp
// 008f5551  5e                   pop esi
// 008f5552  5f                   pop edi
// 008f5553  5b                   pop ebx
// 008f5554  83c418               add esp, 0x18
// 008f5557  c21000               ret 0x10
// 008f555a  8d4c2420             lea ecx, [esp + 0x20]
// 008f555e  51                   push ecx
// 008f555f  8bcf                 mov ecx, edi
// 008f5561  e87a08ffff           call 0x8e5de0
// 008f5566  8b5004               mov edx, dword ptr [eax + 4]
// 008f5569  8b00                 mov eax, dword ptr [eax]
// 008f556b  52                   push edx
// 008f556c  50                   push eax
// 008f556d  8bce                 mov ecx, esi
// 008f556f  e8dc55f1ff           call 0x80ab50
// 008f5574  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f5578  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f557c  50                   push eax
// 008f557d  51                   push ecx
// 008f557e  52                   push edx
// 008f557f  55                   push ebp
// 008f5580  8bce                 mov ecx, esi
// 008f5582  e829b9f1ff           call 0x810eb0
// 008f5587  5d                   pop ebp
// 008f5588  5e                   pop esi
// 008f5589  5f                   pop edi
// 008f558a  5b                   pop ebx
// 008f558b  83c418               add esp, 0x18
// 008f558e  c21000               ret 0x10
// 008f5591  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 008f5598  8bce                 mov ecx, esi
// 008f559a  7407                 je 0x8f55a3
// 008f559c  e8afabf1ff           call 0x810150
// 008f55a1  eb05                 jmp 0x8f55a8
// 008f55a3  e8983bf1ff           call 0x809140
// 008f55a8  8bd8                 mov ebx, eax
// 008f55aa  8d442420             lea eax, [esp + 0x20]
// 008f55ae  50                   push eax
// 008f55af  8bcf                 mov ecx, edi
// 008f55b1  e82a08ffff           call 0x8e5de0
// 008f55b6  8b4804               mov ecx, dword ptr [eax + 4]
// 008f55b9  8b10                 mov edx, dword ptr [eax]
// 008f55bb  51                   push ecx
// 008f55bc  52                   push edx
// 008f55bd  53                   push ebx
// 008f55be  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f55c2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f55c6  50                   push eax
// 008f55c7  51                   push ecx
// 008f55c8  55                   push ebp
// 008f55c9  8bce                 mov ecx, esi
// 008f55cb  e8e0b8f1ff           call 0x810eb0
// 008f55d0  5d                   pop ebp
// 008f55d1  5e                   pop esi
// 008f55d2  5f                   pop edi
// 008f55d3  5b                   pop ebx
// 008f55d4  83c418               add esp, 0x18
// 008f55d7  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
