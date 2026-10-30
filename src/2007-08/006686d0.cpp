// from server: 100% by auto
// roc 2007-08 006686d0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006686d0
//
// 006686d0  33c0                 xor eax, eax
// 006686d2  53                   push ebx
// 006686d3  55                   push ebp
// 006686d4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006686d8  56                   push esi
// 006686d9  57                   push edi
// 006686da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006686de  83ff64               cmp edi, 0x64
// 006686e1  0f9dc0               setge al
// 006686e4  83e801               sub eax, 1
// 006686e7  257cfcffff           and eax, 0xfffffc7c
// 006686ec  05e8030000           add eax, 0x3e8
// 006686f1  8bf0                 mov esi, eax
// 006686f3  99                   cdq 
// 006686f4  2bc2                 sub eax, edx
// 006686f6  8bc8                 mov ecx, eax
// 006686f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 006686fc  c1e810               shr eax, 0x10
// 006686ff  0fb6c0               movzx eax, al
// 00668702  8bd3                 mov edx, ebx
// 00668704  0fafc7               imul eax, edi
// 00668707  c1ea10               shr edx, 0x10
// 0066870a  0fb6d2               movzx edx, dl
// 0066870d  8bee                 mov ebp, esi
// 0066870f  2bef                 sub ebp, edi
// 00668711  0fafd5               imul edx, ebp
// 00668714  d1f9                 sar ecx, 1
// 00668716  03d1                 add edx, ecx
// 00668718  03c2                 add eax, edx
// 0066871a  99                   cdq 
// 0066871b  f7fe                 idiv esi
// 0066871d  33d2                 xor edx, edx
// 0066871f  0fb6df               movzx ebx, bh
// 00668722  0fafdd               imul ebx, ebp
// 00668725  03d9                 add ebx, ecx
// 00668727  8af0                 mov dh, al
// 00668729  0fb6442415           movzx eax, byte ptr [esp + 0x15]
// 0066872e  0fafc7               imul eax, edi
// 00668731  03c3                 add eax, ebx
// 00668733  8954241c             mov dword ptr [esp + 0x1c], edx
// 00668737  99                   cdq 
// 00668738  f7fe                 idiv esi
// 0066873a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066873e  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 00668743  0fafdd               imul ebx, ebp
// 00668746  03d9                 add ebx, ecx
// 00668748  8ad0                 mov dl, al
// 0066874a  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0066874f  0fafc7               imul eax, edi
// 00668752  03c3                 add eax, ebx
// 00668754  c1e208               shl edx, 8
// 00668757  89542414             mov dword ptr [esp + 0x14], edx
// 0066875b  99                   cdq 
// 0066875c  f7fe                 idiv esi
// 0066875e  5f                   pop edi
// 0066875f  5e                   pop esi
// 00668760  5d                   pop ebp
// 00668761  5b                   pop ebx
// 00668762  0fb6c8               movzx ecx, al
// 00668765  8b442404             mov eax, dword ptr [esp + 4]
// 00668769  0bc1                 or eax, ecx
// 0066876b  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?LightColor@CXTPColorManager@@QBEKKKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
