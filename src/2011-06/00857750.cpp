// roc 2011-06 00857750  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00857750
//
// 00857750  83ec14               sub esp, 0x14
// 00857753  8b442420             mov eax, dword ptr [esp + 0x20]
// 00857757  890c24               mov dword ptr [esp], ecx
// 0085775a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085775e  3bc8                 cmp ecx, eax
// 00857760  0f8dd0000000         jge 0x857836
// 00857766  53                   push ebx
// 00857767  55                   push ebp
// 00857768  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0085776c  56                   push esi
// 0085776d  8bf1                 mov esi, ecx
// 0085776f  c1e606               shl esi, 6
// 00857772  03742424             add esi, dword ptr [esp + 0x24]
// 00857776  2bc1                 sub eax, ecx
// 00857778  57                   push edi
// 00857779  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085777d  8d4900               lea ecx, [ecx]
// 00857780  837c243800           cmp dword ptr [esp + 0x38], 0
// 00857785  8b06                 mov eax, dword ptr [esi]
// 00857787  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085778a  8b7e04               mov edi, dword ptr [esi + 4]
// 0085778d  8b5e08               mov ebx, dword ptr [esi + 8]
// 00857790  89442414             mov dword ptr [esp + 0x14], eax
// 00857794  894c2420             mov dword ptr [esp + 0x20], ecx
// 00857798  7444                 je 0x8577de
// 0085779a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0085779e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008577a2  8d0c10               lea ecx, [eax + edx]
// 008577a5  51                   push ecx
// 008577a6  53                   push ebx
// 008577a7  50                   push eax
// 008577a8  8bd3                 mov edx, ebx
// 008577aa  2bd5                 sub edx, ebp
// 008577ac  52                   push edx
// 008577ad  8d4610               lea eax, [esi + 0x10]
// 008577b0  50                   push eax
// 008577b1  ff15c81ba400         call dword ptr [0xa41bc8]
// 008577b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008577bb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008577be  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 008577c8  755a                 jne 0x857824
// 008577ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 008577ce  2bc3                 sub eax, ebx
// 008577d0  03c5                 add eax, ebp
// 008577d2  99                   cdq 
// 008577d3  2bc2                 sub eax, edx
// 008577d5  d1f8                 sar eax, 1
// 008577d7  6a00                 push 0
// 008577d9  f7d8                 neg eax
// 008577db  50                   push eax
// 008577dc  eb3f                 jmp 0x85781d
// 008577de  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008577e2  8d042f               lea eax, [edi + ebp]
// 008577e5  50                   push eax
// 008577e6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008577ea  8d1408               lea edx, [eax + ecx]
// 008577ed  52                   push edx
// 008577ee  57                   push edi
// 008577ef  50                   push eax
// 008577f0  8d4610               lea eax, [esi + 0x10]
// 008577f3  50                   push eax
// 008577f4  ff15c81ba400         call dword ptr [0xa41bc8]
// 008577fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008577fe  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00857801  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 0085780b  7517                 jne 0x857824
// 0085780d  8bc7                 mov eax, edi
// 0085780f  2b442420             sub eax, dword ptr [esp + 0x20]
// 00857813  03c5                 add eax, ebp
// 00857815  99                   cdq 
// 00857816  2bc2                 sub eax, edx
// 00857818  d1f8                 sar eax, 1
// 0085781a  50                   push eax
// 0085781b  6a00                 push 0
// 0085781d  56                   push esi
// 0085781e  ff15601ca400         call dword ptr [0xa41c60]
// 00857824  83c640               add esi, 0x40
// 00857827  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0085782c  0f854effffff         jne 0x857780
// 00857832  5f                   pop edi
// 00857833  5e                   pop esi
// 00857834  5d                   pop ebp
// 00857835  5b                   pop ebx
// 00857836  83c414               add esp, 0x14
// 00857839  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
