// roc 2012-06 00a5ba50  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5ba50
//
// 00a5ba50  83ec10               sub esp, 0x10
// 00a5ba53  56                   push esi
// 00a5ba54  8bf1                 mov esi, ecx
// 00a5ba56  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5ba59  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a5ba5c  83c04c               add eax, 0x4c
// 00a5ba5f  57                   push edi
// 00a5ba60  83f9ff               cmp ecx, -1
// 00a5ba63  7505                 jne 0xa5ba6a
// 00a5ba65  8b4004               mov eax, dword ptr [eax + 4]
// 00a5ba68  eb02                 jmp 0xa5ba6c
// 00a5ba6a  8bc1                 mov eax, ecx
// 00a5ba6c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a5ba70  50                   push eax
// 00a5ba71  8d442424             lea eax, [esp + 0x24]
// 00a5ba75  50                   push eax
// 00a5ba76  8bcf                 mov ecx, edi
// 00a5ba78  e82f74f2ff           call 0x982eac
// 00a5ba7d  e8de1df6ff           call 0x9bd860
// 00a5ba82  6a14                 push 0x14
// 00a5ba84  8bc8                 mov ecx, eax
// 00a5ba86  e85515f6ff           call 0x9bcfe0
// 00a5ba8b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00a5ba8e  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00a5ba91  83c14c               add ecx, 0x4c
// 00a5ba94  83faff               cmp edx, -1
// 00a5ba97  7505                 jne 0xa5ba9e
// 00a5ba99  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a5ba9c  eb02                 jmp 0xa5baa0
// 00a5ba9e  8bca                 mov ecx, edx
// 00a5baa0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5baa4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a5baa8  6a01                 push 1
// 00a5baaa  50                   push eax
// 00a5baab  89542410             mov dword ptr [esp + 0x10], edx
// 00a5baaf  8d56fe               lea edx, [esi - 2]
// 00a5bab2  51                   push ecx
// 00a5bab3  8d442414             lea eax, [esp + 0x14]
// 00a5bab7  89542418             mov dword ptr [esp + 0x18], edx
// 00a5babb  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5babf  50                   push eax
// 00a5bac0  4e                   dec esi
// 00a5bac1  57                   push edi
// 00a5bac2  89542424             mov dword ptr [esp + 0x24], edx
// 00a5bac6  89742428             mov dword ptr [esp + 0x28], esi
// 00a5baca  e8c1b6f7ff           call 0x9d7190
// 00a5bacf  8bc8                 mov ecx, eax
// 00a5bad1  e8eab6f7ff           call 0x9d71c0
// 00a5bad6  5f                   pop edi
// 00a5bad7  5e                   pop esi
// 00a5bad8  83c410               add esp, 0x10
// 00a5badb  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
