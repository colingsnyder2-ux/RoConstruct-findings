// roc 2007-03 00624dc0  unit: seg_00620000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624dc0
//
// 00624dc0  51                   push ecx
// 00624dc1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00624dc5  56                   push esi
// 00624dc6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00624dca  68d49d7800           push 0x789dd4
// 00624dcf  50                   push eax
// 00624dd0  56                   push esi
// 00624dd1  c644241089           mov byte ptr [esp + 0x10], 0x89
// 00624dd6  c644241150           mov byte ptr [esp + 0x11], 0x50
// 00624ddb  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00624de0  c644241347           mov byte ptr [esp + 0x13], 0x47
// 00624de5  ff1590d27700         call dword ptr [0x77d290]
// 00624deb  85c0                 test eax, eax
// 00624ded  7505                 jne 0x624df4
// 00624def  33c0                 xor eax, eax
// 00624df1  5e                   pop esi
// 00624df2  59                   pop ecx
// 00624df3  c3                   ret 
// 00624df4  50                   push eax
// 00624df5  56                   push esi
// 00624df6  ff1594d27700         call dword ptr [0x77d294]
// 00624dfc  85c0                 test eax, eax
// 00624dfe  74ef                 je 0x624def
// 00624e00  57                   push edi
// 00624e01  50                   push eax
// 00624e02  be04000000           mov esi, 4
// 00624e07  8d7c240c             lea edi, [esp + 0xc]
// 00624e0b  ff1520d27700         call dword ptr [0x77d220]
// 00624e11  8b08                 mov ecx, dword ptr [eax]
// 00624e13  3b0f                 cmp ecx, dword ptr [edi]
// 00624e15  7512                 jne 0x624e29
// 00624e17  83ee04               sub esi, 4
// 00624e1a  83c704               add edi, 4
// 00624e1d  83c004               add eax, 4
// 00624e20  83fe04               cmp esi, 4
// 00624e23  73ec                 jae 0x624e11
// 00624e25  85f6                 test esi, esi
// 00624e27  7468                 je 0x624e91
// 00624e29  0fb608               movzx ecx, byte ptr [eax]
// 00624e2c  0fb617               movzx edx, byte ptr [edi]
// 00624e2f  2bca                 sub ecx, edx
// 00624e31  7545                 jne 0x624e78
// 00624e33  83ee01               sub esi, 1
// 00624e36  83c701               add edi, 1
// 00624e39  83c001               add eax, 1
// 00624e3c  85f6                 test esi, esi
// 00624e3e  7451                 je 0x624e91
// 00624e40  0fb608               movzx ecx, byte ptr [eax]
// 00624e43  0fb617               movzx edx, byte ptr [edi]
// 00624e46  2bca                 sub ecx, edx
// 00624e48  752e                 jne 0x624e78
// 00624e4a  83ee01               sub esi, 1
// 00624e4d  83c701               add edi, 1
// 00624e50  83c001               add eax, 1
// 00624e53  85f6                 test esi, esi
// 00624e55  743a                 je 0x624e91
// 00624e57  0fb608               movzx ecx, byte ptr [eax]
// 00624e5a  0fb617               movzx edx, byte ptr [edi]
// 00624e5d  2bca                 sub ecx, edx
// 00624e5f  7517                 jne 0x624e78
// 00624e61  83ee01               sub esi, 1
// 00624e64  83c701               add edi, 1
// 00624e67  83c001               add eax, 1
// 00624e6a  85f6                 test esi, esi
// 00624e6c  7423                 je 0x624e91
// 00624e6e  0fb608               movzx ecx, byte ptr [eax]
// 00624e71  0fb607               movzx eax, byte ptr [edi]
// 00624e74  2bc8                 sub ecx, eax
// 00624e76  7419                 je 0x624e91
// 00624e78  85c9                 test ecx, ecx
// 00624e7a  b801000000           mov eax, 1
// 00624e7f  7f12                 jg 0x624e93
// 00624e81  83c8ff               or eax, 0xffffffff
// 00624e84  33c9                 xor ecx, ecx
// 00624e86  85c0                 test eax, eax
// 00624e88  0f94c1               sete cl
// 00624e8b  5f                   pop edi
// 00624e8c  5e                   pop esi
// 00624e8d  8bc1                 mov eax, ecx
// 00624e8f  59                   pop ecx
// 00624e90  c3                   ret 
// 00624e91  33c0                 xor eax, eax
// 00624e93  33c9                 xor ecx, ecx
// 00624e95  85c0                 test eax, eax
// 00624e97  0f94c1               sete cl
// 00624e9a  5f                   pop edi
// 00624e9b  5e                   pop esi
// 00624e9c  8bc1                 mov eax, ecx
// 00624e9e  59                   pop ecx
// 00624e9f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
