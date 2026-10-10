// roc 2008-06 0079c960  unit: CXTPTabPaintManager::CColorSetDefault  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c960
//
// 0079c960  56                   push esi
// 0079c961  57                   push edi
// 0079c962  e8d933f4ff           call 0x6dfd40
// 0079c967  6a10                 push 0x10
// 0079c969  8bc8                 mov ecx, eax
// 0079c96b  e8b02bf4ff           call 0x6df520
// 0079c970  8bf0                 mov esi, eax
// 0079c972  e8c933f4ff           call 0x6dfd40
// 0079c977  6a14                 push 0x14
// 0079c979  8bc8                 mov ecx, eax
// 0079c97b  e8a02bf4ff           call 0x6df520
// 0079c980  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c984  83792000             cmp dword ptr [ecx + 0x20], 0
// 0079c988  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079c98c  7437                 je 0x79c9c5
// 0079c98e  83792400             cmp dword ptr [ecx + 0x24], 0
// 0079c992  741b                 je 0x79c9af
// 0079c994  50                   push eax
// 0079c995  56                   push esi
// 0079c996  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0079c99a  56                   push esi
// 0079c99b  8bcf                 mov ecx, edi
// 0079c99d  e8b649f0ff           call 0x6a1358
// 0079c9a2  6a01                 push 1
// 0079c9a4  6a01                 push 1
// 0079c9a6  56                   push esi
// 0079c9a7  ff15682d8000         call dword ptr [0x802d68]
// 0079c9ad  eb16                 jmp 0x79c9c5
// 0079c9af  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0079c9b2  394a10               cmp dword ptr [edx + 0x10], ecx
// 0079c9b5  750e                 jne 0x79c9c5
// 0079c9b7  56                   push esi
// 0079c9b8  50                   push eax
// 0079c9b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079c9bd  50                   push eax
// 0079c9be  8bcf                 mov ecx, edi
// 0079c9c0  e89349f0ff           call 0x6a1358
// 0079c9c5  e87633f4ff           call 0x6dfd40
// 0079c9ca  6a12                 push 0x12
// 0079c9cc  8bc8                 mov ecx, eax
// 0079c9ce  e84d2bf4ff           call 0x6df520
// 0079c9d3  8b17                 mov edx, dword ptr [edi]
// 0079c9d5  50                   push eax
// 0079c9d6  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079c9d9  8bcf                 mov ecx, edi
// 0079c9db  ffd0                 call eax
// 0079c9dd  5f                   pop edi
// 0079c9de  5e                   pop esi
// 0079c9df  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetDefault@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
