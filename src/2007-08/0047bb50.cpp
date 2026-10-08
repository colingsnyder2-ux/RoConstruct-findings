// from server: 100% by auto
// roc 2007-08 0047bb50  unit: G3D::Win32Window  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047bb50
//
// 0047bb50  c1f818               sar eax, 0x18
// 0047bb53  8d4fbf               lea ecx, [edi - 0x41]
// 0047bb56  2401                 and al, 1
// 0047bb58  83f919               cmp ecx, 0x19
// 0047bb5b  7708                 ja 0x47bb65
// 0047bb5d  8d5720               lea edx, [edi + 0x20]
// 0047bb60  895608               mov dword ptr [esi + 8], edx
// 0047bb63  eb51                 jmp 0x47bbb6
// 0047bb65  83ff10               cmp edi, 0x10
// 0047bb68  750b                 jne 0x47bb75
// 0047bb6a  f6d8                 neg al
// 0047bb6c  1bc0                 sbb eax, eax
// 0047bb6e  0530010000           add eax, 0x130
// 0047bb73  eb3e                 jmp 0x47bbb3
// 0047bb75  83ff11               cmp edi, 0x11
// 0047bb78  750b                 jne 0x47bb85
// 0047bb7a  f6d8                 neg al
// 0047bb7c  1bc0                 sbb eax, eax
// 0047bb7e  0532010000           add eax, 0x132
// 0047bb83  eb2e                 jmp 0x47bbb3
// 0047bb85  83ff12               cmp edi, 0x12
// 0047bb88  750b                 jne 0x47bb95
// 0047bb8a  f6d8                 neg al
// 0047bb8c  1bc0                 sbb eax, eax
// 0047bb8e  0534010000           add eax, 0x134
// 0047bb93  eb1e                 jmp 0x47bbb3
// 0047bb95  85ff                 test edi, edi
// 0047bb97  7f04                 jg 0x47bb9d
// 0047bb99  33c0                 xor eax, eax
// 0047bb9b  eb0f                 jmp 0x47bbac
// 0047bb9d  81ff43010000         cmp edi, 0x143
// 0047bba3  b843010000           mov eax, 0x143
// 0047bba8  7d02                 jge 0x47bbac
// 0047bbaa  8bc7                 mov eax, edi
// 0047bbac  8b048560d18b00       mov eax, dword ptr [eax*4 + 0x8bd160]
// 0047bbb3  894608               mov dword ptr [esi + 8], eax
// 0047bbb6  6a00                 push 0
// 0047bbb8  57                   push edi
// 0047bbb9  ff1588ed7700         call dword ptr [0x77ed88]
// 0047bbbf  6878d68b00           push 0x8bd678
// 0047bbc4  884604               mov byte ptr [esi + 4], al
// 0047bbc7  ff153ced7700         call dword ptr [0x77ed3c]
// 0047bbcd  b980000000           mov ecx, 0x80
// 0047bbd2  33c0                 xor eax, eax
// 0047bbd4  840d18d78b00         test byte ptr [0x8bd718], cl
// 0047bbda  7405                 je 0x47bbe1
// 0047bbdc  b801000000           mov eax, 1
// 0047bbe1  840d19d78b00         test byte ptr [0x8bd719], cl
// 0047bbe7  7403                 je 0x47bbec
// 0047bbe9  83c802               or eax, 2
// 0047bbec  840d1ad78b00         test byte ptr [0x8bd71a], cl
// 0047bbf2  7403                 je 0x47bbf7
// 0047bbf4  83c840               or eax, 0x40
// 0047bbf7  840d1bd78b00         test byte ptr [0x8bd71b], cl
// 0047bbfd  7402                 je 0x47bc01
// 0047bbff  0bc1                 or eax, ecx
// 0047bc01  840d1cd78b00         test byte ptr [0x8bd71c], cl
// 0047bc07  7405                 je 0x47bc0e
// 0047bc09  0d00010000           or eax, 0x100
// 0047bc0e  840d1dd78b00         test byte ptr [0x8bd71d], cl
// 0047bc14  7405                 je 0x47bc1b
// 0047bc16  0d00020000           or eax, 0x200
// 0047bc1b  0fb65604             movzx edx, byte ptr [esi + 4]
// 0047bc1f  6a00                 push 0
// 0047bc21  6a01                 push 1
// 0047bc23  8d4e10               lea ecx, [esi + 0x10]
// 0047bc26  51                   push ecx
// 0047bc27  6878d68b00           push 0x8bd678
// 0047bc2c  52                   push edx
// 0047bc2d  57                   push edi
// 0047bc2e  89460c               mov dword ptr [esi + 0xc], eax
// 0047bc31  ff1540ed7700         call dword ptr [0x77ed40]
// 0047bc37  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
