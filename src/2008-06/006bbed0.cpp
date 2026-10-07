// roc 2008-06 006bbed0  unit: CXTPImageManagerResource::CBitmapDC  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bbed0
//
// 006bbed0  8b442404             mov eax, dword ptr [esp + 4]
// 006bbed4  83ec14               sub esp, 0x14
// 006bbed7  56                   push esi
// 006bbed8  50                   push eax
// 006bbed9  6a00                 push 0
// 006bbedb  8d4c240c             lea ecx, [esp + 0xc]
// 006bbedf  e8fcc10300           call 0x6f80e0
// 006bbee4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006bbee8  8b542420             mov edx, dword ptr [esp + 0x20]
// 006bbeec  8b442408             mov eax, dword ptr [esp + 8]
// 006bbef0  51                   push ecx
// 006bbef1  52                   push edx
// 006bbef2  50                   push eax
// 006bbef3  ff15bc208000         call dword ptr [0x8020bc]
// 006bbef9  8d4c2404             lea ecx, [esp + 4]
// 006bbefd  8bf0                 mov esi, eax
// 006bbeff  e8ecc20300           call 0x6f81f0
// 006bbf04  8bc6                 mov eax, esi
// 006bbf06  5e                   pop esi
// 006bbf07  83c414               add esp, 0x14
// 006bbf0a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?GetBitmapMaskColor@CXTPImageManager@@SAKAAVCBitmap@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
