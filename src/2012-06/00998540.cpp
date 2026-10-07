// roc 2012-06 00998540  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998540
//
// 00998540  56                   push esi
// 00998541  8bf1                 mov esi, ecx
// 00998543  837e5400             cmp dword ptr [esi + 0x54], 0
// 00998547  7514                 jne 0x99855d
// 00998549  6820e7c000           push 0xc0e720
// 0099854e  e8bd04a8ff           call 0x418a10
// 00998553  50                   push eax
// 00998554  ff15b021b200         call dword ptr [0xb221b0]
// 0099855a  894654               mov dword ptr [esi + 0x54], eax
// 0099855d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00998560  8b442408             mov eax, dword ptr [esp + 8]
// 00998564  8908                 mov dword ptr [eax], ecx
// 00998566  5e                   pop esi
// 00998567  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?GetProcAddress_ImageList_GetIcon@CComCtlWrapper@@QAE?AUImageList_GetIcon_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
