// roc 2008-06 00782850  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageSelected  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00782850
//
// 00782850  8b542408             mov edx, dword ptr [esp + 8]
// 00782854  8b4260               mov eax, dword ptr [edx + 0x60]
// 00782857  56                   push esi
// 00782858  57                   push edi
// 00782859  395004               cmp dword ptr [eax + 4], edx
// 0078285c  7438                 je 0x782896
// 0078285e  395008               cmp dword ptr [eax + 8], edx
// 00782861  7433                 je 0x782896
// 00782863  8b7a44               mov edi, dword ptr [edx + 0x44]
// 00782866  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00782869  8b31                 mov esi, dword ptr [ecx]
// 0078286b  6a01                 push 1
// 0078286d  83ec10               sub esp, 0x10
// 00782870  8bc4                 mov eax, esp
// 00782872  8938                 mov dword ptr [eax], edi
// 00782874  8b7a48               mov edi, dword ptr [edx + 0x48]
// 00782877  897804               mov dword ptr [eax + 4], edi
// 0078287a  8b7a4c               mov edi, dword ptr [edx + 0x4c]
// 0078287d  897808               mov dword ptr [eax + 8], edi
// 00782880  8b7a50               mov edi, dword ptr [edx + 0x50]
// 00782883  89780c               mov dword ptr [eax + 0xc], edi
// 00782886  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078288a  52                   push edx
// 0078288b  8b5668               mov edx, dword ptr [esi + 0x68]
// 0078288e  50                   push eax
// 0078288f  ffd2                 call edx
// 00782891  5f                   pop edi
// 00782892  5e                   pop esi
// 00782893  c20800               ret 8
// 00782896  5f                   pop edi
// 00782897  5e                   pop esi
// 00782898  89542408             mov dword ptr [esp + 8], edx
// 0078289c  e98ff8ffff           jmp 0x782130
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
