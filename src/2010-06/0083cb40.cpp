// roc 2010-06 0083cb40  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083cb40
//
// 0083cb40  83ec40               sub esp, 0x40
// 0083cb43  57                   push edi
// 0083cb44  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0083cb48  85ff                 test edi, edi
// 0083cb4a  0f84d3000000         je 0x83cc23
// 0083cb50  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 0083cb56  85c0                 test eax, eax
// 0083cb58  0f84c5000000         je 0x83cc23
// 0083cb5e  56                   push esi
// 0083cb5f  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 0083cb65  85f6                 test esi, esi
// 0083cb67  0f84b5000000         je 0x83cc22
// 0083cb6d  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 0083cb74  0f84a8000000         je 0x83cc22
// 0083cb7a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0083cb7d  53                   push ebx
// 0083cb7e  8b1d3cbc9e00         mov ebx, dword ptr [0x9ebc3c]
// 0083cb84  8d44243c             lea eax, [esp + 0x3c]
// 0083cb88  50                   push eax
// 0083cb89  51                   push ecx
// 0083cb8a  ffd3                 call ebx
// 0083cb8c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 0083cb92  8d54241c             lea edx, [esp + 0x1c]
// 0083cb96  52                   push edx
// 0083cb97  e854d1f6ff           call 0x7a9cf0
// 0083cb9c  8d44241c             lea eax, [esp + 0x1c]
// 0083cba0  50                   push eax
// 0083cba1  8bce                 mov ecx, esi
// 0083cba3  e898b3f6ff           call 0x7a7f40
// 0083cba8  8b5720               mov edx, dword ptr [edi + 0x20]
// 0083cbab  8d4c242c             lea ecx, [esp + 0x2c]
// 0083cbaf  51                   push ecx
// 0083cbb0  52                   push edx
// 0083cbb1  ffd3                 call ebx
// 0083cbb3  8d44241c             lea eax, [esp + 0x1c]
// 0083cbb7  50                   push eax
// 0083cbb8  8d4c2430             lea ecx, [esp + 0x30]
// 0083cbbc  51                   push ecx
// 0083cbbd  8d542414             lea edx, [esp + 0x14]
// 0083cbc1  52                   push edx
// 0083cbc2  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 0083cbc8  5b                   pop ebx
// 0083cbc9  85c0                 test eax, eax
// 0083cbcb  7455                 je 0x83cc22
// 0083cbcd  8d442408             lea eax, [esp + 8]
// 0083cbd1  50                   push eax
// 0083cbd2  8bcf                 mov ecx, edi
// 0083cbd4  e839bdf6ff           call 0x7a8912
// 0083cbd9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083cbdd  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0083cbe1  8b35dcbb9e00         mov esi, dword ptr [0x9ebbdc]
// 0083cbe7  83f901               cmp ecx, 1
// 0083cbea  7e0b                 jle 0x83cbf7
// 0083cbec  6a00                 push 0
// 0083cbee  6aff                 push -1
// 0083cbf0  8d542410             lea edx, [esp + 0x10]
// 0083cbf4  52                   push edx
// 0083cbf5  ffd6                 call esi
// 0083cbf7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083cbfb  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0083cbff  83f801               cmp eax, 1
// 0083cc02  7e0b                 jle 0x83cc0f
// 0083cc04  6aff                 push -1
// 0083cc06  6a00                 push 0
// 0083cc08  8d4c2410             lea ecx, [esp + 0x10]
// 0083cc0c  51                   push ecx
// 0083cc0d  ffd6                 call esi
// 0083cc0f  8b542454             mov edx, dword ptr [esp + 0x54]
// 0083cc13  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0083cc17  52                   push edx
// 0083cc18  8d44240c             lea eax, [esp + 0xc]
// 0083cc1c  50                   push eax
// 0083cc1d  e81cbbf6ff           call 0x7a873e
// 0083cc22  5e                   pop esi
// 0083cc23  5f                   pop edi
// 0083cc24  83c440               add esp, 0x40
// 0083cc27  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
