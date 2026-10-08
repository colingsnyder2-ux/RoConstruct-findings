// from server: 100% by auto
// roc 2012-06 00998910  unit: CXTPImageManagerResource::CBitmapDC  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998910
//
// 00998910  8b442404             mov eax, dword ptr [esp + 4]
// 00998914  85c0                 test eax, eax
// 00998916  7403                 je 0x99891b
// 00998918  8b4004               mov eax, dword ptr [eax + 4]
// 0099891b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0099891f  52                   push edx
// 00998920  8b542420             mov edx, dword ptr [esp + 0x20]
// 00998924  52                   push edx
// 00998925  8b542420             mov edx, dword ptr [esp + 0x20]
// 00998929  52                   push edx
// 0099892a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0099892e  52                   push edx
// 0099892f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00998933  52                   push edx
// 00998934  8b542420             mov edx, dword ptr [esp + 0x20]
// 00998938  52                   push edx
// 00998939  8b542420             mov edx, dword ptr [esp + 0x20]
// 0099893d  52                   push edx
// 0099893e  50                   push eax
// 0099893f  8b4104               mov eax, dword ptr [ecx + 4]
// 00998942  50                   push eax
// 00998943  ff15283db200         call dword ptr [0xb23d28]
// 00998949  c22000               ret 0x20
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GrayStringA@CDC@@UAEHPAVCBrush@@P6GHPAUHDC__@@JH@ZJHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
