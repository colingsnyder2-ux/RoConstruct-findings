// roc 2009-12 0060bbb0  unit: seg_00600000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bbb0
//
// 0060bbb0  83ec38               sub esp, 0x38
// 0060bbb3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0060bbb7  8b442444             mov eax, dword ptr [esp + 0x44]
// 0060bbbb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060bbbf  57                   push edi
// 0060bbc0  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0060bbc4  6a38                 push 0x38
// 0060bbc6  894c240c             mov dword ptr [esp + 0xc], ecx
// 0060bbca  89442408             mov dword ptr [esp + 8], eax
// 0060bbce  8b07                 mov eax, dword ptr [edi]
// 0060bbd0  8d4c2408             lea ecx, [esp + 8]
// 0060bbd4  68884d9c00           push 0x9c4d88
// 0060bbd9  51                   push ecx
// 0060bbda  8954241c             mov dword ptr [esp + 0x1c], edx
// 0060bbde  89442420             mov dword ptr [esp + 0x20], eax
// 0060bbe2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0060bbea  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0060bbf2  e8f96e0000           call 0x612af0
// 0060bbf7  83c40c               add esp, 0xc
// 0060bbfa  85c0                 test eax, eax
// 0060bbfc  755c                 jne 0x60bc5a
// 0060bbfe  56                   push esi
// 0060bbff  8d542408             lea edx, [esp + 8]
// 0060bc03  6a04                 push 4
// 0060bc05  52                   push edx
// 0060bc06  e8e56f0000           call 0x612bf0
// 0060bc0b  8bf0                 mov esi, eax
// 0060bc0d  83c408               add esp, 8
// 0060bc10  83fe01               cmp esi, 1
// 0060bc13  7431                 je 0x60bc46
// 0060bc15  8d442408             lea eax, [esp + 8]
// 0060bc19  50                   push eax
// 0060bc1a  e8e1840000           call 0x614100
// 0060bc1f  83c404               add esp, 4
// 0060bc22  83fe02               cmp esi, 2
// 0060bc25  7414                 je 0x60bc3b
// 0060bc27  83fefb               cmp esi, -5
// 0060bc2a  7507                 jne 0x60bc33
// 0060bc2c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0060bc31  7408                 je 0x60bc3b
// 0060bc33  8bc6                 mov eax, esi
// 0060bc35  5e                   pop esi
// 0060bc36  5f                   pop edi
// 0060bc37  83c438               add esp, 0x38
// 0060bc3a  c3                   ret 
// 0060bc3b  5e                   pop esi
// 0060bc3c  b8fdffffff           mov eax, 0xfffffffd
// 0060bc41  5f                   pop edi
// 0060bc42  83c438               add esp, 0x38
// 0060bc45  c3                   ret 
// 0060bc46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060bc4a  8d542408             lea edx, [esp + 8]
// 0060bc4e  52                   push edx
// 0060bc4f  890f                 mov dword ptr [edi], ecx
// 0060bc51  e8aa840000           call 0x614100
// 0060bc56  83c404               add esp, 4
// 0060bc59  5e                   pop esi
// 0060bc5a  5f                   pop edi
// 0060bc5b  83c438               add esp, 0x38
// 0060bc5e  c3                   ret 
// library zlib-1.2.3/uncompr.c (function _uncompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 uncompr.c
