// roc 2007-03 0054bf70  unit: seg_00540000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bf70
//
// 0054bf70  55                   push ebp
// 0054bf71  8bec                 mov ebp, esp
// 0054bf73  6aff                 push -1
// 0054bf75  6840337500           push 0x753340
// 0054bf7a  64a100000000         mov eax, dword ptr fs:[0]
// 0054bf80  50                   push eax
// 0054bf81  64892500000000       mov dword ptr fs:[0], esp
// 0054bf88  51                   push ecx
// 0054bf89  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054bf8c  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054bf8f  8b00                 mov eax, dword ptr [eax]
// 0054bf91  8b12                 mov edx, dword ptr [edx]
// 0054bf93  53                   push ebx
// 0054bf94  56                   push esi
// 0054bf95  2bc2                 sub eax, edx
// 0054bf97  85c0                 test eax, eax
// 0054bf99  57                   push edi
// 0054bf9a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054bf9d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054bfa4  7e0f                 jle 0x54bfb5
// 0054bfa6  8b7148               mov esi, dword ptr [ecx + 0x48]
// 0054bfa9  50                   push eax
// 0054bfaa  52                   push edx
// 0054bfab  56                   push esi
// 0054bfac  83c140               add ecx, 0x40
// 0054bfaf  51                   push ecx
// 0054bfb0  e81bebffff           call 0x54aad0
// 0054bfb5  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0054bfb8  85c9                 test ecx, ecx
// 0054bfba  b301                 mov bl, 1
// 0054bfbc  740d                 je 0x54bfcb
// 0054bfbe  ff1558e77700         call dword ptr [0x77e758]
// 0054bfc4  83f8ff               cmp eax, -1
// 0054bfc7  7502                 jne 0x54bfcb
// 0054bfc9  32db                 xor bl, bl
// 0054bfcb  8ac3                 mov al, bl
// 0054bfcd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bfd0  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bfd7  5f                   pop edi
// 0054bfd8  5e                   pop esi
// 0054bfd9  5b                   pop ebx
// 0054bfda  8be5                 mov esp, ebp
// 0054bfdc  5d                   pop ebp
// 0054bfdd  c3                   ret 
// 0054bfde  b8e4bf5400           mov eax, 0x54bfe4
// 0054bfe3  c3                   ret 
// 0054bfe4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bfe7  5f                   pop edi
// 0054bfe8  5e                   pop esi
// 0054bfe9  32c0                 xor al, al
// 0054bfeb  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bff2  5b                   pop ebx
// 0054bff3  8be5                 mov esp, ebp
// 0054bff5  5d                   pop ebp
// 0054bff6  c3                   ret 
// copied from an identical function in another client (function ?strict_sync@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp