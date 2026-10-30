// roc 2009-12 0088fed0  unit: CXTPShortcutManager  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088fed0
//
// 0088fed0  83ec10               sub esp, 0x10
// 0088fed3  56                   push esi
// 0088fed4  57                   push edi
// 0088fed5  8bf1                 mov esi, ecx
// 0088fed7  33ff                 xor edi, edi
// 0088fed9  897e08               mov dword ptr [esi + 8], edi
// 0088fedc  e83d3ff6ff           call 0x7f3e1e
// 0088fee1  b07f                 mov al, 0x7f
// 0088fee3  88442408             mov byte ptr [esp + 8], al
// 0088fee7  88442409             mov byte ptr [esp + 9], al
// 0088feeb  8844240a             mov byte ptr [esp + 0xa], al
// 0088feef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088fef3  897c240c             mov dword ptr [esp + 0xc], edi
// 0088fef7  3bc7                 cmp eax, edi
// 0088fef9  750a                 jne 0x88ff05
// 0088fefb  5f                   pop edi
// 0088fefc  33c0                 xor eax, eax
// 0088fefe  5e                   pop esi
// 0088feff  83c410               add esp, 0x10
// 0088ff02  c20400               ret 4
// 0088ff05  53                   push ebx
// 0088ff06  8d4c240c             lea ecx, [esp + 0xc]
// 0088ff0a  51                   push ecx
// 0088ff0b  8d542424             lea edx, [esp + 0x24]
// 0088ff0f  52                   push edx
// 0088ff10  8d4c2420             lea ecx, [esp + 0x20]
// 0088ff14  51                   push ecx
// 0088ff15  8d542420             lea edx, [esp + 0x20]
// 0088ff19  52                   push edx
// 0088ff1a  8d4c2420             lea ecx, [esp + 0x20]
// 0088ff1e  51                   push ecx
// 0088ff1f  50                   push eax
// 0088ff20  e83bfcffff           call 0x88fb60
// 0088ff25  83c418               add esp, 0x18
// 0088ff28  85c0                 test eax, eax
// 0088ff2a  751d                 jne 0x88ff49
// 0088ff2c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088ff30  3bc7                 cmp eax, edi
// 0088ff32  740a                 je 0x88ff3e
// 0088ff34  50                   push eax
// 0088ff35  ff1540b79800         call dword ptr [0x98b740]
// 0088ff3b  83c404               add esp, 4
// 0088ff3e  5b                   pop ebx
// 0088ff3f  5f                   pop edi
// 0088ff40  33c0                 xor eax, eax
// 0088ff42  5e                   pop esi
// 0088ff43  83c410               add esp, 0x10
// 0088ff46  c20400               ret 4
// 0088ff49  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0088ff4d  3bdf                 cmp ebx, edi
// 0088ff4f  74ed                 je 0x88ff3e
// 0088ff51  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088ff55  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088ff59  55                   push ebp
// 0088ff5a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0088ff5e  55                   push ebp
// 0088ff5f  51                   push ecx
// 0088ff60  50                   push eax
// 0088ff61  53                   push ebx
// 0088ff62  8bce                 mov ecx, esi
// 0088ff64  e8b7faffff           call 0x88fa20
// 0088ff69  53                   push ebx
// 0088ff6a  8bf8                 mov edi, eax
// 0088ff6c  ff1540b79800         call dword ptr [0x98b740]
// 0088ff72  83c404               add esp, 4
// 0088ff75  85ff                 test edi, edi
// 0088ff77  750c                 jne 0x88ff85
// 0088ff79  5d                   pop ebp
// 0088ff7a  5b                   pop ebx
// 0088ff7b  5f                   pop edi
// 0088ff7c  33c0                 xor eax, eax
// 0088ff7e  5e                   pop esi
// 0088ff7f  83c410               add esp, 0x10
// 0088ff82  c20400               ret 4
// 0088ff85  33d2                 xor edx, edx
// 0088ff87  83fd04               cmp ebp, 4
// 0088ff8a  0f94c2               sete dl
// 0088ff8d  57                   push edi
// 0088ff8e  8bce                 mov ecx, esi
// 0088ff90  895608               mov dword ptr [esi + 8], edx
// 0088ff93  e8923ef6ff           call 0x7f3e2a
// 0088ff98  5d                   pop ebp
// 0088ff99  5b                   pop ebx
// 0088ff9a  5f                   pop edi
// 0088ff9b  b801000000           mov eax, 1
// 0088ffa0  5e                   pop esi
// 0088ffa1  83c410               add esp, 0x10
// 0088ffa4  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPAVCFile@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/GraphicLibrary/XTPGraphicBitmapPng.cpp