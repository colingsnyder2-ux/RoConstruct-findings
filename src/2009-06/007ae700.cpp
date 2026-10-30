// roc 2009-06 007ae700  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ae700
//
// 007ae700  83ec40               sub esp, 0x40
// 007ae703  57                   push edi
// 007ae704  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007ae708  85ff                 test edi, edi
// 007ae70a  0f84d3000000         je 0x7ae7e3
// 007ae710  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 007ae716  85c0                 test eax, eax
// 007ae718  0f84c5000000         je 0x7ae7e3
// 007ae71e  56                   push esi
// 007ae71f  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 007ae725  85f6                 test esi, esi
// 007ae727  0f84b5000000         je 0x7ae7e2
// 007ae72d  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 007ae734  0f84a8000000         je 0x7ae7e2
// 007ae73a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007ae73d  53                   push ebx
// 007ae73e  8b1df4ed8900         mov ebx, dword ptr [0x89edf4]
// 007ae744  8d44243c             lea eax, [esp + 0x3c]
// 007ae748  50                   push eax
// 007ae749  51                   push ecx
// 007ae74a  ffd3                 call ebx
// 007ae74c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 007ae752  8d54241c             lea edx, [esp + 0x1c]
// 007ae756  52                   push edx
// 007ae757  e8b4c4f6ff           call 0x71ac10
// 007ae75c  8d44241c             lea eax, [esp + 0x1c]
// 007ae760  50                   push eax
// 007ae761  8bce                 mov ecx, esi
// 007ae763  e86aa8f6ff           call 0x718fd2
// 007ae768  8b5720               mov edx, dword ptr [edi + 0x20]
// 007ae76b  8d4c242c             lea ecx, [esp + 0x2c]
// 007ae76f  51                   push ecx
// 007ae770  52                   push edx
// 007ae771  ffd3                 call ebx
// 007ae773  8d44241c             lea eax, [esp + 0x1c]
// 007ae777  50                   push eax
// 007ae778  8d4c2430             lea ecx, [esp + 0x30]
// 007ae77c  51                   push ecx
// 007ae77d  8d542414             lea edx, [esp + 0x14]
// 007ae781  52                   push edx
// 007ae782  ff15f0ee8900         call dword ptr [0x89eef0]
// 007ae788  5b                   pop ebx
// 007ae789  85c0                 test eax, eax
// 007ae78b  7455                 je 0x7ae7e2
// 007ae78d  8d442408             lea eax, [esp + 8]
// 007ae791  50                   push eax
// 007ae792  8bcf                 mov ecx, edi
// 007ae794  e80bb2f6ff           call 0x7199a4
// 007ae799  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ae79d  2b4c2408             sub ecx, dword ptr [esp + 8]
// 007ae7a1  8b35bced8900         mov esi, dword ptr [0x89edbc]
// 007ae7a7  83f901               cmp ecx, 1
// 007ae7aa  7e0b                 jle 0x7ae7b7
// 007ae7ac  6a00                 push 0
// 007ae7ae  6aff                 push -1
// 007ae7b0  8d542410             lea edx, [esp + 0x10]
// 007ae7b4  52                   push edx
// 007ae7b5  ffd6                 call esi
// 007ae7b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ae7bb  2b44240c             sub eax, dword ptr [esp + 0xc]
// 007ae7bf  83f801               cmp eax, 1
// 007ae7c2  7e0b                 jle 0x7ae7cf
// 007ae7c4  6aff                 push -1
// 007ae7c6  6a00                 push 0
// 007ae7c8  8d4c2410             lea ecx, [esp + 0x10]
// 007ae7cc  51                   push ecx
// 007ae7cd  ffd6                 call esi
// 007ae7cf  8b542454             mov edx, dword ptr [esp + 0x54]
// 007ae7d3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ae7d7  52                   push edx
// 007ae7d8  8d44240c             lea eax, [esp + 0xc]
// 007ae7dc  50                   push eax
// 007ae7dd  e8eeaff6ff           call 0x7197d0
// 007ae7e2  5e                   pop esi
// 007ae7e3  5f                   pop edi
// 007ae7e4  83c440               add esp, 0x40
// 007ae7e7  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
