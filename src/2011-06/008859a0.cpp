// roc 2011-06 008859a0  unit: CXTPControlGallery  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008859a0
//
// 008859a0  56                   push esi
// 008859a1  8bf1                 mov esi, ecx
// 008859a3  8b06                 mov eax, dword ptr [esi]
// 008859a5  8b5074               mov edx, dword ptr [eax + 0x74]
// 008859a8  ffd2                 call edx
// 008859aa  85c0                 test eax, eax
// 008859ac  0f84e2010000         je 0x885b94
// 008859b2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008859b8  8d442408             lea eax, [esp + 8]
// 008859bc  50                   push eax
// 008859bd  51                   push ecx
// 008859be  e85d82fdff           call 0x85dc20
// 008859c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008859c7  83c0f7               add eax, -9
// 008859ca  83c408               add esp, 8
// 008859cd  83f81f               cmp eax, 0x1f
// 008859d0  0f87be010000         ja 0x885b94
// 008859d6  0fb690c85b8800       movzx edx, byte ptr [eax + 0x885bc8]
// 008859dd  ff24959c5b8800       jmp dword ptr [edx*4 + 0x885b9c]
// 008859e4  6a01                 push 1
// 008859e6  6aff                 push -1
// 008859e8  8bce                 mov ecx, esi
// 008859ea  e871ceffff           call 0x882860
// 008859ef  50                   push eax
// 008859f0  8bce                 mov ecx, esi
// 008859f2  e879fbffff           call 0x885570
// 008859f7  b801000000           mov eax, 1
// 008859fc  5e                   pop esi
// 008859fd  c20800               ret 8
// 00885a00  6aff                 push -1
// 00885a02  ebe2                 jmp 0x8859e6
// 00885a04  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 00885a0a  6aff                 push -1
// 00885a0c  50                   push eax
// 00885a0d  8bce                 mov ecx, esi
// 00885a0f  e8bcf6ffff           call 0x8850d0
// 00885a14  50                   push eax
// 00885a15  8bce                 mov ecx, esi
// 00885a17  e854fbffff           call 0x885570
// 00885a1c  b801000000           mov eax, 1
// 00885a21  5e                   pop esi
// 00885a22  c20800               ret 8
// 00885a25  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 00885a2b  6a01                 push 1
// 00885a2d  51                   push ecx
// 00885a2e  8bce                 mov ecx, esi
// 00885a30  e89bf6ffff           call 0x8850d0
// 00885a35  50                   push eax
// 00885a36  8bce                 mov ecx, esi
// 00885a38  e833fbffff           call 0x885570
// 00885a3d  b801000000           mov eax, 1
// 00885a42  5e                   pop esi
// 00885a43  c20800               ret 8
// 00885a46  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 00885a4c  6aff                 push -1
// 00885a4e  52                   push edx
// 00885a4f  8bce                 mov ecx, esi
// 00885a51  e8daf9ffff           call 0x885430
// 00885a56  83f8ff               cmp eax, -1
// 00885a59  7594                 jne 0x8859ef
// 00885a5b  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00885a61  6a01                 push 1
// 00885a63  6a00                 push 0
// 00885a65  6a01                 push 1
// 00885a67  50                   push eax
// 00885a68  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00885a6e  50                   push eax
// 00885a6f  e83c14fdff           call 0x856eb0
// 00885a74  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00885a7a  0f8514010000         jne 0x885b94
// 00885a80  6aff                 push -1
// 00885a82  6aff                 push -1
// 00885a84  8bce                 mov ecx, esi
// 00885a86  e8d5cdffff           call 0x882860
// 00885a8b  83f8ff               cmp eax, -1
// 00885a8e  0f8400010000         je 0x885b94
// 00885a94  50                   push eax
// 00885a95  8bce                 mov ecx, esi
// 00885a97  e8d4faffff           call 0x885570
// 00885a9c  b801000000           mov eax, 1
// 00885aa1  5e                   pop esi
// 00885aa2  c20800               ret 8
// 00885aa5  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 00885aab  6aff                 push -1
// 00885aad  51                   push ecx
// 00885aae  8bce                 mov ecx, esi
// 00885ab0  e8dbf7ffff           call 0x885290
// 00885ab5  50                   push eax
// 00885ab6  8bce                 mov ecx, esi
// 00885ab8  e8b3faffff           call 0x885570
// 00885abd  b801000000           mov eax, 1
// 00885ac2  5e                   pop esi
// 00885ac3  c20800               ret 8
// 00885ac6  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 00885acc  6a01                 push 1
// 00885ace  52                   push edx
// 00885acf  8bce                 mov ecx, esi
// 00885ad1  e8baf7ffff           call 0x885290
// 00885ad6  50                   push eax
// 00885ad7  8bce                 mov ecx, esi
// 00885ad9  e892faffff           call 0x885570
// 00885ade  b801000000           mov eax, 1
// 00885ae3  5e                   pop esi
// 00885ae4  c20800               ret 8
// 00885ae7  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 00885aed  6a01                 push 1
// 00885aef  50                   push eax
// 00885af0  8bce                 mov ecx, esi
// 00885af2  e839f9ffff           call 0x885430
// 00885af7  83f8ff               cmp eax, -1
// 00885afa  0f85effeffff         jne 0x8859ef
// 00885b00  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00885b06  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00885b0c  6a01                 push 1
// 00885b0e  6a00                 push 0
// 00885b10  6a01                 push 1
// 00885b12  6a01                 push 1
// 00885b14  52                   push edx
// 00885b15  e89613fdff           call 0x856eb0
// 00885b1a  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00885b20  7572                 jne 0x885b94
// 00885b22  6a01                 push 1
// 00885b24  e959ffffff           jmp 0x885a82
// 00885b29  6a10                 push 0x10
// 00885b2b  ff15601aa400         call dword ptr [0xa41a60]
// 00885b31  6685c0               test ax, ax
// 00885b34  7c29                 jl 0x885b5f
// 00885b36  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 00885b3c  6a01                 push 1
// 00885b3e  50                   push eax
// 00885b3f  8bce                 mov ecx, esi
// 00885b41  e81acdffff           call 0x882860
// 00885b46  3b86f8010000         cmp eax, dword ptr [esi + 0x1f8]
// 00885b4c  7e46                 jle 0x885b94
// 00885b4e  50                   push eax
// 00885b4f  8bce                 mov ecx, esi
// 00885b51  e81afaffff           call 0x885570
// 00885b56  b801000000           mov eax, 1
// 00885b5b  5e                   pop esi
// 00885b5c  c20800               ret 8
// 00885b5f  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 00885b65  6aff                 push -1
// 00885b67  51                   push ecx
// 00885b68  8bce                 mov ecx, esi
// 00885b6a  e8f1ccffff           call 0x882860
// 00885b6f  3b86f8010000         cmp eax, dword ptr [esi + 0x1f8]
// 00885b75  7d1d                 jge 0x885b94
// 00885b77  50                   push eax
// 00885b78  8bce                 mov ecx, esi
// 00885b7a  e8f1f9ffff           call 0x885570
// 00885b7f  b801000000           mov eax, 1
// 00885b84  5e                   pop esi
// 00885b85  c20800               ret 8
// 00885b88  8b16                 mov edx, dword ptr [esi]
// 00885b8a  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 00885b90  8bce                 mov ecx, esi
// 00885b92  ffd0                 call eax
// 00885b94  33c0                 xor eax, eax
// 00885b96  5e                   pop esi
// 00885b97  c20800               ret 8
// 00885b9a  8bff                 mov edi, edi
// 00885b9c  295b88               sub dword ptr [ebx - 0x78], ebx
// 00885b9f  00885b8800a5         add byte ptr [eax - 0x5aff77a5], cl
// 00885ba5  5a                   pop edx
// 00885ba6  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlGallery@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp