// roc 2007-03 0047ad50  unit: seg_00470000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047ad50
//
// 0047ad50  8b442404             mov eax, dword ptr [esp + 4]
// 0047ad54  53                   push ebx
// 0047ad55  55                   push ebp
// 0047ad56  56                   push esi
// 0047ad57  8bf1                 mov esi, ecx
// 0047ad59  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047ad5c  b901000000           mov ecx, 1
// 0047ad61  894604               mov dword ptr [esi + 4], eax
// 0047ad64  840d407f8b00         test byte ptr [0x8b7f40], cl
// 0047ad6a  57                   push edi
// 0047ad6b  7513                 jne 0x47ad80
// 0047ad6d  090d407f8b00         or dword ptr [0x8b7f40], ecx
// 0047ad73  bb0a000000           mov ebx, 0xa
// 0047ad78  891d3c7f8b00         mov dword ptr [0x8b7f3c], ebx
// 0047ad7e  eb06                 jmp 0x47ad86
// 0047ad80  8b1d3c7f8b00         mov ebx, dword ptr [0x8b7f3c]
// 0047ad86  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047ad89  8b7e04               mov edi, dword ptr [esi + 4]
// 0047ad8c  3bf9                 cmp edi, ecx
// 0047ad8e  0f8e92000000         jle 0x47ae26
// 0047ad94  85c9                 test ecx, ecx
// 0047ad96  7512                 jne 0x47adaa
// 0047ad98  55                   push ebp
// 0047ad99  8bce                 mov ecx, esi
// 0047ad9b  894608               mov dword ptr [esi + 8], eax
// 0047ad9e  e82dfcffff           call 0x47a9d0
// 0047ada3  5f                   pop edi
// 0047ada4  5e                   pop esi
// 0047ada5  5d                   pop ebp
// 0047ada6  5b                   pop ebx
// 0047ada7  c20800               ret 8
// 0047adaa  3bfb                 cmp edi, ebx
// 0047adac  7d12                 jge 0x47adc0
// 0047adae  55                   push ebp
// 0047adaf  8bce                 mov ecx, esi
// 0047adb1  895e08               mov dword ptr [esi + 8], ebx
// 0047adb4  e817fcffff           call 0x47a9d0
// 0047adb9  5f                   pop edi
// 0047adba  5e                   pop esi
// 0047adbb  5d                   pop ebp
// 0047adbc  5b                   pop ebx
// 0047adbd  c20800               ret 8
// 0047adc0  d905104c7900         fld dword ptr [0x794c10]
// 0047adc6  8bc1                 mov eax, ecx
// 0047adc8  03c0                 add eax, eax
// 0047adca  d95c2418             fstp dword ptr [esp + 0x18]
// 0047adce  03c0                 add eax, eax
// 0047add0  3d801a0600           cmp eax, 0x61a80
// 0047add5  7608                 jbe 0x47addf
// 0047add7  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047addd  eb0d                 jmp 0x47adec
// 0047addf  3d00fa0000           cmp eax, 0xfa00
// 0047ade4  760a                 jbe 0x47adf0
// 0047ade6  d905084c7900         fld dword ptr [0x794c08]
// 0047adec  d95c2418             fstp dword ptr [esp + 0x18]
// 0047adf0  8bd9                 mov ebx, ecx
// 0047adf2  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047adf6  db442414             fild dword ptr [esp + 0x14]
// 0047adfa  d84c2418             fmul dword ptr [esp + 0x18]
// 0047adfe  e8fd431a00           call 0x61f200
// 0047ae03  2bc3                 sub eax, ebx
// 0047ae05  03c7                 add eax, edi
// 0047ae07  894608               mov dword ptr [esi + 8], eax
// 0047ae0a  8b0d3c7f8b00         mov ecx, dword ptr [0x8b7f3c]
// 0047ae10  3bc1                 cmp eax, ecx
// 0047ae12  7d03                 jge 0x47ae17
// 0047ae14  894e08               mov dword ptr [esi + 8], ecx
// 0047ae17  55                   push ebp
// 0047ae18  8bce                 mov ecx, esi
// 0047ae1a  e8b1fbffff           call 0x47a9d0
// 0047ae1f  5f                   pop edi
// 0047ae20  5e                   pop esi
// 0047ae21  5d                   pop ebp
// 0047ae22  5b                   pop ebx
// 0047ae23  c20800               ret 8
// 0047ae26  b856555555           mov eax, 0x55555556
// 0047ae2b  f7e9                 imul ecx
// 0047ae2d  8bc2                 mov eax, edx
// 0047ae2f  c1e81f               shr eax, 0x1f
// 0047ae32  03c2                 add eax, edx
// 0047ae34  3bf8                 cmp edi, eax
// 0047ae36  7f19                 jg 0x47ae51
// 0047ae38  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047ae3d  7412                 je 0x47ae51
// 0047ae3f  3bfb                 cmp edi, ebx
// 0047ae41  7e0e                 jle 0x47ae51
// 0047ae43  3bfd                 cmp edi, ebp
// 0047ae45  7c02                 jl 0x47ae49
// 0047ae47  8bfd                 mov edi, ebp
// 0047ae49  57                   push edi
// 0047ae4a  8bce                 mov ecx, esi
// 0047ae4c  e87ffbffff           call 0x47a9d0
// 0047ae51  5f                   pop edi
// 0047ae52  5e                   pop esi
// 0047ae53  5d                   pop ebp
// 0047ae54  5b                   pop ebx
// 0047ae55  c20800               ret 8
// library rbxgs/tool\DragUtilities.cpp (function ?resize@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
