// from server: 100% by auto
// roc 2011-06 008215f0  unit: CXTPImageManagerResource::CBitmapDC  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008215f0
//
// 008215f0  8b442404             mov eax, dword ptr [esp + 4]
// 008215f4  83ec14               sub esp, 0x14
// 008215f7  56                   push esi
// 008215f8  50                   push eax
// 008215f9  6a00                 push 0
// 008215fb  8d4c240c             lea ecx, [esp + 0xc]
// 008215ff  e83cbd0300           call 0x85d340
// 00821604  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00821608  8b542420             mov edx, dword ptr [esp + 0x20]
// 0082160c  8b442408             mov eax, dword ptr [esp + 8]
// 00821610  51                   push ecx
// 00821611  52                   push edx
// 00821612  50                   push eax
// 00821613  ff151001a400         call dword ptr [0xa40110]
// 00821619  8d4c2404             lea ecx, [esp + 4]
// 0082161d  8bf0                 mov esi, eax
// 0082161f  e82cbe0300           call 0x85d450
// 00821624  8bc6                 mov eax, esi
// 00821626  5e                   pop esi
// 00821627  83c414               add esp, 0x14
// 0082162a  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetBitmapMaskColor@CXTPImageManager@@SAKAAVCBitmap@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
