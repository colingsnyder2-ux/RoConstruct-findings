// roc 2007-03 0056acf0  unit: seg_00560000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056acf0
//
// 0056acf0  83ec0c               sub esp, 0xc
// 0056acf3  53                   push ebx
// 0056acf4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056acf8  55                   push ebp
// 0056acf9  56                   push esi
// 0056acfa  8be9                 mov ebp, ecx
// 0056acfc  57                   push edi
// 0056acfd  8b7d04               mov edi, dword ptr [ebp + 4]
// 0056ad00  8b7704               mov esi, dword ptr [edi + 4]
// 0056ad03  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0056ad07  b001                 mov al, 1
// 0056ad09  88442410             mov byte ptr [esp + 0x10], al
// 0056ad0d  7526                 jne 0x56ad35
// 0056ad0f  90                   nop 
// 0056ad10  8d460c               lea eax, [esi + 0xc]
// 0056ad13  50                   push eax
// 0056ad14  53                   push ebx
// 0056ad15  8bfe                 mov edi, esi
// 0056ad17  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056ad1d  83c408               add esp, 8
// 0056ad20  84c0                 test al, al
// 0056ad22  88442410             mov byte ptr [esp + 0x10], al
// 0056ad26  7404                 je 0x56ad2c
// 0056ad28  8b36                 mov esi, dword ptr [esi]
// 0056ad2a  eb03                 jmp 0x56ad2f
// 0056ad2c  8b7608               mov esi, dword ptr [esi + 8]
// 0056ad2f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0056ad33  74db                 je 0x56ad10
// 0056ad35  84c0                 test al, al
// 0056ad37  8bf7                 mov esi, edi
// 0056ad39  89742418             mov dword ptr [esp + 0x18], esi
// 0056ad3d  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056ad41  7442                 je 0x56ad85
// 0056ad43  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0056ad46  3b39                 cmp edi, dword ptr [ecx]
// 0056ad48  752e                 jne 0x56ad78
// 0056ad4a  53                   push ebx
// 0056ad4b  57                   push edi
// 0056ad4c  6a01                 push 1
// 0056ad4e  8d542420             lea edx, [esp + 0x20]
// 0056ad52  52                   push edx
// 0056ad53  8bcd                 mov ecx, ebp
// 0056ad55  e896fdffff           call 0x56aaf0
// 0056ad5a  5f                   pop edi
// 0056ad5b  8bc8                 mov ecx, eax
// 0056ad5d  8b11                 mov edx, dword ptr [ecx]
// 0056ad5f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ad63  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056ad66  5e                   pop esi
// 0056ad67  5d                   pop ebp
// 0056ad68  894804               mov dword ptr [eax + 4], ecx
// 0056ad6b  c6400801             mov byte ptr [eax + 8], 1
// 0056ad6f  8910                 mov dword ptr [eax], edx
// 0056ad71  5b                   pop ebx
// 0056ad72  83c40c               add esp, 0xc
// 0056ad75  c20800               ret 8
// 0056ad78  8d4c2414             lea ecx, [esp + 0x14]
// 0056ad7c  e87fd30800           call 0x5f8100
// 0056ad81  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056ad85  8d560c               lea edx, [esi + 0xc]
// 0056ad88  53                   push ebx
// 0056ad89  52                   push edx
// 0056ad8a  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056ad90  83c408               add esp, 8
// 0056ad93  84c0                 test al, al
// 0056ad95  7431                 je 0x56adc8
// 0056ad97  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056ad9b  53                   push ebx
// 0056ad9c  57                   push edi
// 0056ad9d  50                   push eax
// 0056ad9e  8d4c2420             lea ecx, [esp + 0x20]
// 0056ada2  51                   push ecx
// 0056ada3  8bcd                 mov ecx, ebp
// 0056ada5  e846fdffff           call 0x56aaf0
// 0056adaa  5f                   pop edi
// 0056adab  8bc8                 mov ecx, eax
// 0056adad  8b11                 mov edx, dword ptr [ecx]
// 0056adaf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056adb3  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056adb6  5e                   pop esi
// 0056adb7  5d                   pop ebp
// 0056adb8  894804               mov dword ptr [eax + 4], ecx
// 0056adbb  c6400801             mov byte ptr [eax + 8], 1
// 0056adbf  8910                 mov dword ptr [eax], edx
// 0056adc1  5b                   pop ebx
// 0056adc2  83c40c               add esp, 0xc
// 0056adc5  c20800               ret 8
// 0056adc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056adcc  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056add0  5f                   pop edi
// 0056add1  897004               mov dword ptr [eax + 4], esi
// 0056add4  5e                   pop esi
// 0056add5  5d                   pop ebp
// 0056add6  c6400800             mov byte ptr [eax + 8], 0
// 0056adda  8910                 mov dword ptr [eax], edx
// 0056addc  5b                   pop ebx
// 0056addd  83c40c               add esp, 0xc
// 0056ade0  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
