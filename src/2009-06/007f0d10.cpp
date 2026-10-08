// roc 2009-06 007f0d10  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0d10
//
// 007f0d10  83ec10               sub esp, 0x10
// 007f0d13  56                   push esi
// 007f0d14  8bf1                 mov esi, ecx
// 007f0d16  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f0d19  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007f0d1c  83c04c               add eax, 0x4c
// 007f0d1f  57                   push edi
// 007f0d20  83f9ff               cmp ecx, -1
// 007f0d23  7505                 jne 0x7f0d2a
// 007f0d25  8b4004               mov eax, dword ptr [eax + 4]
// 007f0d28  eb02                 jmp 0x7f0d2c
// 007f0d2a  8bc1                 mov eax, ecx
// 007f0d2c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f0d30  50                   push eax
// 007f0d31  8d442424             lea eax, [esp + 0x24]
// 007f0d35  50                   push eax
// 007f0d36  8bcf                 mov ecx, edi
// 007f0d38  e8938af2ff           call 0x7197d0
// 007f0d3d  e8de3df6ff           call 0x754b20
// 007f0d42  6a14                 push 0x14
// 007f0d44  8bc8                 mov ecx, eax
// 007f0d46  e85535f6ff           call 0x7542a0
// 007f0d4b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f0d4e  8b5154               mov edx, dword ptr [ecx + 0x54]
// 007f0d51  83c14c               add ecx, 0x4c
// 007f0d54  83faff               cmp edx, -1
// 007f0d57  7505                 jne 0x7f0d5e
// 007f0d59  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f0d5c  eb02                 jmp 0x7f0d60
// 007f0d5e  8bca                 mov ecx, edx
// 007f0d60  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f0d64  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007f0d68  6a01                 push 1
// 007f0d6a  50                   push eax
// 007f0d6b  89542410             mov dword ptr [esp + 0x10], edx
// 007f0d6f  8d56fe               lea edx, [esi - 2]
// 007f0d72  51                   push ecx
// 007f0d73  8d442414             lea eax, [esp + 0x14]
// 007f0d77  89542418             mov dword ptr [esp + 0x18], edx
// 007f0d7b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007f0d7f  50                   push eax
// 007f0d80  4e                   dec esi
// 007f0d81  57                   push edi
// 007f0d82  89542424             mov dword ptr [esp + 0x24], edx
// 007f0d86  89742428             mov dword ptr [esp + 0x28], esi
// 007f0d8a  e8e117f8ff           call 0x772570
// 007f0d8f  8bc8                 mov ecx, eax
// 007f0d91  e80a18f8ff           call 0x7725a0
// 007f0d96  5f                   pop edi
// 007f0d97  5e                   pop esi
// 007f0d98  83c410               add esp, 0x10
// 007f0d9b  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
