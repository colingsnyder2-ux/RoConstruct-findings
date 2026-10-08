// from server: 100% by auto
// roc 2009-06 0048ac40  unit: Ogre::RbxManualResourceLoaderChain  size: 390 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048ac40
//
// 0048ac40  55                   push ebp
// 0048ac41  56                   push esi
// 0048ac42  8bf1                 mov esi, ecx
// 0048ac44  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048ac47  57                   push edi
// 0048ac48  85c0                 test eax, eax
// 0048ac4a  7504                 jne 0x48ac50
// 0048ac4c  33ed                 xor ebp, ebp
// 0048ac4e  eb05                 jmp 0x48ac55
// 0048ac50  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0048ac53  2be8                 sub ebp, eax
// 0048ac55  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0048ac59  85ff                 test edi, edi
// 0048ac5b  0f845f010000         je 0x48adc0
// 0048ac61  53                   push ebx
// 0048ac62  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0048ac65  8bc8                 mov ecx, eax
// 0048ac67  2bcb                 sub ecx, ebx
// 0048ac69  49                   dec ecx
// 0048ac6a  3bcf                 cmp ecx, edi
// 0048ac6c  7305                 jae 0x48ac73
// 0048ac6e  e8ed560000           call 0x490360
// 0048ac73  8bd3                 mov edx, ebx
// 0048ac75  2bd0                 sub edx, eax
// 0048ac77  8d043a               lea eax, [edx + edi]
// 0048ac7a  3be8                 cmp ebp, eax
// 0048ac7c  0f83a6000000         jae 0x48ad28
// 0048ac82  8bcd                 mov ecx, ebp
// 0048ac84  d1e9                 shr ecx, 1
// 0048ac86  83caff               or edx, 0xffffffff
// 0048ac89  2bd1                 sub edx, ecx
// 0048ac8b  3bd5                 cmp edx, ebp
// 0048ac8d  7304                 jae 0x48ac93
// 0048ac8f  33ed                 xor ebp, ebp
// 0048ac91  eb02                 jmp 0x48ac95
// 0048ac93  03e9                 add ebp, ecx
// 0048ac95  3be8                 cmp ebp, eax
// 0048ac97  7302                 jae 0x48ac9b
// 0048ac99  8be8                 mov ebp, eax
// 0048ac9b  6a00                 push 0
// 0048ac9d  55                   push ebp
// 0048ac9e  e8edfbffff           call 0x48a890
// 0048aca3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048aca7  8bd8                 mov ebx, eax
// 0048aca9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048acad  2b460c               sub eax, dword ptr [esi + 0xc]
// 0048acb0  83c408               add esp, 8
// 0048acb3  51                   push ecx
// 0048acb4  03c3                 add eax, ebx
// 0048acb6  57                   push edi
// 0048acb7  50                   push eax
// 0048acb8  8bce                 mov ecx, esi
// 0048acba  89442428             mov dword ptr [esp + 0x28], eax
// 0048acbe  e84dffffff           call 0x48ac10
// 0048acc3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048acc7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048acca  8bc2                 mov eax, edx
// 0048accc  2bc1                 sub eax, ecx
// 0048acce  7411                 je 0x48ace1
// 0048acd0  50                   push eax
// 0048acd1  51                   push ecx
// 0048acd2  50                   push eax
// 0048acd3  53                   push ebx
// 0048acd4  ff155ce98900         call dword ptr [0x89e95c]
// 0048acda  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048acde  83c410               add esp, 0x10
// 0048ace1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0048ace4  2bc2                 sub eax, edx
// 0048ace6  7413                 je 0x48acfb
// 0048ace8  50                   push eax
// 0048ace9  52                   push edx
// 0048acea  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048acee  50                   push eax
// 0048acef  03d7                 add edx, edi
// 0048acf1  52                   push edx
// 0048acf2  ff155ce98900         call dword ptr [0x89e95c]
// 0048acf8  83c410               add esp, 0x10
// 0048acfb  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048acfe  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048ad01  2bc8                 sub ecx, eax
// 0048ad03  03f9                 add edi, ecx
// 0048ad05  85c0                 test eax, eax
// 0048ad07  7409                 je 0x48ad12
// 0048ad09  50                   push eax
// 0048ad0a  e823dd2800           call 0x718a32
// 0048ad0f  83c404               add esp, 4
// 0048ad12  8d142b               lea edx, [ebx + ebp]
// 0048ad15  8d043b               lea eax, [ebx + edi]
// 0048ad18  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048ad1b  5b                   pop ebx
// 0048ad1c  5f                   pop edi
// 0048ad1d  895614               mov dword ptr [esi + 0x14], edx
// 0048ad20  894610               mov dword ptr [esi + 0x10], eax
// 0048ad23  5e                   pop esi
// 0048ad24  5d                   pop ebp
// 0048ad25  c21000               ret 0x10
// 0048ad28  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048ad2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048ad30  8bcb                 mov ecx, ebx
// 0048ad32  2bc8                 sub ecx, eax
// 0048ad34  3bcf                 cmp ecx, edi
// 0048ad36  734e                 jae 0x48ad86
// 0048ad38  8a0a                 mov cl, byte ptr [edx]
// 0048ad3a  8d1438               lea edx, [eax + edi]
// 0048ad3d  52                   push edx
// 0048ad3e  53                   push ebx
// 0048ad3f  884c2428             mov byte ptr [esp + 0x28], cl
// 0048ad43  50                   push eax
// 0048ad44  8bce                 mov ecx, esi
// 0048ad46  e825fdffff           call 0x48aa70
// 0048ad4b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0048ad4e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048ad52  8d4c2420             lea ecx, [esp + 0x20]
// 0048ad56  51                   push ecx
// 0048ad57  2bd0                 sub edx, eax
// 0048ad59  03d7                 add edx, edi
// 0048ad5b  52                   push edx
// 0048ad5c  50                   push eax
// 0048ad5d  8bce                 mov ecx, esi
// 0048ad5f  e8acfeffff           call 0x48ac10
// 0048ad64  017e10               add dword ptr [esi + 0x10], edi
// 0048ad67  8b7610               mov esi, dword ptr [esi + 0x10]
// 0048ad6a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048ad6e  8d442420             lea eax, [esp + 0x20]
// 0048ad72  50                   push eax
// 0048ad73  2bf7                 sub esi, edi
// 0048ad75  56                   push esi
// 0048ad76  51                   push ecx
// 0048ad77  e8a4fcffff           call 0x48aa20
// 0048ad7c  83c40c               add esp, 0xc
// 0048ad7f  5b                   pop ebx
// 0048ad80  5f                   pop edi
// 0048ad81  5e                   pop esi
// 0048ad82  5d                   pop ebp
// 0048ad83  c21000               ret 0x10
// 0048ad86  8a02                 mov al, byte ptr [edx]
// 0048ad88  53                   push ebx
// 0048ad89  8beb                 mov ebp, ebx
// 0048ad8b  53                   push ebx
// 0048ad8c  2bef                 sub ebp, edi
// 0048ad8e  55                   push ebp
// 0048ad8f  8bce                 mov ecx, esi
// 0048ad91  8844242c             mov byte ptr [esp + 0x2c], al
// 0048ad95  e8d6fcffff           call 0x48aa70
// 0048ad9a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048ad9e  53                   push ebx
// 0048ad9f  55                   push ebp
// 0048ada0  51                   push ecx
// 0048ada1  894610               mov dword ptr [esi + 0x10], eax
// 0048ada4  e897fcffff           call 0x48aa40
// 0048ada9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048adad  8d54242c             lea edx, [esp + 0x2c]
// 0048adb1  52                   push edx
// 0048adb2  8d0c38               lea ecx, [eax + edi]
// 0048adb5  51                   push ecx
// 0048adb6  50                   push eax
// 0048adb7  e864fcffff           call 0x48aa20
// 0048adbc  83c418               add esp, 0x18
// 0048adbf  5b                   pop ebx
// 0048adc0  5f                   pop edi
// 0048adc1  5e                   pop esi
// 0048adc2  5d                   pop ebp
// 0048adc3  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_n@?$vector@EV?$allocator@E@std@@@std@@IAEXV?$_Vector_const_iterator@EV?$allocator@E@std@@@2@IABE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
