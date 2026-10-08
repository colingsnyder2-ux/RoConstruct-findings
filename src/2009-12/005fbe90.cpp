// roc 2009-12 005fbe90  unit: G3D::TextInput::WrongSymbol  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fbe90
//
// 005fbe90  8b542404             mov edx, dword ptr [esp + 4]
// 005fbe94  83ec08               sub esp, 8
// 005fbe97  53                   push ebx
// 005fbe98  8bd9                 mov ebx, ecx
// 005fbe9a  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fbe9d  b95d74d105           mov ecx, 0x5d1745d
// 005fbea2  2bc8                 sub ecx, eax
// 005fbea4  3bca                 cmp ecx, edx
// 005fbea6  7305                 jae 0x5fbead
// 005fbea8  e8a3110c00           call 0x6bd050
// 005fbead  8bc8                 mov ecx, eax
// 005fbeaf  d1e9                 shr ecx, 1
// 005fbeb1  83f908               cmp ecx, 8
// 005fbeb4  7305                 jae 0x5fbebb
// 005fbeb6  b908000000           mov ecx, 8
// 005fbebb  55                   push ebp
// 005fbebc  56                   push esi
// 005fbebd  57                   push edi
// 005fbebe  3bd1                 cmp edx, ecx
// 005fbec0  7311                 jae 0x5fbed3
// 005fbec2  be5d74d105           mov esi, 0x5d1745d
// 005fbec7  2bf1                 sub esi, ecx
// 005fbec9  3bc6                 cmp eax, esi
// 005fbecb  7706                 ja 0x5fbed3
// 005fbecd  8bd1                 mov edx, ecx
// 005fbecf  8954241c             mov dword ptr [esp + 0x1c], edx
// 005fbed3  8b7318               mov esi, dword ptr [ebx + 0x18]
// 005fbed6  03c2                 add eax, edx
// 005fbed8  6a00                 push 0
// 005fbeda  50                   push eax
// 005fbedb  89742418             mov dword ptr [esp + 0x18], esi
// 005fbedf  e85c4ae3ff           call 0x430940
// 005fbee4  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 005fbee7  8944241c             mov dword ptr [esp + 0x1c], eax
// 005fbeeb  03f6                 add esi, esi
// 005fbeed  03f6                 add esi, esi
// 005fbeef  8d3c06               lea edi, [esi + eax]
// 005fbef2  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005fbef5  03c0                 add eax, eax
// 005fbef7  03c0                 add eax, eax
// 005fbef9  8d140e               lea edx, [esi + ecx]
// 005fbefc  2bc2                 sub eax, edx
// 005fbefe  03c1                 add eax, ecx
// 005fbf00  c1f802               sar eax, 2
// 005fbf03  83c408               add esp, 8
// 005fbf06  8d0c8500000000       lea ecx, [eax*4]
// 005fbf0d  8d2c39               lea ebp, [ecx + edi]
// 005fbf10  85c0                 test eax, eax
// 005fbf12  760d                 jbe 0x5fbf21
// 005fbf14  51                   push ecx
// 005fbf15  52                   push edx
// 005fbf16  51                   push ecx
// 005fbf17  57                   push edi
// 005fbf18  ff15c0b79800         call dword ptr [0x98b7c0]
// 005fbf1e  83c410               add esp, 0x10
// 005fbf21  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fbf25  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005fbf29  3bd0                 cmp edx, eax
// 005fbf2b  7743                 ja 0x5fbf70
// 005fbf2d  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005fbf30  c1fe02               sar esi, 2
// 005fbf33  8d0cb500000000       lea ecx, [esi*4]
// 005fbf3a  8d3c29               lea edi, [ecx + ebp]
// 005fbf3d  85f6                 test esi, esi
// 005fbf3f  7611                 jbe 0x5fbf52
// 005fbf41  51                   push ecx
// 005fbf42  50                   push eax
// 005fbf43  51                   push ecx
// 005fbf44  55                   push ebp
// 005fbf45  ff15c0b79800         call dword ptr [0x98b7c0]
// 005fbf4b  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fbf4f  83c410               add esp, 0x10
// 005fbf52  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fbf56  2bca                 sub ecx, edx
// 005fbf58  7408                 je 0x5fbf62
// 005fbf5a  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fbf5e  33c0                 xor eax, eax
// 005fbf60  f3ab                 rep stosd dword ptr es:[edi], eax
// 005fbf62  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005fbf66  85d2                 test edx, edx
// 005fbf68  7662                 jbe 0x5fbfcc
// 005fbf6a  8bca                 mov ecx, edx
// 005fbf6c  8bfd                 mov edi, ebp
// 005fbf6e  eb58                 jmp 0x5fbfc8
// 005fbf70  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 005fbf73  8d3c8500000000       lea edi, [eax*4]
// 005fbf7a  8bc7                 mov eax, edi
// 005fbf7c  c1f802               sar eax, 2
// 005fbf7f  85c0                 test eax, eax
// 005fbf81  7611                 jbe 0x5fbf94
// 005fbf83  03c0                 add eax, eax
// 005fbf85  03c0                 add eax, eax
// 005fbf87  50                   push eax
// 005fbf88  51                   push ecx
// 005fbf89  50                   push eax
// 005fbf8a  55                   push ebp
// 005fbf8b  ff15c0b79800         call dword ptr [0x98b7c0]
// 005fbf91  83c410               add esp, 0x10
// 005fbf94  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005fbf97  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005fbf9b  8d0c07               lea ecx, [edi + eax]
// 005fbf9e  2bf1                 sub esi, ecx
// 005fbfa0  03f0                 add esi, eax
// 005fbfa2  c1fe02               sar esi, 2
// 005fbfa5  8d04b500000000       lea eax, [esi*4]
// 005fbfac  8d3c28               lea edi, [eax + ebp]
// 005fbfaf  85f6                 test esi, esi
// 005fbfb1  760d                 jbe 0x5fbfc0
// 005fbfb3  50                   push eax
// 005fbfb4  51                   push ecx
// 005fbfb5  50                   push eax
// 005fbfb6  55                   push ebp
// 005fbfb7  ff15c0b79800         call dword ptr [0x98b7c0]
// 005fbfbd  83c410               add esp, 0x10
// 005fbfc0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fbfc4  85c9                 test ecx, ecx
// 005fbfc6  7604                 jbe 0x5fbfcc
// 005fbfc8  33c0                 xor eax, eax
// 005fbfca  f3ab                 rep stosd dword ptr es:[edi], eax
// 005fbfcc  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005fbfcf  85c0                 test eax, eax
// 005fbfd1  7409                 je 0x5fbfdc
// 005fbfd3  50                   push eax
// 005fbfd4  e881781f00           call 0x7f385a
// 005fbfd9  83c404               add esp, 4
// 005fbfdc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fbfe0  015314               add dword ptr [ebx + 0x14], edx
// 005fbfe3  5f                   pop edi
// 005fbfe4  5e                   pop esi
// 005fbfe5  896b10               mov dword ptr [ebx + 0x10], ebp
// 005fbfe8  5d                   pop ebp
// 005fbfe9  5b                   pop ebx
// 005fbfea  83c408               add esp, 8
// 005fbfed  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?_Growmap@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
