// roc 2009-12 0083afb0  unit: CXTPToolBar::CControlButtonExpand  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083afb0
//
// 0083afb0  53                   push ebx
// 0083afb1  8bd9                 mov ebx, ecx
// 0083afb3  83bb7801000000       cmp dword ptr [ebx + 0x178], 0
// 0083afba  55                   push ebp
// 0083afbb  0f84b0000000         je 0x83b071
// 0083afc1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0083afc5  8b4500               mov eax, dword ptr [ebp]
// 0083afc8  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0083afce  8bcd                 mov ecx, ebp
// 0083afd0  ffd2                 call edx
// 0083afd2  85c0                 test eax, eax
// 0083afd4  0f8497000000         je 0x83b071
// 0083afda  8b4500               mov eax, dword ptr [ebp]
// 0083afdd  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0083afe3  56                   push esi
// 0083afe4  8bb378010000         mov esi, dword ptr [ebx + 0x178]
// 0083afea  8bcd                 mov ecx, ebp
// 0083afec  ffd2                 call edx
// 0083afee  3bf0                 cmp esi, eax
// 0083aff0  750b                 jne 0x83affd
// 0083aff2  5e                   pop esi
// 0083aff3  5d                   pop ebp
// 0083aff4  b801000000           mov eax, 1
// 0083aff9  5b                   pop ebx
// 0083affa  c20400               ret 4
// 0083affd  57                   push edi
// 0083affe  8bce                 mov ecx, esi
// 0083b000  33ff                 xor edi, edi
// 0083b002  e849a2fcff           call 0x805250
// 0083b007  85c0                 test eax, eax
// 0083b009  7e51                 jle 0x83b05c
// 0083b00b  e8b0faffff           call 0x83aac0
// 0083b010  89442414             mov dword ptr [esp + 0x14], eax
// 0083b014  8b8b78010000         mov ecx, dword ptr [ebx + 0x178]
// 0083b01a  57                   push edi
// 0083b01b  e840a2fcff           call 0x805260
// 0083b020  50                   push eax
// 0083b021  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083b025  50                   push eax
// 0083b026  e8138cfbff           call 0x7f3c3e
// 0083b02b  8bf0                 mov esi, eax
// 0083b02d  83c408               add esp, 8
// 0083b030  85f6                 test esi, esi
// 0083b032  7418                 je 0x83b04c
// 0083b034  56                   push esi
// 0083b035  8bcd                 mov ecx, ebp
// 0083b037  e874ffffff           call 0x83afb0
// 0083b03c  85c0                 test eax, eax
// 0083b03e  7525                 jne 0x83b065
// 0083b040  55                   push ebp
// 0083b041  8bce                 mov ecx, esi
// 0083b043  e868ffffff           call 0x83afb0
// 0083b048  85c0                 test eax, eax
// 0083b04a  7519                 jne 0x83b065
// 0083b04c  8b8b78010000         mov ecx, dword ptr [ebx + 0x178]
// 0083b052  47                   inc edi
// 0083b053  e8f8a1fcff           call 0x805250
// 0083b058  3bf8                 cmp edi, eax
// 0083b05a  7cb8                 jl 0x83b014
// 0083b05c  5f                   pop edi
// 0083b05d  5e                   pop esi
// 0083b05e  5d                   pop ebp
// 0083b05f  33c0                 xor eax, eax
// 0083b061  5b                   pop ebx
// 0083b062  c20400               ret 4
// 0083b065  5f                   pop edi
// 0083b066  5e                   pop esi
// 0083b067  5d                   pop ebp
// 0083b068  b801000000           mov eax, 1
// 0083b06d  5b                   pop ebx
// 0083b06e  c20400               ret 4
// 0083b071  5d                   pop ebp
// 0083b072  33c0                 xor eax, eax
// 0083b074  5b                   pop ebx
// 0083b075  c20400               ret 4
// copied from an identical function in another client (function ?IsContainPopup@CXTPControlPopup@@IAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopup.cpp