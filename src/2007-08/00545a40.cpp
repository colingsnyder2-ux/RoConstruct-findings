// roc 2007-08 00545a40  unit: RBX::MD5HasherImpl  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545a40
//
// 00545a40  55                   push ebp
// 00545a41  8bec                 mov ebp, esp
// 00545a43  6aff                 push -1
// 00545a45  6840197500           push 0x751940
// 00545a4a  64a100000000         mov eax, dword ptr fs:[0]
// 00545a50  50                   push eax
// 00545a51  64892500000000       mov dword ptr fs:[0], esp
// 00545a58  83ec14               sub esp, 0x14
// 00545a5b  53                   push ebx
// 00545a5c  56                   push esi
// 00545a5d  8b7508               mov esi, dword ptr [ebp + 8]
// 00545a60  57                   push edi
// 00545a61  8965f0               mov dword ptr [ebp - 0x10], esp
// 00545a64  33ff                 xor edi, edi
// 00545a66  56                   push esi
// 00545a67  8d4de0               lea ecx, [ebp - 0x20]
// 00545a6a  33db                 xor ebx, ebx
// 00545a6c  897dec               mov dword ptr [ebp - 0x14], edi
// 00545a6f  e8dc57f2ff           call 0x46b250
// 00545a74  807de400             cmp byte ptr [ebp - 0x1c], 0
// 00545a78  895dfc               mov dword ptr [ebp - 4], ebx
// 00545a7b  0f84e0000000         je 0x545b61
// 00545a81  8b06                 mov eax, dword ptr [esi]
// 00545a83  8b4804               mov ecx, dword ptr [eax + 4]
// 00545a86  8b443118             mov eax, dword ptr [ecx + esi + 0x18]
// 00545a8a  03ce                 add ecx, esi
// 00545a8c  83f801               cmp eax, 1
// 00545a8f  7e03                 jle 0x545a94
// 00545a91  8d58ff               lea ebx, [eax - 1]
// 00545a94  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00545a97  25c0010000           and eax, 0x1c0
// 00545a9c  83f840               cmp eax, 0x40
// 00545a9f  c645fc01             mov byte ptr [ebp - 4], 1
// 00545aa3  743b                 je 0x545ae0
// 00545aa5  85ff                 test edi, edi
// 00545aa7  0f85ad000000         jne 0x545b5a
// 00545aad  85db                 test ebx, ebx
// 00545aaf  7e2f                 jle 0x545ae0
// 00545ab1  8b16                 mov edx, dword ptr [esi]
// 00545ab3  8b4204               mov eax, dword ptr [edx + 4]
// 00545ab6  8a4c3030             mov cl, byte ptr [eax + esi + 0x30]
// 00545aba  03c6                 add eax, esi
// 00545abc  8b4028               mov eax, dword ptr [eax + 0x28]
// 00545abf  884de8               mov byte ptr [ebp - 0x18], cl
// 00545ac2  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00545ac5  52                   push edx
// 00545ac6  8bc8                 mov ecx, eax
// 00545ac8  ff15b4e57700         call dword ptr [0x77e5b4]
// 00545ace  83f8ff               cmp eax, -1
// 00545ad1  7508                 jne 0x545adb
// 00545ad3  bf04000000           mov edi, 4
// 00545ad8  897dec               mov dword ptr [ebp - 0x14], edi
// 00545adb  83eb01               sub ebx, 1
// 00545ade  ebc5                 jmp 0x545aa5
// 00545ae0  8b06                 mov eax, dword ptr [esi]
// 00545ae2  8b4804               mov ecx, dword ptr [eax + 4]
// 00545ae5  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00545ae8  8b4c3128             mov ecx, dword ptr [ecx + esi + 0x28]
// 00545aec  52                   push edx
// 00545aed  ff15b4e57700         call dword ptr [0x77e5b4]
// 00545af3  83f8ff               cmp eax, -1
// 00545af6  7508                 jne 0x545b00
// 00545af8  bf04000000           mov edi, 4
// 00545afd  897dec               mov dword ptr [ebp - 0x14], edi
// 00545b00  85ff                 test edi, edi
// 00545b02  7556                 jne 0x545b5a
// 00545b04  85db                 test ebx, ebx
// 00545b06  7e52                 jle 0x545b5a
// 00545b08  8b06                 mov eax, dword ptr [esi]
// 00545b0a  8b4804               mov ecx, dword ptr [eax + 4]
// 00545b0d  8a543130             mov dl, byte ptr [ecx + esi + 0x30]
// 00545b11  8d0431               lea eax, [ecx + esi]
// 00545b14  8b4028               mov eax, dword ptr [eax + 0x28]
// 00545b17  8855e8               mov byte ptr [ebp - 0x18], dl
// 00545b1a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00545b1d  51                   push ecx
// 00545b1e  8bc8                 mov ecx, eax
// 00545b20  ff15b4e57700         call dword ptr [0x77e5b4]
// 00545b26  83f8ff               cmp eax, -1
// 00545b29  7508                 jne 0x545b33
// 00545b2b  bf04000000           mov edi, 4
// 00545b30  897dec               mov dword ptr [ebp - 0x14], edi
// 00545b33  83eb01               sub ebx, 1
// 00545b36  ebc8                 jmp 0x545b00
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
