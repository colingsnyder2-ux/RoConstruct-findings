// from server: 100% by auto
// roc 2007-08 00649180  unit: CXTPCommandBar  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649180
//
// 00649180  83ec0c               sub esp, 0xc
// 00649183  56                   push esi
// 00649184  8bf1                 mov esi, ecx
// 00649186  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00649189  f7d8                 neg eax
// 0064918b  1bc0                 sbb eax, eax
// 0064918d  89442404             mov dword ptr [esp + 4], eax
// 00649191  742b                 je 0x6491be
// 00649193  57                   push edi
// 00649194  8d7e10               lea edi, [esi + 0x10]
// 00649197  8d44240c             lea eax, [esp + 0xc]
// 0064919b  50                   push eax
// 0064919c  8d4c2414             lea ecx, [esp + 0x14]
// 006491a0  51                   push ecx
// 006491a1  8d542410             lea edx, [esp + 0x10]
// 006491a5  52                   push edx
// 006491a6  8bcf                 mov ecx, edi
// 006491a8  e8832b0a00           call 0x6ebd30
// 006491ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006491b1  e82e70feff           call 0x6301e4
// 006491b6  837c240800           cmp dword ptr [esp + 8], 0
// 006491bb  75da                 jne 0x649197
// 006491bd  5f                   pop edi
// 006491be  8d4e10               lea ecx, [esi + 0x10]
// 006491c1  5e                   pop esi
// 006491c2  83c40c               add esp, 0xc
// 006491c5  e926eb0800           jmp 0x6d7cf0
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerImageList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
