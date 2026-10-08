// roc 2007-03 0047a4e0  unit: seg_00470000  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a4e0
//
// 0047a4e0  c1f818               sar eax, 0x18
// 0047a4e3  8d4fbf               lea ecx, [edi - 0x41]
// 0047a4e6  2401                 and al, 1
// 0047a4e8  83f919               cmp ecx, 0x19
// 0047a4eb  7708                 ja 0x47a4f5
// 0047a4ed  8d5720               lea edx, [edi + 0x20]
// 0047a4f0  895608               mov dword ptr [esi + 8], edx
// 0047a4f3  eb51                 jmp 0x47a546
// 0047a4f5  83ff10               cmp edi, 0x10
// 0047a4f8  750b                 jne 0x47a505
// 0047a4fa  f6d8                 neg al
// 0047a4fc  1bc0                 sbb eax, eax
// 0047a4fe  0530010000           add eax, 0x130
// 0047a503  eb3e                 jmp 0x47a543
// 0047a505  83ff11               cmp edi, 0x11
// 0047a508  750b                 jne 0x47a515
// 0047a50a  f6d8                 neg al
// 0047a50c  1bc0                 sbb eax, eax
// 0047a50e  0532010000           add eax, 0x132
// 0047a513  eb2e                 jmp 0x47a543
// 0047a515  83ff12               cmp edi, 0x12
// 0047a518  750b                 jne 0x47a525
// 0047a51a  f6d8                 neg al
// 0047a51c  1bc0                 sbb eax, eax
// 0047a51e  0534010000           add eax, 0x134
// 0047a523  eb1e                 jmp 0x47a543
// 0047a525  85ff                 test edi, edi
// 0047a527  7f04                 jg 0x47a52d
// 0047a529  33c0                 xor eax, eax
// 0047a52b  eb0f                 jmp 0x47a53c
// 0047a52d  81ff43010000         cmp edi, 0x143
// 0047a533  b843010000           mov eax, 0x143
// 0047a538  7d02                 jge 0x47a53c
// 0047a53a  8bc7                 mov eax, edi
// 0047a53c  8b048520788b00       mov eax, dword ptr [eax*4 + 0x8b7820]
// 0047a543  894608               mov dword ptr [esi + 8], eax
// 0047a546  6a00                 push 0
// 0047a548  57                   push edi
// 0047a549  ff15a8ed7700         call dword ptr [0x77eda8]
// 0047a54f  68387d8b00           push 0x8b7d38
// 0047a554  884604               mov byte ptr [esi + 4], al
// 0047a557  ff15f4ed7700         call dword ptr [0x77edf4]
// 0047a55d  b980000000           mov ecx, 0x80
// 0047a562  33c0                 xor eax, eax
// 0047a564  840dd87d8b00         test byte ptr [0x8b7dd8], cl
// 0047a56a  7405                 je 0x47a571
// 0047a56c  b801000000           mov eax, 1
// 0047a571  840dd97d8b00         test byte ptr [0x8b7dd9], cl
// 0047a577  7403                 je 0x47a57c
// 0047a579  83c802               or eax, 2
// 0047a57c  840dda7d8b00         test byte ptr [0x8b7dda], cl
// 0047a582  7403                 je 0x47a587
// 0047a584  83c840               or eax, 0x40
// 0047a587  840ddb7d8b00         test byte ptr [0x8b7ddb], cl
// 0047a58d  7402                 je 0x47a591
// 0047a58f  0bc1                 or eax, ecx
// 0047a591  840ddc7d8b00         test byte ptr [0x8b7ddc], cl
// 0047a597  7405                 je 0x47a59e
// 0047a599  0d00010000           or eax, 0x100
// 0047a59e  840ddd7d8b00         test byte ptr [0x8b7ddd], cl
// 0047a5a4  7405                 je 0x47a5ab
// 0047a5a6  0d00020000           or eax, 0x200
// 0047a5ab  0fb65604             movzx edx, byte ptr [esi + 4]
// 0047a5af  6a00                 push 0
// 0047a5b1  6a01                 push 1
// 0047a5b3  8d4e10               lea ecx, [esi + 0x10]
// 0047a5b6  51                   push ecx
// 0047a5b7  68387d8b00           push 0x8b7d38
// 0047a5bc  52                   push edx
// 0047a5bd  57                   push edi
// 0047a5be  89460c               mov dword ptr [esi + 0xc], eax
// 0047a5c1  ff15f0ed7700         call dword ptr [0x77edf0]
// 0047a5c7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
