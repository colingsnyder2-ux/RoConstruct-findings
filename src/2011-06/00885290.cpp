// roc 2011-06 00885290  unit: CXTPControlGallery  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00885290
//
// 00885290  83ec20               sub esp, 0x20
// 00885293  57                   push edi
// 00885294  8bf9                 mov edi, ecx
// 00885296  e8d5d1ffff           call 0x882470
// 0088529b  85c0                 test eax, eax
// 0088529d  750a                 jne 0x8852a9
// 0088529f  83c8ff               or eax, 0xffffffff
// 008852a2  5f                   pop edi
// 008852a3  83c420               add esp, 0x20
// 008852a6  c20800               ret 8
// 008852a9  53                   push ebx
// 008852aa  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008852ae  56                   push esi
// 008852af  8b742434             mov esi, dword ptr [esp + 0x34]
// 008852b3  83fbff               cmp ebx, -1
// 008852b6  740b                 je 0x8852c3
// 008852b8  8bcf                 mov ecx, edi
// 008852ba  e8b1d1ffff           call 0x882470
// 008852bf  3bd8                 cmp ebx, eax
// 008852c1  7c10                 jl 0x8852d3
// 008852c3  56                   push esi
// 008852c4  6aff                 push -1
// 008852c6  8bcf                 mov ecx, edi
// 008852c8  e893d5ffff           call 0x882860
// 008852cd  8bd8                 mov ebx, eax
// 008852cf  895c2430             mov dword ptr [esp + 0x30], ebx
// 008852d3  85db                 test ebx, ebx
// 008852d5  0f8c4b010000         jl 0x885426
// 008852db  3b9f54020000         cmp ebx, dword ptr [edi + 0x254]
// 008852e1  0f8d3f010000         jge 0x885426
// 008852e7  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 008852ed  8d045b               lea eax, [ebx + ebx*2]
// 008852f0  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 008852f3  8d04c1               lea eax, [ecx + eax*8]
// 008852f6  8b4804               mov ecx, dword ptr [eax + 4]
// 008852f9  894c2410             mov dword ptr [esp + 0x10], ecx
// 008852fd  55                   push ebp
// 008852fe  89542410             mov dword ptr [esp + 0x10], edx
// 00885302  8b5008               mov edx, dword ptr [eax + 8]
// 00885305  8b400c               mov eax, dword ptr [eax + 0xc]
// 00885308  8d4c2420             lea ecx, [esp + 0x20]
// 0088530c  51                   push ecx
// 0088530d  8bcf                 mov ecx, edi
// 0088530f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00885313  89442420             mov dword ptr [esp + 0x20], eax
// 00885317  e8c4d3ffff           call 0x8826e0
// 0088531c  85f6                 test esi, esi
// 0088531e  0f8d81000000         jge 0x8853a5
// 00885324  8d4bff               lea ecx, [ebx - 1]
// 00885327  85c9                 test ecx, ecx
// 00885329  0f8ceb000000         jl 0x88541a
// 0088532f  8b742424             mov esi, dword ptr [esp + 0x24]
// 00885333  8d1449               lea edx, [ecx + ecx*2]
// 00885336  03d2                 add edx, edx
// 00885338  03d2                 add edx, edx
// 0088533a  03d2                 add edx, edx
// 0088533c  85c9                 test ecx, ecx
// 0088533e  7c60                 jl 0x8853a0
// 00885340  3b8f54020000         cmp ecx, dword ptr [edi + 0x254]
// 00885346  7d58                 jge 0x8853a0
// 00885348  8b8750020000         mov eax, dword ptr [edi + 0x250]
// 0088534e  8b6c1010             mov ebp, dword ptr [eax + edx + 0x10]
// 00885352  03c2                 add eax, edx
// 00885354  837d4800             cmp dword ptr [ebp + 0x48], 0
// 00885358  751d                 jne 0x885377
// 0088535a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0088535e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00885362  2b5804               sub ebx, dword ptr [eax + 4]
// 00885365  2bee                 sub ebp, esi
// 00885367  3bdd                 cmp ebx, ebp
// 00885369  7d08                 jge 0x885373
// 0088536b  8bd9                 mov ebx, ecx
// 0088536d  895c2434             mov dword ptr [esp + 0x34], ebx
// 00885371  eb04                 jmp 0x885377
// 00885373  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00885377  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0088537b  2b6804               sub ebp, dword ptr [eax + 4]
// 0088537e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00885382  2bc6                 sub eax, esi
// 00885384  3be8                 cmp ebp, eax
// 00885386  0f8f8e000000         jg 0x88541a
// 0088538c  49                   dec ecx
// 0088538d  83ea18               sub edx, 0x18
// 00885390  85c9                 test ecx, ecx
// 00885392  7dac                 jge 0x885340
// 00885394  5d                   pop ebp
// 00885395  5e                   pop esi
// 00885396  8bc3                 mov eax, ebx
// 00885398  5b                   pop ebx
// 00885399  5f                   pop edi
// 0088539a  83c420               add esp, 0x20
// 0088539d  c20800               ret 8
// 008853a0  e8654ff8ff           call 0x80a30a
// 008853a5  8bcf                 mov ecx, edi
// 008853a7  8d5301               lea edx, [ebx + 1]
// 008853aa  e8c1d0ffff           call 0x882470
// 008853af  3bd0                 cmp edx, eax
// 008853b1  89442438             mov dword ptr [esp + 0x38], eax
// 008853b5  7d63                 jge 0x88541a
// 008853b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 008853bb  8d3452               lea esi, [edx + edx*2]
// 008853be  03f6                 add esi, esi
// 008853c0  03f6                 add esi, esi
// 008853c2  03f6                 add esi, esi
// 008853c4  85f6                 test esi, esi
// 008853c6  7cd8                 jl 0x8853a0
// 008853c8  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 008853ce  7dd0                 jge 0x8853a0
// 008853d0  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 008853d6  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 008853da  03ce                 add ecx, esi
// 008853dc  837d4800             cmp dword ptr [ebp + 0x48], 0
// 008853e0  751d                 jne 0x8853ff
// 008853e2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 008853e5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008853e9  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 008853ed  2be8                 sub ebp, eax
// 008853ef  3bdd                 cmp ebx, ebp
// 008853f1  7d08                 jge 0x8853fb
// 008853f3  8bda                 mov ebx, edx
// 008853f5  895c2434             mov dword ptr [esp + 0x34], ebx
// 008853f9  eb04                 jmp 0x8853ff
// 008853fb  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008853ff  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00885402  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00885406  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0088540a  2be8                 sub ebp, eax
// 0088540c  3bcd                 cmp ecx, ebp
// 0088540e  7f0a                 jg 0x88541a
// 00885410  42                   inc edx
// 00885411  83c618               add esi, 0x18
// 00885414  3b542438             cmp edx, dword ptr [esp + 0x38]
// 00885418  7caa                 jl 0x8853c4
// 0088541a  5d                   pop ebp
// 0088541b  5e                   pop esi
// 0088541c  8bc3                 mov eax, ebx
// 0088541e  5b                   pop ebx
// 0088541f  5f                   pop edi
// 00885420  83c420               add esp, 0x20
// 00885423  c20800               ret 8
// 00885426  e8df4ef8ff           call 0x80a30a
// copied from an identical function in another client (function ?GetNextInPage@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp