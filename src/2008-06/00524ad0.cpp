// from server: 100% by colin
// roc 2008-06 00524ad0  unit: seg_00520000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524ad0
//
// 00524ad0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00524ad4  56                   push esi
// 00524ad5  8b742410             mov esi, dword ptr [esp + 0x10]
// 00524ad9  57                   push edi
// 00524ada  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00524ade  8b4754               mov eax, dword ptr [edi + 0x54]
// 00524ae1  50                   push eax
// 00524ae2  56                   push esi
// 00524ae3  6a01                 push 1
// 00524ae5  51                   push ecx
// 00524ae6  ff15c0278000         call dword ptr [0x8027c0]
// 00524aec  83c410               add esp, 0x10
// 00524aef  3bc6                 cmp eax, esi
// 00524af1  740e                 je 0x524b01
// 00524af3  685cad8200           push 0x82ad5c
// 00524af8  57                   push edi
// 00524af9  e8b24e0000           call 0x5299b0
// 00524afe  83c408               add esp, 8
// 00524b01  5f                   pop edi
// 00524b02  5e                   pop esi
// 00524b03  c3                   ret 
// library libpng-1.2.5-dll/pngrio.c (function _png_default_read_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngrio.c
