// roc 2010-06 00576790  unit: seg_00570000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576790
//
// 00576790  8b442410             mov eax, dword ptr [esp + 0x10]
// 00576794  53                   push ebx
// 00576795  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00576799  55                   push ebp
// 0057679a  56                   push esi
// 0057679b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057679f  57                   push edi
// 005767a0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005767a4  8d2c07               lea ebp, [edi + eax]
// 005767a7  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005767aa  770a                 ja 0x5767b6
// 005767ac  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005767af  7705                 ja 0x5767b6
// 005767b1  833e00               cmp dword ptr [esi], 0
// 005767b4  7513                 jne 0x5767c9
// 005767b6  8b03                 mov eax, dword ptr [ebx]
// 005767b8  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 005767bf  8b0b                 mov ecx, dword ptr [ebx]
// 005767c1  8b11                 mov edx, dword ptr [ecx]
// 005767c3  53                   push ebx
// 005767c4  ffd2                 call edx
// 005767c6  83c404               add esp, 4
// 005767c9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005767cc  3bf8                 cmp edi, eax
// 005767ce  7209                 jb 0x5767d9
// 005767d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005767d3  03c8                 add ecx, eax
// 005767d5  3be9                 cmp ebp, ecx
// 005767d7  764f                 jbe 0x576828
// 005767d9  807e2200             cmp byte ptr [esi + 0x22], 0
// 005767dd  7513                 jne 0x5767f2
// 005767df  8b13                 mov edx, dword ptr [ebx]
// 005767e1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 005767e8  8b03                 mov eax, dword ptr [ebx]
// 005767ea  8b08                 mov ecx, dword ptr [eax]
// 005767ec  53                   push ebx
// 005767ed  ffd1                 call ecx
// 005767ef  83c404               add esp, 4
// 005767f2  807e2100             cmp byte ptr [esi + 0x21], 0
// 005767f6  740f                 je 0x576807
// 005767f8  6a01                 push 1
// 005767fa  53                   push ebx
// 005767fb  e850feffff           call 0x576650
// 00576800  83c408               add esp, 8
// 00576803  c6462100             mov byte ptr [esi + 0x21], 0
// 00576807  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0057680a  7605                 jbe 0x576811
// 0057680c  897e18               mov dword ptr [esi + 0x18], edi
// 0057680f  eb0c                 jmp 0x57681d
// 00576811  8bc5                 mov eax, ebp
// 00576813  2b4610               sub eax, dword ptr [esi + 0x10]
// 00576816  7902                 jns 0x57681a
// 00576818  33c0                 xor eax, eax
// 0057681a  894618               mov dword ptr [esi + 0x18], eax
// 0057681d  6a00                 push 0
// 0057681f  53                   push ebx
// 00576820  e82bfeffff           call 0x576650
// 00576825  83c408               add esp, 8
// 00576828  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0057682b  3bfd                 cmp edi, ebp
// 0057682d  7357                 jae 0x576886
// 0057682f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00576833  731e                 jae 0x576853
// 00576835  807c242400           cmp byte ptr [esp + 0x24], 0
// 0057683a  7413                 je 0x57684f
// 0057683c  8b13                 mov edx, dword ptr [ebx]
// 0057683e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00576845  8b03                 mov eax, dword ptr [ebx]
// 00576847  8b08                 mov ecx, dword ptr [eax]
// 00576849  53                   push ebx
// 0057684a  ffd1                 call ecx
// 0057684c  83c404               add esp, 4
// 0057684f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00576853  8a442424             mov al, byte ptr [esp + 0x24]
// 00576857  84c0                 test al, al
// 00576859  7403                 je 0x57685e
// 0057685b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0057685e  807e2000             cmp byte ptr [esi + 0x20], 0
// 00576862  743e                 je 0x5768a2
// 00576864  8b4618               mov eax, dword ptr [esi + 0x18]
// 00576867  8b5e08               mov ebx, dword ptr [esi + 8]
// 0057686a  2bf8                 sub edi, eax
// 0057686c  2be8                 sub ebp, eax
// 0057686e  3bfd                 cmp edi, ebp
// 00576870  7314                 jae 0x576886
// 00576872  8b16                 mov edx, dword ptr [esi]
// 00576874  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00576877  53                   push ebx
// 00576878  50                   push eax
// 00576879  e8626bffff           call 0x56d3e0
// 0057687e  47                   inc edi
// 0057687f  83c408               add esp, 8
// 00576882  3bfd                 cmp edi, ebp
// 00576884  72ec                 jb 0x576872
// 00576886  807c242400           cmp byte ptr [esp + 0x24], 0
// 0057688b  7404                 je 0x576891
// 0057688d  c6462101             mov byte ptr [esi + 0x21], 1
// 00576891  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00576895  2b4618               sub eax, dword ptr [esi + 0x18]
// 00576898  8b0e                 mov ecx, dword ptr [esi]
// 0057689a  5f                   pop edi
// 0057689b  5e                   pop esi
// 0057689c  5d                   pop ebp
// 0057689d  8d0481               lea eax, [ecx + eax*4]
// 005768a0  5b                   pop ebx
// 005768a1  c3                   ret 
// 005768a2  84c0                 test al, al
// 005768a4  75e7                 jne 0x57688d
// 005768a6  8b0b                 mov ecx, dword ptr [ebx]
// 005768a8  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 005768af  8b13                 mov edx, dword ptr [ebx]
// 005768b1  8b02                 mov eax, dword ptr [edx]
// 005768b3  53                   push ebx
// 005768b4  ffd0                 call eax
// 005768b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005768ba  2b4618               sub eax, dword ptr [esi + 0x18]
// 005768bd  8b0e                 mov ecx, dword ptr [esi]
// 005768bf  83c404               add esp, 4
// 005768c2  5f                   pop edi
// 005768c3  5e                   pop esi
// 005768c4  5d                   pop ebp
// 005768c5  8d0481               lea eax, [ecx + eax*4]
// 005768c8  5b                   pop ebx
// 005768c9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
