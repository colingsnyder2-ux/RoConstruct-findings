// roc 2007-03 004450c0  unit: seg_00440000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004450c0
//
// 004450c0  83ec0c               sub esp, 0xc
// 004450c3  53                   push ebx
// 004450c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004450c8  55                   push ebp
// 004450c9  56                   push esi
// 004450ca  8be9                 mov ebp, ecx
// 004450cc  57                   push edi
// 004450cd  8b7d04               mov edi, dword ptr [ebp + 4]
// 004450d0  8b7704               mov esi, dword ptr [edi + 4]
// 004450d3  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004450d7  b001                 mov al, 1
// 004450d9  88442410             mov byte ptr [esp + 0x10], al
// 004450dd  7526                 jne 0x445105
// 004450df  90                   nop 
// 004450e0  8d460c               lea eax, [esi + 0xc]
// 004450e3  50                   push eax
// 004450e4  53                   push ebx
// 004450e5  8bfe                 mov edi, esi
// 004450e7  ff15e0e67700         call dword ptr [0x77e6e0]
// 004450ed  83c408               add esp, 8
// 004450f0  84c0                 test al, al
// 004450f2  88442410             mov byte ptr [esp + 0x10], al
// 004450f6  7404                 je 0x4450fc
// 004450f8  8b36                 mov esi, dword ptr [esi]
// 004450fa  eb03                 jmp 0x4450ff
// 004450fc  8b7608               mov esi, dword ptr [esi + 8]
// 004450ff  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00445103  74db                 je 0x4450e0
// 00445105  84c0                 test al, al
// 00445107  8bf7                 mov esi, edi
// 00445109  89742418             mov dword ptr [esp + 0x18], esi
// 0044510d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00445111  7442                 je 0x445155
// 00445113  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00445116  3b39                 cmp edi, dword ptr [ecx]
// 00445118  752e                 jne 0x445148
// 0044511a  53                   push ebx
// 0044511b  57                   push edi
// 0044511c  6a01                 push 1
// 0044511e  8d542420             lea edx, [esp + 0x20]
// 00445122  52                   push edx
// 00445123  8bcd                 mov ecx, ebp
// 00445125  e826fdffff           call 0x444e50
// 0044512a  5f                   pop edi
// 0044512b  8bc8                 mov ecx, eax
// 0044512d  8b11                 mov edx, dword ptr [ecx]
// 0044512f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00445133  8b4904               mov ecx, dword ptr [ecx + 4]
// 00445136  5e                   pop esi
// 00445137  5d                   pop ebp
// 00445138  894804               mov dword ptr [eax + 4], ecx
// 0044513b  c6400801             mov byte ptr [eax + 8], 1
// 0044513f  8910                 mov dword ptr [eax], edx
// 00445141  5b                   pop ebx
// 00445142  83c40c               add esp, 0xc
// 00445145  c20800               ret 8
// 00445148  8d4c2414             lea ecx, [esp + 0x14]
// 0044514c  e8af2f1b00           call 0x5f8100
// 00445151  8b742418             mov esi, dword ptr [esp + 0x18]
// 00445155  8d560c               lea edx, [esi + 0xc]
// 00445158  53                   push ebx
// 00445159  52                   push edx
// 0044515a  ff15e0e67700         call dword ptr [0x77e6e0]
// 00445160  83c408               add esp, 8
// 00445163  84c0                 test al, al
// 00445165  7431                 je 0x445198
// 00445167  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044516b  53                   push ebx
// 0044516c  57                   push edi
// 0044516d  50                   push eax
// 0044516e  8d4c2420             lea ecx, [esp + 0x20]
// 00445172  51                   push ecx
// 00445173  8bcd                 mov ecx, ebp
// 00445175  e8d6fcffff           call 0x444e50
// 0044517a  5f                   pop edi
// 0044517b  8bc8                 mov ecx, eax
// 0044517d  8b11                 mov edx, dword ptr [ecx]
// 0044517f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00445183  8b4904               mov ecx, dword ptr [ecx + 4]
// 00445186  5e                   pop esi
// 00445187  5d                   pop ebp
// 00445188  894804               mov dword ptr [eax + 4], ecx
// 0044518b  c6400801             mov byte ptr [eax + 8], 1
// 0044518f  8910                 mov dword ptr [eax], edx
// 00445191  5b                   pop ebx
// 00445192  83c40c               add esp, 0xc
// 00445195  c20800               ret 8
// 00445198  8b442420             mov eax, dword ptr [esp + 0x20]
// 0044519c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004451a0  5f                   pop edi
// 004451a1  897004               mov dword ptr [eax + 4], esi
// 004451a4  5e                   pop esi
// 004451a5  5d                   pop ebp
// 004451a6  c6400800             mov byte ptr [eax + 8], 0
// 004451aa  8910                 mov dword ptr [eax], edx
// 004451ac  5b                   pop ebx
// 004451ad  83c40c               add esp, 0xc
// 004451b0  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
