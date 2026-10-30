// roc 2010-06 0083cc30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083cc30
//
// 0083cc30  83ec10               sub esp, 0x10
// 0083cc33  53                   push ebx
// 0083cc34  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0083cc38  56                   push esi
// 0083cc39  57                   push edi
// 0083cc3a  8d44240c             lea eax, [esp + 0xc]
// 0083cc3e  8bf9                 mov edi, ecx
// 0083cc40  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083cc43  50                   push eax
// 0083cc44  51                   push ecx
// 0083cc45  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0083cc4b  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0083cc51  83f804               cmp eax, 4
// 0083cc54  0f85c6000000         jne 0x83cd20
// 0083cc5a  6a3d                 push 0x3d
// 0083cc5c  8bcf                 mov ecx, edi
// 0083cc5e  e8ad04f7ff           call 0x7ad110
// 0083cc63  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 0083cc6a  8bf0                 mov esi, eax
// 0083cc6c  7507                 jne 0x83cc75
// 0083cc6e  b829000000           mov eax, 0x29
// 0083cc73  eb12                 jmp 0x83cc87
// 0083cc75  53                   push ebx
// 0083cc76  8bcf                 mov ecx, edi
// 0083cc78  e8830ef7ff           call 0x7adb00
// 0083cc7d  f7d8                 neg eax
// 0083cc7f  1bc0                 sbb eax, eax
// 0083cc81  83e0f1               and eax, 0xfffffff1
// 0083cc84  83c01e               add eax, 0x1e
// 0083cc87  50                   push eax
// 0083cc88  8bcf                 mov ecx, edi
// 0083cc8a  e88104f7ff           call 0x7ad110
// 0083cc8f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083cc93  56                   push esi
// 0083cc94  56                   push esi
// 0083cc95  8d542414             lea edx, [esp + 0x14]
// 0083cc99  52                   push edx
// 0083cc9a  8bcf                 mov ecx, edi
// 0083cc9c  8bd8                 mov ebx, eax
// 0083cc9e  e895baf6ff           call 0x7a8738
// 0083cca3  6aff                 push -1
// 0083cca5  6aff                 push -1
// 0083cca7  8d442414             lea eax, [esp + 0x14]
// 0083ccab  50                   push eax
// 0083ccac  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0083ccb2  53                   push ebx
// 0083ccb3  8d4c2410             lea ecx, [esp + 0x10]
// 0083ccb7  51                   push ecx
// 0083ccb8  8bcf                 mov ecx, edi
// 0083ccba  e87fbaf6ff           call 0x7a873e
// 0083ccbf  56                   push esi
// 0083ccc0  56                   push esi
// 0083ccc1  8d542414             lea edx, [esp + 0x14]
// 0083ccc5  52                   push edx
// 0083ccc6  8bcf                 mov ecx, edi
// 0083ccc8  e86bbaf6ff           call 0x7a8738
// 0083cccd  8b4704               mov eax, dword ptr [edi + 4]
// 0083ccd0  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 0083ccd6  56                   push esi
// 0083ccd7  6a02                 push 2
// 0083ccd9  6a02                 push 2
// 0083ccdb  50                   push eax
// 0083ccdc  ffd3                 call ebx
// 0083ccde  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083cce2  8b5704               mov edx, dword ptr [edi + 4]
// 0083cce5  56                   push esi
// 0083cce6  6a02                 push 2
// 0083cce8  83c1fe               add ecx, -2
// 0083cceb  51                   push ecx
// 0083ccec  52                   push edx
// 0083cced  ffd3                 call ebx
// 0083ccef  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083ccf3  8b4f04               mov ecx, dword ptr [edi + 4]
// 0083ccf6  56                   push esi
// 0083ccf7  83c0fe               add eax, -2
// 0083ccfa  50                   push eax
// 0083ccfb  6a02                 push 2
// 0083ccfd  51                   push ecx
// 0083ccfe  ffd3                 call ebx
// 0083cd00  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083cd04  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083cd08  8b4f04               mov ecx, dword ptr [edi + 4]
// 0083cd0b  56                   push esi
// 0083cd0c  83c2fe               add edx, -2
// 0083cd0f  52                   push edx
// 0083cd10  83c0fe               add eax, -2
// 0083cd13  50                   push eax
// 0083cd14  51                   push ecx
// 0083cd15  ffd3                 call ebx
// 0083cd17  5f                   pop edi
// 0083cd18  5e                   pop esi
// 0083cd19  5b                   pop ebx
// 0083cd1a  83c410               add esp, 0x10
// 0083cd1d  c20800               ret 8
// 0083cd20  83f805               cmp eax, 5
// 0083cd23  754c                 jne 0x83cd71
// 0083cd25  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0083cd29  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083cd2d  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083cd31  6a29                 push 0x29
// 0083cd33  6a2b                 push 0x2b
// 0083cd35  83ec10               sub esp, 0x10
// 0083cd38  8bc4                 mov eax, esp
// 0083cd3a  8910                 mov dword ptr [eax], edx
// 0083cd3c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0083cd40  894804               mov dword ptr [eax + 4], ecx
// 0083cd43  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083cd47  895008               mov dword ptr [eax + 8], edx
// 0083cd4a  89480c               mov dword ptr [eax + 0xc], ecx
// 0083cd4d  56                   push esi
// 0083cd4e  8bcf                 mov ecx, edi
// 0083cd50  e81b15f7ff           call 0x7ae270
// 0083cd55  6a1e                 push 0x1e
// 0083cd57  8bcf                 mov ecx, edi
// 0083cd59  e8b203f7ff           call 0x7ad110
// 0083cd5e  50                   push eax
// 0083cd5f  53                   push ebx
// 0083cd60  56                   push esi
// 0083cd61  8bcf                 mov ecx, edi
// 0083cd63  e8d8fdffff           call 0x83cb40
// 0083cd68  5f                   pop edi
// 0083cd69  5e                   pop esi
// 0083cd6a  5b                   pop ebx
// 0083cd6b  83c410               add esp, 0x10
// 0083cd6e  c20800               ret 8
// 0083cd71  53                   push ebx
// 0083cd72  8bcf                 mov ecx, edi
// 0083cd74  e8870df7ff           call 0x7adb00
// 0083cd79  6a0f                 push 0xf
// 0083cd7b  8bcf                 mov ecx, edi
// 0083cd7d  85c0                 test eax, eax
// 0083cd7f  741d                 je 0x83cd9e
// 0083cd81  e88a03f7ff           call 0x7ad110
// 0083cd86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083cd8a  50                   push eax
// 0083cd8b  8d542410             lea edx, [esp + 0x10]
// 0083cd8f  52                   push edx
// 0083cd90  e8a9b9f6ff           call 0x7a873e
// 0083cd95  5f                   pop edi
// 0083cd96  5e                   pop esi
// 0083cd97  5b                   pop ebx
// 0083cd98  83c410               add esp, 0x10
// 0083cd9b  c20800               ret 8
// 0083cd9e  e86d03f7ff           call 0x7ad110
// 0083cda3  6a1e                 push 0x1e
// 0083cda5  8bcf                 mov ecx, edi
// 0083cda7  8bf0                 mov esi, eax
// 0083cda9  e86203f7ff           call 0x7ad110
// 0083cdae  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083cdb2  50                   push eax
// 0083cdb3  8d442410             lea eax, [esp + 0x10]
// 0083cdb7  50                   push eax
// 0083cdb8  8bcf                 mov ecx, edi
// 0083cdba  e87fb9f6ff           call 0x7a873e
// 0083cdbf  56                   push esi
// 0083cdc0  56                   push esi
// 0083cdc1  8d4c2414             lea ecx, [esp + 0x14]
// 0083cdc5  51                   push ecx
// 0083cdc6  8bcf                 mov ecx, edi
// 0083cdc8  e86bb9f6ff           call 0x7a8738
// 0083cdcd  8b5704               mov edx, dword ptr [edi + 4]
// 0083cdd0  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 0083cdd6  56                   push esi
// 0083cdd7  6a01                 push 1
// 0083cdd9  6a01                 push 1
// 0083cddb  52                   push edx
// 0083cddc  ffd3                 call ebx
// 0083cdde  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083cde2  8b4f04               mov ecx, dword ptr [edi + 4]
// 0083cde5  56                   push esi
// 0083cde6  6a01                 push 1
// 0083cde8  83c0fe               add eax, -2
// 0083cdeb  50                   push eax
// 0083cdec  51                   push ecx
// 0083cded  ffd3                 call ebx
// 0083cdef  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083cdf3  8b4704               mov eax, dword ptr [edi + 4]
// 0083cdf6  56                   push esi
// 0083cdf7  83c2fe               add edx, -2
// 0083cdfa  52                   push edx
// 0083cdfb  6a01                 push 1
// 0083cdfd  50                   push eax
// 0083cdfe  ffd3                 call ebx
// 0083ce00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083ce04  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083ce08  8b4704               mov eax, dword ptr [edi + 4]
// 0083ce0b  56                   push esi
// 0083ce0c  83c1fe               add ecx, -2
// 0083ce0f  51                   push ecx
// 0083ce10  83c2fe               add edx, -2
// 0083ce13  52                   push edx
// 0083ce14  50                   push eax
// 0083ce15  ffd3                 call ebx
// 0083ce17  5f                   pop edi
// 0083ce18  5e                   pop esi
// 0083ce19  5b                   pop ebx
// 0083ce1a  83c410               add esp, 0x10
// 0083ce1d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
