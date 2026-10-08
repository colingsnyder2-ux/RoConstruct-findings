// from server: 100% by auto
// roc 2010-06 0048bc90  unit: G3D::Win32Window  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bc90
//
// 0048bc90  6aff                 push -1
// 0048bc92  68c7629800           push 0x9862c7
// 0048bc97  64a100000000         mov eax, dword ptr fs:[0]
// 0048bc9d  50                   push eax
// 0048bc9e  64892500000000       mov dword ptr fs:[0], esp
// 0048bca5  81eca4010000         sub esp, 0x1a4
// 0048bcab  53                   push ebx
// 0048bcac  56                   push esi
// 0048bcad  57                   push edi
// 0048bcae  8d4c2414             lea ecx, [esp + 0x14]
// 0048bcb2  ff1504a49e00         call dword ptr [0x9ea404]
// 0048bcb8  33f6                 xor esi, esi
// 0048bcba  89742440             mov dword ptr [esp + 0x40], esi
// 0048bcbe  89742444             mov dword ptr [esp + 0x44], esi
// 0048bcc2  8974243c             mov dword ptr [esp + 0x3c], esi
// 0048bcc6  8bbc24c0010000       mov edi, dword ptr [esp + 0x1c0]
// 0048bccd  8b9c24c4010000       mov ebx, dword ptr [esp + 0x1c4]
// 0048bcd4  8b03                 mov eax, dword ptr [ebx]
// 0048bcd6  8b08                 mov ecx, dword ptr [eax]
// 0048bcd8  56                   push esi
// 0048bcd9  8d542414             lea edx, [esp + 0x14]
// 0048bcdd  52                   push edx
// 0048bcde  8d5704               lea edx, [edi + 4]
// 0048bce1  52                   push edx
// 0048bce2  50                   push eax
// 0048bce3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048bce6  c78424c801000001000000 mov dword ptr [esp + 0x1c8], 1
// 0048bcf1  ffd0                 call eax
// 0048bcf3  85c0                 test eax, eax
// 0048bcf5  0f85c5000000         jne 0x48bdc0
// 0048bcfb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048bcff  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0048bd02  8b08                 mov ecx, dword ptr [eax]
// 0048bd04  6a06                 push 6
// 0048bd06  52                   push edx
// 0048bd07  50                   push eax
// 0048bd08  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0048bd0b  ffd0                 call eax
// 0048bd0d  85c0                 test eax, eax
// 0048bd0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048bd13  8b08                 mov ecx, dword ptr [eax]
// 0048bd15  7515                 jne 0x48bd2c
// 0048bd17  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0048bd1a  68d034a100           push 0xa134d0
// 0048bd1f  50                   push eax
// 0048bd20  ffd2                 call edx
// 0048bd22  85c0                 test eax, eax
// 0048bd24  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048bd28  740d                 je 0x48bd37
// 0048bd2a  8b08                 mov ecx, dword ptr [eax]
// 0048bd2c  8b5108               mov edx, dword ptr [ecx + 8]
// 0048bd2f  50                   push eax
// 0048bd30  ffd2                 call edx
// 0048bd32  e989000000           jmp 0x48bdc0
// 0048bd37  8d542448             lea edx, [esp + 0x48]
// 0048bd3b  c74424482c000000     mov dword ptr [esp + 0x48], 0x2c
// 0048bd43  8b08                 mov ecx, dword ptr [eax]
// 0048bd45  52                   push edx
// 0048bd46  50                   push eax
// 0048bd47  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048bd4a  ffd0                 call eax
// 0048bd4c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0048bd50  81c72c010000         add edi, 0x12c
// 0048bd56  894c2438             mov dword ptr [esp + 0x38], ecx
// 0048bd5a  57                   push edi
// 0048bd5b  8d4c2418             lea ecx, [esp + 0x18]
// 0048bd5f  ff151ca49e00         call dword ptr [0x9ea41c]
// 0048bd65  bf3c010000           mov edi, 0x13c
// 0048bd6a  8d9b00000000         lea ebx, [ebx]
// 0048bd70  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048bd74  6a01                 push 1
// 0048bd76  8d0cb500000000       lea ecx, [esi*4]
// 0048bd7d  51                   push ecx
// 0048bd7e  8d4c247c             lea ecx, [esp + 0x7c]
// 0048bd82  897c247c             mov dword ptr [esp + 0x7c], edi
// 0048bd86  8b10                 mov edx, dword ptr [eax]
// 0048bd88  8b5238               mov edx, dword ptr [edx + 0x38]
// 0048bd8b  51                   push ecx
// 0048bd8c  50                   push eax
// 0048bd8d  ffd2                 call edx
// 0048bd8f  85c0                 test eax, eax
// 0048bd91  7512                 jne 0x48bda5
// 0048bd93  8d44240c             lea eax, [esp + 0xc]
// 0048bd97  50                   push eax
// 0048bd98  8d4c2440             lea ecx, [esp + 0x40]
// 0048bd9c  89742410             mov dword ptr [esp + 0x10], esi
// 0048bda0  e8fbd8ffff           call 0x4896a0
// 0048bda5  46                   inc esi
// 0048bda6  83fe08               cmp esi, 8
// 0048bda9  7cc5                 jl 0x48bd70
// 0048bdab  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0048bdaf  8d542410             lea edx, [esp + 0x10]
// 0048bdb3  894c2434             mov dword ptr [esp + 0x34], ecx
// 0048bdb7  52                   push edx
// 0048bdb8  8d4b04               lea ecx, [ebx + 4]
// 0048bdbb  e8d0fdffff           call 0x48bb90
// 0048bdc0  8d4c2410             lea ecx, [esp + 0x10]
// 0048bdc4  c78424b8010000ffffffff mov dword ptr [esp + 0x1b8], 0xffffffff
// 0048bdcf  e8bcc9ffff           call 0x488790
// 0048bdd4  8b8c24b0010000       mov ecx, dword ptr [esp + 0x1b0]
// 0048bddb  5f                   pop edi
// 0048bddc  5e                   pop esi
// 0048bddd  b801000000           mov eax, 1
// 0048bde2  5b                   pop ebx
// 0048bde3  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bdea  81c4b0010000         add esp, 0x1b0
// 0048bdf0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
