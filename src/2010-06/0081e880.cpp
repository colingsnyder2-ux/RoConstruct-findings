// roc 2010-06 0081e880  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e880
//
// 0081e880  56                   push esi
// 0081e881  8bf1                 mov esi, ecx
// 0081e883  e8987a0700           call 0x896320
// 0081e888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081e88c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081e890  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0081e896  c7065c38a600         mov dword ptr [esi], 0xa6385c
// 0081e89c  c746544c38a600       mov dword ptr [esi + 0x54], 0xa6384c
// 0081e8a3  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0081e8a9  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 0081e8b3  8bc6                 mov eax, esi
// 0081e8b5  5e                   pop esi
// 0081e8b6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
