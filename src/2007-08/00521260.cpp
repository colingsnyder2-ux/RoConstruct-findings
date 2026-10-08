// from server: 100% by auto
// roc 2007-08 00521260  unit: seg_00520000  size: 500 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00521260
//
// 00521260  8b442414             mov eax, dword ptr [esp + 0x14]
// 00521264  83ec10               sub esp, 0x10
// 00521267  83f804               cmp eax, 4
// 0052126a  53                   push ebx
// 0052126b  55                   push ebp
// 0052126c  56                   push esi
// 0052126d  57                   push edi
// 0052126e  0f87aa010000         ja 0x52141e
// 00521274  ff248540145200       jmp dword ptr [eax*4 + 0x521440]
// 0052127b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052127f  8b7004               mov esi, dword ptr [eax + 4]
// 00521282  0fb6400b             movzx eax, byte ptr [eax + 0xb]
// 00521286  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052128a  83c007               add eax, 7
// 0052128d  c1f803               sar eax, 3
// 00521290  03c8                 add ecx, eax
// 00521292  3bc6                 cmp eax, esi
// 00521294  0f839d010000         jae 0x521437
// 0052129a  8bd1                 mov edx, ecx
// 0052129c  2bd0                 sub edx, eax
// 0052129e  2bf0                 sub esi, eax
// 005212a0  8a02                 mov al, byte ptr [edx]
// 005212a2  0001                 add byte ptr [ecx], al
// 005212a4  83c101               add ecx, 1
// 005212a7  83c201               add edx, 1
// 005212aa  83ee01               sub esi, 1
// 005212ad  75f1                 jne 0x5212a0
// 005212af  5f                   pop edi
// 005212b0  5e                   pop esi
// 005212b1  5d                   pop ebp
// 005212b2  5b                   pop ebx
// 005212b3  83c410               add esp, 0x10
// 005212b6  c3                   ret 
// 005212b7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005212bb  8b7104               mov esi, dword ptr [ecx + 4]
// 005212be  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005212c2  33c9                 xor ecx, ecx
// 005212c4  85f6                 test esi, esi
// 005212c6  0f866b010000         jbe 0x521437
// 005212cc  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005212d0  8a1439               mov dl, byte ptr [ecx + edi]
// 005212d3  0010                 add byte ptr [eax], dl
// 005212d5  83c101               add ecx, 1
// 005212d8  83c001               add eax, 1
// 005212db  3bce                 cmp ecx, esi
// 005212dd  72f1                 jb 0x5212d0
// 005212df  5f                   pop edi
// 005212e0  5e                   pop esi
// 005212e1  5d                   pop ebp
// 005212e2  5b                   pop ebx
// 005212e3  83c410               add esp, 0x10
// 005212e6  c3                   ret 
// 005212e7  8b542428             mov edx, dword ptr [esp + 0x28]
// 005212eb  0fb6420b             movzx eax, byte ptr [edx + 0xb]
// 005212ef  8b5204               mov edx, dword ptr [edx + 4]
// 005212f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005212f6  8b742430             mov esi, dword ptr [esp + 0x30]
// 005212fa  83c007               add eax, 7
// 005212fd  c1f803               sar eax, 3
// 00521300  2bd0                 sub edx, eax
// 00521302  85c0                 test eax, eax
// 00521304  8bf9                 mov edi, ecx
// 00521306  7619                 jbe 0x521321
// 00521308  8be8                 mov ebp, eax
// 0052130a  8d9b00000000         lea ebx, [ebx]
// 00521310  8a06                 mov al, byte ptr [esi]
// 00521312  d0e8                 shr al, 1
// 00521314  0001                 add byte ptr [ecx], al
// 00521316  83c601               add esi, 1
// 00521319  83c101               add ecx, 1
// 0052131c  83ed01               sub ebp, 1
// 0052131f  75ef                 jne 0x521310
// 00521321  85d2                 test edx, edx
// 00521323  0f860e010000         jbe 0x521437
// 00521329  8bda                 mov ebx, edx
// 0052132b  eb03                 jmp 0x521330
// 0052132d  8d4900               lea ecx, [ecx]
// 00521330  0fb616               movzx edx, byte ptr [esi]
// 00521333  0fb607               movzx eax, byte ptr [edi]
// 00521336  03c2                 add eax, edx
// 00521338  99                   cdq 
// 00521339  2bc2                 sub eax, edx
// 0052133b  d1f8                 sar eax, 1
// 0052133d  0001                 add byte ptr [ecx], al
// 0052133f  83c701               add edi, 1
// 00521342  83c601               add esi, 1
// 00521345  83c101               add ecx, 1
// 00521348  83eb01               sub ebx, 1
// 0052134b  75e3                 jne 0x521330
// 0052134d  5f                   pop edi
// 0052134e  5e                   pop esi
// 0052134f  5d                   pop ebp
// 00521350  5b                   pop ebx
// 00521351  83c410               add esp, 0x10
// 00521354  c3                   ret 
// 00521355  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00521359  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052135d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521361  8bf8                 mov edi, eax
// 00521363  89442434             mov dword ptr [esp + 0x34], eax
// 00521367  8bd0                 mov edx, eax
// 00521369  0fb6410b             movzx eax, byte ptr [ecx + 0xb]
// 0052136d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00521370  83c007               add eax, 7
// 00521373  c1f803               sar eax, 3
// 00521376  2bc8                 sub ecx, eax
// 00521378  85c0                 test eax, eax
// 0052137a  8bee                 mov ebp, esi
// 0052137c  7615                 jbe 0x521393
// 0052137e  8bff                 mov edi, edi
// 00521380  8a1e                 mov bl, byte ptr [esi]
// 00521382  001f                 add byte ptr [edi], bl
// 00521384  83c601               add esi, 1
// 00521387  83c701               add edi, 1
// 0052138a  83e801               sub eax, 1
// 0052138d  75f1                 jne 0x521380
// 0052138f  897c2434             mov dword ptr [esp + 0x34], edi
// 00521393  85c9                 test ecx, ecx
// 00521395  0f869c000000         jbe 0x521437
// 0052139b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052139f  eb08                 jmp 0x5213a9
// 005213a1  8b542418             mov edx, dword ptr [esp + 0x18]
// 005213a5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005213a9  0fb63a               movzx edi, byte ptr [edx]
// 005213ac  0fb61e               movzx ebx, byte ptr [esi]
// 005213af  83c201               add edx, 1
// 005213b2  89542418             mov dword ptr [esp + 0x18], edx
// 005213b6  0fb65500             movzx edx, byte ptr [ebp]
// 005213ba  8bc3                 mov eax, ebx
// 005213bc  8bcf                 mov ecx, edi
// 005213be  83c501               add ebp, 1
// 005213c1  2bc2                 sub eax, edx
// 005213c3  83c601               add esi, 1
// 005213c6  2bca                 sub ecx, edx
// 005213c8  85c0                 test eax, eax
// 005213ca  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005213ce  7d0a                 jge 0x5213da
// 005213d0  8be8                 mov ebp, eax
// 005213d2  f7dd                 neg ebp
// 005213d4  896c2410             mov dword ptr [esp + 0x10], ebp
// 005213d8  eb04                 jmp 0x5213de
// 005213da  89442410             mov dword ptr [esp + 0x10], eax
// 005213de  85c9                 test ecx, ecx
// 005213e0  8be9                 mov ebp, ecx
// 005213e2  7d02                 jge 0x5213e6
// 005213e4  f7dd                 neg ebp
// 005213e6  03c1                 add eax, ecx
// 005213e8  7902                 jns 0x5213ec
// 005213ea  f7d8                 neg eax
// 005213ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005213f0  3bcd                 cmp ecx, ebp
// 005213f2  7f08                 jg 0x5213fc
// 005213f4  3bc8                 cmp ecx, eax
// 005213f6  7f04                 jg 0x5213fc
// 005213f8  8bd7                 mov edx, edi
// 005213fa  eb06                 jmp 0x521402
// 005213fc  3be8                 cmp ebp, eax
// 005213fe  7f02                 jg 0x521402
// 00521400  8bd3                 mov edx, ebx
// 00521402  8b442434             mov eax, dword ptr [esp + 0x34]
// 00521406  0010                 add byte ptr [eax], dl
// 00521408  83c001               add eax, 1
// 0052140b  836c241401           sub dword ptr [esp + 0x14], 1
// 00521410  89442434             mov dword ptr [esp + 0x34], eax
// 00521414  758b                 jne 0x5213a1
// 00521416  5f                   pop edi
// 00521417  5e                   pop esi
// 00521418  5d                   pop ebp
// 00521419  5b                   pop ebx
// 0052141a  83c410               add esp, 0x10
// 0052141d  c3                   ret 
// 0052141e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00521422  6808377a00           push 0x7a3708
// 00521427  50                   push eax
// 00521428  e863d5ffff           call 0x51e990
// 0052142d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00521431  83c408               add esp, 8
// 00521434  c60100               mov byte ptr [ecx], 0
// 00521437  5f                   pop edi
// 00521438  5e                   pop esi
// 00521439  5d                   pop ebp
// 0052143a  5b                   pop ebx
// 0052143b  83c410               add esp, 0x10
// 0052143e  c3                   ret 
// 0052143f  90                   nop 
// 00521440  37                   aaa 
// 00521441  1452                 adc al, 0x52
// 00521443  007b12               add byte ptr [ebx + 0x12], bh
// 00521446  52                   push edx
// 00521447  00b7125200e7         add byte ptr [edi - 0x18ffadee], dh
// 0052144d  125200               adc dl, byte ptr [edx]
// 00521450  55                   push ebp
// 00521451  135200               adc edx, dword ptr [edx]
// library libpng-1.2.5/pngrutil.c (function _png_read_filter_row)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
