// from server: 100% by auto
// roc 2012-06 0049e390  unit: CrashReporter  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e390
//
// 0049e390  83ec10               sub esp, 0x10
// 0049e393  57                   push edi
// 0049e394  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049e398  85ff                 test edi, edi
// 0049e39a  750a                 jne 0x49e3a6
// 0049e39c  6805400080           push 0x80004005
// 0049e3a1  e80a5ef6ff           call 0x4041b0
// 0049e3a6  56                   push esi
// 0049e3a7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049e3ab  57                   push edi
// 0049e3ac  56                   push esi
// 0049e3ad  ff156c2bb200         call dword ptr [0xb22b6c]
// 0049e3b3  33c9                 xor ecx, ecx
// 0049e3b5  894c2408             mov dword ptr [esp + 8], ecx
// 0049e3b9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0049e3bd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049e3c1  894c2414             mov dword ptr [esp + 0x14], ecx
// 0049e3c5  85c0                 test eax, eax
// 0049e3c7  7463                 je 0x49e42c
// 0049e3c9  dd07                 fld qword ptr [edi]
// 0049e3cb  8d442408             lea eax, [esp + 8]
// 0049e3cf  50                   push eax
// 0049e3d0  83ec08               sub esp, 8
// 0049e3d3  dd1c24               fstp qword ptr [esp]
// 0049e3d6  ff15682bb200         call dword ptr [0xb22b68]
// 0049e3dc  85c0                 test eax, eax
// 0049e3de  744c                 je 0x49e42c
// 0049e3e0  668b0e               mov cx, word ptr [esi]
// 0049e3e3  663b4c2408           cmp cx, word ptr [esp + 8]
// 0049e3e8  7542                 jne 0x49e42c
// 0049e3ea  668b5602             mov dx, word ptr [esi + 2]
// 0049e3ee  663b54240a           cmp dx, word ptr [esp + 0xa]
// 0049e3f3  7537                 jne 0x49e42c
// 0049e3f5  668b4606             mov ax, word ptr [esi + 6]
// 0049e3f9  663b44240e           cmp ax, word ptr [esp + 0xe]
// 0049e3fe  752c                 jne 0x49e42c
// 0049e400  668b4e08             mov cx, word ptr [esi + 8]
// 0049e404  663b4c2410           cmp cx, word ptr [esp + 0x10]
// 0049e409  7521                 jne 0x49e42c
// 0049e40b  668b560a             mov dx, word ptr [esi + 0xa]
// 0049e40f  663b542412           cmp dx, word ptr [esp + 0x12]
// 0049e414  7516                 jne 0x49e42c
// 0049e416  668b460c             mov ax, word ptr [esi + 0xc]
// 0049e41a  663b442414           cmp ax, word ptr [esp + 0x14]
// 0049e41f  750b                 jne 0x49e42c
// 0049e421  5e                   pop esi
// 0049e422  b801000000           mov eax, 1
// 0049e427  5f                   pop edi
// 0049e428  83c410               add esp, 0x10
// 0049e42b  c3                   ret 
// 0049e42c  5e                   pop esi
// 0049e42d  33c0                 xor eax, eax
// 0049e42f  5f                   pop edi
// 0049e430  83c410               add esp, 0x10
// 0049e433  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?AtlConvertSystemTimeToVariantTime@ATL@@YAHABU_SYSTEMTIME@@PAN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
