// roc 2009-12 008b3290  unit: CXTPDockingPaneTabbedContainer  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3290
//
// 008b3290  53                   push ebx
// 008b3291  55                   push ebp
// 008b3292  56                   push esi
// 008b3293  57                   push edi
// 008b3294  8bf9                 mov edi, ecx
// 008b3296  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 008b329c  8d6f54               lea ebp, [edi + 0x54]
// 008b329f  8bcd                 mov ecx, ebp
// 008b32a1  e89ad5ffff           call 0x8b0840
// 008b32a6  8bd8                 mov ebx, eax
// 008b32a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b32ac  8b4014               mov eax, dword ptr [eax + 0x14]
// 008b32af  0510dbffff           add eax, 0xffffdb10
// 008b32b4  83f803               cmp eax, 3
// 008b32b7  0f8789010000         ja 0x8b3446
// 008b32bd  ff248550348b00       jmp dword ptr [eax*4 + 0x8b3450]
// 008b32c4  83bbb400000000       cmp dword ptr [ebx + 0xb4], 0
// 008b32cb  7471                 je 0x8b333e
// 008b32cd  8bbf94000000         mov edi, dword ptr [edi + 0x94]
// 008b32d3  85ff                 test edi, edi
// 008b32d5  0f846b010000         je 0x8b3446
// 008b32db  8b2d0cb29800         mov ebp, dword ptr [0x98b20c]
// 008b32e1  8bc7                 mov eax, edi
// 008b32e3  8b7008               mov esi, dword ptr [eax + 8]
// 008b32e6  8b7f04               mov edi, dword ptr [edi + 4]
// 008b32e9  85f6                 test esi, esi
// 008b32eb  7405                 je 0x8b32f2
// 008b32ed  83c6e0               add esi, -0x20
// 008b32f0  eb02                 jmp 0x8b32f4
// 008b32f2  33f6                 xor esi, esi
// 008b32f4  8bce                 mov ecx, esi
// 008b32f6  e88598faff           call 0x85cb80
// 008b32fb  a801                 test al, 1
// 008b32fd  7534                 jne 0x8b3333
// 008b32ff  8d4e04               lea ecx, [esi + 4]
// 008b3302  51                   push ecx
// 008b3303  ffd5                 call ebp
// 008b3305  6a00                 push 0
// 008b3307  6a00                 push 0
// 008b3309  56                   push esi
// 008b330a  6a02                 push 2
// 008b330c  8bcb                 mov ecx, ebx
// 008b330e  e80d52f8ff           call 0x838520
// 008b3313  85c0                 test eax, eax
// 008b3315  7515                 jne 0x8b332c
// 008b3317  8bce                 mov ecx, esi
// 008b3319  e80295faff           call 0x85c820
// 008b331e  6a00                 push 0
// 008b3320  6a00                 push 0
// 008b3322  56                   push esi
// 008b3323  6a03                 push 3
// 008b3325  8bcb                 mov ecx, ebx
// 008b3327  e8f451f8ff           call 0x838520
// 008b332c  8bce                 mov ecx, esi
// 008b332e  e8a90af4ff           call 0x7f3ddc
// 008b3333  85ff                 test edi, edi
// 008b3335  75aa                 jne 0x8b32e1
// 008b3337  5f                   pop edi
// 008b3338  5e                   pop esi
// 008b3339  5d                   pop ebp
// 008b333a  5b                   pop ebx
// 008b333b  c20400               ret 4
// 008b333e  85f6                 test esi, esi
// 008b3340  0f8400010000         je 0x8b3446
// 008b3346  8d5604               lea edx, [esi + 4]
// 008b3349  52                   push edx
// 008b334a  ff150cb29800         call dword ptr [0x98b20c]
// 008b3350  6a00                 push 0
// 008b3352  6a00                 push 0
// 008b3354  56                   push esi
// 008b3355  6a02                 push 2
// 008b3357  8bcb                 mov ecx, ebx
// 008b3359  e8c251f8ff           call 0x838520
// 008b335e  85c0                 test eax, eax
// 008b3360  7515                 jne 0x8b3377
// 008b3362  8bce                 mov ecx, esi
// 008b3364  e8b794faff           call 0x85c820
// 008b3369  6a00                 push 0
// 008b336b  6a00                 push 0
// 008b336d  56                   push esi
// 008b336e  6a03                 push 3
// 008b3370  8bcb                 mov ecx, ebx
// 008b3372  e8a951f8ff           call 0x838520
// 008b3377  8bce                 mov ecx, esi
// 008b3379  e85e0af4ff           call 0x7f3ddc
// 008b337e  5f                   pop edi
// 008b337f  5e                   pop esi
// 008b3380  5d                   pop ebp
// 008b3381  5b                   pop ebx
// 008b3382  c20400               ret 4
// 008b3385  8b4500               mov eax, dword ptr [ebp]
// 008b3388  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008b338b  8bcd                 mov ecx, ebp
// 008b338d  ffd2                 call edx
// 008b338f  85c0                 test eax, eax
// 008b3391  7548                 jne 0x8b33db
// 008b3393  50                   push eax
// 008b3394  50                   push eax
// 008b3395  56                   push esi
// 008b3396  6a12                 push 0x12
// 008b3398  8bcb                 mov ecx, ebx
// 008b339a  e88151f8ff           call 0x838520
// 008b339f  85c0                 test eax, eax
// 008b33a1  0f859f000000         jne 0x8b3446
// 008b33a7  8b4500               mov eax, dword ptr [ebp]
// 008b33aa  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b33ad  8bcd                 mov ecx, ebp
// 008b33af  ffd2                 call edx
// 008b33b1  8bc8                 mov ecx, eax
// 008b33b3  e84a08f4ff           call 0x7f3c02
// 008b33b8  8bcf                 mov ecx, edi
// 008b33ba  e831e6ffff           call 0x8b19f0
// 008b33bf  8bce                 mov ecx, esi
// 008b33c1  e87a94faff           call 0x85c840
// 008b33c6  6a00                 push 0
// 008b33c8  6a00                 push 0
// 008b33ca  56                   push esi
// 008b33cb  6a13                 push 0x13
// 008b33cd  8bcb                 mov ecx, ebx
// 008b33cf  e84c51f8ff           call 0x838520
// 008b33d4  5f                   pop edi
// 008b33d5  5e                   pop esi
// 008b33d6  5d                   pop ebp
// 008b33d7  5b                   pop ebx
// 008b33d8  c20400               ret 4
// 008b33db  83bbb800000000       cmp dword ptr [ebx + 0xb8], 0
// 008b33e2  7418                 je 0x8b33fc
// 008b33e4  8bc5                 mov eax, ebp
// 008b33e6  50                   push eax
// 008b33e7  8bcd                 mov ecx, ebp
// 008b33e9  e852d4ffff           call 0x8b0840
// 008b33ee  8bc8                 mov ecx, eax
// 008b33f0  e86b74f8ff           call 0x83a860
// 008b33f5  5f                   pop edi
// 008b33f6  5e                   pop esi
// 008b33f7  5d                   pop ebp
// 008b33f8  5b                   pop ebx
// 008b33f9  c20400               ret 4
// 008b33fc  85f6                 test esi, esi
// 008b33fe  7419                 je 0x8b3419
// 008b3400  8d4620               lea eax, [esi + 0x20]
// 008b3403  50                   push eax
// 008b3404  8bcd                 mov ecx, ebp
// 008b3406  e835d4ffff           call 0x8b0840
// 008b340b  8bc8                 mov ecx, eax
// 008b340d  e84e74f8ff           call 0x83a860
// 008b3412  5f                   pop edi
// 008b3413  5e                   pop esi
// 008b3414  5d                   pop ebp
// 008b3415  5b                   pop ebx
// 008b3416  c20400               ret 4
// 008b3419  33c0                 xor eax, eax
// 008b341b  50                   push eax
// 008b341c  8bcd                 mov ecx, ebp
// 008b341e  e81dd4ffff           call 0x8b0840
// 008b3423  8bc8                 mov ecx, eax
// 008b3425  e83674f8ff           call 0x83a860
// 008b342a  5f                   pop edi
// 008b342b  5e                   pop esi
// 008b342c  5d                   pop ebp
// 008b342d  5b                   pop ebx
// 008b342e  c20400               ret 4
// 008b3431  8bcf                 mov ecx, edi
// 008b3433  e858f3ffff           call 0x8b2790
// 008b3438  5f                   pop edi
// 008b3439  5e                   pop esi
// 008b343a  5d                   pop ebp
// 008b343b  5b                   pop ebx
// 008b343c  c20400               ret 4
// 008b343f  8bcf                 mov ecx, edi
// 008b3441  e81adcffff           call 0x8b1060
// 008b3446  5f                   pop edi
// 008b3447  5e                   pop esi
// 008b3448  5d                   pop ebp
// 008b3449  5b                   pop ebx
// 008b344a  c20400               ret 4
// 008b344d  8d4900               lea ecx, [ecx]
// 008b3450  8533                 test dword ptr [ebx], esi
// 008b3452  8b00                 mov eax, dword ptr [eax]
// 008b3454  c432                 les esi, ptr [edx]
// 008b3456  8b00                 mov eax, dword ptr [eax]
// 008b3458  31348b               xor dword ptr [ebx + ecx*4], esi
// 008b345b  003f                 add byte ptr [edi], bh
// 008b345d  348b                 xor al, 0x8b
// copied from an identical function in another client (function ?OnCaptionButtonClick@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp