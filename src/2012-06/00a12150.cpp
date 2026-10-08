// roc 2012-06 00a12150  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a12150
//
// 00a12150  83ec40               sub esp, 0x40
// 00a12153  57                   push edi
// 00a12154  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a12158  85ff                 test edi, edi
// 00a1215a  0f84d3000000         je 0xa12233
// 00a12160  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 00a12166  85c0                 test eax, eax
// 00a12168  0f84c5000000         je 0xa12233
// 00a1216e  56                   push esi
// 00a1216f  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 00a12175  85f6                 test esi, esi
// 00a12177  0f84b5000000         je 0xa12232
// 00a1217d  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00a12184  0f84a8000000         je 0xa12232
// 00a1218a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a1218d  53                   push ebx
// 00a1218e  8b1df83ab200         mov ebx, dword ptr [0xb23af8]
// 00a12194  8d44243c             lea eax, [esp + 0x3c]
// 00a12198  50                   push eax
// 00a12199  51                   push ecx
// 00a1219a  ffd3                 call ebx
// 00a1219c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 00a121a2  8d54241c             lea edx, [esp + 0x1c]
// 00a121a6  52                   push edx
// 00a121a7  e8c424f7ff           call 0x984670
// 00a121ac  8d44241c             lea eax, [esp + 0x1c]
// 00a121b0  50                   push eax
// 00a121b1  8bce                 mov ecx, esi
// 00a121b3  e8f604f7ff           call 0x9826ae
// 00a121b8  8b5720               mov edx, dword ptr [edi + 0x20]
// 00a121bb  8d4c242c             lea ecx, [esp + 0x2c]
// 00a121bf  51                   push ecx
// 00a121c0  52                   push edx
// 00a121c1  ffd3                 call ebx
// 00a121c3  8d44241c             lea eax, [esp + 0x1c]
// 00a121c7  50                   push eax
// 00a121c8  8d4c2430             lea ecx, [esp + 0x30]
// 00a121cc  51                   push ecx
// 00a121cd  8d542414             lea edx, [esp + 0x14]
// 00a121d1  52                   push edx
// 00a121d2  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a121d8  5b                   pop ebx
// 00a121d9  85c0                 test eax, eax
// 00a121db  7455                 je 0xa12232
// 00a121dd  8d442408             lea eax, [esp + 8]
// 00a121e1  50                   push eax
// 00a121e2  8bcf                 mov ecx, edi
// 00a121e4  e8b50ef7ff           call 0x98309e
// 00a121e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a121ed  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00a121f1  8b354c3bb200         mov esi, dword ptr [0xb23b4c]
// 00a121f7  83f901               cmp ecx, 1
// 00a121fa  7e0b                 jle 0xa12207
// 00a121fc  6a00                 push 0
// 00a121fe  6aff                 push -1
// 00a12200  8d542410             lea edx, [esp + 0x10]
// 00a12204  52                   push edx
// 00a12205  ffd6                 call esi
// 00a12207  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a1220b  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00a1220f  83f801               cmp eax, 1
// 00a12212  7e0b                 jle 0xa1221f
// 00a12214  6aff                 push -1
// 00a12216  6a00                 push 0
// 00a12218  8d4c2410             lea ecx, [esp + 0x10]
// 00a1221c  51                   push ecx
// 00a1221d  ffd6                 call esi
// 00a1221f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a12223  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a12227  52                   push edx
// 00a12228  8d44240c             lea eax, [esp + 0xc]
// 00a1222c  50                   push eax
// 00a1222d  e87a0cf7ff           call 0x982eac
// 00a12232  5e                   pop esi
// 00a12233  5f                   pop edi
// 00a12234  83c440               add esp, 0x40
// 00a12237  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
