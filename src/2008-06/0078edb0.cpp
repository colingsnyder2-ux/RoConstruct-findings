// from server: 100% by auto
// roc 2008-06 0078edb0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078edb0
//
// 0078edb0  8b152cf29700         mov edx, dword ptr [0x97f22c]
// 0078edb6  56                   push esi
// 0078edb7  33c0                 xor eax, eax
// 0078edb9  57                   push edi
// 0078edba  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078edbe  85d2                 test edx, edx
// 0078edc0  7e18                 jle 0x78edda
// 0078edc2  8b3528f29700         mov esi, dword ptr [0x97f228]
// 0078edc8  85c0                 test eax, eax
// 0078edca  7c3c                 jl 0x78ee08
// 0078edcc  3bc2                 cmp eax, edx
// 0078edce  7d38                 jge 0x78ee08
// 0078edd0  3b3c86               cmp edi, dword ptr [esi + eax*4]
// 0078edd3  7429                 je 0x78edfe
// 0078edd5  40                   inc eax
// 0078edd6  3bc2                 cmp eax, edx
// 0078edd8  7cee                 jl 0x78edc8
// 0078edda  33c0                 xor eax, eax
// 0078eddc  f681a400000002       test byte ptr [ecx + 0xa4], 2
// 0078ede3  742b                 je 0x78ee10
// 0078ede5  3bb858b29600         cmp edi, dword ptr [eax + 0x96b258]
// 0078edeb  7411                 je 0x78edfe
// 0078eded  83c008               add eax, 8
// 0078edf0  3d40010000           cmp eax, 0x140
// 0078edf5  72ee                 jb 0x78ede5
// 0078edf7  5f                   pop edi
// 0078edf8  33c0                 xor eax, eax
// 0078edfa  5e                   pop esi
// 0078edfb  c20400               ret 4
// 0078edfe  5f                   pop edi
// 0078edff  b801000000           mov eax, 1
// 0078ee04  5e                   pop esi
// 0078ee05  c20400               ret 4
// 0078ee08  e8371bf1ff           call 0x6a0944
// 0078ee0d  8d4900               lea ecx, [ecx]
// 0078ee10  3bb8d8b19600         cmp edi, dword ptr [eax + 0x96b1d8]
// 0078ee16  74e6                 je 0x78edfe
// 0078ee18  83c008               add eax, 8
// 0078ee1b  3d80000000           cmp eax, 0x80
// 0078ee20  72ee                 jb 0x78ee10
// 0078ee22  5f                   pop edi
// 0078ee23  33c0                 xor eax, eax
// 0078ee25  5e                   pop esi
// 0078ee26  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrl.cpp (function ?LookUpColor@CXTColorSelectorCtrl@@IAEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp
