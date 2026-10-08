// roc 2009-12 00605e40  unit: seg_00600000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00605e40
//
// 00605e40  8b442404             mov eax, dword ptr [esp + 4]
// 00605e44  8a5008               mov dl, byte ptr [eax + 8]
// 00605e47  f6c202               test dl, 2
// 00605e4a  0f84c3000000         je 0x605f13
// 00605e50  8b08                 mov ecx, dword ptr [eax]
// 00605e52  8a4009               mov al, byte ptr [eax + 9]
// 00605e55  56                   push esi
// 00605e56  3c08                 cmp al, 8
// 00605e58  7551                 jne 0x605eab
// 00605e5a  80fa02               cmp dl, 2
// 00605e5d  7525                 jne 0x605e84
// 00605e5f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00605e63  85c9                 test ecx, ecx
// 00605e65  0f86a7000000         jbe 0x605f12
// 00605e6b  8bf1                 mov esi, ecx
// 00605e6d  8d4900               lea ecx, [ecx]
// 00605e70  8a08                 mov cl, byte ptr [eax]
// 00605e72  8a5002               mov dl, byte ptr [eax + 2]
// 00605e75  8810                 mov byte ptr [eax], dl
// 00605e77  884802               mov byte ptr [eax + 2], cl
// 00605e7a  83c003               add eax, 3
// 00605e7d  83ee01               sub esi, 1
// 00605e80  75ee                 jne 0x605e70
// 00605e82  5e                   pop esi
// 00605e83  c3                   ret 
// 00605e84  80fa06               cmp dl, 6
// 00605e87  0f8585000000         jne 0x605f12
// 00605e8d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00605e91  85c9                 test ecx, ecx
// 00605e93  767d                 jbe 0x605f12
// 00605e95  8bf1                 mov esi, ecx
// 00605e97  8a08                 mov cl, byte ptr [eax]
// 00605e99  8a5002               mov dl, byte ptr [eax + 2]
// 00605e9c  8810                 mov byte ptr [eax], dl
// 00605e9e  884802               mov byte ptr [eax + 2], cl
// 00605ea1  83c004               add eax, 4
// 00605ea4  83ee01               sub esi, 1
// 00605ea7  75ee                 jne 0x605e97
// 00605ea9  5e                   pop esi
// 00605eaa  c3                   ret 
// 00605eab  3c10                 cmp al, 0x10
// 00605ead  7563                 jne 0x605f12
// 00605eaf  80fa02               cmp dl, 2
// 00605eb2  752e                 jne 0x605ee2
// 00605eb4  85c9                 test ecx, ecx
// 00605eb6  765a                 jbe 0x605f12
// 00605eb8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00605ebc  40                   inc eax
// 00605ebd  8bf1                 mov esi, ecx
// 00605ebf  90                   nop 
// 00605ec0  0fb65003             movzx edx, byte ptr [eax + 3]
// 00605ec4  8a48ff               mov cl, byte ptr [eax - 1]
// 00605ec7  8850ff               mov byte ptr [eax - 1], dl
// 00605eca  0fb65004             movzx edx, byte ptr [eax + 4]
// 00605ece  884803               mov byte ptr [eax + 3], cl
// 00605ed1  8a08                 mov cl, byte ptr [eax]
// 00605ed3  8810                 mov byte ptr [eax], dl
// 00605ed5  884804               mov byte ptr [eax + 4], cl
// 00605ed8  83c006               add eax, 6
// 00605edb  83ee01               sub esi, 1
// 00605ede  75e0                 jne 0x605ec0
// 00605ee0  5e                   pop esi
// 00605ee1  c3                   ret 
// 00605ee2  80fa06               cmp dl, 6
// 00605ee5  752b                 jne 0x605f12
// 00605ee7  85c9                 test ecx, ecx
// 00605ee9  7627                 jbe 0x605f12
// 00605eeb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00605eef  40                   inc eax
// 00605ef0  8bf1                 mov esi, ecx
// 00605ef2  0fb65003             movzx edx, byte ptr [eax + 3]
// 00605ef6  8a48ff               mov cl, byte ptr [eax - 1]
// 00605ef9  8850ff               mov byte ptr [eax - 1], dl
// 00605efc  0fb65004             movzx edx, byte ptr [eax + 4]
// 00605f00  884803               mov byte ptr [eax + 3], cl
// 00605f03  8a08                 mov cl, byte ptr [eax]
// 00605f05  8810                 mov byte ptr [eax], dl
// 00605f07  884804               mov byte ptr [eax + 4], cl
// 00605f0a  83c008               add eax, 8
// 00605f0d  83ee01               sub esi, 1
// 00605f10  75e0                 jne 0x605ef2
// 00605f12  5e                   pop esi
// 00605f13  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
