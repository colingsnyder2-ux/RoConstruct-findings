// roc 2009-12 0087da00  unit: XTPPaintThemes::CXTPDefaultTheme  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087da00
//
// 0087da00  83ec34               sub esp, 0x34
// 0087da03  53                   push ebx
// 0087da04  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0087da08  8b03                 mov eax, dword ptr [ebx]
// 0087da0a  8b5078               mov edx, dword ptr [eax + 0x78]
// 0087da0d  55                   push ebp
// 0087da0e  56                   push esi
// 0087da0f  8bf1                 mov esi, ecx
// 0087da11  57                   push edi
// 0087da12  8bcb                 mov ecx, ebx
// 0087da14  ffd2                 call edx
// 0087da16  89442414             mov dword ptr [esp + 0x14], eax
// 0087da1a  8b03                 mov eax, dword ptr [ebx]
// 0087da1c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0087da1f  8bcb                 mov ecx, ebx
// 0087da21  ffd2                 call edx
// 0087da23  8bbb9c000000         mov edi, dword ptr [ebx + 0x9c]
// 0087da29  89442410             mov dword ptr [esp + 0x10], eax
// 0087da2d  83ffff               cmp edi, -1
// 0087da30  7511                 jne 0x87da43
// 0087da32  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0087da38  85c9                 test ecx, ecx
// 0087da3a  7407                 je 0x87da43
// 0087da3c  e86f8bf7ff           call 0x7f65b0
// 0087da41  8bf8                 mov edi, eax
// 0087da43  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 0087da49  83f9ff               cmp ecx, -1
// 0087da4c  7513                 jne 0x87da61
// 0087da4e  8b835c010000         mov eax, dword ptr [ebx + 0x15c]
// 0087da54  85c0                 test eax, eax
// 0087da56  7409                 je 0x87da61
// 0087da58  8b4038               mov eax, dword ptr [eax + 0x38]
// 0087da5b  89442418             mov dword ptr [esp + 0x18], eax
// 0087da5f  eb04                 jmp 0x87da65
// 0087da61  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087da65  8b13                 mov edx, dword ptr [ebx]
// 0087da67  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0087da6d  8bcb                 mov ecx, ebx
// 0087da6f  ffd0                 call eax
// 0087da71  8be8                 mov ebp, eax
// 0087da73  8bcb                 mov ecx, ebx
// 0087da75  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0087da79  e81282f7ff           call 0x7f5c90
// 0087da7e  83f804               cmp eax, 4
// 0087da81  0f85b2010000         jne 0x87dc39
// 0087da87  8bce                 mov ecx, esi
// 0087da89  e8b204f8ff           call 0x7fdf40
// 0087da8e  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 0087da94  8be8                 mov ebp, eax
// 0087da96  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0087da9c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087daa0  83f802               cmp eax, 2
// 0087daa3  0f84e0000000         je 0x87db89
// 0087daa9  83f803               cmp eax, 3
// 0087daac  0f84d7000000         je 0x87db89
// 0087dab2  33c9                 xor ecx, ecx
// 0087dab4  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087dab8  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0087dabc  750a                 jne 0x87dac8
// 0087dabe  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087dac2  394c244c             cmp dword ptr [esp + 0x4c], ecx
// 0087dac6  7408                 je 0x87dad0
// 0087dac8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0087dad0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087dad4  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087dad8  50                   push eax
// 0087dad9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087dadd  6a01                 push 1
// 0087dadf  6a00                 push 0
// 0087dae1  50                   push eax
// 0087dae2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087dae6  57                   push edi
// 0087dae7  50                   push eax
// 0087dae8  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087daec  50                   push eax
// 0087daed  2bcd                 sub ecx, ebp
// 0087daef  83ec10               sub esp, 0x10
// 0087daf2  8bc4                 mov eax, esp
// 0087daf4  8910                 mov dword ptr [eax], edx
// 0087daf6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0087dafd  895004               mov dword ptr [eax + 4], edx
// 0087db00  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0087db07  895008               mov dword ptr [eax + 8], edx
// 0087db0a  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 0087db0e  89480c               mov dword ptr [eax + 0xc], ecx
// 0087db11  8b06                 mov eax, dword ptr [esi]
// 0087db13  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0087db19  55                   push ebp
// 0087db1a  8bce                 mov ecx, esi
// 0087db1c  ffd2                 call edx
// 0087db1e  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087db23  7512                 jne 0x87db37
// 0087db25  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087db2a  750b                 jne 0x87db37
// 0087db2c  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0087db31  0f8432020000         je 0x87dd69
// 0087db37  85ff                 test edi, edi
// 0087db39  0f842a020000         je 0x87dd69
// 0087db3f  837c242000           cmp dword ptr [esp + 0x20], 0
// 0087db44  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 0087db4a  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 0087db50  53                   push ebx
// 0087db51  6a01                 push 1
// 0087db53  0f8493000000         je 0x87dbec
// 0087db59  ff742454             push dword ptr [esp + 0x54]
// 0087db5d  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087db61  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087db65  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087db69  6a00                 push 0
// 0087db6b  57                   push edi
// 0087db6c  6a00                 push 0
// 0087db6e  03c1                 add eax, ecx
// 0087db70  6a01                 push 1
// 0087db72  89442448             mov dword ptr [esp + 0x48], eax
// 0087db76  83ec10               sub esp, 0x10
// 0087db79  8bc4                 mov eax, esp
// 0087db7b  8908                 mov dword ptr [eax], ecx
// 0087db7d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0087db81  895004               mov dword ptr [eax + 4], edx
// 0087db84  e98c000000           jmp 0x87dc15
// 0087db89  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087db8e  b901000000           mov ecx, 1
// 0087db93  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087db97  750f                 jne 0x87dba8
// 0087db99  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0087db9e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0087dba6  7404                 je 0x87dbac
// 0087dba8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087dbac  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087dbb0  50                   push eax
// 0087dbb1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087dbb5  6a01                 push 1
// 0087dbb7  6a00                 push 0
// 0087dbb9  50                   push eax
// 0087dbba  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087dbbe  57                   push edi
// 0087dbbf  50                   push eax
// 0087dbc0  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087dbc4  50                   push eax
// 0087dbc5  8d0c2a               lea ecx, [edx + ebp]
// 0087dbc8  8b542470             mov edx, dword ptr [esp + 0x70]
// 0087dbcc  83ec10               sub esp, 0x10
// 0087dbcf  8bc4                 mov eax, esp
// 0087dbd1  8908                 mov dword ptr [eax], ecx
// 0087dbd3  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087dbda  895004               mov dword ptr [eax + 4], edx
// 0087dbdd  894808               mov dword ptr [eax + 8], ecx
// 0087dbe0  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0087dbe7  e91effffff           jmp 0x87db0a
// 0087dbec  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0087dbf0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0087dbf4  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0087dbf8  8b542458             mov edx, dword ptr [esp + 0x58]
// 0087dbfc  53                   push ebx
// 0087dbfd  6a00                 push 0
// 0087dbff  57                   push edi
// 0087dc00  6a00                 push 0
// 0087dc02  6a01                 push 1
// 0087dc04  83ec10               sub esp, 0x10
// 0087dc07  8bc4                 mov eax, esp
// 0087dc09  8910                 mov dword ptr [eax], edx
// 0087dc0b  894804               mov dword ptr [eax + 4], ecx
// 0087dc0e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087dc15  894808               mov dword ptr [eax + 8], ecx
// 0087dc18  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0087dc1f  89480c               mov dword ptr [eax + 0xc], ecx
// 0087dc22  8b06                 mov eax, dword ptr [esi]
// 0087dc24  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0087dc2a  55                   push ebp
// 0087dc2b  8bce                 mov ecx, esi
// 0087dc2d  ffd2                 call edx
// 0087dc2f  5f                   pop edi
// 0087dc30  5e                   pop esi
// 0087dc31  5d                   pop ebp
// 0087dc32  5b                   pop ebx
// 0087dc33  83c434               add esp, 0x34
// 0087dc36  c21800               ret 0x18
// 0087dc39  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087dc3e  750c                 jne 0x87dc4c
// 0087dc40  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0087dc48  85ed                 test ebp, ebp
// 0087dc4a  7408                 je 0x87dc54
// 0087dc4c  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0087dc54  8b442458             mov eax, dword ptr [esp + 0x58]
// 0087dc58  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087dc5c  8b542454             mov edx, dword ptr [esp + 0x54]
// 0087dc60  83c0f4               add eax, -0xc
// 0087dc63  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087dc67  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0087dc6d  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0087dc73  50                   push eax
// 0087dc74  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087dc78  8b2e                 mov ebp, dword ptr [esi]
// 0087dc7a  6a01                 push 1
// 0087dc7c  6a00                 push 0
// 0087dc7e  50                   push eax
// 0087dc7f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087dc83  57                   push edi
// 0087dc84  50                   push eax
// 0087dc85  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087dc89  50                   push eax
// 0087dc8a  83ec10               sub esp, 0x10
// 0087dc8d  8bc4                 mov eax, esp
// 0087dc8f  8908                 mov dword ptr [eax], ecx
// 0087dc91  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0087dc95  895004               mov dword ptr [eax + 4], edx
// 0087dc98  8b542474             mov edx, dword ptr [esp + 0x74]
// 0087dc9c  894808               mov dword ptr [eax + 8], ecx
// 0087dc9f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0087dca6  89480c               mov dword ptr [eax + 0xc], ecx
// 0087dca9  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 0087dcaf  52                   push edx
// 0087dcb0  8bce                 mov ecx, esi
// 0087dcb2  ffd0                 call eax
// 0087dcb4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0087dcb8  8b442454             mov eax, dword ptr [esp + 0x54]
// 0087dcbc  8d51f9               lea edx, [ecx - 7]
// 0087dcbf  89542424             mov dword ptr [esp + 0x24], edx
// 0087dcc3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0087dcc7  03c2                 add eax, edx
// 0087dcc9  99                   cdq 
// 0087dcca  2bc2                 sub eax, edx
// 0087dccc  8be8                 mov ebp, eax
// 0087dcce  d1fd                 sar ebp, 1
// 0087dcd0  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087dcd5  750e                 jne 0x87dce5
// 0087dcd7  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087dcdc  7507                 jne 0x87dce5
// 0087dcde  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0087dce3  7458                 je 0x87dd3d
// 0087dce5  85ff                 test edi, edi
// 0087dce7  7454                 je 0x87dd3d
// 0087dce9  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0087dcef  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0087dcf5  50                   push eax
// 0087dcf6  8b442450             mov eax, dword ptr [esp + 0x50]
// 0087dcfa  8b16                 mov edx, dword ptr [esi]
// 0087dcfc  6a01                 push 1
// 0087dcfe  50                   push eax
// 0087dcff  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0087dd05  6a00                 push 0
// 0087dd07  57                   push edi
// 0087dd08  6a00                 push 0
// 0087dd0a  6a01                 push 1
// 0087dd0c  83c1f4               add ecx, -0xc
// 0087dd0f  83ec10               sub esp, 0x10
// 0087dd12  8bc4                 mov eax, esp
// 0087dd14  8908                 mov dword ptr [eax], ecx
// 0087dd16  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0087dd1d  894804               mov dword ptr [eax + 4], ecx
// 0087dd20  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0087dd27  894808               mov dword ptr [eax + 8], ecx
// 0087dd2a  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0087dd31  89480c               mov dword ptr [eax + 0xc], ecx
// 0087dd34  8b442474             mov eax, dword ptr [esp + 0x74]
// 0087dd38  50                   push eax
// 0087dd39  8bce                 mov ecx, esi
// 0087dd3b  ffd2                 call edx
// 0087dd3d  83ff03               cmp edi, 3
// 0087dd40  7502                 jne 0x87dd44
// 0087dd42  33ff                 xor edi, edi
// 0087dd44  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087dd48  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087dd4c  8b06                 mov eax, dword ptr [esi]
// 0087dd4e  8b80f4000000         mov eax, dword ptr [eax + 0xf4]
// 0087dd54  6a00                 push 0
// 0087dd56  57                   push edi
// 0087dd57  51                   push ecx
// 0087dd58  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087dd5c  52                   push edx
// 0087dd5d  8b542458             mov edx, dword ptr [esp + 0x58]
// 0087dd61  55                   push ebp
// 0087dd62  51                   push ecx
// 0087dd63  53                   push ebx
// 0087dd64  52                   push edx
// 0087dd65  8bce                 mov ecx, esi
// 0087dd67  ffd0                 call eax
// 0087dd69  5f                   pop edi
// 0087dd6a  5e                   pop esi
// 0087dd6b  5d                   pop ebp
// 0087dd6c  5b                   pop ebx
// 0087dd6d  83c434               add esp, 0x34
// 0087dd70  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawSplitButtonFrame@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp