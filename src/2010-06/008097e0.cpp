// roc 2010-06 008097e0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008097e0
//
// 008097e0  83ec28               sub esp, 0x28
// 008097e3  53                   push ebx
// 008097e4  55                   push ebp
// 008097e5  56                   push esi
// 008097e6  8bf1                 mov esi, ecx
// 008097e8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008097eb  8b01                 mov eax, dword ptr [ecx]
// 008097ed  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008097f0  57                   push edi
// 008097f1  ffd2                 call edx
// 008097f3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008097f9  8b01                 mov eax, dword ptr [ecx]
// 008097fb  8b4010               mov eax, dword ptr [eax + 0x10]
// 008097fe  8d542428             lea edx, [esp + 0x28]
// 00809802  52                   push edx
// 00809803  ffd0                 call eax
// 00809805  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00809809  8b5704               mov edx, dword ptr [edi + 4]
// 0080980c  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0080980f  8b0f                 mov ecx, dword ptr [edi]
// 00809811  8b470c               mov eax, dword ptr [edi + 0xc]
// 00809814  8b6f08               mov ebp, dword ptr [edi + 8]
// 00809817  8954241c             mov dword ptr [esp + 0x1c], edx
// 0080981b  8b13                 mov edx, dword ptr [ebx]
// 0080981d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00809821  89442424             mov dword ptr [esp + 0x24], eax
// 00809825  8b4248               mov eax, dword ptr [edx + 0x48]
// 00809828  8bcb                 mov ecx, ebx
// 0080982a  ffd0                 call eax
// 0080982c  83f802               cmp eax, 2
// 0080982f  740d                 je 0x80983e
// 00809831  8b13                 mov edx, dword ptr [ebx]
// 00809833  8b4248               mov eax, dword ptr [edx + 0x48]
// 00809836  8bcb                 mov ecx, ebx
// 00809838  ffd0                 call eax
// 0080983a  85c0                 test eax, eax
// 0080983c  7508                 jne 0x809846
// 0080983e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 00809842  8bdd                 mov ebx, ebp
// 00809844  eb08                 jmp 0x80984e
// 00809846  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0080984a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0080984e  8b16                 mov edx, dword ptr [esi]
// 00809850  8b5208               mov edx, dword ptr [edx + 8]
// 00809853  8d442410             lea eax, [esp + 0x10]
// 00809857  50                   push eax
// 00809858  8bce                 mov ecx, esi
// 0080985a  ffd2                 call edx
// 0080985c  2b18                 sub ebx, dword ptr [eax]
// 0080985e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00809861  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 00809865  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 00809869  e8829d0700           call 0x8835f0
// 0080986e  33c9                 xor ecx, ecx
// 00809870  3bc3                 cmp eax, ebx
// 00809872  0f9fc1               setg cl
// 00809875  57                   push edi
// 00809876  894e30               mov dword ptr [esi + 0x30], ecx
// 00809879  8bce                 mov ecx, esi
// 0080987b  e820920700           call 0x882aa0
// 00809880  5f                   pop edi
// 00809881  5e                   pop esi
// 00809882  5d                   pop ebp
// 00809883  5b                   pop ebx
// 00809884  83c428               add esp, 0x28
// 00809887  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
