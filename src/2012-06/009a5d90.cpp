// from server: 100% by auto
// roc 2012-06 009a5d90  unit: CXTPCommandBarsOptions  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5d90
//
// 009a5d90  56                   push esi
// 009a5d91  8bf1                 mov esi, ecx
// 009a5d93  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 009a5d97  7514                 jne 0x9a5dad
// 009a5d99  6808f7c000           push 0xc0f708
// 009a5d9e  e86d2ca7ff           call 0x418a10
// 009a5da3  50                   push eax
// 009a5da4  ff15b021b200         call dword ptr [0xb221b0]
// 009a5daa  89463c               mov dword ptr [esi + 0x3c], eax
// 009a5dad  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 009a5db0  8b442408             mov eax, dword ptr [esp + 8]
// 009a5db4  8908                 mov dword ptr [eax], ecx
// 009a5db6  5e                   pop esi
// 009a5db7  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetProcAddress_ImageList_Draw@CComCtlWrapper@@QAE?AUImageList_Draw_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOffice2003Theme.cpp
