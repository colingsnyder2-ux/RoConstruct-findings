// roc 2012-06 00418b70  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418b70
//
// 00418b70  56                   push esi
// 00418b71  8bf1                 mov esi, ecx
// 00418b73  837e4400             cmp dword ptr [esi + 0x44], 0
// 00418b77  7514                 jne 0x418b8d
// 00418b79  68386cb400           push 0xb46c38
// 00418b7e  e88dfeffff           call 0x418a10
// 00418b83  50                   push eax
// 00418b84  ff15b021b200         call dword ptr [0xb221b0]
// 00418b8a  894644               mov dword ptr [esi + 0x44], eax
// 00418b8d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00418b90  8b442408             mov eax, dword ptr [esp + 8]
// 00418b94  8908                 mov dword ptr [eax], ecx
// 00418b96  5e                   pop esi
// 00418b97  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?GetProcAddress_ImageList_AddMasked@CComCtlWrapper@@QAE?AUImageList_AddMasked_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
