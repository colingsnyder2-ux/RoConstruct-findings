// roc 2012-06 00a52eb0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageSelected  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52eb0
//
// 00a52eb0  8b542408             mov edx, dword ptr [esp + 8]
// 00a52eb4  8b4260               mov eax, dword ptr [edx + 0x60]
// 00a52eb7  56                   push esi
// 00a52eb8  57                   push edi
// 00a52eb9  395004               cmp dword ptr [eax + 4], edx
// 00a52ebc  7438                 je 0xa52ef6
// 00a52ebe  395008               cmp dword ptr [eax + 8], edx
// 00a52ec1  7433                 je 0xa52ef6
// 00a52ec3  8b7a44               mov edi, dword ptr [edx + 0x44]
// 00a52ec6  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a52ec9  8b31                 mov esi, dword ptr [ecx]
// 00a52ecb  6a01                 push 1
// 00a52ecd  83ec10               sub esp, 0x10
// 00a52ed0  8bc4                 mov eax, esp
// 00a52ed2  8938                 mov dword ptr [eax], edi
// 00a52ed4  8b7a48               mov edi, dword ptr [edx + 0x48]
// 00a52ed7  897804               mov dword ptr [eax + 4], edi
// 00a52eda  8b7a4c               mov edi, dword ptr [edx + 0x4c]
// 00a52edd  897808               mov dword ptr [eax + 8], edi
// 00a52ee0  8b7a50               mov edi, dword ptr [edx + 0x50]
// 00a52ee3  89780c               mov dword ptr [eax + 0xc], edi
// 00a52ee6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a52eea  52                   push edx
// 00a52eeb  8b5668               mov edx, dword ptr [esi + 0x68]
// 00a52eee  50                   push eax
// 00a52eef  ffd2                 call edx
// 00a52ef1  5f                   pop edi
// 00a52ef2  5e                   pop esi
// 00a52ef3  c20800               ret 8
// 00a52ef6  5f                   pop edi
// 00a52ef7  5e                   pop esi
// 00a52ef8  89542408             mov dword ptr [esp + 8], edx
// 00a52efc  e98ff8ffff           jmp 0xa52790
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
