// roc 2008-06 006fc9f0  unit: CXTPPropExchange  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc9f0
//
// 006fc9f0  0fb7442404           movzx eax, word ptr [esp + 4]
// 006fc9f5  83c0fe               add eax, -2
// 006fc9f8  83f863               cmp eax, 0x63
// 006fc9fb  773e                 ja 0x6fca3b
// 006fc9fd  0fb6805cca6f00       movzx eax, byte ptr [eax + 0x6fca5c]
// 006fca04  ff248540ca6f00       jmp dword ptr [eax*4 + 0x6fca40]
// 006fca0b  b804000000           mov eax, 4
// 006fca10  c20400               ret 4
// 006fca13  b801000000           mov eax, 1
// 006fca18  c20400               ret 4
// 006fca1b  b802000000           mov eax, 2
// 006fca20  c20400               ret 4
// 006fca23  b808000000           mov eax, 8
// 006fca28  c20400               ret 4
// 006fca2b  b810000000           mov eax, 0x10
// 006fca30  c20400               ret 4
// 006fca33  b80c000000           mov eax, 0xc
// 006fca38  c20400               ret 4
// 006fca3b  33c0                 xor eax, eax
// 006fca3d  c20400               ret 4
// 006fca40  1bca                 sbb ecx, edx
// 006fca42  6f                   outsd dx, dword ptr [esi]
// 006fca43  000b                 add byte ptr [ebx], cl
// 006fca45  ca6f00               retf 0x6f
// 006fca48  23ca                 and ecx, edx
// 006fca4a  6f                   outsd dx, dword ptr [esi]
// 006fca4b  0033                 add byte ptr [ebx], dh
// 006fca4d  ca6f00               retf 0x6f
// 006fca50  2bca                 sub ecx, edx
// 006fca52  6f                   outsd dx, dword ptr [esi]
// 006fca53  0013                 add byte ptr [ebx], dl
// 006fca55  ca6f00               retf 0x6f
// 006fca58  3bca                 cmp ecx, edx
// 006fca5a  6f                   outsd dx, dword ptr [esi]
// 006fca5b  0000                 add byte ptr [eax], al
// 006fca5d  0101                 add dword ptr [ecx], eax
// 006fca5f  0202                 add al, byte ptr [edx]
// 006fca61  0301                 add eax, dword ptr [ecx]
// 006fca63  06                   push es
// 006fca64  06                   push es
// 006fca65  010406               add dword ptr [esi + eax], eax
// 006fca68  06                   push es
// 006fca69  06                   push es
// 006fca6a  06                   push es
// 006fca6b  0506060606           add eax, 0x6060606
// 006fca70  06                   push es
// 006fca71  06                   push es
// 006fca72  06                   push es
// 006fca73  06                   push es
// 006fca74  06                   push es
// 006fca75  06                   push es
// 006fca76  06                   push es
// 006fca77  06                   push es
// 006fca78  06                   push es
// 006fca79  06                   push es
// 006fca7a  06                   push es
// 006fca7b  06                   push es
// 006fca7c  06                   push es
// 006fca7d  06                   push es
// 006fca7e  06                   push es
// 006fca7f  06                   push es
// 006fca80  06                   push es
// 006fca81  06                   push es
// 006fca82  06                   push es
// 006fca83  06                   push es
// 006fca84  06                   push es
// 006fca85  06                   push es
// 006fca86  06                   push es
// 006fca87  06                   push es
// 006fca88  06                   push es
// 006fca89  06                   push es
// 006fca8a  06                   push es
// 006fca8b  06                   push es
// 006fca8c  06                   push es
// 006fca8d  06                   push es
// 006fca8e  06                   push es
// 006fca8f  06                   push es
// 006fca90  06                   push es
// 006fca91  06                   push es
// 006fca92  06                   push es
// 006fca93  06                   push es
// 006fca94  06                   push es
// 006fca95  06                   push es
// 006fca96  06                   push es
// 006fca97  06                   push es
// 006fca98  06                   push es
// 006fca99  06                   push es
// 006fca9a  06                   push es
// 006fca9b  06                   push es
// 006fca9c  06                   push es
// 006fca9d  06                   push es
// 006fca9e  06                   push es
// 006fca9f  06                   push es
// 006fcaa0  06                   push es
// 006fcaa1  06                   push es
// 006fcaa2  06                   push es
// 006fcaa3  06                   push es
// 006fcaa4  06                   push es
// 006fcaa5  06                   push es
// 006fcaa6  06                   push es
// 006fcaa7  06                   push es
// 006fcaa8  06                   push es
// 006fcaa9  06                   push es
// 006fcaaa  06                   push es
// 006fcaab  06                   push es
// 006fcaac  06                   push es
// 006fcaad  06                   push es
// 006fcaae  06                   push es
// 006fcaaf  06                   push es
// 006fcab0  06                   push es
// 006fcab1  06                   push es
// 006fcab2  06                   push es
// 006fcab3  06                   push es
// 006fcab4  06                   push es
// 006fcab5  06                   push es
// 006fcab6  06                   push es
// 006fcab7  06                   push es
// 006fcab8  06                   push es
// 006fcab9  06                   push es
// 006fcaba  06                   push es
// 006fcabb  06                   push es
// 006fcabc  06                   push es
// 006fcabd  06                   push es
// 006fcabe  0402                 add al, 2
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?GetSizeOfVarType@CXTPPropExchange@@IAEKG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
