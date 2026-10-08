// from server: 100% by auto
// roc 2009-06 00599800  unit: seg_00590000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599800
//
// 00599800  53                   push ebx
// 00599801  56                   push esi
// 00599802  57                   push edi
// 00599803  8bd9                 mov ebx, ecx
// 00599805  8bf2                 mov esi, edx
// 00599807  e894ffffff           call 0x5997a0
// 0059980c  837c241000           cmp dword ptr [esp + 0x10], 0
// 00599811  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 0059981b  bf01000000           mov edi, 1
// 00599820  7442                 je 0x599864
// 00599822  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599825  8b5008               mov edx, dword ptr [eax + 8]
// 00599828  881c11               mov byte ptr [ecx + edx], bl
// 0059982b  017814               add dword ptr [eax + 0x14], edi
// 0059982e  8b5008               mov edx, dword ptr [eax + 8]
// 00599831  55                   push ebp
// 00599832  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00599835  8bcb                 mov ecx, ebx
// 00599837  c1e908               shr ecx, 8
// 0059983a  880c2a               mov byte ptr [edx + ebp], cl
// 0059983d  017814               add dword ptr [eax + 0x14], edi
// 00599840  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00599843  8b5008               mov edx, dword ptr [eax + 8]
// 00599846  8acb                 mov cl, bl
// 00599848  f6d1                 not cl
// 0059984a  880c2a               mov byte ptr [edx + ebp], cl
// 0059984d  017814               add dword ptr [eax + 0x14], edi
// 00599850  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00599853  8b5008               mov edx, dword ptr [eax + 8]
// 00599856  8bcb                 mov ecx, ebx
// 00599858  f7d1                 not ecx
// 0059985a  c1e908               shr ecx, 8
// 0059985d  880c2a               mov byte ptr [edx + ebp], cl
// 00599860  017814               add dword ptr [eax + 0x14], edi
// 00599863  5d                   pop ebp
// 00599864  85db                 test ebx, ebx
// 00599866  741e                 je 0x599886
// 00599868  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059986b  8b5008               mov edx, dword ptr [eax + 8]
// 0059986e  2bdf                 sub ebx, edi
// 00599870  895c2410             mov dword ptr [esp + 0x10], ebx
// 00599874  8a1e                 mov bl, byte ptr [esi]
// 00599876  881c11               mov byte ptr [ecx + edx], bl
// 00599879  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059987d  017814               add dword ptr [eax + 0x14], edi
// 00599880  03f7                 add esi, edi
// 00599882  85db                 test ebx, ebx
// 00599884  75e2                 jne 0x599868
// 00599886  5f                   pop edi
// 00599887  5e                   pop esi
// 00599888  5b                   pop ebx
// 00599889  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
