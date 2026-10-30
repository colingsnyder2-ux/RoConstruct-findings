// from server: 100% by auto
// roc 2012-06 009cde90  unit: CXTPPopupBar  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cde90
//
// 009cde90  55                   push ebp
// 009cde91  8be9                 mov ebp, ecx
// 009cde93  e84648fbff           call 0x9826de
// 009cde98  85c0                 test eax, eax
// 009cde9a  7504                 jne 0x9cdea0
// 009cde9c  5d                   pop ebp
// 009cde9d  c20400               ret 4
// 009cdea0  57                   push edi
// 009cdea1  8bcd                 mov ecx, ebp
// 009cdea3  e82ab70c00           call 0xa995d2
// 009cdea8  a900010000           test eax, 0x100
// 009cdead  747a                 je 0x9cdf29
// 009cdeaf  8bcd                 mov ecx, ebp
// 009cdeb1  e8ee51fbff           call 0x9830a4
// 009cdeb6  8bf8                 mov edi, eax
// 009cdeb8  85ff                 test edi, edi
// 009cdeba  7505                 jne 0x9cdec1
// 009cdebc  5f                   pop edi
// 009cdebd  5d                   pop ebp
// 009cdebe  c20400               ret 4
// 009cdec1  53                   push ebx
// 009cdec2  56                   push esi
// 009cdec3  ff150c3cb200         call dword ptr [0xb23c0c]
// 009cdec9  50                   push eax
// 009cdeca  e89747fbff           call 0x982666
// 009cdecf  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009cded5  8bf0                 mov esi, eax
// 009cded7  3bfe                 cmp edi, esi
// 009cded9  742b                 je 0x9cdf06
// 009cdedb  8b4720               mov eax, dword ptr [edi + 0x20]
// 009cdede  50                   push eax
// 009cdedf  ff153c3db200         call dword ptr [0xb23d3c]
// 009cdee5  50                   push eax
// 009cdee6  e87b47fbff           call 0x982666
// 009cdeeb  3bc6                 cmp eax, esi
// 009cdeed  7513                 jne 0x9cdf02
// 009cdeef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009cdef2  6a00                 push 0
// 009cdef4  6a40                 push 0x40
// 009cdef6  686d030000           push 0x36d
// 009cdefb  51                   push ecx
// 009cdefc  ffd3                 call ebx
// 009cdefe  85c0                 test eax, eax
// 009cdf00  7504                 jne 0x9cdf06
// 009cdf02  33c0                 xor eax, eax
// 009cdf04  eb05                 jmp 0x9cdf0b
// 009cdf06  b801000000           mov eax, 1
// 009cdf0b  33d2                 xor edx, edx
// 009cdf0d  85c0                 test eax, eax
// 009cdf0f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009cdf12  0f94c2               sete dl
// 009cdf15  6a00                 push 0
// 009cdf17  8d149504000000       lea edx, [edx*4 + 4]
// 009cdf1e  52                   push edx
// 009cdf1f  686d030000           push 0x36d
// 009cdf24  50                   push eax
// 009cdf25  ffd3                 call ebx
// 009cdf27  5e                   pop esi
// 009cdf28  5b                   pop ebx
// 009cdf29  5f                   pop edi
// 009cdf2a  b801000000           mov eax, 1
// 009cdf2f  5d                   pop ebp
// 009cdf30  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcCreate@CXTPPopupBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
