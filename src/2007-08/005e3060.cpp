// roc 2007-08 005e3060  unit: RBX::IMovingManager  size: 560 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3060
//
// 005e3060  6aff                 push -1
// 005e3062  68d4aa7500           push 0x75aad4
// 005e3067  64a100000000         mov eax, dword ptr fs:[0]
// 005e306d  50                   push eax
// 005e306e  64892500000000       mov dword ptr fs:[0], esp
// 005e3075  83ec24               sub esp, 0x24
// 005e3078  53                   push ebx
// 005e3079  55                   push ebp
// 005e307a  56                   push esi
// 005e307b  57                   push edi
// 005e307c  6a10                 push 0x10
// 005e307e  8bf9                 mov edi, ecx
// 005e3080  e871ce0400           call 0x62fef6
// 005e3085  8bd8                 mov ebx, eax
// 005e3087  83c404               add esp, 4
// 005e308a  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e308e  8b742444             mov esi, dword ptr [esp + 0x44]
// 005e3092  33c0                 xor eax, eax
// 005e3094  3bd8                 cmp ebx, eax
// 005e3096  8944243c             mov dword ptr [esp + 0x3c], eax
// 005e309a  742f                 je 0x5e30cb
// 005e309c  8b442448             mov eax, dword ptr [esp + 0x48]
// 005e30a0  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 005e30a3  6aff                 push -1
// 005e30a5  50                   push eax
// 005e30a6  c703b4707800         mov dword ptr [ebx], 0x7870b4
// 005e30ac  e88f98f4ff           call 0x52c940
// 005e30b1  896b0c               mov dword ptr [ebx + 0xc], ebp
// 005e30b4  8beb                 mov ebp, ebx
// 005e30b6  83c408               add esp, 8
// 005e30b9  894304               mov dword ptr [ebx + 4], eax
// 005e30bc  c70360fa7800         mov dword ptr [ebx], 0x78fa60
// 005e30c2  897308               mov dword ptr [ebx + 8], esi
// 005e30c5  896c2410             mov dword ptr [esp + 0x10], ebp
// 005e30c9  eb06                 jmp 0x5e30d1
// 005e30cb  89442410             mov dword ptr [esp + 0x10], eax
// 005e30cf  8be8                 mov ebp, eax
// 005e30d1  8d4c2414             lea ecx, [esp + 0x14]
// 005e30d5  51                   push ecx
// 005e30d6  8d4f10               lea ecx, [edi + 0x10]
// 005e30d9  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 005e30e1  896c2418             mov dword ptr [esp + 0x18], ebp
// 005e30e5  e8d61de8ff           call 0x464ec0
// 005e30ea  8b8f8c000000         mov ecx, dword ptr [edi + 0x8c]
// 005e30f0  85c9                 test ecx, ecx
// 005e30f2  8d9f88000000         lea ebx, [edi + 0x88]
// 005e30f8  740c                 je 0x5e3106
// 005e30fa  8b4308               mov eax, dword ptr [ebx + 8]
// 005e30fd  2bc1                 sub eax, ecx
// 005e30ff  c1f802               sar eax, 2
// 005e3102  3bc6                 cmp eax, esi
// 005e3104  770d                 ja 0x5e3113
// 005e3106  6aff                 push -1
// 005e3108  8d5601               lea edx, [esi + 1]
// 005e310b  52                   push edx
// 005e310c  8bcb                 mov ecx, ebx
// 005e310e  e83d2de6ff           call 0x445e50
// 005e3113  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005e3116  85c9                 test ecx, ecx
// 005e3118  740c                 je 0x5e3126
// 005e311a  8b4308               mov eax, dword ptr [ebx + 8]
// 005e311d  2bc1                 sub eax, ecx
// 005e311f  c1f802               sar eax, 2
// 005e3122  3bf0                 cmp esi, eax
// 005e3124  7206                 jb 0x5e312c
// 005e3126  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e312c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005e312f  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3132  8d542444             lea edx, [esp + 0x44]
// 005e3136  890cb0               mov dword ptr [eax + esi*4], ecx
// 005e3139  52                   push edx
// 005e313a  8d4f78               lea ecx, [edi + 0x78]
// 005e313d  e8de83ffff           call 0x5db520
// 005e3142  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005e3145  85c9                 test ecx, ecx
// 005e3147  8d5f40               lea ebx, [edi + 0x40]
// 005e314a  740c                 je 0x5e3158
// 005e314c  8b4308               mov eax, dword ptr [ebx + 8]
// 005e314f  2bc1                 sub eax, ecx
// 005e3151  c1f802               sar eax, 2
// 005e3154  3bc6                 cmp eax, esi
// 005e3156  7711                 ja 0x5e3169
// 005e3158  e8d399f4ff           call 0x52cb30
// 005e315d  50                   push eax
// 005e315e  8d4601               lea eax, [esi + 1]
// 005e3161  50                   push eax
// 005e3162  8bcb                 mov ecx, ebx
// 005e3164  e8e72ce6ff           call 0x445e50
// 005e3169  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005e316c  85c9                 test ecx, ecx
// 005e316e  740c                 je 0x5e317c
// 005e3170  8b4308               mov eax, dword ptr [ebx + 8]
// 005e3173  2bc1                 sub eax, ecx
// 005e3175  c1f802               sar eax, 2
// 005e3178  3bf0                 cmp esi, eax
// 005e317a  7206                 jb 0x5e3182
// 005e317c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e3182  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005e3185  8b5504               mov edx, dword ptr [ebp + 4]
// 005e3188  8d5f68               lea ebx, [edi + 0x68]
// 005e318b  8914b1               mov dword ptr [ecx + esi*4], edx
// 005e318e  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3191  85c0                 test eax, eax
// 005e3193  741c                 je 0x5e31b1
// 005e3195  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005e3198  2bc8                 sub ecx, eax
// 005e319a  b893244992           mov eax, 0x92492493
// 005e319f  f7e9                 imul ecx
// 005e31a1  03d1                 add edx, ecx
// 005e31a3  c1fa04               sar edx, 4
// 005e31a6  8bc2                 mov eax, edx
// 005e31a8  c1e81f               shr eax, 0x1f
// 005e31ab  03c2                 add eax, edx
// 005e31ad  3bc6                 cmp eax, esi
// 005e31af  771a                 ja 0x5e31cb
// 005e31b1  83ec1c               sub esp, 0x1c
// 005e31b4  8bcc                 mov ecx, esp
// 005e31b6  8d6e01               lea ebp, [esi + 1]
// 005e31b9  89642460             mov dword ptr [esp + 0x60], esp
// 005e31bd  ff15a4e67700         call dword ptr [0x77e6a4]
// 005e31c3  55                   push ebp
// 005e31c4  8bcb                 mov ecx, ebx
// 005e31c6  e8152ee6ff           call 0x445fe0
// 005e31cb  8b4304               mov eax, dword ptr [ebx + 4]
// 005e31ce  85c0                 test eax, eax
// 005e31d0  741c                 je 0x5e31ee
// 005e31d2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005e31d5  2bc8                 sub ecx, eax
// 005e31d7  b893244992           mov eax, 0x92492493
// 005e31dc  f7e9                 imul ecx
// 005e31de  03d1                 add edx, ecx
// 005e31e0  c1fa04               sar edx, 4
// 005e31e3  8bc2                 mov eax, edx
// 005e31e5  c1e81f               shr eax, 0x1f
// 005e31e8  03c2                 add eax, edx
// 005e31ea  3bf0                 cmp esi, eax
// 005e31ec  7206                 jb 0x5e31f4
// 005e31ee  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e31f4  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005e31f7  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005e31fb  8d04f500000000       lea eax, [esi*8]
// 005e3202  2bc6                 sub eax, esi
// 005e3204  55                   push ebp
// 005e3205  8d0c81               lea ecx, [ecx + eax*4]
// 005e3208  ff152ce67700         call dword ptr [0x77e62c]
// 005e320e  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e3212  8b4204               mov eax, dword ptr [edx + 4]
// 005e3215  8d4c2444             lea ecx, [esp + 0x44]
// 005e3219  51                   push ecx
// 005e321a  8d4f28               lea ecx, [edi + 0x28]
// 005e321d  89442448             mov dword ptr [esp + 0x48], eax
// 005e3221  e89a7fffff           call 0x5db1c0
// 005e3226  55                   push ebp
// 005e3227  8d4c241c             lea ecx, [esp + 0x1c]
// 005e322b  8930                 mov dword ptr [eax], esi
// 005e322d  ff1598e67700         call dword ptr [0x77e698]
// 005e3233  8d542418             lea edx, [esp + 0x18]
// 005e3237  bb01000000           mov ebx, 1
// 005e323c  52                   push edx
// 005e323d  8d4f50               lea ecx, [edi + 0x50]
// 005e3240  895c2440             mov dword ptr [esp + 0x40], ebx
// 005e3244  e857fdffff           call 0x5e2fa0
// 005e3249  8d4c2418             lea ecx, [esp + 0x18]
// 005e324d  8930                 mov dword ptr [eax], esi
// 005e324f  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 005e3257  ff15ace67700         call dword ptr [0x77e6ac]
// 005e325d  015f20               add dword ptr [edi + 0x20], ebx
// 005e3260  8b4720               mov eax, dword ptr [edi + 0x20]
// 005e3263  83c9ff               or ecx, 0xffffffff
// 005e3266  85c0                 test eax, eax
// 005e3268  760e                 jbe 0x5e3278
// 005e326a  8d9b00000000         lea ebx, [ebx]
// 005e3270  d1e8                 shr eax, 1
// 005e3272  03cb                 add ecx, ebx
// 005e3274  85c0                 test eax, eax
// 005e3276  77f8                 ja 0x5e3270
// 005e3278  894f24               mov dword ptr [edi + 0x24], ecx
// 005e327b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e327f  5f                   pop edi
// 005e3280  5e                   pop esi
// 005e3281  5d                   pop ebp
// 005e3282  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3289  5b                   pop ebx
// 005e328a  83c430               add esp, 0x30
// 005e328d  c20800               ret 8
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?addPair@?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@AAEXW4PartType@Part@3@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
