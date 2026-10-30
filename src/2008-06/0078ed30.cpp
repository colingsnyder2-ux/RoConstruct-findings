// from server: 100% by auto
// roc 2008-06 0078ed30  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ed30
//
// 0078ed30  56                   push esi
// 0078ed31  8bf1                 mov esi, ecx
// 0078ed33  8d86b8000000         lea eax, [esi + 0xb8]
// 0078ed39  57                   push edi
// 0078ed3a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078ed3e  85c0                 test eax, eax
// 0078ed40  741b                 je 0x78ed5d
// 0078ed42  83782000             cmp dword ptr [eax + 0x20], 0
// 0078ed46  7415                 je 0x78ed5d
// 0078ed48  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0078ed4e  57                   push edi
// 0078ed4f  6a00                 push 0
// 0078ed51  6807040000           push 0x407
// 0078ed56  50                   push eax
// 0078ed57  ff15142e8000         call dword ptr [0x802e14]
// 0078ed5d  57                   push edi
// 0078ed5e  8bce                 mov ecx, esi
// 0078ed60  e8331ff1ff           call 0x6a0c98
// 0078ed65  5f                   pop edi
// 0078ed66  5e                   pop esi
// 0078ed67  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrl.cpp (function ?PreTranslateMessage@CXTColorSelectorCtrl@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp
