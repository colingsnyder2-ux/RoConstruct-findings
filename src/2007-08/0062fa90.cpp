// roc 2007-08 0062fa90  unit: RBX::IndexBox  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062fa90
//
// 0062fa90  55                   push ebp
// 0062fa91  8bec                 mov ebp, esp
// 0062fa93  6aff                 push -1
// 0062fa95  68dad77500           push 0x75d7da
// 0062fa9a  64a100000000         mov eax, dword ptr fs:[0]
// 0062faa0  50                   push eax
// 0062faa1  64892500000000       mov dword ptr fs:[0], esp
// 0062faa8  83ec40               sub esp, 0x40
// 0062faab  53                   push ebx
// 0062faac  56                   push esi
// 0062faad  57                   push edi
// 0062faae  33ff                 xor edi, edi
// 0062fab0  897dec               mov dword ptr [ebp - 0x14], edi
// 0062fab3  393d34838c00         cmp dword ptr [0x8c8334], edi
// 0062fab9  8965f0               mov dword ptr [ebp - 0x10], esp
// 0062fabc  0f85f0000000         jne 0x62fbb2
// 0062fac2  68c84d7c00           push 0x7c4dc8
// 0062fac7  8d4dd0               lea ecx, [ebp - 0x30]
// 0062faca  897dfc               mov dword ptr [ebp - 4], edi
// 0062facd  ff1598e67700         call dword ptr [0x77e698]
// 0062fad3  c645fc01             mov byte ptr [ebp - 4], 1
// 0062fad7  e8648cddff           call 0x408740
// 0062fadc  8d4dd0               lea ecx, [ebp - 0x30]
// 0062fadf  51                   push ecx
// 0062fae0  8d55b4               lea edx, [ebp - 0x4c]
// 0062fae3  52                   push edx
// 0062fae4  8bc8                 mov ecx, eax
// 0062fae6  e8b596f1ff           call 0x5491a0
// 0062faeb  50                   push eax
// 0062faec  8d45ec               lea eax, [ebp - 0x14]
// 0062faef  b302                 mov bl, 2
// 0062faf1  50                   push eax
// 0062faf2  885dfc               mov byte ptr [ebp - 4], bl
// 0062faf5  e886721000           call 0x736d80
// 0062fafa  83c408               add esp, 8
// 0062fafd  8b30                 mov esi, dword ptr [eax]
// 0062faff  a134838c00           mov eax, dword ptr [0x8c8334]
// 0062fb04  3bf0                 cmp esi, eax
// 0062fb06  c645fc03             mov byte ptr [ebp - 4], 3
// 0062fb0a  7449                 je 0x62fb55
// 0062fb0c  3bc7                 cmp eax, edi
// 0062fb0e  7431                 je 0x62fb41
// 0062fb10  83c004               add eax, 4
// 0062fb13  50                   push eax
// 0062fb14  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062fb1a  85c0                 test eax, eax
// 0062fb1c  751d                 jne 0x62fb3b
// 0062fb1e  8b0d34838c00         mov ecx, dword ptr [0x8c8334]
// 0062fb24  e8a782e2ff           call 0x457dd0
// 0062fb29  8b0d34838c00         mov ecx, dword ptr [0x8c8334]
// 0062fb2f  3bcf                 cmp ecx, edi
// 0062fb31  7408                 je 0x62fb3b
// 0062fb33  8b11                 mov edx, dword ptr [ecx]
// 0062fb35  8b02                 mov eax, dword ptr [edx]
// 0062fb37  6a01                 push 1
// 0062fb39  ffd0                 call eax
// 0062fb3b  893d34838c00         mov dword ptr [0x8c8334], edi
// 0062fb41  3bf7                 cmp esi, edi
// 0062fb43  7410                 je 0x62fb55
// 0062fb45  8d4604               lea eax, [esi + 4]
// 0062fb48  50                   push eax
// 0062fb49  893534838c00         mov dword ptr [0x8c8334], esi
// 0062fb4f  ff15ecd27700         call dword ptr [0x77d2ec]
// 0062fb55  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0062fb58  3bc7                 cmp eax, edi
// 0062fb5a  885dfc               mov byte ptr [ebp - 4], bl
// 0062fb5d  7428                 je 0x62fb87
// 0062fb5f  83c004               add eax, 4
// 0062fb62  50                   push eax
// 0062fb63  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062fb69  85c0                 test eax, eax
// 0062fb6b  7517                 jne 0x62fb84
// 0062fb6d  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0062fb70  e85b82e2ff           call 0x457dd0
// 0062fb75  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0062fb78  3bcf                 cmp ecx, edi
// 0062fb7a  7408                 je 0x62fb84
// 0062fb7c  8b11                 mov edx, dword ptr [ecx]
// 0062fb7e  8b02                 mov eax, dword ptr [edx]
// 0062fb80  6a01                 push 1
// 0062fb82  ffd0                 call eax
// 0062fb84  897dec               mov dword ptr [ebp - 0x14], edi
// 0062fb87  8d4db4               lea ecx, [ebp - 0x4c]
// 0062fb8a  c645fc01             mov byte ptr [ebp - 4], 1
// 0062fb8e  ff15ace67700         call dword ptr [0x77e6ac]
// 0062fb94  8d4dd0               lea ecx, [ebp - 0x30]
// 0062fb97  c645fc00             mov byte ptr [ebp - 4], 0
// 0062fb9b  ff15ace67700         call dword ptr [0x77e6ac]
// 0062fba1  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0062fba8  eb08                 jmp 0x62fbb2
// library rbxgs-appdraw/Fonts.cpp (function ?getFont@Fonts@RBX@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
