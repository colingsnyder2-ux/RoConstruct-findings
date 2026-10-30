// roc 2009-12 0086aa90  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086aa90
//
// 0086aa90  56                   push esi
// 0086aa91  6a00                 push 0
// 0086aa93  8bf1                 mov esi, ecx
// 0086aa95  e8062dfeff           call 0x84d7a0
// 0086aa9a  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0086aaa0  8b06                 mov eax, dword ptr [esi]
// 0086aaa2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0086aaa6  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0086aaac  83c404               add esp, 4
// 0086aaaf  51                   push ecx
// 0086aab0  52                   push edx
// 0086aab1  8bce                 mov ecx, esi
// 0086aab3  ffd0                 call eax
// 0086aab5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086aab8  6a00                 push 0
// 0086aaba  6a00                 push 0
// 0086aabc  6a10                 push 0x10
// 0086aabe  51                   push ecx
// 0086aabf  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0086aac5  5e                   pop esi
// 0086aac6  c20400               ret 4
// copied from an identical function in another client (function ?EndSelection@CXTColorPopup@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp