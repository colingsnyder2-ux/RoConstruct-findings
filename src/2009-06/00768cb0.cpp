// roc 2009-06 00768cb0  unit: CXTPPopupBar  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00768cb0
//
// 00768cb0  83ec38               sub esp, 0x38
// 00768cb3  55                   push ebp
// 00768cb4  56                   push esi
// 00768cb5  57                   push edi
// 00768cb6  8bf9                 mov edi, ecx
// 00768cb8  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 00768cbe  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 00768cc4  8b97bc010000         mov edx, dword ptr [edi + 0x1bc]
// 00768cca  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00768cce  8d4c2418             lea ecx, [esp + 0x18]
// 00768cd2  89442418             mov dword ptr [esp + 0x18], eax
// 00768cd6  8b87c0010000         mov eax, dword ptr [edi + 0x1c0]
// 00768cdc  51                   push ecx
// 00768cdd  33ed                 xor ebp, ebp
// 00768cdf  8bcf                 mov ecx, edi
// 00768ce1  89afec010000         mov dword ptr [edi + 0x1ec], ebp
// 00768ce7  89542424             mov dword ptr [esp + 0x24], edx
// 00768ceb  89442428             mov dword ptr [esp + 0x28], eax
// 00768cef  e8de02fbff           call 0x718fd2
// 00768cf4  8b353cee8900         mov esi, dword ptr [0x89ee3c]
// 00768cfa  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00768d02  ffd6                 call esi
// 00768d04  85c0                 test eax, eax
// 00768d06  0f85a3010000         jne 0x768eaf
// 00768d0c  8b5720               mov edx, dword ptr [edi + 0x20]
// 00768d0f  53                   push ebx
// 00768d10  52                   push edx
// 00768d11  ff1538ee8900         call dword ptr [0x89ee38]
// 00768d17  50                   push eax
// 00768d18  e8e5fffaff           call 0x718d02
// 00768d1d  33db                 xor ebx, ebx
// 00768d1f  ffd6                 call esi
// 00768d21  50                   push eax
// 00768d22  e8dbfffaff           call 0x718d02
// 00768d27  3bc7                 cmp eax, edi
// 00768d29  0f8562010000         jne 0x768e91
// 00768d2f  8b3540ee8900         mov esi, dword ptr [0x89ee40]
// 00768d35  6a00                 push 0
// 00768d37  6a0f                 push 0xf
// 00768d39  6a0f                 push 0xf
// 00768d3b  6a00                 push 0
// 00768d3d  8d44243c             lea eax, [esp + 0x3c]
// 00768d41  50                   push eax
// 00768d42  ffd6                 call esi
// 00768d44  85c0                 test eax, eax
// 00768d46  7433                 je 0x768d7b
// 00768d48  6a0f                 push 0xf
// 00768d4a  6a0f                 push 0xf
// 00768d4c  6a00                 push 0
// 00768d4e  8d4c2438             lea ecx, [esp + 0x38]
// 00768d52  51                   push ecx
// 00768d53  ff15d8ee8900         call dword ptr [0x89eed8]
// 00768d59  85c0                 test eax, eax
// 00768d5b  741e                 je 0x768d7b
// 00768d5d  8d54242c             lea edx, [esp + 0x2c]
// 00768d61  52                   push edx
// 00768d62  ff154ced8900         call dword ptr [0x89ed4c]
// 00768d68  6a00                 push 0
// 00768d6a  6a0f                 push 0xf
// 00768d6c  6a0f                 push 0xf
// 00768d6e  6a00                 push 0
// 00768d70  8d44243c             lea eax, [esp + 0x3c]
// 00768d74  50                   push eax
// 00768d75  ffd6                 call esi
// 00768d77  85c0                 test eax, eax
// 00768d79  75cd                 jne 0x768d48
// 00768d7b  6a00                 push 0
// 00768d7d  6a00                 push 0
// 00768d7f  6a00                 push 0
// 00768d81  8d4c2438             lea ecx, [esp + 0x38]
// 00768d85  51                   push ecx
// 00768d86  ff15d8ee8900         call dword ptr [0x89eed8]
// 00768d8c  85c0                 test eax, eax
// 00768d8e  0f84f3000000         je 0x768e87
// 00768d94  8b442430             mov eax, dword ptr [esp + 0x30]
// 00768d98  3d02020000           cmp eax, 0x202
// 00768d9d  0f84ee000000         je 0x768e91
// 00768da3  3d00020000           cmp eax, 0x200
// 00768da8  0f85a8000000         jne 0x768e56
// 00768dae  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00768db2  8b542444             mov edx, dword ptr [esp + 0x44]
// 00768db6  3bd9                 cmp ebx, ecx
// 00768db8  7508                 jne 0x768dc2
// 00768dba  3bea                 cmp ebp, edx
// 00768dbc  0f84a4000000         je 0x768e66
// 00768dc2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00768dc6  83c00a               add eax, 0xa
// 00768dc9  3bc8                 cmp ecx, eax
// 00768dcb  8bea                 mov ebp, edx
// 00768dcd  8bd9                 mov ebx, ecx
// 00768dcf  896c2418             mov dword ptr [esp + 0x18], ebp
// 00768dd3  7f28                 jg 0x768dfd
// 00768dd5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00768dd9  83c0f6               add eax, -0xa
// 00768ddc  3bc8                 cmp ecx, eax
// 00768dde  7c1d                 jl 0x768dfd
// 00768de0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00768de4  83c00a               add eax, 0xa
// 00768de7  3bd0                 cmp edx, eax
// 00768de9  7f12                 jg 0x768dfd
// 00768deb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00768def  83c0f6               add eax, -0xa
// 00768df2  3bd0                 cmp edx, eax
// 00768df4  7c07                 jl 0x768dfd
// 00768df6  b801000000           mov eax, 1
// 00768dfb  eb02                 jmp 0x768dff
// 00768dfd  33c0                 xor eax, eax
// 00768dff  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00768e03  7414                 je 0x768e19
// 00768e05  52                   push edx
// 00768e06  51                   push ecx
// 00768e07  50                   push eax
// 00768e08  8bcf                 mov ecx, edi
// 00768e0a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00768e0e  e81dfaffff           call 0x768830
// 00768e13  8b3540ee8900         mov esi, dword ptr [0x89ee40]
// 00768e19  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 00768e1f  85c9                 test ecx, ecx
// 00768e21  744e                 je 0x768e71
// 00768e23  8bb7e4010000         mov esi, dword ptr [edi + 0x1e4]
// 00768e29  8bc6                 mov eax, esi
// 00768e2b  99                   cdq 
// 00768e2c  2bc2                 sub eax, edx
// 00768e2e  8bd0                 mov edx, eax
// 00768e30  d1fa                 sar edx, 1
// 00768e32  8bc3                 mov eax, ebx
// 00768e34  2bc2                 sub eax, edx
// 00768e36  6a01                 push 1
// 00768e38  8d55f6               lea edx, [ebp - 0xa]
// 00768e3b  8bafe8010000         mov ebp, dword ptr [edi + 0x1e8]
// 00768e41  55                   push ebp
// 00768e42  56                   push esi
// 00768e43  52                   push edx
// 00768e44  50                   push eax
// 00768e45  e8c0fffaff           call 0x718e0a
// 00768e4a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00768e4e  8b3540ee8900         mov esi, dword ptr [0x89ee40]
// 00768e54  eb1b                 jmp 0x768e71
// 00768e56  3d00010000           cmp eax, 0x100
// 00768e5b  7509                 jne 0x768e66
// 00768e5d  837c24341b           cmp dword ptr [esp + 0x34], 0x1b
// 00768e62  742d                 je 0x768e91
// 00768e64  eb0b                 jmp 0x768e71
// 00768e66  8d44242c             lea eax, [esp + 0x2c]
// 00768e6a  50                   push eax
// 00768e6b  ff154ced8900         call dword ptr [0x89ed4c]
// 00768e71  ff153cee8900         call dword ptr [0x89ee3c]
// 00768e77  50                   push eax
// 00768e78  e885fefaff           call 0x718d02
// 00768e7d  3bc7                 cmp eax, edi
// 00768e7f  0f84b0feffff         je 0x768d35
// 00768e85  eb0a                 jmp 0x768e91
// 00768e87  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00768e8b  51                   push ecx
// 00768e8c  e8350afbff           call 0x7198c6
// 00768e91  ff1544ee8900         call dword ptr [0x89ee44]
// 00768e97  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 00768e9e  5b                   pop ebx
// 00768e9f  740e                 je 0x768eaf
// 00768ea1  8bcf                 mov ecx, edi
// 00768ea3  e8e844fcff           call 0x72d390
// 00768ea8  8bc8                 mov ecx, eax
// 00768eaa  e88123fcff           call 0x72b230
// 00768eaf  5f                   pop edi
// 00768eb0  5e                   pop esi
// 00768eb1  5d                   pop ebp
// 00768eb2  83c438               add esp, 0x38
// 00768eb5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?TrackTearOff@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
