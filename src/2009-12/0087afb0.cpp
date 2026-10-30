// roc 2009-12 0087afb0  unit: CXTPControlGallery  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087afb0
//
// 0087afb0  83ec20               sub esp, 0x20
// 0087afb3  57                   push edi
// 0087afb4  8bf9                 mov edi, ecx
// 0087afb6  e825d2ffff           call 0x8781e0
// 0087afbb  85c0                 test eax, eax
// 0087afbd  750a                 jne 0x87afc9
// 0087afbf  83c8ff               or eax, 0xffffffff
// 0087afc2  5f                   pop edi
// 0087afc3  83c420               add esp, 0x20
// 0087afc6  c20800               ret 8
// 0087afc9  53                   push ebx
// 0087afca  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0087afce  56                   push esi
// 0087afcf  8b742434             mov esi, dword ptr [esp + 0x34]
// 0087afd3  83fbff               cmp ebx, -1
// 0087afd6  740b                 je 0x87afe3
// 0087afd8  8bcf                 mov ecx, edi
// 0087afda  e801d2ffff           call 0x8781e0
// 0087afdf  3bd8                 cmp ebx, eax
// 0087afe1  7c10                 jl 0x87aff3
// 0087afe3  56                   push esi
// 0087afe4  6aff                 push -1
// 0087afe6  8bcf                 mov ecx, edi
// 0087afe8  e8e3d5ffff           call 0x8785d0
// 0087afed  8bd8                 mov ebx, eax
// 0087afef  895c2430             mov dword ptr [esp + 0x30], ebx
// 0087aff3  85db                 test ebx, ebx
// 0087aff5  0f8c4b010000         jl 0x87b146
// 0087affb  3b9f54020000         cmp ebx, dword ptr [edi + 0x254]
// 0087b001  0f8d3f010000         jge 0x87b146
// 0087b007  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0087b00d  8d045b               lea eax, [ebx + ebx*2]
// 0087b010  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 0087b013  8d04c1               lea eax, [ecx + eax*8]
// 0087b016  8b4804               mov ecx, dword ptr [eax + 4]
// 0087b019  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087b01d  55                   push ebp
// 0087b01e  89542410             mov dword ptr [esp + 0x10], edx
// 0087b022  8b5008               mov edx, dword ptr [eax + 8]
// 0087b025  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087b028  8d4c2420             lea ecx, [esp + 0x20]
// 0087b02c  51                   push ecx
// 0087b02d  8bcf                 mov ecx, edi
// 0087b02f  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087b033  89442420             mov dword ptr [esp + 0x20], eax
// 0087b037  e814d4ffff           call 0x878450
// 0087b03c  85f6                 test esi, esi
// 0087b03e  0f8d81000000         jge 0x87b0c5
// 0087b044  8d4bff               lea ecx, [ebx - 1]
// 0087b047  85c9                 test ecx, ecx
// 0087b049  0f8ceb000000         jl 0x87b13a
// 0087b04f  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087b053  8d1449               lea edx, [ecx + ecx*2]
// 0087b056  03d2                 add edx, edx
// 0087b058  03d2                 add edx, edx
// 0087b05a  03d2                 add edx, edx
// 0087b05c  85c9                 test ecx, ecx
// 0087b05e  7c60                 jl 0x87b0c0
// 0087b060  3b8f54020000         cmp ecx, dword ptr [edi + 0x254]
// 0087b066  7d58                 jge 0x87b0c0
// 0087b068  8b8750020000         mov eax, dword ptr [edi + 0x250]
// 0087b06e  8b6c1010             mov ebp, dword ptr [eax + edx + 0x10]
// 0087b072  03c2                 add eax, edx
// 0087b074  837d4800             cmp dword ptr [ebp + 0x48], 0
// 0087b078  751d                 jne 0x87b097
// 0087b07a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0087b07e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087b082  2b5804               sub ebx, dword ptr [eax + 4]
// 0087b085  2bee                 sub ebp, esi
// 0087b087  3bdd                 cmp ebx, ebp
// 0087b089  7d08                 jge 0x87b093
// 0087b08b  8bd9                 mov ebx, ecx
// 0087b08d  895c2434             mov dword ptr [esp + 0x34], ebx
// 0087b091  eb04                 jmp 0x87b097
// 0087b093  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087b097  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087b09b  2b6804               sub ebp, dword ptr [eax + 4]
// 0087b09e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087b0a2  2bc6                 sub eax, esi
// 0087b0a4  3be8                 cmp ebp, eax
// 0087b0a6  0f8f8e000000         jg 0x87b13a
// 0087b0ac  49                   dec ecx
// 0087b0ad  83ea18               sub edx, 0x18
// 0087b0b0  85c9                 test ecx, ecx
// 0087b0b2  7dac                 jge 0x87b060
// 0087b0b4  5d                   pop ebp
// 0087b0b5  5e                   pop esi
// 0087b0b6  8bc3                 mov eax, ebx
// 0087b0b8  5b                   pop ebx
// 0087b0b9  5f                   pop edi
// 0087b0ba  83c420               add esp, 0x20
// 0087b0bd  c20800               ret 8
// 0087b0c0  e8478af7ff           call 0x7f3b0c
// 0087b0c5  8bcf                 mov ecx, edi
// 0087b0c7  8d5301               lea edx, [ebx + 1]
// 0087b0ca  e811d1ffff           call 0x8781e0
// 0087b0cf  3bd0                 cmp edx, eax
// 0087b0d1  89442438             mov dword ptr [esp + 0x38], eax
// 0087b0d5  7d63                 jge 0x87b13a
// 0087b0d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087b0db  8d3452               lea esi, [edx + edx*2]
// 0087b0de  03f6                 add esi, esi
// 0087b0e0  03f6                 add esi, esi
// 0087b0e2  03f6                 add esi, esi
// 0087b0e4  85f6                 test esi, esi
// 0087b0e6  7cd8                 jl 0x87b0c0
// 0087b0e8  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 0087b0ee  7dd0                 jge 0x87b0c0
// 0087b0f0  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0087b0f6  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 0087b0fa  03ce                 add ecx, esi
// 0087b0fc  837d4800             cmp dword ptr [ebp + 0x48], 0
// 0087b100  751d                 jne 0x87b11f
// 0087b102  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0087b105  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087b109  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0087b10d  2be8                 sub ebp, eax
// 0087b10f  3bdd                 cmp ebx, ebp
// 0087b111  7d08                 jge 0x87b11b
// 0087b113  8bda                 mov ebx, edx
// 0087b115  895c2434             mov dword ptr [esp + 0x34], ebx
// 0087b119  eb04                 jmp 0x87b11f
// 0087b11b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087b11f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0087b122  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087b126  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0087b12a  2be8                 sub ebp, eax
// 0087b12c  3bcd                 cmp ecx, ebp
// 0087b12e  7f0a                 jg 0x87b13a
// 0087b130  42                   inc edx
// 0087b131  83c618               add esi, 0x18
// 0087b134  3b542438             cmp edx, dword ptr [esp + 0x38]
// 0087b138  7caa                 jl 0x87b0e4
// 0087b13a  5d                   pop ebp
// 0087b13b  5e                   pop esi
// 0087b13c  8bc3                 mov eax, ebx
// 0087b13e  5b                   pop ebx
// 0087b13f  5f                   pop edi
// 0087b140  83c420               add esp, 0x20
// 0087b143  c20800               ret 8
// 0087b146  e8c189f7ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetNextInPage@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp