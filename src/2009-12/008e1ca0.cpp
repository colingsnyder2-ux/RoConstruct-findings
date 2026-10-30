// roc 2009-12 008e1ca0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1ca0
//
// 008e1ca0  8b442404             mov eax, dword ptr [esp + 4]
// 008e1ca4  56                   push esi
// 008e1ca5  8bf1                 mov esi, ecx
// 008e1ca7  85c0                 test eax, eax
// 008e1ca9  7d14                 jge 0x8e1cbf
// 008e1cab  f686a400000010       test byte ptr [esi + 0xa4], 0x10
// 008e1cb2  7504                 jne 0x8e1cb8
// 008e1cb4  33c0                 xor eax, eax
// 008e1cb6  eb07                 jmp 0x8e1cbf
// 008e1cb8  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 008e1cbe  48                   dec eax
// 008e1cbf  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 008e1cc5  3bc1                 cmp eax, ecx
// 008e1cc7  7c03                 jl 0x8e1ccc
// 008e1cc9  8d41ff               lea eax, [ecx - 1]
// 008e1ccc  50                   push eax
// 008e1ccd  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008e1cd3  e8486cf5ff           call 0x838920
// 008e1cd8  85c0                 test eax, eax
// 008e1cda  7410                 je 0x8e1cec
// 008e1cdc  8b16                 mov edx, dword ptr [esi]
// 008e1cde  8b4008               mov eax, dword ptr [eax + 8]
// 008e1ce1  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008e1ce7  50                   push eax
// 008e1ce8  8bce                 mov ecx, esi
// 008e1cea  ffd2                 call edx
// 008e1cec  5e                   pop esi
// 008e1ced  c20400               ret 4
// copied from an identical function in another client (function ?SetCurSel@CXTColorSelectorCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp