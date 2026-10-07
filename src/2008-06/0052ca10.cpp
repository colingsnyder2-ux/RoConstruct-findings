// roc 2008-06 0052ca10  unit: seg_00520000  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ca10
//
// 0052ca10  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052ca14  83ec10               sub esp, 0x10
// 0052ca17  53                   push ebx
// 0052ca18  55                   push ebp
// 0052ca19  56                   push esi
// 0052ca1a  57                   push edi
// 0052ca1b  83f804               cmp eax, 4
// 0052ca1e  0f8786010000         ja 0x52cbaa
// 0052ca24  ff2485cccb5200       jmp dword ptr [eax*4 + 0x52cbcc]
// 0052ca2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052ca2f  8b7004               mov esi, dword ptr [eax + 4]
// 0052ca32  0fb6400b             movzx eax, byte ptr [eax + 0xb]
// 0052ca36  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052ca3a  83c007               add eax, 7
// 0052ca3d  c1f803               sar eax, 3
// 0052ca40  03c8                 add ecx, eax
// 0052ca42  3bc6                 cmp eax, esi
// 0052ca44  0f8379010000         jae 0x52cbc3
// 0052ca4a  8bd1                 mov edx, ecx
// 0052ca4c  2bd0                 sub edx, eax
// 0052ca4e  2bf0                 sub esi, eax
// 0052ca50  8a02                 mov al, byte ptr [edx]
// 0052ca52  0001                 add byte ptr [ecx], al
// 0052ca54  41                   inc ecx
// 0052ca55  42                   inc edx
// 0052ca56  83ee01               sub esi, 1
// 0052ca59  75f5                 jne 0x52ca50
// 0052ca5b  5f                   pop edi
// 0052ca5c  5e                   pop esi
// 0052ca5d  5d                   pop ebp
// 0052ca5e  5b                   pop ebx
// 0052ca5f  83c410               add esp, 0x10
// 0052ca62  c3                   ret 
// 0052ca63  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052ca67  8b7104               mov esi, dword ptr [ecx + 4]
// 0052ca6a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052ca6e  33c9                 xor ecx, ecx
// 0052ca70  85f6                 test esi, esi
// 0052ca72  0f864b010000         jbe 0x52cbc3
// 0052ca78  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052ca7c  8d642400             lea esp, [esp]
// 0052ca80  8a1439               mov dl, byte ptr [ecx + edi]
// 0052ca83  0010                 add byte ptr [eax], dl
// 0052ca85  41                   inc ecx
// 0052ca86  40                   inc eax
// 0052ca87  3bce                 cmp ecx, esi
// 0052ca89  72f5                 jb 0x52ca80
// 0052ca8b  5f                   pop edi
// 0052ca8c  5e                   pop esi
// 0052ca8d  5d                   pop ebp
// 0052ca8e  5b                   pop ebx
// 0052ca8f  83c410               add esp, 0x10
// 0052ca92  c3                   ret 
// 0052ca93  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052ca97  0fb6420b             movzx eax, byte ptr [edx + 0xb]
// 0052ca9b  8b5204               mov edx, dword ptr [edx + 4]
// 0052ca9e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052caa2  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052caa6  83c007               add eax, 7
// 0052caa9  c1f803               sar eax, 3
// 0052caac  2bd0                 sub edx, eax
// 0052caae  8bf9                 mov edi, ecx
// 0052cab0  85c0                 test eax, eax
// 0052cab2  760f                 jbe 0x52cac3
// 0052cab4  8be8                 mov ebp, eax
// 0052cab6  8a06                 mov al, byte ptr [esi]
// 0052cab8  d0e8                 shr al, 1
// 0052caba  0001                 add byte ptr [ecx], al
// 0052cabc  46                   inc esi
// 0052cabd  41                   inc ecx
// 0052cabe  83ed01               sub ebp, 1
// 0052cac1  75f3                 jne 0x52cab6
// 0052cac3  85d2                 test edx, edx
// 0052cac5  0f86f8000000         jbe 0x52cbc3
// 0052cacb  8bda                 mov ebx, edx
// 0052cacd  8d4900               lea ecx, [ecx]
// 0052cad0  0fb616               movzx edx, byte ptr [esi]
// 0052cad3  0fb607               movzx eax, byte ptr [edi]
// 0052cad6  03c2                 add eax, edx
// 0052cad8  99                   cdq 
// 0052cad9  2bc2                 sub eax, edx
// 0052cadb  d1f8                 sar eax, 1
// 0052cadd  0001                 add byte ptr [ecx], al
// 0052cadf  47                   inc edi
// 0052cae0  46                   inc esi
// 0052cae1  41                   inc ecx
// 0052cae2  83eb01               sub ebx, 1
// 0052cae5  75e9                 jne 0x52cad0
// 0052cae7  5f                   pop edi
// 0052cae8  5e                   pop esi
// 0052cae9  5d                   pop ebp
// 0052caea  5b                   pop ebx
// 0052caeb  83c410               add esp, 0x10
// 0052caee  c3                   ret 
// 0052caef  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052caf3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052caf7  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052cafb  8bf8                 mov edi, eax
// 0052cafd  89442434             mov dword ptr [esp + 0x34], eax
// 0052cb01  8bd0                 mov edx, eax
// 0052cb03  0fb6410b             movzx eax, byte ptr [ecx + 0xb]
// 0052cb07  8b4904               mov ecx, dword ptr [ecx + 4]
// 0052cb0a  83c007               add eax, 7
// 0052cb0d  c1f803               sar eax, 3
// 0052cb10  2bc8                 sub ecx, eax
// 0052cb12  8bee                 mov ebp, esi
// 0052cb14  85c0                 test eax, eax
// 0052cb16  760f                 jbe 0x52cb27
// 0052cb18  8a1e                 mov bl, byte ptr [esi]
// 0052cb1a  001f                 add byte ptr [edi], bl
// 0052cb1c  46                   inc esi
// 0052cb1d  47                   inc edi
// 0052cb1e  83e801               sub eax, 1
// 0052cb21  75f5                 jne 0x52cb18
// 0052cb23  897c2434             mov dword ptr [esp + 0x34], edi
// 0052cb27  85c9                 test ecx, ecx
// 0052cb29  0f8694000000         jbe 0x52cbc3
// 0052cb2f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052cb33  eb08                 jmp 0x52cb3d
// 0052cb35  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052cb39  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0052cb3d  0fb63a               movzx edi, byte ptr [edx]
// 0052cb40  0fb61e               movzx ebx, byte ptr [esi]
// 0052cb43  42                   inc edx
// 0052cb44  89542418             mov dword ptr [esp + 0x18], edx
// 0052cb48  0fb65500             movzx edx, byte ptr [ebp]
// 0052cb4c  8bc3                 mov eax, ebx
// 0052cb4e  8bcf                 mov ecx, edi
// 0052cb50  45                   inc ebp
// 0052cb51  2bc2                 sub eax, edx
// 0052cb53  46                   inc esi
// 0052cb54  2bca                 sub ecx, edx
// 0052cb56  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0052cb5a  85c0                 test eax, eax
// 0052cb5c  7d0a                 jge 0x52cb68
// 0052cb5e  8be8                 mov ebp, eax
// 0052cb60  f7dd                 neg ebp
// 0052cb62  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052cb66  eb04                 jmp 0x52cb6c
// 0052cb68  89442410             mov dword ptr [esp + 0x10], eax
// 0052cb6c  8be9                 mov ebp, ecx
// 0052cb6e  85c9                 test ecx, ecx
// 0052cb70  7d02                 jge 0x52cb74
// 0052cb72  f7dd                 neg ebp
// 0052cb74  03c1                 add eax, ecx
// 0052cb76  7902                 jns 0x52cb7a
// 0052cb78  f7d8                 neg eax
// 0052cb7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052cb7e  3bcd                 cmp ecx, ebp
// 0052cb80  7f08                 jg 0x52cb8a
// 0052cb82  3bc8                 cmp ecx, eax
// 0052cb84  7f04                 jg 0x52cb8a
// 0052cb86  8bd7                 mov edx, edi
// 0052cb88  eb06                 jmp 0x52cb90
// 0052cb8a  3be8                 cmp ebp, eax
// 0052cb8c  7f02                 jg 0x52cb90
// 0052cb8e  8bd3                 mov edx, ebx
// 0052cb90  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052cb94  0010                 add byte ptr [eax], dl
// 0052cb96  40                   inc eax
// 0052cb97  836c241401           sub dword ptr [esp + 0x14], 1
// 0052cb9c  89442434             mov dword ptr [esp + 0x34], eax
// 0052cba0  7593                 jne 0x52cb35
// 0052cba2  5f                   pop edi
// 0052cba3  5e                   pop esi
// 0052cba4  5d                   pop ebp
// 0052cba5  5b                   pop ebx
// 0052cba6  83c410               add esp, 0x10
// 0052cba9  c3                   ret 
// 0052cbaa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052cbae  68d4bc8200           push 0x82bcd4
// 0052cbb3  50                   push eax
// 0052cbb4  e897ceffff           call 0x529a50
// 0052cbb9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052cbbd  83c408               add esp, 8
// 0052cbc0  c60100               mov byte ptr [ecx], 0
// 0052cbc3  5f                   pop edi
// 0052cbc4  5e                   pop esi
// 0052cbc5  5d                   pop ebp
// 0052cbc6  5b                   pop ebx
// 0052cbc7  83c410               add esp, 0x10
// 0052cbca  c3                   ret 
// 0052cbcb  90                   nop 
// 0052cbcc  c3                   ret 
// 0052cbcd  cb                   retf 
// 0052cbce  52                   push edx
// 0052cbcf  002b                 add byte ptr [ebx], ch
// 0052cbd1  ca5200               retf 0x52
// 0052cbd4  63ca                 arpl dx, cx
// 0052cbd6  52                   push edx
// 0052cbd7  0093ca5200ef         add byte ptr [ebx - 0x10ffad36], dl
// 0052cbdd  ca5200               retf 0x52
// library libpng-1.2.5/pngrutil.c (function _png_read_filter_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
