// roc 2009-12 008cb890  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb890
//
// 008cb890  83ec10               sub esp, 0x10
// 008cb893  56                   push esi
// 008cb894  8bf1                 mov esi, ecx
// 008cb896  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cb899  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008cb89c  83c04c               add eax, 0x4c
// 008cb89f  57                   push edi
// 008cb8a0  83f9ff               cmp ecx, -1
// 008cb8a3  7505                 jne 0x8cb8aa
// 008cb8a5  8b4004               mov eax, dword ptr [eax + 4]
// 008cb8a8  eb02                 jmp 0x8cb8ac
// 008cb8aa  8bc1                 mov eax, ecx
// 008cb8ac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008cb8b0  50                   push eax
// 008cb8b1  8d442424             lea eax, [esp + 0x24]
// 008cb8b5  50                   push eax
// 008cb8b6  8bcf                 mov ecx, edi
// 008cb8b8  e8418df2ff           call 0x7f45fe
// 008cb8bd  e80e41f6ff           call 0x82f9d0
// 008cb8c2  6a14                 push 0x14
// 008cb8c4  8bc8                 mov ecx, eax
// 008cb8c6  e83538f6ff           call 0x82f100
// 008cb8cb  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb8ce  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008cb8d1  83c14c               add ecx, 0x4c
// 008cb8d4  83faff               cmp edx, -1
// 008cb8d7  7505                 jne 0x8cb8de
// 008cb8d9  8b4904               mov ecx, dword ptr [ecx + 4]
// 008cb8dc  eb02                 jmp 0x8cb8e0
// 008cb8de  8bca                 mov ecx, edx
// 008cb8e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008cb8e4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008cb8e8  6a01                 push 1
// 008cb8ea  50                   push eax
// 008cb8eb  89542410             mov dword ptr [esp + 0x10], edx
// 008cb8ef  8d56fe               lea edx, [esi - 2]
// 008cb8f2  51                   push ecx
// 008cb8f3  8d442414             lea eax, [esp + 0x14]
// 008cb8f7  89542418             mov dword ptr [esp + 0x18], edx
// 008cb8fb  8b542434             mov edx, dword ptr [esp + 0x34]
// 008cb8ff  50                   push eax
// 008cb900  4e                   dec esi
// 008cb901  57                   push edi
// 008cb902  89542424             mov dword ptr [esp + 0x24], edx
// 008cb906  89742428             mov dword ptr [esp + 0x28], esi
// 008cb90a  e89119f8ff           call 0x84d2a0
// 008cb90f  8bc8                 mov ecx, eax
// 008cb911  e8ba19f8ff           call 0x84d2d0
// 008cb916  5f                   pop edi
// 008cb917  5e                   pop esi
// 008cb918  83c410               add esp, 0x10
// 008cb91b  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
