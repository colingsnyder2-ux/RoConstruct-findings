// roc 2010-06 0087fa60  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087fa60
//
// 0087fa60  83ec10               sub esp, 0x10
// 0087fa63  56                   push esi
// 0087fa64  8bf1                 mov esi, ecx
// 0087fa66  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087fa69  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0087fa6c  83c04c               add eax, 0x4c
// 0087fa6f  57                   push edi
// 0087fa70  83f9ff               cmp ecx, -1
// 0087fa73  7505                 jne 0x87fa7a
// 0087fa75  8b4004               mov eax, dword ptr [eax + 4]
// 0087fa78  eb02                 jmp 0x87fa7c
// 0087fa7a  8bc1                 mov eax, ecx
// 0087fa7c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0087fa80  50                   push eax
// 0087fa81  8d442424             lea eax, [esp + 0x24]
// 0087fa85  50                   push eax
// 0087fa86  8bcf                 mov ecx, edi
// 0087fa88  e8b18cf2ff           call 0x7a873e
// 0087fa8d  e88e40f6ff           call 0x7e3b20
// 0087fa92  6a14                 push 0x14
// 0087fa94  8bc8                 mov ecx, eax
// 0087fa96  e81538f6ff           call 0x7e32b0
// 0087fa9b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087fa9e  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0087faa1  83c14c               add ecx, 0x4c
// 0087faa4  83faff               cmp edx, -1
// 0087faa7  7505                 jne 0x87faae
// 0087faa9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087faac  eb02                 jmp 0x87fab0
// 0087faae  8bca                 mov ecx, edx
// 0087fab0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087fab4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0087fab8  6a01                 push 1
// 0087faba  50                   push eax
// 0087fabb  89542410             mov dword ptr [esp + 0x10], edx
// 0087fabf  8d56fe               lea edx, [esi - 2]
// 0087fac2  51                   push ecx
// 0087fac3  8d442414             lea eax, [esp + 0x14]
// 0087fac7  89542418             mov dword ptr [esp + 0x18], edx
// 0087facb  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087facf  50                   push eax
// 0087fad0  4e                   dec esi
// 0087fad1  57                   push edi
// 0087fad2  89542424             mov dword ptr [esp + 0x24], edx
// 0087fad6  89742428             mov dword ptr [esp + 0x28], esi
// 0087fada  e82118f8ff           call 0x801300
// 0087fadf  8bc8                 mov ecx, eax
// 0087fae1  e84a18f8ff           call 0x801330
// 0087fae6  5f                   pop edi
// 0087fae7  5e                   pop esi
// 0087fae8  83c410               add esp, 0x10
// 0087faeb  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
