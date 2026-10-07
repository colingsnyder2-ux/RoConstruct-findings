// roc 2007-08 00529a30  unit: seg_00520000  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529a30
//
// 00529a30  81ec8c010000         sub esp, 0x18c
// 00529a36  a188518b00           mov eax, dword ptr [0x8b5188]
// 00529a3b  33c4                 xor eax, esp
// 00529a3d  89842488010000       mov dword ptr [esp + 0x188], eax
// 00529a44  8b842490010000       mov eax, dword ptr [esp + 0x190]
// 00529a4b  53                   push ebx
// 00529a4c  55                   push ebp
// 00529a4d  8bac24a0010000       mov ebp, dword ptr [esp + 0x1a0]
// 00529a54  56                   push esi
// 00529a55  57                   push edi
// 00529a56  8bbc24a4010000       mov edi, dword ptr [esp + 0x1a4]
// 00529a5d  8bf1                 mov esi, ecx
// 00529a5f  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00529a65  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00529a68  c1fd02               sar ebp, 2
// 00529a6b  c1ff02               sar edi, 2
// 00529a6e  c1fe03               sar esi, 3
// 00529a71  89ac24a8010000       mov dword ptr [esp + 0x1a8], ebp
// 00529a78  8d8c2498000000       lea ecx, [esp + 0x98]
// 00529a7f  51                   push ecx
// 00529a80  89bc24a8010000       mov dword ptr [esp + 0x1a8], edi
// 00529a87  8bde                 mov ebx, esi
// 00529a89  c1e505               shl ebp, 5
// 00529a8c  c1e705               shl edi, 5
// 00529a8f  c1e305               shl ebx, 5
// 00529a92  83c504               add ebp, 4
// 00529a95  83c704               add edi, 4
// 00529a98  83c302               add ebx, 2
// 00529a9b  55                   push ebp
// 00529a9c  57                   push edi
// 00529a9d  8bcb                 mov ecx, ebx
// 00529a9f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00529aa3  89542420             mov dword ptr [esp + 0x20], edx
// 00529aa7  e834fcffff           call 0x5296e0
// 00529aac  8d542424             lea edx, [esp + 0x24]
// 00529ab0  52                   push edx
// 00529ab1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00529ab5  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00529abc  51                   push ecx
// 00529abd  50                   push eax
// 00529abe  55                   push ebp
// 00529abf  53                   push ebx
// 00529ac0  57                   push edi
// 00529ac1  52                   push edx
// 00529ac2  e8e9fdffff           call 0x5298b0
// 00529ac7  8b8424d0010000       mov eax, dword ptr [esp + 0x1d0]
// 00529ace  8b9424cc010000       mov edx, dword ptr [esp + 0x1cc]
// 00529ad5  03f6                 add esi, esi
// 00529ad7  03f6                 add esi, esi
// 00529ad9  03f6                 add esi, esi
// 00529adb  03c0                 add eax, eax
// 00529add  03c0                 add eax, eax
// 00529adf  c1e605               shl esi, 5
// 00529ae2  03d2                 add edx, edx
// 00529ae4  03f0                 add esi, eax
// 00529ae6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00529aea  03d2                 add edx, edx
// 00529aec  83c428               add esp, 0x28
// 00529aef  03f6                 add esi, esi
// 00529af1  8d4c2418             lea ecx, [esp + 0x18]
// 00529af5  89742410             mov dword ptr [esp + 0x10], esi
// 00529af9  8d3c90               lea edi, [eax + edx*4]
// 00529afc  bd04000000           mov ebp, 4
// 00529b01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00529b05  bb08000000           mov ebx, 8
// 00529b0a  8d9b00000000         lea ebx, [ebx]
// 00529b10  8b07                 mov eax, dword ptr [edi]
// 00529b12  0fb631               movzx esi, byte ptr [ecx]
// 00529b15  6683c601             add si, 1
// 00529b19  03c2                 add eax, edx
// 00529b1b  668930               mov word ptr [eax], si
// 00529b1e  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00529b22  6683c601             add si, 1
// 00529b26  66897002             mov word ptr [eax + 2], si
// 00529b2a  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00529b2e  6683c601             add si, 1
// 00529b32  66897004             mov word ptr [eax + 4], si
// 00529b36  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00529b3a  6683c601             add si, 1
// 00529b3e  83c104               add ecx, 4
// 00529b41  83c240               add edx, 0x40
// 00529b44  83eb01               sub ebx, 1
// 00529b47  66897006             mov word ptr [eax + 6], si
// 00529b4b  75c3                 jne 0x529b10
// 00529b4d  83c704               add edi, 4
// 00529b50  83ed01               sub ebp, 1
// 00529b53  75ac                 jne 0x529b01
// 00529b55  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 00529b5c  5f                   pop edi
// 00529b5d  5e                   pop esi
// 00529b5e  5d                   pop ebp
// 00529b5f  5b                   pop ebx
// 00529b60  33cc                 xor ecx, esp
// 00529b62  e8b76e1000           call 0x630a1e
// 00529b67  81c48c010000         add esp, 0x18c
// 00529b6d  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
