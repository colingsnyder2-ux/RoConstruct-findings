// roc 2011-06 0055fad0  unit: seg_00550000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055fad0
//
// 0055fad0  8b442404             mov eax, dword ptr [esp + 4]
// 0055fad4  8a4808               mov cl, byte ptr [eax + 8]
// 0055fad7  f6c102               test cl, 2
// 0055fada  0f84c6000000         je 0x55fba6
// 0055fae0  8b10                 mov edx, dword ptr [eax]
// 0055fae2  8a4009               mov al, byte ptr [eax + 9]
// 0055fae5  56                   push esi
// 0055fae6  3c08                 cmp al, 8
// 0055fae8  753a                 jne 0x55fb24
// 0055faea  80f902               cmp cl, 2
// 0055faed  7507                 jne 0x55faf6
// 0055faef  be03000000           mov esi, 3
// 0055faf4  eb0e                 jmp 0x55fb04
// 0055faf6  80f906               cmp cl, 6
// 0055faf9  0f85a6000000         jne 0x55fba5
// 0055faff  be04000000           mov esi, 4
// 0055fb04  85d2                 test edx, edx
// 0055fb06  0f8699000000         jbe 0x55fba5
// 0055fb0c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055fb10  83c002               add eax, 2
// 0055fb13  8a48ff               mov cl, byte ptr [eax - 1]
// 0055fb16  0048fe               add byte ptr [eax - 2], cl
// 0055fb19  0008                 add byte ptr [eax], cl
// 0055fb1b  03c6                 add eax, esi
// 0055fb1d  83ea01               sub edx, 1
// 0055fb20  75f1                 jne 0x55fb13
// 0055fb22  5e                   pop esi
// 0055fb23  c3                   ret 
// 0055fb24  3c10                 cmp al, 0x10
// 0055fb26  757d                 jne 0x55fba5
// 0055fb28  55                   push ebp
// 0055fb29  80f902               cmp cl, 2
// 0055fb2c  7507                 jne 0x55fb35
// 0055fb2e  bd06000000           mov ebp, 6
// 0055fb33  eb0a                 jmp 0x55fb3f
// 0055fb35  80f906               cmp cl, 6
// 0055fb38  756a                 jne 0x55fba4
// 0055fb3a  bd08000000           mov ebp, 8
// 0055fb3f  85d2                 test edx, edx
// 0055fb41  7661                 jbe 0x55fba4
// 0055fb43  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055fb47  53                   push ebx
// 0055fb48  57                   push edi
// 0055fb49  40                   inc eax
// 0055fb4a  8bfa                 mov edi, edx
// 0055fb4c  8d642400             lea esp, [esp]
// 0055fb50  0fb67001             movzx esi, byte ptr [eax + 1]
// 0055fb54  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0055fb58  0fb610               movzx edx, byte ptr [eax]
// 0055fb5b  0fb65804             movzx ebx, byte ptr [eax + 4]
// 0055fb5f  c1e608               shl esi, 8
// 0055fb62  0bf1                 or esi, ecx
// 0055fb64  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0055fb68  c1e108               shl ecx, 8
// 0055fb6b  0bca                 or ecx, edx
// 0055fb6d  0fb65003             movzx edx, byte ptr [eax + 3]
// 0055fb71  c1e208               shl edx, 8
// 0055fb74  0bd3                 or edx, ebx
// 0055fb76  03ce                 add ecx, esi
// 0055fb78  81e1ffff0000         and ecx, 0xffff
// 0055fb7e  03d6                 add edx, esi
// 0055fb80  81e2ffff0000         and edx, 0xffff
// 0055fb86  8bd9                 mov ebx, ecx
// 0055fb88  8808                 mov byte ptr [eax], cl
// 0055fb8a  8bca                 mov ecx, edx
// 0055fb8c  c1eb08               shr ebx, 8
// 0055fb8f  c1e908               shr ecx, 8
// 0055fb92  8858ff               mov byte ptr [eax - 1], bl
// 0055fb95  884803               mov byte ptr [eax + 3], cl
// 0055fb98  885004               mov byte ptr [eax + 4], dl
// 0055fb9b  03c5                 add eax, ebp
// 0055fb9d  83ef01               sub edi, 1
// 0055fba0  75ae                 jne 0x55fb50
// 0055fba2  5f                   pop edi
// 0055fba3  5b                   pop ebx
// 0055fba4  5d                   pop ebp
// 0055fba5  5e                   pop esi
// 0055fba6  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_read_intrapixel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
