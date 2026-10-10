// roc 2008-06 00743a10  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743a10
//
// 00743a10  8b442404             mov eax, dword ptr [esp + 4]
// 00743a14  56                   push esi
// 00743a15  8bf1                 mov esi, ecx
// 00743a17  398690010000         cmp dword ptr [esi + 0x190], eax
// 00743a1d  0f84ef000000         je 0x743b12
// 00743a23  898690010000         mov dword ptr [esi + 0x190], eax
// 00743a29  85c0                 test eax, eax
// 00743a2b  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00743a31  57                   push edi
// 00743a32  747b                 je 0x743aaf
// 00743a34  85c0                 test eax, eax
// 00743a36  7426                 je 0x743a5e
// 00743a38  83782000             cmp dword ptr [eax + 0x20], 0
// 00743a3c  7420                 je 0x743a5e
// 00743a3e  85c0                 test eax, eax
// 00743a40  7504                 jne 0x743a46
// 00743a42  33ff                 xor edi, edi
// 00743a44  eb03                 jmp 0x743a49
// 00743a46  8b7820               mov edi, dword ptr [eax + 0x20]
// 00743a49  ff15102e8000         call dword ptr [0x802e10]
// 00743a4f  3bc7                 cmp eax, edi
// 00743a51  740b                 je 0x743a5e
// 00743a53  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00743a59  e8cacff5ff           call 0x6a0a28
// 00743a5e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743a64  8b01                 mov eax, dword ptr [ecx]
// 00743a66  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00743a6c  6a00                 push 0
// 00743a6e  6a00                 push 0
// 00743a70  6a01                 push 1
// 00743a72  ffd2                 call edx
// 00743a74  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743a7a  8b01                 mov eax, dword ptr [ecx]
// 00743a7c  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00743a82  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00743a88  6a00                 push 0
// 00743a8a  52                   push edx
// 00743a8b  ffd0                 call eax
// 00743a8d  6810306a00           push 0x6a3010
// 00743a92  b99ced9700           mov ecx, 0x97ed9c
// 00743a97  e83e850700           call 0x7bbfda
// 00743a9c  85c0                 test eax, eax
// 00743a9e  7505                 jne 0x743aa5
// 00743aa0  e89fcef5ff           call 0x6a0944
// 00743aa5  ff4004               inc dword ptr [eax + 4]
// 00743aa8  6800010000           push 0x100
// 00743aad  eb52                 jmp 0x743b01
// 00743aaf  85c0                 test eax, eax
// 00743ab1  742e                 je 0x743ae1
// 00743ab3  83782000             cmp dword ptr [eax + 0x20], 0
// 00743ab7  7428                 je 0x743ae1
// 00743ab9  85c0                 test eax, eax
// 00743abb  7504                 jne 0x743ac1
// 00743abd  33ff                 xor edi, edi
// 00743abf  eb03                 jmp 0x743ac4
// 00743ac1  8b7820               mov edi, dword ptr [eax + 0x20]
// 00743ac4  ff15102e8000         call dword ptr [0x802e10]
// 00743aca  3bc7                 cmp eax, edi
// 00743acc  7513                 jne 0x743ae1
// 00743ace  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743ad4  8b91d4000000         mov edx, dword ptr [ecx + 0xd4]
// 00743ada  52                   push edx
// 00743adb  ff15242e8000         call dword ptr [0x802e24]
// 00743ae1  6810306a00           push 0x6a3010
// 00743ae6  b99ced9700           mov ecx, 0x97ed9c
// 00743aeb  e8ea840700           call 0x7bbfda
// 00743af0  85c0                 test eax, eax
// 00743af2  7505                 jne 0x743af9
// 00743af4  e84bcef5ff           call 0x6a0944
// 00743af9  ff4804               dec dword ptr [eax + 4]
// 00743afc  6800020000           push 0x200
// 00743b01  8bce                 mov ecx, esi
// 00743b03  e8389cf6ff           call 0x6ad740
// 00743b08  6a01                 push 1
// 00743b0a  8bce                 mov ecx, esi
// 00743b0c  e8bf7df6ff           call 0x6ab8d0
// 00743b11  5f                   pop edi
// 00743b12  5e                   pop esi
// 00743b13  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?SetFocused@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
