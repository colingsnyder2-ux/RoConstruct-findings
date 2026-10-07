// roc 2012-06 00a670a0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a670a0
//
// 00a670a0  56                   push esi
// 00a670a1  8bf1                 mov esi, ecx
// 00a670a3  8d86b8000000         lea eax, [esi + 0xb8]
// 00a670a9  57                   push edi
// 00a670aa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a670ae  85c0                 test eax, eax
// 00a670b0  741b                 je 0xa670cd
// 00a670b2  83782000             cmp dword ptr [eax + 0x20], 0
// 00a670b6  7415                 je 0xa670cd
// 00a670b8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a670be  57                   push edi
// 00a670bf  6a00                 push 0
// 00a670c1  6807040000           push 0x407
// 00a670c6  50                   push eax
// 00a670c7  ff15043cb200         call dword ptr [0xb23c04]
// 00a670cd  57                   push edi
// 00a670ce  8bce                 mov ecx, esi
// 00a670d0  e839b6f1ff           call 0x98270e
// 00a670d5  5f                   pop edi
// 00a670d6  5e                   pop esi
// 00a670d7  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorSelectorCtrl.cpp (function ?PreTranslateMessage@CXTColorSelectorCtrl@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorSelectorCtrl.cpp
