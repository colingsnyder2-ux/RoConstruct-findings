// roc 2009-12 008d5ac0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPageSelected  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d5ac0
//
// 008d5ac0  8b542408             mov edx, dword ptr [esp + 8]
// 008d5ac4  8b4260               mov eax, dword ptr [edx + 0x60]
// 008d5ac7  56                   push esi
// 008d5ac8  57                   push edi
// 008d5ac9  395004               cmp dword ptr [eax + 4], edx
// 008d5acc  7438                 je 0x8d5b06
// 008d5ace  395008               cmp dword ptr [eax + 8], edx
// 008d5ad1  7433                 je 0x8d5b06
// 008d5ad3  8b7a44               mov edi, dword ptr [edx + 0x44]
// 008d5ad6  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008d5ad9  8b31                 mov esi, dword ptr [ecx]
// 008d5adb  6a01                 push 1
// 008d5add  83ec10               sub esp, 0x10
// 008d5ae0  8bc4                 mov eax, esp
// 008d5ae2  8938                 mov dword ptr [eax], edi
// 008d5ae4  8b7a48               mov edi, dword ptr [edx + 0x48]
// 008d5ae7  897804               mov dword ptr [eax + 4], edi
// 008d5aea  8b7a4c               mov edi, dword ptr [edx + 0x4c]
// 008d5aed  897808               mov dword ptr [eax + 8], edi
// 008d5af0  8b7a50               mov edi, dword ptr [edx + 0x50]
// 008d5af3  89780c               mov dword ptr [eax + 0xc], edi
// 008d5af6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5afa  52                   push edx
// 008d5afb  8b5668               mov edx, dword ptr [esi + 0x68]
// 008d5afe  50                   push eax
// 008d5aff  ffd2                 call edx
// 008d5b01  5f                   pop edi
// 008d5b02  5e                   pop esi
// 008d5b03  c20800               ret 8
// 008d5b06  5f                   pop edi
// 008d5b07  5e                   pop esi
// 008d5b08  89542408             mov dword ptr [esp + 8], edx
// 008d5b0c  e98ff8ffff           jmp 0x8d53a0
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp