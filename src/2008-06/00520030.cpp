// from server: 100% by auto
// roc 2008-06 00520030  unit: seg_00520000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520030
//
// 00520030  8b442404             mov eax, dword ptr [esp + 4]
// 00520034  8a5008               mov dl, byte ptr [eax + 8]
// 00520037  f6c202               test dl, 2
// 0052003a  0f84c3000000         je 0x520103
// 00520040  8b08                 mov ecx, dword ptr [eax]
// 00520042  8a4009               mov al, byte ptr [eax + 9]
// 00520045  56                   push esi
// 00520046  3c08                 cmp al, 8
// 00520048  7551                 jne 0x52009b
// 0052004a  80fa02               cmp dl, 2
// 0052004d  7525                 jne 0x520074
// 0052004f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00520053  85c9                 test ecx, ecx
// 00520055  0f86a7000000         jbe 0x520102
// 0052005b  8bf1                 mov esi, ecx
// 0052005d  8d4900               lea ecx, [ecx]
// 00520060  8a08                 mov cl, byte ptr [eax]
// 00520062  8a5002               mov dl, byte ptr [eax + 2]
// 00520065  8810                 mov byte ptr [eax], dl
// 00520067  884802               mov byte ptr [eax + 2], cl
// 0052006a  83c003               add eax, 3
// 0052006d  83ee01               sub esi, 1
// 00520070  75ee                 jne 0x520060
// 00520072  5e                   pop esi
// 00520073  c3                   ret 
// 00520074  80fa06               cmp dl, 6
// 00520077  0f8585000000         jne 0x520102
// 0052007d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00520081  85c9                 test ecx, ecx
// 00520083  767d                 jbe 0x520102
// 00520085  8bf1                 mov esi, ecx
// 00520087  8a08                 mov cl, byte ptr [eax]
// 00520089  8a5002               mov dl, byte ptr [eax + 2]
// 0052008c  8810                 mov byte ptr [eax], dl
// 0052008e  884802               mov byte ptr [eax + 2], cl
// 00520091  83c004               add eax, 4
// 00520094  83ee01               sub esi, 1
// 00520097  75ee                 jne 0x520087
// 00520099  5e                   pop esi
// 0052009a  c3                   ret 
// 0052009b  3c10                 cmp al, 0x10
// 0052009d  7563                 jne 0x520102
// 0052009f  80fa02               cmp dl, 2
// 005200a2  752e                 jne 0x5200d2
// 005200a4  85c9                 test ecx, ecx
// 005200a6  765a                 jbe 0x520102
// 005200a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005200ac  40                   inc eax
// 005200ad  8bf1                 mov esi, ecx
// 005200af  90                   nop 
// 005200b0  0fb65003             movzx edx, byte ptr [eax + 3]
// 005200b4  8a48ff               mov cl, byte ptr [eax - 1]
// 005200b7  8850ff               mov byte ptr [eax - 1], dl
// 005200ba  0fb65004             movzx edx, byte ptr [eax + 4]
// 005200be  884803               mov byte ptr [eax + 3], cl
// 005200c1  8a08                 mov cl, byte ptr [eax]
// 005200c3  8810                 mov byte ptr [eax], dl
// 005200c5  884804               mov byte ptr [eax + 4], cl
// 005200c8  83c006               add eax, 6
// 005200cb  83ee01               sub esi, 1
// 005200ce  75e0                 jne 0x5200b0
// 005200d0  5e                   pop esi
// 005200d1  c3                   ret 
// 005200d2  80fa06               cmp dl, 6
// 005200d5  752b                 jne 0x520102
// 005200d7  85c9                 test ecx, ecx
// 005200d9  7627                 jbe 0x520102
// 005200db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005200df  40                   inc eax
// 005200e0  8bf1                 mov esi, ecx
// 005200e2  0fb65003             movzx edx, byte ptr [eax + 3]
// 005200e6  8a48ff               mov cl, byte ptr [eax - 1]
// 005200e9  8850ff               mov byte ptr [eax - 1], dl
// 005200ec  0fb65004             movzx edx, byte ptr [eax + 4]
// 005200f0  884803               mov byte ptr [eax + 3], cl
// 005200f3  8a08                 mov cl, byte ptr [eax]
// 005200f5  8810                 mov byte ptr [eax], dl
// 005200f7  884804               mov byte ptr [eax + 4], cl
// 005200fa  83c008               add eax, 8
// 005200fd  83ee01               sub esi, 1
// 00520100  75e0                 jne 0x5200e2
// 00520102  5e                   pop esi
// 00520103  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
