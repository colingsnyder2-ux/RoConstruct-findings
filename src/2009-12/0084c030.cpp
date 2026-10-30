// roc 2009-12 0084c030  unit: CXTPDrawHelpers  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084c030
//
// 0084c030  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084c034  83ec08               sub esp, 8
// 0084c037  85c0                 test eax, eax
// 0084c039  0f8ec0000000         jle 0x84c0ff
// 0084c03f  53                   push ebx
// 0084c040  55                   push ebp
// 0084c041  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084c045  56                   push esi
// 0084c046  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0084c04a  48                   dec eax
// 0084c04b  d1e8                 shr eax, 1
// 0084c04d  83c60c               add esi, 0xc
// 0084c050  40                   inc eax
// 0084c051  57                   push edi
// 0084c052  89442424             mov dword ptr [esp + 0x24], eax
// 0084c056  8b46f8               mov eax, dword ptr [esi - 8]
// 0084c059  8b4ef8               mov ecx, dword ptr [esi - 8]
// 0084c05c  030e                 add ecx, dword ptr [esi]
// 0084c05e  8b7ef4               mov edi, dword ptr [esi - 0xc]
// 0084c061  89442414             mov dword ptr [esp + 0x14], eax
// 0084c065  8b46fc               mov eax, dword ptr [esi - 4]
// 0084c068  51                   push ecx
// 0084c069  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0084c06c  03c7                 add eax, edi
// 0084c06e  50                   push eax
// 0084c06f  51                   push ecx
// 0084c070  ff1518b19800         call dword ptr [0x98b118]
// 0084c076  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084c07a  52                   push edx
// 0084c07b  8bd8                 mov ebx, eax
// 0084c07d  8b4504               mov eax, dword ptr [ebp + 4]
// 0084c080  57                   push edi
// 0084c081  50                   push eax
// 0084c082  ff1518b19800         call dword ptr [0x98b118]
// 0084c088  8bc8                 mov ecx, eax
// 0084c08a  8bd1                 mov edx, ecx
// 0084c08c  c1ea10               shr edx, 0x10
// 0084c08f  0fb6c2               movzx eax, dl
// 0084c092  8bd3                 mov edx, ebx
// 0084c094  c1ea10               shr edx, 0x10
// 0084c097  0fb6d2               movzx edx, dl
// 0084c09a  03c2                 add eax, edx
// 0084c09c  99                   cdq 
// 0084c09d  2bc2                 sub eax, edx
// 0084c09f  d1f8                 sar eax, 1
// 0084c0a1  0fb6e8               movzx ebp, al
// 0084c0a4  8bc1                 mov eax, ecx
// 0084c0a6  c1e808               shr eax, 8
// 0084c0a9  0fb6c0               movzx eax, al
// 0084c0ac  8bd3                 mov edx, ebx
// 0084c0ae  c1ea08               shr edx, 8
// 0084c0b1  0fb6d2               movzx edx, dl
// 0084c0b4  03c2                 add eax, edx
// 0084c0b6  99                   cdq 
// 0084c0b7  2bc2                 sub eax, edx
// 0084c0b9  d1f8                 sar eax, 1
// 0084c0bb  0fb6c0               movzx eax, al
// 0084c0be  c1e508               shl ebp, 8
// 0084c0c1  0be8                 or ebp, eax
// 0084c0c3  0fb6c1               movzx eax, cl
// 0084c0c6  0fb6cb               movzx ecx, bl
// 0084c0c9  03c1                 add eax, ecx
// 0084c0cb  99                   cdq 
// 0084c0cc  2bc2                 sub eax, edx
// 0084c0ce  d1f8                 sar eax, 1
// 0084c0d0  0fb6d0               movzx edx, al
// 0084c0d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084c0d7  c1e508               shl ebp, 8
// 0084c0da  0bea                 or ebp, edx
// 0084c0dc  55                   push ebp
// 0084c0dd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0084c0e1  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0084c0e4  50                   push eax
// 0084c0e5  57                   push edi
// 0084c0e6  51                   push ecx
// 0084c0e7  ff1514b19800         call dword ptr [0x98b114]
// 0084c0ed  83c610               add esi, 0x10
// 0084c0f0  836c242401           sub dword ptr [esp + 0x24], 1
// 0084c0f5  0f855bffffff         jne 0x84c056
// 0084c0fb  5f                   pop edi
// 0084c0fc  5e                   pop esi
// 0084c0fd  5d                   pop ebp
// 0084c0fe  5b                   pop ebx
// 0084c0ff  83c408               add esp, 8
// 0084c102  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlurPoints@CXTPDrawHelpers@@QAEXPAVCDC@@PAUtagPOINT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp