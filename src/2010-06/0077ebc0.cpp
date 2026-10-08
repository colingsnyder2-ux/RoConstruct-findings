// from server: 100% by auto
// roc 2010-06 0077ebc0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ebc0
//
// 0077ebc0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 0077ebc7  7424                 je 0x77ebed
// 0077ebc9  681d010000           push 0x11d
// 0077ebce  56                   push esi
// 0077ebcf  e8bc380000           call 0x782490
// 0077ebd4  50                   push eax
// 0077ebd5  8b4634               mov eax, dword ptr [esi + 0x34]
// 0077ebd8  683830a500           push 0xa53038
// 0077ebdd  50                   push eax
// 0077ebde  e8fd41fbff           call 0x732de0
// 0077ebe3  50                   push eax
// 0077ebe4  56                   push esi
// 0077ebe5  e8a6390000           call 0x782590
// 0077ebea  83c41c               add esp, 0x1c
// 0077ebed  53                   push ebx
// 0077ebee  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0077ebf1  56                   push esi
// 0077ebf2  e8894d0000           call 0x783980
// 0077ebf7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0077ebfa  53                   push ebx
// 0077ebfb  51                   push ecx
// 0077ebfc  e8ff0b0100           call 0x78f800
// 0077ec01  83c9ff               or ecx, 0xffffffff
// 0077ec04  83c40c               add esp, 0xc
// 0077ec07  894f10               mov dword ptr [edi + 0x10], ecx
// 0077ec0a  894f14               mov dword ptr [edi + 0x14], ecx
// 0077ec0d  c70704000000         mov dword ptr [edi], 4
// 0077ec13  894708               mov dword ptr [edi + 8], eax
// 0077ec16  5b                   pop ebx
// 0077ec17  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
