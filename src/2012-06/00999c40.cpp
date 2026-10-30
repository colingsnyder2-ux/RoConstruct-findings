// from server: 100% by auto
// roc 2012-06 00999c40  unit: CXTPImageManagerResource::CBitmapDC  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999c40
//
// 00999c40  8b442404             mov eax, dword ptr [esp + 4]
// 00999c44  83ec14               sub esp, 0x14
// 00999c47  56                   push esi
// 00999c48  50                   push eax
// 00999c49  6a00                 push 0
// 00999c4b  8d4c240c             lea ecx, [esp + 0xc]
// 00999c4f  e8fcba0300           call 0x9d5750
// 00999c54  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00999c58  8b542420             mov edx, dword ptr [esp + 0x20]
// 00999c5c  8b442408             mov eax, dword ptr [esp + 8]
// 00999c60  51                   push ecx
// 00999c61  52                   push edx
// 00999c62  50                   push eax
// 00999c63  ff15b820b200         call dword ptr [0xb220b8]
// 00999c69  8d4c2404             lea ecx, [esp + 4]
// 00999c6d  8bf0                 mov esi, eax
// 00999c6f  e8ecbb0300           call 0x9d5860
// 00999c74  8bc6                 mov eax, esi
// 00999c76  5e                   pop esi
// 00999c77  83c414               add esp, 0x14
// 00999c7a  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetBitmapMaskColor@CXTPImageManager@@SAKAAVCBitmap@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
