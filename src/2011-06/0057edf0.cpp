// from server: 100% by auto
// roc 2011-06 0057edf0  unit: seg_00570000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057edf0
//
// 0057edf0  83ec18               sub esp, 0x18
// 0057edf3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057edf7  53                   push ebx
// 0057edf8  55                   push ebp
// 0057edf9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057edfd  56                   push esi
// 0057edfe  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 0057ee01  57                   push edi
// 0057ee02  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0057ee06  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 0057ee0c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0057ee0f  03f6                 add esi, esi
// 0057ee11  83c002               add eax, 2
// 0057ee14  03f6                 add esi, esi
// 0057ee16  50                   push eax
// 0057ee17  83c1fc               add ecx, -4
// 0057ee1a  03f6                 add esi, esi
// 0057ee1c  51                   push ecx
// 0057ee1d  8bc6                 mov eax, esi
// 0057ee1f  e83cf9ffff           call 0x57e760
// 0057ee24  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0057ee2a  b980000000           mov ecx, 0x80
// 0057ee2f  2bc8                 sub ecx, eax
// 0057ee31  c1e109               shl ecx, 9
// 0057ee34  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057ee38  33c9                 xor ecx, ecx
// 0057ee3a  c1e006               shl eax, 6
// 0057ee3d  83c408               add esp, 8
// 0057ee40  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 0057ee43  89442410             mov dword ptr [esp + 0x10], eax
// 0057ee47  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057ee4b  0f8e0e010000         jle 0x57ef5f
// 0057ee51  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057ee55  83c6fe               add esi, -2
// 0057ee58  83c004               add eax, 4
// 0057ee5b  89742424             mov dword ptr [esp + 0x24], esi
// 0057ee5f  89442420             mov dword ptr [esp + 0x20], eax
// 0057ee63  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057ee67  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0057ee6a  8b78f8               mov edi, dword ptr [eax - 8]
// 0057ee6d  8b28                 mov ebp, dword ptr [eax]
// 0057ee6f  0fb617               movzx edx, byte ptr [edi]
// 0057ee72  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0057ee76  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057ee7a  8b48fc               mov ecx, dword ptr [eax - 4]
// 0057ee7d  0fb631               movzx esi, byte ptr [ecx]
// 0057ee80  0fb64500             movzx eax, byte ptr [ebp]
// 0057ee84  03c6                 add eax, esi
// 0057ee86  03d0                 add edx, eax
// 0057ee88  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0057ee8c  45                   inc ebp
// 0057ee8d  47                   inc edi
// 0057ee8e  89542434             mov dword ptr [esp + 0x34], edx
// 0057ee92  03c3                 add eax, ebx
// 0057ee94  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0057ee98  03d2                 add edx, edx
// 0057ee9a  2bd6                 sub edx, esi
// 0057ee9c  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0057eea1  41                   inc ecx
// 0057eea2  03c3                 add eax, ebx
// 0057eea4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057eea8  03d0                 add edx, eax
// 0057eeaa  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0057eeaf  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0057eeb6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057eeba  c1fa10               sar edx, 0x10
// 0057eebd  8816                 mov byte ptr [esi], dl
// 0057eebf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057eec3  46                   inc esi
// 0057eec4  8974242c             mov dword ptr [esp + 0x2c], esi
// 0057eec8  89442434             mov dword ptr [esp + 0x34], eax
// 0057eecc  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057eed0  85db                 test ebx, ebx
// 0057eed2  764b                 jbe 0x57ef1f
// 0057eed4  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0057eed8  0fb631               movzx esi, byte ptr [ecx]
// 0057eedb  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0057eedf  47                   inc edi
// 0057eee0  45                   inc ebp
// 0057eee1  2bd6                 sub edx, esi
// 0057eee3  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0057eee8  41                   inc ecx
// 0057eee9  03c3                 add eax, ebx
// 0057eeeb  0fb619               movzx ebx, byte ptr [ecx]
// 0057eeee  03c3                 add eax, ebx
// 0057eef0  03d0                 add edx, eax
// 0057eef2  03542434             add edx, dword ptr [esp + 0x34]
// 0057eef6  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0057eefb  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0057ef02  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057ef06  c1fa10               sar edx, 0x10
// 0057ef09  8816                 mov byte ptr [esi], dl
// 0057ef0b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ef0f  46                   inc esi
// 0057ef10  836c241801           sub dword ptr [esp + 0x18], 1
// 0057ef15  8974242c             mov dword ptr [esp + 0x2c], esi
// 0057ef19  89442434             mov dword ptr [esp + 0x34], eax
// 0057ef1d  75b5                 jne 0x57eed4
// 0057ef1f  0fb609               movzx ecx, byte ptr [ecx]
// 0057ef22  03c0                 add eax, eax
// 0057ef24  2bc1                 sub eax, ecx
// 0057ef26  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 0057ef2b  03c2                 add eax, edx
// 0057ef2d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0057ef32  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057ef36  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 0057ef3d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057ef41  c1f910               sar ecx, 0x10
// 0057ef44  880e                 mov byte ptr [esi], cl
// 0057ef46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057ef4a  41                   inc ecx
// 0057ef4b  83c004               add eax, 4
// 0057ef4e  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0057ef51  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057ef55  89442420             mov dword ptr [esp + 0x20], eax
// 0057ef59  0f8c04ffffff         jl 0x57ee63
// 0057ef5f  5f                   pop edi
// 0057ef60  5e                   pop esi
// 0057ef61  5d                   pop ebp
// 0057ef62  5b                   pop ebx
// 0057ef63  83c418               add esp, 0x18
// 0057ef66  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
