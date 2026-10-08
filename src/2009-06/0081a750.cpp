// roc 2009-06 0081a750  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081a750
//
// 0081a750  83ec18               sub esp, 0x18
// 0081a753  53                   push ebx
// 0081a754  57                   push edi
// 0081a755  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0081a759  8bd9                 mov ebx, ecx
// 0081a75b  85ff                 test edi, edi
// 0081a75d  0f848f010000         je 0x81a8f2
// 0081a763  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0081a767  0f8485010000         je 0x81a8f2
// 0081a76d  56                   push esi
// 0081a76e  8bcf                 mov ecx, edi
// 0081a770  e83ba6c2ff           call 0x444db0
// 0081a775  8bf0                 mov esi, eax
// 0081a777  85f6                 test esi, esi
// 0081a779  0f8472010000         je 0x81a8f1
// 0081a77f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081a783  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0081a787  8b03                 mov eax, dword ptr [ebx]
// 0081a789  55                   push ebp
// 0081a78a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0081a78e  57                   push edi
// 0081a78f  6a00                 push 0
// 0081a791  51                   push ecx
// 0081a792  52                   push edx
// 0081a793  8b5050               mov edx, dword ptr [eax + 0x50]
// 0081a796  55                   push ebp
// 0081a797  8d4c2424             lea ecx, [esp + 0x24]
// 0081a79b  51                   push ecx
// 0081a79c  8bcb                 mov ecx, ebx
// 0081a79e  ffd2                 call edx
// 0081a7a0  8a442430             mov al, byte ptr [esp + 0x30]
// 0081a7a4  8bcf                 mov ecx, edi
// 0081a7a6  a804                 test al, 4
// 0081a7a8  7420                 je 0x81a7ca
// 0081a7aa  8d442418             lea eax, [esp + 0x18]
// 0081a7ae  50                   push eax
// 0081a7af  e83c0bffff           call 0x80b2f0
// 0081a7b4  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a7b7  8b10                 mov edx, dword ptr [eax]
// 0081a7b9  51                   push ecx
// 0081a7ba  52                   push edx
// 0081a7bb  6a01                 push 1
// 0081a7bd  8bce                 mov ecx, esi
// 0081a7bf  e8ece8f1ff           call 0x7390b0
// 0081a7c4  50                   push eax
// 0081a7c5  e914010000           jmp 0x81a8de
// 0081a7ca  a801                 test al, 1
// 0081a7cc  741e                 je 0x81a7ec
// 0081a7ce  8d542418             lea edx, [esp + 0x18]
// 0081a7d2  52                   push edx
// 0081a7d3  e8180bffff           call 0x80b2f0
// 0081a7d8  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a7db  8b10                 mov edx, dword ptr [eax]
// 0081a7dd  51                   push ecx
// 0081a7de  52                   push edx
// 0081a7df  8bce                 mov ecx, esi
// 0081a7e1  e80a93f1ff           call 0x733af0
// 0081a7e6  50                   push eax
// 0081a7e7  e9f2000000           jmp 0x81a8de
// 0081a7ec  e8aff1feff           call 0x8099a0
// 0081a7f1  85c0                 test eax, eax
// 0081a7f3  0f84b8000000         je 0x81a8b1
// 0081a7f9  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 0081a800  7478                 je 0x81a87a
// 0081a802  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081a806  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081a80a  8d442420             lea eax, [esp + 0x20]
// 0081a80e  42                   inc edx
// 0081a80f  50                   push eax
// 0081a810  8bcf                 mov ecx, edi
// 0081a812  43                   inc ebx
// 0081a813  89542420             mov dword ptr [esp + 0x20], edx
// 0081a817  e8d40affff           call 0x80b2f0
// 0081a81c  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a81f  8b10                 mov edx, dword ptr [eax]
// 0081a821  51                   push ecx
// 0081a822  52                   push edx
// 0081a823  8bce                 mov ecx, esi
// 0081a825  e866e8f1ff           call 0x739090
// 0081a82a  50                   push eax
// 0081a82b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081a82f  50                   push eax
// 0081a830  53                   push ebx
// 0081a831  55                   push ebp
// 0081a832  8bce                 mov ecx, esi
// 0081a834  e887f5f1ff           call 0x739dc0
// 0081a839  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081a83d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081a841  49                   dec ecx
// 0081a842  8d542420             lea edx, [esp + 0x20]
// 0081a846  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081a84a  52                   push edx
// 0081a84b  8bcf                 mov ecx, edi
// 0081a84d  4b                   dec ebx
// 0081a84e  e89d0affff           call 0x80b2f0
// 0081a853  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a856  8b10                 mov edx, dword ptr [eax]
// 0081a858  51                   push ecx
// 0081a859  52                   push edx
// 0081a85a  8bce                 mov ecx, esi
// 0081a85c  e84f92f1ff           call 0x733ab0
// 0081a861  50                   push eax
// 0081a862  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081a866  50                   push eax
// 0081a867  53                   push ebx
// 0081a868  55                   push ebp
// 0081a869  8bce                 mov ecx, esi
// 0081a86b  e850f5f1ff           call 0x739dc0
// 0081a870  5d                   pop ebp
// 0081a871  5e                   pop esi
// 0081a872  5f                   pop edi
// 0081a873  5b                   pop ebx
// 0081a874  83c418               add esp, 0x18
// 0081a877  c21000               ret 0x10
// 0081a87a  8d4c2420             lea ecx, [esp + 0x20]
// 0081a87e  51                   push ecx
// 0081a87f  8bcf                 mov ecx, edi
// 0081a881  e86a0affff           call 0x80b2f0
// 0081a886  8b5004               mov edx, dword ptr [eax + 4]
// 0081a889  8b00                 mov eax, dword ptr [eax]
// 0081a88b  52                   push edx
// 0081a88c  50                   push eax
// 0081a88d  8bce                 mov ecx, esi
// 0081a88f  e81c92f1ff           call 0x733ab0
// 0081a894  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081a898  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081a89c  50                   push eax
// 0081a89d  51                   push ecx
// 0081a89e  52                   push edx
// 0081a89f  55                   push ebp
// 0081a8a0  8bce                 mov ecx, esi
// 0081a8a2  e819f5f1ff           call 0x739dc0
// 0081a8a7  5d                   pop ebp
// 0081a8a8  5e                   pop esi
// 0081a8a9  5f                   pop edi
// 0081a8aa  5b                   pop ebx
// 0081a8ab  83c418               add esp, 0x18
// 0081a8ae  c21000               ret 0x10
// 0081a8b1  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 0081a8b8  8bce                 mov ecx, esi
// 0081a8ba  7407                 je 0x81a8c3
// 0081a8bc  e89fe7f1ff           call 0x739060
// 0081a8c1  eb05                 jmp 0x81a8c8
// 0081a8c3  e8f876f1ff           call 0x731fc0
// 0081a8c8  8bd8                 mov ebx, eax
// 0081a8ca  8d442420             lea eax, [esp + 0x20]
// 0081a8ce  50                   push eax
// 0081a8cf  8bcf                 mov ecx, edi
// 0081a8d1  e81a0affff           call 0x80b2f0
// 0081a8d6  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a8d9  8b10                 mov edx, dword ptr [eax]
// 0081a8db  51                   push ecx
// 0081a8dc  52                   push edx
// 0081a8dd  53                   push ebx
// 0081a8de  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081a8e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081a8e6  50                   push eax
// 0081a8e7  51                   push ecx
// 0081a8e8  55                   push ebp
// 0081a8e9  8bce                 mov ecx, esi
// 0081a8eb  e8d0f4f1ff           call 0x739dc0
// 0081a8f0  5d                   pop ebp
// 0081a8f1  5e                   pop esi
// 0081a8f2  5f                   pop edi
// 0081a8f3  5b                   pop ebx
// 0081a8f4  83c418               add esp, 0x18
// 0081a8f7  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
