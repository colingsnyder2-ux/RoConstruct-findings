// roc 2008-06 00740030  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00740030
//
// 00740030  83ec40               sub esp, 0x40
// 00740033  57                   push edi
// 00740034  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00740038  85ff                 test edi, edi
// 0074003a  0f84d3000000         je 0x740113
// 00740040  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 00740046  85c0                 test eax, eax
// 00740048  0f84c5000000         je 0x740113
// 0074004e  56                   push esi
// 0074004f  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 00740055  85f6                 test esi, esi
// 00740057  0f84b5000000         je 0x740112
// 0074005d  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00740064  0f84a8000000         je 0x740112
// 0074006a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0074006d  53                   push ebx
// 0074006e  8b1d342e8000         mov ebx, dword ptr [0x802e34]
// 00740074  8d44243c             lea eax, [esp + 0x3c]
// 00740078  50                   push eax
// 00740079  51                   push ecx
// 0074007a  ffd3                 call ebx
// 0074007c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 00740082  8d54241c             lea edx, [esp + 0x1c]
// 00740086  52                   push edx
// 00740087  e88426f6ff           call 0x6a2710
// 0074008c  8d44241c             lea eax, [esp + 0x1c]
// 00740090  50                   push eax
// 00740091  8bce                 mov ecx, esi
// 00740093  e89a0bf6ff           call 0x6a0c32
// 00740098  8b5720               mov edx, dword ptr [edi + 0x20]
// 0074009b  8d4c242c             lea ecx, [esp + 0x2c]
// 0074009f  51                   push ecx
// 007400a0  52                   push edx
// 007400a1  ffd3                 call ebx
// 007400a3  8d44241c             lea eax, [esp + 0x1c]
// 007400a7  50                   push eax
// 007400a8  8d4c2430             lea ecx, [esp + 0x30]
// 007400ac  51                   push ecx
// 007400ad  8d542414             lea edx, [esp + 0x14]
// 007400b1  52                   push edx
// 007400b2  ff155c2b8000         call dword ptr [0x802b5c]
// 007400b8  5b                   pop ebx
// 007400b9  85c0                 test eax, eax
// 007400bb  7455                 je 0x740112
// 007400bd  8d442408             lea eax, [esp + 8]
// 007400c1  50                   push eax
// 007400c2  8bcf                 mov ecx, edi
// 007400c4  e8d313f6ff           call 0x6a149c
// 007400c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007400cd  2b4c2408             sub ecx, dword ptr [esp + 8]
// 007400d1  8b35282d8000         mov esi, dword ptr [0x802d28]
// 007400d7  83f901               cmp ecx, 1
// 007400da  7e0b                 jle 0x7400e7
// 007400dc  6a00                 push 0
// 007400de  6aff                 push -1
// 007400e0  8d542410             lea edx, [esp + 0x10]
// 007400e4  52                   push edx
// 007400e5  ffd6                 call esi
// 007400e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 007400eb  2b44240c             sub eax, dword ptr [esp + 0xc]
// 007400ef  83f801               cmp eax, 1
// 007400f2  7e0b                 jle 0x7400ff
// 007400f4  6aff                 push -1
// 007400f6  6a00                 push 0
// 007400f8  8d4c2410             lea ecx, [esp + 0x10]
// 007400fc  51                   push ecx
// 007400fd  ffd6                 call esi
// 007400ff  8b542454             mov edx, dword ptr [esp + 0x54]
// 00740103  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00740107  52                   push edx
// 00740108  8d44240c             lea eax, [esp + 0xc]
// 0074010c  50                   push eax
// 0074010d  e84c12f6ff           call 0x6a135e
// 00740112  5e                   pop esi
// 00740113  5f                   pop edi
// 00740114  83c440               add esp, 0x40
// 00740117  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
