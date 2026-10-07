// roc 2012-06 00936c00  unit: seg_00930000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936c00
//
// 00936c00  51                   push ecx
// 00936c01  53                   push ebx
// 00936c02  55                   push ebp
// 00936c03  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00936c07  56                   push esi
// 00936c08  8bf0                 mov esi, eax
// 00936c0a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00936c0e  57                   push edi
// 00936c0f  7404                 je 0x936c15
// 00936c11  33ff                 xor edi, edi
// 00936c13  eb03                 jmp 0x936c18
// 00936c15  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 00936c18  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936c1c  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00936c1f  897c2418             mov dword ptr [esp + 0x18], edi
// 00936c23  7538                 jne 0x936c5d
// 00936c25  8b4608               mov eax, dword ptr [esi + 8]
// 00936c28  8b16                 mov edx, dword ptr [esi]
// 00936c2a  50                   push eax
// 00936c2b  8b4604               mov eax, dword ptr [esi + 4]
// 00936c2e  6a04                 push 4
// 00936c30  8d4c2420             lea ecx, [esp + 0x20]
// 00936c34  51                   push ecx
// 00936c35  52                   push edx
// 00936c36  ffd0                 call eax
// 00936c38  83c410               add esp, 0x10
// 00936c3b  894610               mov dword ptr [esi + 0x10], eax
// 00936c3e  85c0                 test eax, eax
// 00936c40  751b                 jne 0x936c5d
// 00936c42  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936c45  8b06                 mov eax, dword ptr [esi]
// 00936c47  51                   push ecx
// 00936c48  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936c4b  8d14bd00000000       lea edx, [edi*4]
// 00936c52  52                   push edx
// 00936c53  53                   push ebx
// 00936c54  50                   push eax
// 00936c55  ffd1                 call ecx
// 00936c57  83c410               add esp, 0x10
// 00936c5a  894610               mov dword ptr [esi + 0x10], eax
// 00936c5d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00936c61  7404                 je 0x936c67
// 00936c63  33db                 xor ebx, ebx
// 00936c65  eb03                 jmp 0x936c6a
// 00936c67  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 00936c6a  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936c6e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00936c72  7519                 jne 0x936c8d
// 00936c74  8b5608               mov edx, dword ptr [esi + 8]
// 00936c77  8b0e                 mov ecx, dword ptr [esi]
// 00936c79  52                   push edx
// 00936c7a  8b5604               mov edx, dword ptr [esi + 4]
// 00936c7d  6a04                 push 4
// 00936c7f  8d442420             lea eax, [esp + 0x20]
// 00936c83  50                   push eax
// 00936c84  51                   push ecx
// 00936c85  ffd2                 call edx
// 00936c87  83c410               add esp, 0x10
// 00936c8a  894610               mov dword ptr [esi + 0x10], eax
// 00936c8d  85db                 test ebx, ebx
// 00936c8f  7e69                 jle 0x936cfa
// 00936c91  33ff                 xor edi, edi
// 00936c93  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00936c96  8b0407               mov eax, dword ptr [edi + eax]
// 00936c99  e8a2fdffff           call 0x936a40
// 00936c9e  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936ca2  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00936ca5  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 00936ca9  89542418             mov dword ptr [esp + 0x18], edx
// 00936cad  7519                 jne 0x936cc8
// 00936caf  8b4608               mov eax, dword ptr [esi + 8]
// 00936cb2  8b16                 mov edx, dword ptr [esi]
// 00936cb4  50                   push eax
// 00936cb5  8b4604               mov eax, dword ptr [esi + 4]
// 00936cb8  6a04                 push 4
// 00936cba  8d4c2420             lea ecx, [esp + 0x20]
// 00936cbe  51                   push ecx
// 00936cbf  52                   push edx
// 00936cc0  ffd0                 call eax
// 00936cc2  83c410               add esp, 0x10
// 00936cc5  894610               mov dword ptr [esi + 0x10], eax
// 00936cc8  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936ccc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00936ccf  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 00936cd3  89542410             mov dword ptr [esp + 0x10], edx
// 00936cd7  7519                 jne 0x936cf2
// 00936cd9  8b4608               mov eax, dword ptr [esi + 8]
// 00936cdc  8b16                 mov edx, dword ptr [esi]
// 00936cde  50                   push eax
// 00936cdf  8b4604               mov eax, dword ptr [esi + 4]
// 00936ce2  6a04                 push 4
// 00936ce4  8d4c2418             lea ecx, [esp + 0x18]
// 00936ce8  51                   push ecx
// 00936ce9  52                   push edx
// 00936cea  ffd0                 call eax
// 00936cec  83c410               add esp, 0x10
// 00936cef  894610               mov dword ptr [esi + 0x10], eax
// 00936cf2  83c70c               add edi, 0xc
// 00936cf5  83eb01               sub ebx, 1
// 00936cf8  7599                 jne 0x936c93
// 00936cfa  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00936cfe  7404                 je 0x936d04
// 00936d00  33db                 xor ebx, ebx
// 00936d02  eb03                 jmp 0x936d07
// 00936d04  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 00936d07  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936d0b  895c2418             mov dword ptr [esp + 0x18], ebx
// 00936d0f  7519                 jne 0x936d2a
// 00936d11  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936d14  8b06                 mov eax, dword ptr [esi]
// 00936d16  51                   push ecx
// 00936d17  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936d1a  6a04                 push 4
// 00936d1c  8d542420             lea edx, [esp + 0x20]
// 00936d20  52                   push edx
// 00936d21  50                   push eax
// 00936d22  ffd1                 call ecx
// 00936d24  83c410               add esp, 0x10
// 00936d27  894610               mov dword ptr [esi + 0x10], eax
// 00936d2a  33ff                 xor edi, edi
// 00936d2c  85db                 test ebx, ebx
// 00936d2e  7e10                 jle 0x936d40
// 00936d30  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00936d33  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00936d36  e805fdffff           call 0x936a40
// 00936d3b  47                   inc edi
// 00936d3c  3bfb                 cmp edi, ebx
// 00936d3e  7cf0                 jl 0x936d30
// 00936d40  5f                   pop edi
// 00936d41  5e                   pop esi
// 00936d42  5d                   pop ebp
// 00936d43  5b                   pop ebx
// 00936d44  59                   pop ecx
// 00936d45  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
