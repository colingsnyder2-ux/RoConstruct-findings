// from server: 100% by auto
// roc 2012-06 004787c0  unit: CRobloxControlColorSelector  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004787c0
//
// 004787c0  56                   push esi
// 004787c1  8bf1                 mov esi, ecx
// 004787c3  837e2000             cmp dword ptr [esi + 0x20], 0
// 004787c7  7514                 jne 0x4787dd
// 004787c9  6814b1b500           push 0xb5b114
// 004787ce  e83d02faff           call 0x418a10
// 004787d3  50                   push eax
// 004787d4  ff15b021b200         call dword ptr [0xb221b0]
// 004787da  894620               mov dword ptr [esi + 0x20], eax
// 004787dd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004787e0  8b442408             mov eax, dword ptr [esp + 8]
// 004787e4  8908                 mov dword ptr [eax], ecx
// 004787e6  5e                   pop esi
// 004787e7  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?GetProcAddress_ImageList_GetImageCount@CComCtlWrapper@@QAE?AUImageList_GetImageCount_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
