// roc 2009-06 00571360  unit: seg_00570000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571360
//
// 00571360  64a100000000         mov eax, dword ptr fs:[0]
// 00571366  6aff                 push -1
// 00571368  68e0038600           push 0x8603e0
// 0057136d  50                   push eax
// 0057136e  64892500000000       mov dword ptr fs:[0], esp
// 00571375  81ec34010000         sub esp, 0x134
// 0057137b  56                   push esi
// 0057137c  8bb42448010000       mov esi, dword ptr [esp + 0x148]
// 00571383  57                   push edi
// 00571384  8d442408             lea eax, [esp + 8]
// 00571388  50                   push eax
// 00571389  8bf9                 mov edi, ecx
// 0057138b  6a02                 push 2
// 0057138d  8bce                 mov ecx, esi
// 0057138f  e80c390000           call 0x574ca0
// 00571394  668b442408           mov ax, word ptr [esp + 8]
// 00571399  3c50                 cmp al, 0x50
// 0057139b  0f85d1000000         jne 0x571472
// 005713a1  80fc36               cmp ah, 0x36
// 005713a4  0f85c8000000         jne 0x571472
// 005713aa  53                   push ebx
// 005713ab  55                   push ebp
// 005713ac  8bce                 mov ecx, esi
// 005713ae  e88de5ffff           call 0x56f940
// 005713b3  8bce                 mov ecx, esi
// 005713b5  8bd8                 mov ebx, eax
// 005713b7  e884e5ffff           call 0x56f940
// 005713bc  8bce                 mov ecx, esi
// 005713be  8be8                 mov ebp, eax
// 005713c0  e87be5ffff           call 0x56f940
// 005713c5  85db                 test ebx, ebx
// 005713c7  7c57                 jl 0x571420
// 005713c9  85ed                 test ebp, ebp
// 005713cb  7c53                 jl 0x571420
// 005713cd  81fba0860100         cmp ebx, 0x186a0
// 005713d3  7f4b                 jg 0x571420
// 005713d5  81fda0860100         cmp ebp, 0x186a0
// 005713db  7f43                 jg 0x571420
// 005713dd  8bce                 mov ecx, esi
// 005713df  e81cbeffff           call 0x56d200
// 005713e4  6a03                 push 3
// 005713e6  55                   push ebp
// 005713e7  53                   push ebx
// 005713e8  8bcf                 mov ecx, edi
// 005713ea  e851f6ffff           call 0x570a40
// 005713ef  8b470c               mov eax, dword ptr [edi + 0xc]
// 005713f2  0faf4708             imul eax, dword ptr [edi + 8]
// 005713f6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005713f9  51                   push ecx
// 005713fa  8d1440               lea edx, [eax + eax*2]
// 005713fd  52                   push edx
// 005713fe  8bce                 mov ecx, esi
// 00571400  e89b380000           call 0x574ca0
// 00571405  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0057140c  5d                   pop ebp
// 0057140d  5b                   pop ebx
// 0057140e  5f                   pop edi
// 0057140f  5e                   pop esi
// 00571410  64890d00000000       mov dword ptr fs:[0], ecx
// 00571417  81c440010000         add esp, 0x140
// 0057141d  c20400               ret 4
// 00571420  6878b68c00           push 0x8cb678
// 00571425  8d4c2418             lea ecx, [esp + 0x18]
// 00571429  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057142f  8d44244c             lea eax, [esp + 0x4c]
// 00571433  50                   push eax
// 00571434  8bce                 mov ecx, esi
// 00571436  c784245001000002000000 mov dword ptr [esp + 0x150], 2
// 00571441  e86abdffff           call 0x56d1b0
// 00571446  50                   push eax
// 00571447  8d4c2418             lea ecx, [esp + 0x18]
// 0057144b  51                   push ecx
// 0057144c  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00571453  c684245401000003     mov byte ptr [esp + 0x154], 3
// 0057145b  e8408bf2ff           call 0x499fa0
// 00571460  68308a9800           push 0x988a30
// 00571465  8d942488000000       lea edx, [esp + 0x88]
// 0057146c  52                   push edx
// 0057146d  e8d8851a00           call 0x719a4a
// 00571472  6864b68c00           push 0x8cb664
// 00571477  8d4c242c             lea ecx, [esp + 0x2c]
// 0057147b  ff15b4e48900         call dword ptr [0x89e4b4]
// 00571481  8d442460             lea eax, [esp + 0x60]
// 00571485  50                   push eax
// 00571486  8bce                 mov ecx, esi
// 00571488  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 00571493  e818bdffff           call 0x56d1b0
// 00571498  50                   push eax
// 00571499  8d4c242c             lea ecx, [esp + 0x2c]
// 0057149d  51                   push ecx
// 0057149e  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 005714a5  c684244c01000001     mov byte ptr [esp + 0x14c], 1
// 005714ad  e8ee8af2ff           call 0x499fa0
// 005714b2  68308a9800           push 0x988a30
// 005714b7  8d9424e0000000       lea edx, [esp + 0xe0]
// 005714be  52                   push edx
// 005714bf  e886851a00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPM@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
