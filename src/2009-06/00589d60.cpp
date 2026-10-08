// from server: 100% by auto
// roc 2009-06 00589d60  unit: seg_00580000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589d60
//
// 00589d60  83ec38               sub esp, 0x38
// 00589d63  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00589d67  8b442444             mov eax, dword ptr [esp + 0x44]
// 00589d6b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00589d6f  57                   push edi
// 00589d70  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00589d74  6a38                 push 0x38
// 00589d76  894c240c             mov dword ptr [esp + 0xc], ecx
// 00589d7a  89442408             mov dword ptr [esp + 8], eax
// 00589d7e  8b07                 mov eax, dword ptr [edi]
// 00589d80  8d4c2408             lea ecx, [esp + 8]
// 00589d84  68e8de8c00           push 0x8cdee8
// 00589d89  51                   push ecx
// 00589d8a  8954241c             mov dword ptr [esp + 0x1c], edx
// 00589d8e  89442420             mov dword ptr [esp + 0x20], eax
// 00589d92  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00589d9a  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00589da2  e8296d0000           call 0x590ad0
// 00589da7  83c40c               add esp, 0xc
// 00589daa  85c0                 test eax, eax
// 00589dac  755c                 jne 0x589e0a
// 00589dae  56                   push esi
// 00589daf  8d542408             lea edx, [esp + 8]
// 00589db3  6a04                 push 4
// 00589db5  52                   push edx
// 00589db6  e8256e0000           call 0x590be0
// 00589dbb  8bf0                 mov esi, eax
// 00589dbd  83c408               add esp, 8
// 00589dc0  83fe01               cmp esi, 1
// 00589dc3  7431                 je 0x589df6
// 00589dc5  8d442408             lea eax, [esp + 8]
// 00589dc9  50                   push eax
// 00589dca  e821830000           call 0x5920f0
// 00589dcf  83c404               add esp, 4
// 00589dd2  83fe02               cmp esi, 2
// 00589dd5  7414                 je 0x589deb
// 00589dd7  83fefb               cmp esi, -5
// 00589dda  7507                 jne 0x589de3
// 00589ddc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00589de1  7408                 je 0x589deb
// 00589de3  8bc6                 mov eax, esi
// 00589de5  5e                   pop esi
// 00589de6  5f                   pop edi
// 00589de7  83c438               add esp, 0x38
// 00589dea  c3                   ret 
// 00589deb  5e                   pop esi
// 00589dec  b8fdffffff           mov eax, 0xfffffffd
// 00589df1  5f                   pop edi
// 00589df2  83c438               add esp, 0x38
// 00589df5  c3                   ret 
// 00589df6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00589dfa  8d542408             lea edx, [esp + 8]
// 00589dfe  52                   push edx
// 00589dff  890f                 mov dword ptr [edi], ecx
// 00589e01  e8ea820000           call 0x5920f0
// 00589e06  83c404               add esp, 4
// 00589e09  5e                   pop esi
// 00589e0a  5f                   pop edi
// 00589e0b  83c438               add esp, 0x38
// 00589e0e  c3                   ret 
// library zlib-1.2.3/uncompr.c (function _uncompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 uncompr.c
