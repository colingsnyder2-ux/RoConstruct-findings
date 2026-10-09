// roc 2007-03 00654710  unit: seg_00650000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654710
//
// 00654710  33c0                 xor eax, eax
// 00654712  53                   push ebx
// 00654713  55                   push ebp
// 00654714  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00654718  56                   push esi
// 00654719  57                   push edi
// 0065471a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065471e  83ff64               cmp edi, 0x64
// 00654721  0f9dc0               setge al
// 00654724  83e801               sub eax, 1
// 00654727  257cfcffff           and eax, 0xfffffc7c
// 0065472c  05e8030000           add eax, 0x3e8
// 00654731  8bf0                 mov esi, eax
// 00654733  99                   cdq 
// 00654734  2bc2                 sub eax, edx
// 00654736  8bc8                 mov ecx, eax
// 00654738  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065473c  c1e810               shr eax, 0x10
// 0065473f  0fb6c0               movzx eax, al
// 00654742  8bd3                 mov edx, ebx
// 00654744  0fafc7               imul eax, edi
// 00654747  c1ea10               shr edx, 0x10
// 0065474a  0fb6d2               movzx edx, dl
// 0065474d  8bee                 mov ebp, esi
// 0065474f  2bef                 sub ebp, edi
// 00654751  0fafd5               imul edx, ebp
// 00654754  d1f9                 sar ecx, 1
// 00654756  03d1                 add edx, ecx
// 00654758  03c2                 add eax, edx
// 0065475a  99                   cdq 
// 0065475b  f7fe                 idiv esi
// 0065475d  33d2                 xor edx, edx
// 0065475f  0fb6df               movzx ebx, bh
// 00654762  0fafdd               imul ebx, ebp
// 00654765  03d9                 add ebx, ecx
// 00654767  8af0                 mov dh, al
// 00654769  0fb6442415           movzx eax, byte ptr [esp + 0x15]
// 0065476e  0fafc7               imul eax, edi
// 00654771  03c3                 add eax, ebx
// 00654773  8954241c             mov dword ptr [esp + 0x1c], edx
// 00654777  99                   cdq 
// 00654778  f7fe                 idiv esi
// 0065477a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065477e  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 00654783  0fafdd               imul ebx, ebp
// 00654786  03d9                 add ebx, ecx
// 00654788  8ad0                 mov dl, al
// 0065478a  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0065478f  0fafc7               imul eax, edi
// 00654792  03c3                 add eax, ebx
// 00654794  c1e208               shl edx, 8
// 00654797  89542414             mov dword ptr [esp + 0x14], edx
// 0065479b  99                   cdq 
// 0065479c  f7fe                 idiv esi
// 0065479e  5f                   pop edi
// 0065479f  5e                   pop esi
// 006547a0  5d                   pop ebp
// 006547a1  5b                   pop ebx
// 006547a2  0fb6c8               movzx ecx, al
// 006547a5  8b442404             mov eax, dword ptr [esp + 4]
// 006547a9  0bc1                 or eax, ecx
// 006547ab  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?LightColor@CXTPColorManager@@QBEKKKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
