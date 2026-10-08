// roc 2011-06 00899b50  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00899b50
//
// 00899b50  83ec40               sub esp, 0x40
// 00899b53  57                   push edi
// 00899b54  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00899b58  85ff                 test edi, edi
// 00899b5a  0f84d3000000         je 0x899c33
// 00899b60  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 00899b66  85c0                 test eax, eax
// 00899b68  0f84c5000000         je 0x899c33
// 00899b6e  56                   push esi
// 00899b6f  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 00899b75  85f6                 test esi, esi
// 00899b77  0f84b5000000         je 0x899c32
// 00899b7d  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00899b84  0f84a8000000         je 0x899c32
// 00899b8a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00899b8d  53                   push ebx
// 00899b8e  8b1d5c1ca400         mov ebx, dword ptr [0xa41c5c]
// 00899b94  8d44243c             lea eax, [esp + 0x3c]
// 00899b98  50                   push eax
// 00899b99  51                   push ecx
// 00899b9a  ffd3                 call ebx
// 00899b9c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 00899ba2  8d54241c             lea edx, [esp + 0x1c]
// 00899ba6  52                   push edx
// 00899ba7  e83428f7ff           call 0x80c3e0
// 00899bac  8d44241c             lea eax, [esp + 0x1c]
// 00899bb0  50                   push eax
// 00899bb1  8bce                 mov ecx, esi
// 00899bb3  e8460af7ff           call 0x80a5fe
// 00899bb8  8b5720               mov edx, dword ptr [edi + 0x20]
// 00899bbb  8d4c242c             lea ecx, [esp + 0x2c]
// 00899bbf  51                   push ecx
// 00899bc0  52                   push edx
// 00899bc1  ffd3                 call ebx
// 00899bc3  8d44241c             lea eax, [esp + 0x1c]
// 00899bc7  50                   push eax
// 00899bc8  8d4c2430             lea ecx, [esp + 0x30]
// 00899bcc  51                   push ecx
// 00899bcd  8d542414             lea edx, [esp + 0x14]
// 00899bd1  52                   push edx
// 00899bd2  ff15fc1ba400         call dword ptr [0xa41bfc]
// 00899bd8  5b                   pop ebx
// 00899bd9  85c0                 test eax, eax
// 00899bdb  7455                 je 0x899c32
// 00899bdd  8d442408             lea eax, [esp + 8]
// 00899be1  50                   push eax
// 00899be2  8bcf                 mov ecx, edi
// 00899be4  e81d14f7ff           call 0x80b006
// 00899be9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00899bed  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00899bf1  8b35e41ba400         mov esi, dword ptr [0xa41be4]
// 00899bf7  83f901               cmp ecx, 1
// 00899bfa  7e0b                 jle 0x899c07
// 00899bfc  6a00                 push 0
// 00899bfe  6aff                 push -1
// 00899c00  8d542410             lea edx, [esp + 0x10]
// 00899c04  52                   push edx
// 00899c05  ffd6                 call esi
// 00899c07  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899c0b  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00899c0f  83f801               cmp eax, 1
// 00899c12  7e0b                 jle 0x899c1f
// 00899c14  6aff                 push -1
// 00899c16  6a00                 push 0
// 00899c18  8d4c2410             lea ecx, [esp + 0x10]
// 00899c1c  51                   push ecx
// 00899c1d  ffd6                 call esi
// 00899c1f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00899c23  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00899c27  52                   push edx
// 00899c28  8d44240c             lea eax, [esp + 0xc]
// 00899c2c  50                   push eax
// 00899c2d  e8ee11f7ff           call 0x80ae20
// 00899c32  5e                   pop esi
// 00899c33  5f                   pop edi
// 00899c34  83c440               add esp, 0x40
// 00899c37  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
