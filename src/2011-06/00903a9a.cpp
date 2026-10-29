// roc 2011-06 00903a9a  unit: CXTIconHandle  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903a9a
//
// 00903a9a  6a0c                 push 0xc
// 00903a9c  ff151802a400         call dword ptr [0xa40218]
// 00903aa2  85c0                 test eax, eax
// 00903aa4  7507                 jne 0x903aad
// 00903aa6  40                   inc eax
// 00903aa7  a37093d100           mov dword ptr [0xd19370], eax
// 00903aac  c3                   ret 
// 00903aad  53                   push ebx
// 00903aae  56                   push esi
// 00903aaf  57                   push edi
// 00903ab0  684897a700           push 0xa79748
// 00903ab5  ff152403a400         call dword ptr [0xa40324]
// 00903abb  8bf8                 mov edi, eax
// 00903abd  33db                 xor ebx, ebx
// 00903abf  3bfb                 cmp edi, ebx
// 00903ac1  7420                 je 0x903ae3
// 00903ac3  8b356c03a400         mov esi, dword ptr [0xa4036c]
// 00903ac9  689004ae00           push 0xae0490
// 00903ace  57                   push edi
// 00903acf  ffd6                 call esi
// 00903ad1  687404ae00           push 0xae0474
// 00903ad6  57                   push edi
// 00903ad7  a37493d100           mov dword ptr [0xd19374], eax
// 00903adc  ffd6                 call esi
// 00903ade  a37893d100           mov dword ptr [0xd19378], eax
// 00903ae3  391d7493d100         cmp dword ptr [0xd19374], ebx
// 00903ae9  745e                 je 0x903b49
// 00903aeb  391d7893d100         cmp dword ptr [0xd19378], ebx
// 00903af1  7456                 je 0x903b49
// 00903af3  64a118000000         mov eax, dword ptr fs:[0x18]
// 00903af9  8b7030               mov esi, dword ptr [eax + 0x30]
// 00903afc  83c634               add esi, 0x34
// 00903aff  8b06                 mov eax, dword ptr [esi]
// 00903b01  3bc3                 cmp eax, ebx
// 00903b03  753a                 jne 0x903b3f
// 00903b05  6a08                 push 8
// 00903b07  53                   push ebx
// 00903b08  8b1db801a400         mov ebx, dword ptr [0xa401b8]
// 00903b0e  ffd3                 call ebx
// 00903b10  50                   push eax
// 00903b11  ff15b001a400         call dword ptr [0xa401b0]
// 00903b17  8bf8                 mov edi, eax
// 00903b19  33c0                 xor eax, eax
// 00903b1b  3bf8                 cmp edi, eax
// 00903b1d  742a                 je 0x903b49
// 00903b1f  50                   push eax
// 00903b20  57                   push edi
// 00903b21  56                   push esi
// 00903b22  8907                 mov dword ptr [edi], eax
// 00903b24  894704               mov dword ptr [edi + 4], eax
// 00903b27  ff155c03a400         call dword ptr [0xa4035c]
// 00903b2d  85c0                 test eax, eax
// 00903b2f  740c                 je 0x903b3d
// 00903b31  57                   push edi
// 00903b32  6a00                 push 0
// 00903b34  ffd3                 call ebx
// 00903b36  50                   push eax
// 00903b37  ff15b401a400         call dword ptr [0xa401b4]
// 00903b3d  8b06                 mov eax, dword ptr [esi]
// 00903b3f  a37093d100           mov dword ptr [0xd19370], eax
// 00903b44  33c0                 xor eax, eax
// 00903b46  40                   inc eax
// 00903b47  eb02                 jmp 0x903b4b
// 00903b49  33c0                 xor eax, eax
// 00903b4b  5f                   pop edi
// 00903b4c  5e                   pop esi
// 00903b4d  5b                   pop ebx
// 00903b4e  c3                   ret 
// copied from an identical function in another client (function ?__InitializeThunkPool@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlthunk.obj