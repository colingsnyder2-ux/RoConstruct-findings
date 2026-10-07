// roc 2012-06 00418a60  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418a60
//
// 00418a60  56                   push esi
// 00418a61  8bf1                 mov esi, ecx
// 00418a63  837e2800             cmp dword ptr [esi + 0x28], 0
// 00418a67  7514                 jne 0x418a7d
// 00418a69  68286cb400           push 0xb46c28
// 00418a6e  e89dffffff           call 0x418a10
// 00418a73  50                   push eax
// 00418a74  ff15b021b200         call dword ptr [0xb221b0]
// 00418a7a  894628               mov dword ptr [esi + 0x28], eax
// 00418a7d  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00418a80  8b442408             mov eax, dword ptr [esp + 8]
// 00418a84  8908                 mov dword ptr [eax], ecx
// 00418a86  5e                   pop esi
// 00418a87  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetProcAddress_ImageList_Add@CComCtlWrapper@@QAE?AUImageList_Add_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
