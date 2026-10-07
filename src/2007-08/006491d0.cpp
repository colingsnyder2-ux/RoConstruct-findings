// roc 2007-08 006491d0  unit: CXTPCommandBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006491d0
//
// 006491d0  83ec08               sub esp, 8
// 006491d3  33c0                 xor eax, eax
// 006491d5  890424               mov dword ptr [esp], eax
// 006491d8  89442404             mov dword ptr [esp + 4], eax
// 006491dc  8d442404             lea eax, [esp + 4]
// 006491e0  50                   push eax
// 006491e1  8b01                 mov eax, dword ptr [ecx]
// 006491e3  8d542404             lea edx, [esp + 4]
// 006491e7  52                   push edx
// 006491e8  50                   push eax
// 006491e9  ff1538d07700         call dword ptr [0x77d038]
// 006491ef  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006491f3  8b0c24               mov ecx, dword ptr [esp]
// 006491f6  8b542404             mov edx, dword ptr [esp + 4]
// 006491fa  8908                 mov dword ptr [eax], ecx
// 006491fc  895004               mov dword ptr [eax + 4], edx
// 006491ff  83c408               add esp, 8
// 00649202  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?GetIconSize@CXTPImageManagerImageList@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
