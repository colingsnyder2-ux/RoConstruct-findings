// from server: 100% by auto
// roc 2012-06 00998420  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998420
//
// 00998420  56                   push esi
// 00998421  8bf1                 mov esi, ecx
// 00998423  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 00998427  7514                 jne 0x99843d
// 00998429  6808e7c000           push 0xc0e708
// 0099842e  e8dd05a8ff           call 0x418a10
// 00998433  50                   push eax
// 00998434  ff15b021b200         call dword ptr [0xb221b0]
// 0099843a  89462c               mov dword ptr [esi + 0x2c], eax
// 0099843d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00998440  8b442408             mov eax, dword ptr [esp + 8]
// 00998444  8908                 mov dword ptr [eax], ecx
// 00998446  5e                   pop esi
// 00998447  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetProcAddress_ImageList_ReplaceIcon@CComCtlWrapper@@QAE?AUImageList_ReplaceIcon_Type@1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
