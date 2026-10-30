// from server: 100% by auto
// roc 2008-06 00758740  unit: CXTPDockingPaneAutoHidePanel  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758740
//
// 00758740  6aff                 push -1
// 00758742  6888907e00           push 0x7e9088
// 00758747  64a100000000         mov eax, dword ptr fs:[0]
// 0075874d  50                   push eax
// 0075874e  83ec34               sub esp, 0x34
// 00758751  53                   push ebx
// 00758752  55                   push ebp
// 00758753  56                   push esi
// 00758754  57                   push edi
// 00758755  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0075875a  33c4                 xor eax, esp
// 0075875c  50                   push eax
// 0075875d  8d442448             lea eax, [esp + 0x48]
// 00758761  64a300000000         mov dword ptr fs:[0], eax
// 00758767  8bf9                 mov edi, ecx
// 00758769  8b4754               mov eax, dword ptr [edi + 0x54]
// 0075876c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075876f  8d4f54               lea ecx, [edi + 0x54]
// 00758772  ffd2                 call edx
// 00758774  85c0                 test eax, eax
// 00758776  7418                 je 0x758790
// 00758778  837f2000             cmp dword ptr [edi + 0x20], 0
// 0075877c  0f8451010000         je 0x7588d3
// 00758782  8b07                 mov eax, dword ptr [edi]
// 00758784  8b5068               mov edx, dword ptr [eax + 0x68]
// 00758787  8bcf                 mov ecx, edi
// 00758789  ffd2                 call edx
// 0075878b  e943010000           jmp 0x7588d3
// 00758790  837f2000             cmp dword ptr [edi + 0x20], 0
// 00758794  7511                 jne 0x7587a7
// 00758796  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0075879a  8b07                 mov eax, dword ptr [edi]
// 0075879c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 007587a2  51                   push ecx
// 007587a3  8bcf                 mov ecx, edi
// 007587a5  ffd2                 call edx
// 007587a7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007587ab  56                   push esi
// 007587ac  8d9fb8000000         lea ebx, [edi + 0xb8]
// 007587b2  53                   push ebx
// 007587b3  ff15682c8000         call dword ptr [0x802c68]
// 007587b9  85c0                 test eax, eax
// 007587bb  751e                 jne 0x7587db
// 007587bd  50                   push eax
// 007587be  8bcf                 mov ecx, edi
// 007587c0  e85bf4ffff           call 0x757c20
// 007587c5  8b06                 mov eax, dword ptr [esi]
// 007587c7  8903                 mov dword ptr [ebx], eax
// 007587c9  8b4e04               mov ecx, dword ptr [esi + 4]
// 007587cc  894b04               mov dword ptr [ebx + 4], ecx
// 007587cf  8b5608               mov edx, dword ptr [esi + 8]
// 007587d2  895308               mov dword ptr [ebx + 8], edx
// 007587d5  8b460c               mov eax, dword ptr [esi + 0xc]
// 007587d8  89430c               mov dword ptr [ebx + 0xc], eax
// 007587db  8bcf                 mov ecx, edi
// 007587dd  e85ee0ffff           call 0x756840
// 007587e2  8b4e08               mov ecx, dword ptr [esi + 8]
// 007587e5  8b560c               mov edx, dword ptr [esi + 0xc]
// 007587e8  8b2e                 mov ebp, dword ptr [esi]
// 007587ea  8b5e04               mov ebx, dword ptr [esi + 4]
// 007587ed  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007587f1  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 007587f7  89542430             mov dword ptr [esp + 0x30], edx
// 007587fb  83f903               cmp ecx, 3
// 007587fe  772b                 ja 0x75882b
// 00758800  ff248dec887500       jmp dword ptr [ecx*4 + 0x7588ec]
// 00758807  0106                 add dword ptr [esi], eax
// 00758809  8b06                 mov eax, dword ptr [esi]
// 0075880b  8944242c             mov dword ptr [esp + 0x2c], eax
// 0075880f  eb1a                 jmp 0x75882b
// 00758811  294608               sub dword ptr [esi + 8], eax
// 00758814  8b6e08               mov ebp, dword ptr [esi + 8]
// 00758817  eb12                 jmp 0x75882b
// 00758819  014604               add dword ptr [esi + 4], eax
// 0075881c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0075881f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00758823  eb06                 jmp 0x75882b
// 00758825  29460c               sub dword ptr [esi + 0xc], eax
// 00758828  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0075882b  57                   push edi
// 0075882c  8d4c2438             lea ecx, [esp + 0x38]
// 00758830  e8b98bf4ff           call 0x6a13ee
// 00758835  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00758839  8b742430             mov esi, dword ptr [esp + 0x30]
// 0075883d  8bc3                 mov eax, ebx
// 0075883f  f7d8                 neg eax
// 00758841  50                   push eax
// 00758842  8bcd                 mov ecx, ebp
// 00758844  f7d9                 neg ecx
// 00758846  51                   push ecx
// 00758847  8d44241c             lea eax, [esp + 0x1c]
// 0075884b  50                   push eax
// 0075884c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00758854  896c2420             mov dword ptr [esp + 0x20], ebp
// 00758858  895c2424             mov dword ptr [esp + 0x24], ebx
// 0075885c  89542428             mov dword ptr [esp + 0x28], edx
// 00758860  8974242c             mov dword ptr [esp + 0x2c], esi
// 00758864  ff15682d8000         call dword ptr [0x802d68]
// 0075886a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075886e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00758872  83ec10               sub esp, 0x10
// 00758875  8bc4                 mov eax, esp
// 00758877  8908                 mov dword ptr [eax], ecx
// 00758879  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0075887d  895004               mov dword ptr [eax + 4], edx
// 00758880  8b542430             mov edx, dword ptr [esp + 0x30]
// 00758884  894808               mov dword ptr [eax + 8], ecx
// 00758887  89500c               mov dword ptr [eax + 0xc], edx
// 0075888a  8d442444             lea eax, [esp + 0x44]
// 0075888e  50                   push eax
// 0075888f  8bcf                 mov ecx, edi
// 00758891  e8eafaffff           call 0x758380
// 00758896  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0075889a  833900               cmp dword ptr [ecx], 0
// 0075889d  7423                 je 0x7588c2
// 0075889f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007588a3  6a01                 push 1
// 007588a5  2bf3                 sub esi, ebx
// 007588a7  56                   push esi
// 007588a8  2bc5                 sub eax, ebp
// 007588aa  50                   push eax
// 007588ab  53                   push ebx
// 007588ac  55                   push ebp
// 007588ad  8bcf                 mov ecx, edi
// 007588af  e89881f4ff           call 0x6a0a4c
// 007588b4  8b5720               mov edx, dword ptr [edi + 0x20]
// 007588b7  6a00                 push 0
// 007588b9  6a00                 push 0
// 007588bb  52                   push edx
// 007588bc  ff15182e8000         call dword ptr [0x802e18]
// 007588c2  8d4c2434             lea ecx, [esp + 0x34]
// 007588c6  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007588ce  e8158bf4ff           call 0x6a13e8
// 007588d3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007588d7  64890d00000000       mov dword ptr fs:[0], ecx
// 007588de  59                   pop ecx
// 007588df  5f                   pop edi
// 007588e0  5e                   pop esi
// 007588e1  5d                   pop ebp
// 007588e2  5b                   pop ebx
// 007588e3  83c440               add esp, 0x40
// 007588e6  c20c00               ret 0xc
// 007588e9  8d4900               lea ecx, [ecx]
// 007588ec  07                   pop es
// 007588ed  887500               mov byte ptr [ebp], dh
// 007588f0  118875001988         adc dword ptr [eax - 0x77e6ff8b], ecx
// 007588f6  7500                 jne 0x7588f8
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnSizeParentEx@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@AAVCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
