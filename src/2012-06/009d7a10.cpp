// roc 2012-06 009d7a10  unit: CXTPPropExchange  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7a10
//
// 009d7a10  0fb7442404           movzx eax, word ptr [esp + 4]
// 009d7a15  83c0fe               add eax, -2
// 009d7a18  83f863               cmp eax, 0x63
// 009d7a1b  773e                 ja 0x9d7a5b
// 009d7a1d  0fb6807c7a9d00       movzx eax, byte ptr [eax + 0x9d7a7c]
// 009d7a24  ff2485607a9d00       jmp dword ptr [eax*4 + 0x9d7a60]
// 009d7a2b  b804000000           mov eax, 4
// 009d7a30  c20400               ret 4
// 009d7a33  b801000000           mov eax, 1
// 009d7a38  c20400               ret 4
// 009d7a3b  b802000000           mov eax, 2
// 009d7a40  c20400               ret 4
// 009d7a43  b808000000           mov eax, 8
// 009d7a48  c20400               ret 4
// 009d7a4b  b810000000           mov eax, 0x10
// 009d7a50  c20400               ret 4
// 009d7a53  b80c000000           mov eax, 0xc
// 009d7a58  c20400               ret 4
// 009d7a5b  33c0                 xor eax, eax
// 009d7a5d  c20400               ret 4
// 009d7a60  3b7a9d               cmp edi, dword ptr [edx - 0x63]
// 009d7a63  002b                 add byte ptr [ebx], ch
// 009d7a65  7a9d                 jp 0x9d7a04
// 009d7a67  00437a               add byte ptr [ebx + 0x7a], al
// 009d7a6a  9d                   popfd 
// 009d7a6b  00537a               add byte ptr [ebx + 0x7a], dl
// 009d7a6e  9d                   popfd 
// 009d7a6f  004b7a               add byte ptr [ebx + 0x7a], cl
// 009d7a72  9d                   popfd 
// 009d7a73  0033                 add byte ptr [ebx], dh
// 009d7a75  7a9d                 jp 0x9d7a14
// 009d7a77  005b7a               add byte ptr [ebx + 0x7a], bl
// 009d7a7a  9d                   popfd 
// 009d7a7b  0000                 add byte ptr [eax], al
// 009d7a7d  0101                 add dword ptr [ecx], eax
// 009d7a7f  0202                 add al, byte ptr [edx]
// 009d7a81  0301                 add eax, dword ptr [ecx]
// 009d7a83  06                   push es
// 009d7a84  06                   push es
// 009d7a85  010406               add dword ptr [esi + eax], eax
// 009d7a88  06                   push es
// 009d7a89  06                   push es
// 009d7a8a  06                   push es
// 009d7a8b  0506060606           add eax, 0x6060606
// 009d7a90  06                   push es
// 009d7a91  06                   push es
// 009d7a92  06                   push es
// 009d7a93  06                   push es
// 009d7a94  06                   push es
// 009d7a95  06                   push es
// 009d7a96  06                   push es
// 009d7a97  06                   push es
// 009d7a98  06                   push es
// 009d7a99  06                   push es
// 009d7a9a  06                   push es
// 009d7a9b  06                   push es
// 009d7a9c  06                   push es
// 009d7a9d  06                   push es
// 009d7a9e  06                   push es
// 009d7a9f  06                   push es
// 009d7aa0  06                   push es
// 009d7aa1  06                   push es
// 009d7aa2  06                   push es
// 009d7aa3  06                   push es
// 009d7aa4  06                   push es
// 009d7aa5  06                   push es
// 009d7aa6  06                   push es
// 009d7aa7  06                   push es
// 009d7aa8  06                   push es
// 009d7aa9  06                   push es
// 009d7aaa  06                   push es
// 009d7aab  06                   push es
// 009d7aac  06                   push es
// 009d7aad  06                   push es
// 009d7aae  06                   push es
// 009d7aaf  06                   push es
// 009d7ab0  06                   push es
// 009d7ab1  06                   push es
// 009d7ab2  06                   push es
// 009d7ab3  06                   push es
// 009d7ab4  06                   push es
// 009d7ab5  06                   push es
// 009d7ab6  06                   push es
// 009d7ab7  06                   push es
// 009d7ab8  06                   push es
// 009d7ab9  06                   push es
// 009d7aba  06                   push es
// 009d7abb  06                   push es
// 009d7abc  06                   push es
// 009d7abd  06                   push es
// 009d7abe  06                   push es
// 009d7abf  06                   push es
// 009d7ac0  06                   push es
// 009d7ac1  06                   push es
// 009d7ac2  06                   push es
// 009d7ac3  06                   push es
// 009d7ac4  06                   push es
// 009d7ac5  06                   push es
// 009d7ac6  06                   push es
// 009d7ac7  06                   push es
// 009d7ac8  06                   push es
// 009d7ac9  06                   push es
// 009d7aca  06                   push es
// 009d7acb  06                   push es
// 009d7acc  06                   push es
// 009d7acd  06                   push es
// 009d7ace  06                   push es
// 009d7acf  06                   push es
// 009d7ad0  06                   push es
// 009d7ad1  06                   push es
// 009d7ad2  06                   push es
// 009d7ad3  06                   push es
// 009d7ad4  06                   push es
// 009d7ad5  06                   push es
// 009d7ad6  06                   push es
// 009d7ad7  06                   push es
// 009d7ad8  06                   push es
// 009d7ad9  06                   push es
// 009d7ada  06                   push es
// 009d7adb  06                   push es
// 009d7adc  06                   push es
// 009d7add  06                   push es
// 009d7ade  0402                 add al, 2
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?GetSizeOfVarType@CXTPPropExchange@@IAEKG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
