// roc 2011-06 008e7cd0  unit: CXTColorHex  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7cd0
//
// 008e7cd0  53                   push ebx
// 008e7cd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008e7cd5  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 008e7cdc  56                   push esi
// 008e7cdd  8bf1                 mov esi, ecx
// 008e7cdf  0f85b9000000         jne 0x8e7d9e
// 008e7ce5  8b4670               mov eax, dword ptr [esi + 0x70]
// 008e7ce8  50                   push eax
// 008e7ce9  e862faffff           call 0x8e7750
// 008e7cee  85c0                 test eax, eax
// 008e7cf0  7506                 jne 0x8e7cf8
// 008e7cf2  50                   push eax
// 008e7cf3  e858faffff           call 0x8e7750
// 008e7cf8  0fbe4b08             movsx ecx, byte ptr [ebx + 8]
// 008e7cfc  83c1f3               add ecx, -0xd
// 008e7cff  83f91b               cmp ecx, 0x1b
// 008e7d02  0f8796000000         ja 0x8e7d9e
// 008e7d08  0fb689c47d8e00       movzx ecx, byte ptr [ecx + 0x8e7dc4]
// 008e7d0f  ff248dac7d8e00       jmp dword ptr [ecx*4 + 0x8e7dac]
// 008e7d16  8b10                 mov edx, dword ptr [eax]
// 008e7d18  52                   push edx
// 008e7d19  8bce                 mov ecx, esi
// 008e7d1b  e830ffffff           call 0x8e7c50
// 008e7d20  53                   push ebx
// 008e7d21  8bce                 mov ecx, esi
// 008e7d23  e83629f2ff           call 0x80a65e
// 008e7d28  5e                   pop esi
// 008e7d29  5b                   pop ebx
// 008e7d2a  c20400               ret 4
// 008e7d2d  8b4004               mov eax, dword ptr [eax + 4]
// 008e7d30  50                   push eax
// 008e7d31  8bce                 mov ecx, esi
// 008e7d33  e818ffffff           call 0x8e7c50
// 008e7d38  53                   push ebx
// 008e7d39  8bce                 mov ecx, esi
// 008e7d3b  e81e29f2ff           call 0x80a65e
// 008e7d40  5e                   pop esi
// 008e7d41  5b                   pop ebx
// 008e7d42  c20400               ret 4
// 008e7d45  8b4808               mov ecx, dword ptr [eax + 8]
// 008e7d48  51                   push ecx
// 008e7d49  8bce                 mov ecx, esi
// 008e7d4b  e800ffffff           call 0x8e7c50
// 008e7d50  53                   push ebx
// 008e7d51  8bce                 mov ecx, esi
// 008e7d53  e80629f2ff           call 0x80a65e
// 008e7d58  5e                   pop esi
// 008e7d59  5b                   pop ebx
// 008e7d5a  c20400               ret 4
// 008e7d5d  8b500c               mov edx, dword ptr [eax + 0xc]
// 008e7d60  52                   push edx
// 008e7d61  8bce                 mov ecx, esi
// 008e7d63  e8e8feffff           call 0x8e7c50
// 008e7d68  53                   push ebx
// 008e7d69  8bce                 mov ecx, esi
// 008e7d6b  e8ee28f2ff           call 0x80a65e
// 008e7d70  5e                   pop esi
// 008e7d71  5b                   pop ebx
// 008e7d72  c20400               ret 4
// 008e7d75  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e7d78  57                   push edi
// 008e7d79  8b3db819a400         mov edi, dword ptr [0xa419b8]
// 008e7d7f  50                   push eax
// 008e7d80  ffd7                 call edi
// 008e7d82  50                   push eax
// 008e7d83  e8a025f2ff           call 0x80a328
// 008e7d88  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e7d8b  51                   push ecx
// 008e7d8c  ffd7                 call edi
// 008e7d8e  50                   push eax
// 008e7d8f  e89425f2ff           call 0x80a328
// 008e7d94  6a01                 push 1
// 008e7d96  8bc8                 mov ecx, eax
// 008e7d98  e807500e00           call 0x9ccda4
// 008e7d9d  5f                   pop edi
// 008e7d9e  53                   push ebx
// 008e7d9f  8bce                 mov ecx, esi
// 008e7da1  e8b828f2ff           call 0x80a65e
// 008e7da6  5e                   pop esi
// 008e7da7  5b                   pop ebx
// 008e7da8  c20400               ret 4
// 008e7dab  90                   nop 
// 008e7dac  757d                 jne 0x8e7e2b
// 008e7dae  8e00                 mov es, word ptr [eax]
// 008e7db0  16                   push ss
// 008e7db1  7d8e                 jge 0x8e7d41
// 008e7db3  002d7d8e0045         add byte ptr [0x45008e7d], ch
// 008e7db9  7d8e                 jge 0x8e7d49
// 008e7dbb  005d7d               add byte ptr [ebp + 0x7d], bl
// 008e7dbe  8e00                 mov es, word ptr [eax]
// 008e7dc0  9e                   sahf 
// 008e7dc1  7d8e                 jge 0x8e7d51
// 008e7dc3  0000                 add byte ptr [eax], al
// 008e7dc5  0505050505           add eax, 0x5050505
// 008e7dca  0505050505           add eax, 0x5050505
// 008e7dcf  0505050505           add eax, 0x5050505
// 008e7dd4  0505050005           add eax, 0x5000505
// 008e7dd9  0505050102           add eax, 0x2010505
// copied from an identical function in another client (function ?PreTranslateMessage@CXTColorHex@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp