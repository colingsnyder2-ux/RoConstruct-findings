// roc 2012-06 009fd870  unit: CXTPControlGallery  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fd870
//
// 009fd870  83ec20               sub esp, 0x20
// 009fd873  57                   push edi
// 009fd874  8bf9                 mov edi, ecx
// 009fd876  e805d2ffff           call 0x9faa80
// 009fd87b  85c0                 test eax, eax
// 009fd87d  750a                 jne 0x9fd889
// 009fd87f  83c8ff               or eax, 0xffffffff
// 009fd882  5f                   pop edi
// 009fd883  83c420               add esp, 0x20
// 009fd886  c20800               ret 8
// 009fd889  53                   push ebx
// 009fd88a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 009fd88e  56                   push esi
// 009fd88f  8b742434             mov esi, dword ptr [esp + 0x34]
// 009fd893  83fbff               cmp ebx, -1
// 009fd896  740b                 je 0x9fd8a3
// 009fd898  8bcf                 mov ecx, edi
// 009fd89a  e8e1d1ffff           call 0x9faa80
// 009fd89f  3bd8                 cmp ebx, eax
// 009fd8a1  7c10                 jl 0x9fd8b3
// 009fd8a3  56                   push esi
// 009fd8a4  6aff                 push -1
// 009fd8a6  8bcf                 mov ecx, edi
// 009fd8a8  e8c3d5ffff           call 0x9fae70
// 009fd8ad  8bd8                 mov ebx, eax
// 009fd8af  895c2430             mov dword ptr [esp + 0x30], ebx
// 009fd8b3  85db                 test ebx, ebx
// 009fd8b5  0f8c4b010000         jl 0x9fda06
// 009fd8bb  3b9f54020000         cmp ebx, dword ptr [edi + 0x254]
// 009fd8c1  0f8d3f010000         jge 0x9fda06
// 009fd8c7  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 009fd8cd  8d045b               lea eax, [ebx + ebx*2]
// 009fd8d0  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 009fd8d3  8d04c1               lea eax, [ecx + eax*8]
// 009fd8d6  8b4804               mov ecx, dword ptr [eax + 4]
// 009fd8d9  894c2410             mov dword ptr [esp + 0x10], ecx
// 009fd8dd  55                   push ebp
// 009fd8de  89542410             mov dword ptr [esp + 0x10], edx
// 009fd8e2  8b5008               mov edx, dword ptr [eax + 8]
// 009fd8e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 009fd8e8  8d4c2420             lea ecx, [esp + 0x20]
// 009fd8ec  51                   push ecx
// 009fd8ed  8bcf                 mov ecx, edi
// 009fd8ef  8954241c             mov dword ptr [esp + 0x1c], edx
// 009fd8f3  89442420             mov dword ptr [esp + 0x20], eax
// 009fd8f7  e8f4d3ffff           call 0x9facf0
// 009fd8fc  85f6                 test esi, esi
// 009fd8fe  0f8d81000000         jge 0x9fd985
// 009fd904  8d4bff               lea ecx, [ebx - 1]
// 009fd907  85c9                 test ecx, ecx
// 009fd909  0f8ceb000000         jl 0x9fd9fa
// 009fd90f  8b742424             mov esi, dword ptr [esp + 0x24]
// 009fd913  8d1449               lea edx, [ecx + ecx*2]
// 009fd916  03d2                 add edx, edx
// 009fd918  03d2                 add edx, edx
// 009fd91a  03d2                 add edx, edx
// 009fd91c  85c9                 test ecx, ecx
// 009fd91e  7c60                 jl 0x9fd980
// 009fd920  3b8f54020000         cmp ecx, dword ptr [edi + 0x254]
// 009fd926  7d58                 jge 0x9fd980
// 009fd928  8b8750020000         mov eax, dword ptr [edi + 0x250]
// 009fd92e  8b6c1010             mov ebp, dword ptr [eax + edx + 0x10]
// 009fd932  03c2                 add eax, edx
// 009fd934  837d4800             cmp dword ptr [ebp + 0x48], 0
// 009fd938  751d                 jne 0x9fd957
// 009fd93a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009fd93e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009fd942  2b5804               sub ebx, dword ptr [eax + 4]
// 009fd945  2bee                 sub ebp, esi
// 009fd947  3bdd                 cmp ebx, ebp
// 009fd949  7d08                 jge 0x9fd953
// 009fd94b  8bd9                 mov ebx, ecx
// 009fd94d  895c2434             mov dword ptr [esp + 0x34], ebx
// 009fd951  eb04                 jmp 0x9fd957
// 009fd953  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009fd957  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009fd95b  2b6804               sub ebp, dword ptr [eax + 4]
// 009fd95e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009fd962  2bc6                 sub eax, esi
// 009fd964  3be8                 cmp ebp, eax
// 009fd966  0f8f8e000000         jg 0x9fd9fa
// 009fd96c  49                   dec ecx
// 009fd96d  83ea18               sub edx, 0x18
// 009fd970  85c9                 test ecx, ecx
// 009fd972  7dac                 jge 0x9fd920
// 009fd974  5d                   pop ebp
// 009fd975  5e                   pop esi
// 009fd976  8bc3                 mov eax, ebx
// 009fd978  5b                   pop ebx
// 009fd979  5f                   pop edi
// 009fd97a  83c420               add esp, 0x20
// 009fd97d  c20800               ret 8
// 009fd980  e83b4af8ff           call 0x9823c0
// 009fd985  8bcf                 mov ecx, edi
// 009fd987  8d5301               lea edx, [ebx + 1]
// 009fd98a  e8f1d0ffff           call 0x9faa80
// 009fd98f  3bd0                 cmp edx, eax
// 009fd991  89442438             mov dword ptr [esp + 0x38], eax
// 009fd995  7d63                 jge 0x9fd9fa
// 009fd997  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fd99b  8d3452               lea esi, [edx + edx*2]
// 009fd99e  03f6                 add esi, esi
// 009fd9a0  03f6                 add esi, esi
// 009fd9a2  03f6                 add esi, esi
// 009fd9a4  85f6                 test esi, esi
// 009fd9a6  7cd8                 jl 0x9fd980
// 009fd9a8  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 009fd9ae  7dd0                 jge 0x9fd980
// 009fd9b0  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 009fd9b6  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 009fd9ba  03ce                 add ecx, esi
// 009fd9bc  837d4800             cmp dword ptr [ebp + 0x48], 0
// 009fd9c0  751d                 jne 0x9fd9df
// 009fd9c2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 009fd9c5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009fd9c9  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 009fd9cd  2be8                 sub ebp, eax
// 009fd9cf  3bdd                 cmp ebx, ebp
// 009fd9d1  7d08                 jge 0x9fd9db
// 009fd9d3  8bda                 mov ebx, edx
// 009fd9d5  895c2434             mov dword ptr [esp + 0x34], ebx
// 009fd9d9  eb04                 jmp 0x9fd9df
// 009fd9db  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009fd9df  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 009fd9e2  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009fd9e6  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 009fd9ea  2be8                 sub ebp, eax
// 009fd9ec  3bcd                 cmp ecx, ebp
// 009fd9ee  7f0a                 jg 0x9fd9fa
// 009fd9f0  42                   inc edx
// 009fd9f1  83c618               add esi, 0x18
// 009fd9f4  3b542438             cmp edx, dword ptr [esp + 0x38]
// 009fd9f8  7caa                 jl 0x9fd9a4
// 009fd9fa  5d                   pop ebp
// 009fd9fb  5e                   pop esi
// 009fd9fc  8bc3                 mov eax, ebx
// 009fd9fe  5b                   pop ebx
// 009fd9ff  5f                   pop edi
// 009fda00  83c420               add esp, 0x20
// 009fda03  c20800               ret 8
// 009fda06  e8b549f8ff           call 0x9823c0
// copied from an identical function in another client (function ?GetNextInPage@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp