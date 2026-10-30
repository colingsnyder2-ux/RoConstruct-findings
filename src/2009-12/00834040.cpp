// roc 2009-12 00834040  unit: CRobloxTreeCtrl  size: 1544 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834040
//
// 00834040  6aff                 push -1
// 00834042  68a2bf9500           push 0x95bfa2
// 00834047  64a100000000         mov eax, dword ptr fs:[0]
// 0083404d  50                   push eax
// 0083404e  81ec78010000         sub esp, 0x178
// 00834054  a10052b600           mov eax, dword ptr [0xb65200]
// 00834059  33c4                 xor eax, esp
// 0083405b  89842474010000       mov dword ptr [esp + 0x174], eax
// 00834062  53                   push ebx
// 00834063  55                   push ebp
// 00834064  56                   push esi
// 00834065  57                   push edi
// 00834066  a10052b600           mov eax, dword ptr [0xb65200]
// 0083406b  33c4                 xor eax, esp
// 0083406d  50                   push eax
// 0083406e  8d84248c010000       lea eax, [esp + 0x18c]
// 00834075  64a300000000         mov dword ptr fs:[0], eax
// 0083407b  8bb4249c010000       mov esi, dword ptr [esp + 0x19c]
// 00834082  8be9                 mov ebp, ecx
// 00834084  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00834087  8b5020               mov edx, dword ptr [eax + 0x20]
// 0083408a  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00834091  51                   push ecx
// 00834092  52                   push edx
// 00834093  ff1550cc9800         call dword ptr [0x98cc50]
// 00834099  8b4500               mov eax, dword ptr [ebp]
// 0083409c  8b5070               mov edx, dword ptr [eax + 0x70]
// 0083409f  8bcd                 mov ecx, ebp
// 008340a1  ffd2                 call edx
// 008340a3  8bd8                 mov ebx, eax
// 008340a5  8b4500               mov eax, dword ptr [ebp]
// 008340a8  8b5074               mov edx, dword ptr [eax + 0x74]
// 008340ab  8bcd                 mov ecx, ebp
// 008340ad  895c2444             mov dword ptr [esp + 0x44], ebx
// 008340b1  ffd2                 call edx
// 008340b3  33ff                 xor edi, edi
// 008340b5  89442448             mov dword ptr [esp + 0x48], eax
// 008340b9  3bf7                 cmp esi, edi
// 008340bb  7504                 jne 0x8340c1
// 008340bd  33f6                 xor esi, esi
// 008340bf  eb03                 jmp 0x8340c4
// 008340c1  8b7604               mov esi, dword ptr [esi + 4]
// 008340c4  8d8424bc000000       lea eax, [esp + 0xbc]
// 008340cb  50                   push eax
// 008340cc  56                   push esi
// 008340cd  8d4c247c             lea ecx, [esp + 0x7c]
// 008340d1  e85a720100           call 0x84b330
// 008340d6  53                   push ebx
// 008340d7  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 008340de  51                   push ecx
// 008340df  8d4c247c             lea ecx, [esp + 0x7c]
// 008340e3  89bc249c010000       mov dword ptr [esp + 0x19c], edi
// 008340ea  e80f05fcff           call 0x7f45fe
// 008340ef  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 008340f2  8b442478             mov eax, dword ptr [esp + 0x78]
// 008340f6  8b11                 mov edx, dword ptr [ecx]
// 008340f8  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 008340fe  57                   push edi
// 008340ff  50                   push eax
// 00834100  6a0f                 push 0xf
// 00834102  ffd2                 call edx
// 00834104  8d4c2474             lea ecx, [esp + 0x74]
// 00834108  39bc24a0010000       cmp dword ptr [esp + 0x1a0], edi
// 0083410f  0f84f9040000         je 0x83460e
// 00834115  e8e8230f00           call 0x926502
// 0083411a  8bcd                 mov ecx, ebp
// 0083411c  89442460             mov dword ptr [esp + 0x60], eax
// 00834120  e8fbd6ffff           call 0x831820
// 00834125  8b35c4cb9800         mov esi, dword ptr [0x98cbc4]
// 0083412b  84c0                 test al, al
// 0083412d  7424                 je 0x834153
// 0083412f  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00834132  8b4020               mov eax, dword ptr [eax + 0x20]
// 00834135  57                   push edi
// 00834136  57                   push edi
// 00834137  680f110000           push 0x110f
// 0083413c  50                   push eax
// 0083413d  ffd6                 call esi
// 0083413f  50                   push eax
// 00834140  e8e5f9fbff           call 0x7f3b2a
// 00834145  85c0                 test eax, eax
// 00834147  740a                 je 0x834153
// 00834149  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00834151  eb07                 jmp 0x83415a
// 00834153  897c2454             mov dword ptr [esp + 0x54], edi
// 00834157  897d10               mov dword ptr [ebp + 0x10], edi
// 0083415a  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0083415d  e844250f00           call 0x9266a6
// 00834162  89442450             mov dword ptr [esp + 0x50], eax
// 00834166  ff15eccb9800         call dword ptr [0x98cbec]
// 0083416c  50                   push eax
// 0083416d  e8b8f9fbff           call 0x7f3b2a
// 00834172  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00834175  3bc1                 cmp eax, ecx
// 00834177  0f94c2               sete dl
// 0083417a  8854245c             mov byte ptr [esp + 0x5c], dl
// 0083417e  e8ef220f00           call 0x926472
// 00834183  57                   push edi
// 00834184  89442450             mov dword ptr [esp + 0x50], eax
// 00834188  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0083418b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083418e  6a05                 push 5
// 00834190  680a110000           push 0x110a
// 00834195  50                   push eax
// 00834196  ffd6                 call esi
// 00834198  57                   push edi
// 00834199  8bd8                 mov ebx, eax
// 0083419b  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0083419e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008341a1  57                   push edi
// 008341a2  6810110000           push 0x1110
// 008341a7  51                   push ecx
// 008341a8  ffd6                 call esi
// 008341aa  6a00                 push 0
// 008341ac  8bf8                 mov edi, eax
// 008341ae  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008341b1  8b5020               mov edx, dword ptr [eax + 0x20]
// 008341b4  6a00                 push 0
// 008341b6  6a31                 push 0x31
// 008341b8  52                   push edx
// 008341b9  47                   inc edi
// 008341ba  ffd6                 call esi
// 008341bc  50                   push eax
// 008341bd  e8a201fcff           call 0x7f4364
// 008341c2  8b5004               mov edx, dword ptr [eax + 4]
// 008341c5  8d8c244c010000       lea ecx, [esp + 0x14c]
// 008341cc  51                   push ecx
// 008341cd  6a3c                 push 0x3c
// 008341cf  52                   push edx
// 008341d0  ff155cb19800         call dword ptr [0x98b15c]
// 008341d6  85c0                 test eax, eax
// 008341d8  7519                 jne 0x8341f3
// 008341da  8d84244c010000       lea eax, [esp + 0x14c]
// 008341e1  50                   push eax
// 008341e2  6a3c                 push 0x3c
// 008341e4  6a11                 push 0x11
// 008341e6  ff1590b19800         call dword ptr [0x98b190]
// 008341ec  50                   push eax
// 008341ed  ff155cb19800         call dword ptr [0x98b15c]
// 008341f3  85db                 test ebx, ebx
// 008341f5  0f8401040000         je 0x8345fc
// 008341fb  eb0d                 jmp 0x83420a
// 008341fd  8d4900               lea ecx, [ecx]
// 00834200  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00834204  8b35c4cb9800         mov esi, dword ptr [0x98cbc4]
// 0083420a  8bcf                 mov ecx, edi
// 0083420c  4f                   dec edi
// 0083420d  897c2458             mov dword ptr [esp + 0x58], edi
// 00834211  85c9                 test ecx, ecx
// 00834213  0f84e3030000         je 0x8345fc
// 00834219  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0083421c  6a01                 push 1
// 0083421e  8d542430             lea edx, [esp + 0x30]
// 00834222  52                   push edx
// 00834223  53                   push ebx
// 00834224  e8cdfffbff           call 0x7f41f6
// 00834229  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083422d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00834231  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00834235  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00834239  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 00834240  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 00834247  899424ac000000       mov dword ptr [esp + 0xac], edx
// 0083424e  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 00834255  8b442438             mov eax, dword ptr [esp + 0x38]
// 00834259  57                   push edi
// 0083425a  8d9424a8000000       lea edx, [esp + 0xa8]
// 00834261  898c24b0000000       mov dword ptr [esp + 0xb0], ecx
// 00834268  52                   push edx
// 00834269  8d4c247c             lea ecx, [esp + 0x7c]
// 0083426d  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00834274  e88503fcff           call 0x7f45fe
// 00834279  6a0b                 push 0xb
// 0083427b  53                   push ebx
// 0083427c  8bcd                 mov ecx, ebp
// 0083427e  e8fde1ffff           call 0x832480
// 00834283  6a00                 push 0
// 00834285  8944241c             mov dword ptr [esp + 0x1c], eax
// 00834289  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0083428c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083428f  6a08                 push 8
// 00834291  680a110000           push 0x110a
// 00834296  50                   push eax
// 00834297  ffd6                 call esi
// 00834299  85c0                 test eax, eax
// 0083429b  7422                 je 0x8342bf
// 0083429d  f644241802           test byte ptr [esp + 0x18], 2
// 008342a2  741b                 je 0x8342bf
// 008342a4  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008342a7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008342aa  6a00                 push 0
// 008342ac  6a08                 push 8
// 008342ae  680a110000           push 0x110a
// 008342b3  51                   push ecx
// 008342b4  ffd6                 call esi
// 008342b6  3bd8                 cmp ebx, eax
// 008342b8  7405                 je 0x8342bf
// 008342ba  8374241802           xor dword ptr [esp + 0x18], 2
// 008342bf  8b442418             mov eax, dword ptr [esp + 0x18]
// 008342c3  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008342c7  a80a                 test al, 0xa
// 008342c9  ba00000000           mov edx, 0
// 008342ce  0f95c2               setne dl
// 008342d1  395d14               cmp dword ptr [ebp + 0x14], ebx
// 008342d4  57                   push edi
// 008342d5  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008342d9  57                   push edi
// 008342da  56                   push esi
// 008342db  50                   push eax
// 008342dc  89542434             mov dword ptr [esp + 0x34], edx
// 008342e0  8b5500               mov edx, dword ptr [ebp]
// 008342e3  8b4238               mov eax, dword ptr [edx + 0x38]
// 008342e6  8bcd                 mov ecx, ebp
// 008342e8  0f94442427           sete byte ptr [esp + 0x27]
// 008342ed  ffd0                 call eax
// 008342ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008342f3  8b5500               mov edx, dword ptr [ebp]
// 008342f6  8b5278               mov edx, dword ptr [edx + 0x78]
// 008342f9  89442428             mov dword ptr [esp + 0x28], eax
// 008342fd  8b442448             mov eax, dword ptr [esp + 0x48]
// 00834301  50                   push eax
// 00834302  57                   push edi
// 00834303  56                   push esi
// 00834304  51                   push ecx
// 00834305  8bcd                 mov ecx, ebp
// 00834307  ffd2                 call edx
// 00834309  89442420             mov dword ptr [esp + 0x20], eax
// 0083430d  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00834310  750c                 jne 0x83431e
// 00834312  8b442444             mov eax, dword ptr [esp + 0x44]
// 00834316  89442428             mov dword ptr [esp + 0x28], eax
// 0083431a  89442420             mov dword ptr [esp + 0x20], eax
// 0083431e  6a3c                 push 0x3c
// 00834320  b90f000000           mov ecx, 0xf
// 00834325  8db42450010000       lea esi, [esp + 0x150]
// 0083432c  8dbc2414010000       lea edi, [esp + 0x114]
// 00834333  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00834335  8d8424d0000000       lea eax, [esp + 0xd0]
// 0083433c  83ceff               or esi, 0xffffffff
// 0083433f  6a00                 push 0
// 00834341  50                   push eax
// 00834342  89b42414010000       mov dword ptr [esp + 0x114], esi
// 00834349  89b42418010000       mov dword ptr [esp + 0x118], esi
// 00834350  e84f07fcff           call 0x7f4aa4
// 00834355  83c40c               add esp, 0xc
// 00834358  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0083435f  51                   push ecx
// 00834360  53                   push ebx
// 00834361  8d4d18               lea ecx, [ebp + 0x18]
// 00834364  e8f7f8ffff           call 0x833c60
// 00834369  85c0                 test eax, eax
// 0083436b  744b                 je 0x8343b8
// 0083436d  837c242400           cmp dword ptr [esp + 0x24], 0
// 00834372  7525                 jne 0x834399
// 00834374  837c245000           cmp dword ptr [esp + 0x50], 0
// 00834379  741e                 je 0x834399
// 0083437b  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 00834382  3bc6                 cmp eax, esi
// 00834384  7404                 je 0x83438a
// 00834386  89442420             mov dword ptr [esp + 0x20], eax
// 0083438a  8b84240c010000       mov eax, dword ptr [esp + 0x10c]
// 00834391  3bc6                 cmp eax, esi
// 00834393  7404                 je 0x834399
// 00834395  89442428             mov dword ptr [esp + 0x28], eax
// 00834399  80bc24e800000000     cmp byte ptr [esp + 0xe8], 0
// 008343a1  7415                 je 0x8343b8
// 008343a3  b90f000000           mov ecx, 0xf
// 008343a8  8db424cc000000       lea esi, [esp + 0xcc]
// 008343af  8dbc2410010000       lea edi, [esp + 0x110]
// 008343b6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008343b8  8b5500               mov edx, dword ptr [ebp]
// 008343bb  8b4228               mov eax, dword ptr [edx + 0x28]
// 008343be  53                   push ebx
// 008343bf  8bcd                 mov ecx, ebp
// 008343c1  ffd0                 call eax
// 008343c3  85c0                 test eax, eax
// 008343c5  740b                 je 0x8343d2
// 008343c7  c7842420010000bc020000 mov dword ptr [esp + 0x120], 0x2bc
// 008343d2  f744244c00020000     test dword ptr [esp + 0x4c], 0x200
// 008343da  7455                 je 0x834431
// 008343dc  807c241700           cmp byte ptr [esp + 0x17], 0
// 008343e1  0f95c0               setne al
// 008343e4  88842425010000       mov byte ptr [esp + 0x125], al
// 008343eb  84c0                 test al, al
// 008343ed  7442                 je 0x834431
// 008343ef  837c242400           cmp dword ptr [esp + 0x24], 0
// 008343f4  753b                 jne 0x834431
// 008343f6  e825730000           call 0x83b720
// 008343fb  8bc8                 mov ecx, eax
// 008343fd  e84e730000           call 0x83b750
// 00834402  84c0                 test al, al
// 00834404  7519                 jne 0x83441f
// 00834406  e815730000           call 0x83b720
// 0083440b  8bc8                 mov ecx, eax
// 0083440d  e8ae7b0000           call 0x83bfc0
// 00834412  84c0                 test al, al
// 00834414  7509                 jne 0x83441f
// 00834416  e8b5b5ffff           call 0x82f9d0
// 0083441b  6a1a                 push 0x1a
// 0083441d  eb07                 jmp 0x834426
// 0083441f  e8acb5ffff           call 0x82f9d0
// 00834424  6a0d                 push 0xd
// 00834426  8bc8                 mov ecx, eax
// 00834428  e8d3acffff           call 0x82f100
// 0083442d  89442420             mov dword ptr [esp + 0x20], eax
// 00834431  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00834439  c744243c98019b00     mov dword ptr [esp + 0x3c], 0x9b0198
// 00834441  8d8c2410010000       lea ecx, [esp + 0x110]
// 00834448  51                   push ecx
// 00834449  c684249801000001     mov byte ptr [esp + 0x198], 1
// 00834451  ff1528b19800         call dword ptr [0x98b128]
// 00834457  50                   push eax
// 00834458  8d4c2440             lea ecx, [esp + 0x40]
// 0083445c  e8c9f9fbff           call 0x7f3e2a
// 00834461  8d54243c             lea edx, [esp + 0x3c]
// 00834465  52                   push edx
// 00834466  8d4c2478             lea ecx, [esp + 0x78]
// 0083446a  e8a5200f00           call 0x926514
// 0083446f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00834472  8bf8                 mov edi, eax
// 00834474  53                   push ebx
// 00834475  8d442420             lea eax, [esp + 0x20]
// 00834479  50                   push eax
// 0083447a  e8ab220f00           call 0x92672a
// 0083447f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00834486  51                   push ecx
// 00834487  8d4c2420             lea ecx, [esp + 0x20]
// 0083448b  c684249801000002     mov byte ptr [esp + 0x198], 2
// 00834493  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00834499  50                   push eax
// 0083449a  8d4c2424             lea ecx, [esp + 0x24]
// 0083449e  ff1580de9800         call dword ptr [0x98de80]
// 008344a4  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008344ab  50                   push eax
// 008344ac  52                   push edx
// 008344ad  ff156cb19800         call dword ptr [0x98b16c]
// 008344b3  8b542434             mov edx, dword ptr [esp + 0x34]
// 008344b7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008344bb  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008344c2  2bd0                 sub edx, eax
// 008344c4  3bd1                 cmp edx, ecx
// 008344c6  7d08                 jge 0x8344d0
// 008344c8  8d440102             lea eax, [ecx + eax + 2]
// 008344cc  89442434             mov dword ptr [esp + 0x34], eax
// 008344d0  8b742428             mov esi, dword ptr [esp + 0x28]
// 008344d4  56                   push esi
// 008344d5  8d4c2478             lea ecx, [esp + 0x78]
// 008344d9  e83c200f00           call 0x92651a
// 008344de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008344e2  51                   push ecx
// 008344e3  8d4c2478             lea ecx, [esp + 0x78]
// 008344e7  e834200f00           call 0x926520
// 008344ec  837c242400           cmp dword ptr [esp + 0x24], 0
// 008344f1  740f                 je 0x834502
// 008344f3  56                   push esi
// 008344f4  8d542430             lea edx, [esp + 0x30]
// 008344f8  52                   push edx
// 008344f9  8d4c247c             lea ecx, [esp + 0x7c]
// 008344fd  e8fc00fcff           call 0x7f45fe
// 00834502  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00834506  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083450a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083450e  6a00                 push 0
// 00834510  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00834514  89442468             mov dword ptr [esp + 0x68], eax
// 00834518  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0083451c  6a03                 push 3
// 0083451e  8d4c246c             lea ecx, [esp + 0x6c]
// 00834522  51                   push ecx
// 00834523  89542478             mov dword ptr [esp + 0x78], edx
// 00834527  8944247c             mov dword ptr [esp + 0x7c], eax
// 0083452b  ff156ccc9800         call dword ptr [0x98cc6c]
// 00834531  8b742474             mov esi, dword ptr [esp + 0x74]
// 00834535  6824080000           push 0x824
// 0083453a  8d542468             lea edx, [esp + 0x68]
// 0083453e  52                   push edx
// 0083453f  8d4c2424             lea ecx, [esp + 0x24]
// 00834543  83c670               add esi, 0x70
// 00834546  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0083454c  50                   push eax
// 0083454d  8d4c2428             lea ecx, [esp + 0x28]
// 00834551  ff1580de9800         call dword ptr [0x98de80]
// 00834557  50                   push eax
// 00834558  8b06                 mov eax, dword ptr [esi]
// 0083455a  8d8c2484000000       lea ecx, [esp + 0x84]
// 00834561  ffd0                 call eax
// 00834563  f644241801           test byte ptr [esp + 0x18], 1
// 00834568  743d                 je 0x8345a7
// 0083456a  837c245400           cmp dword ptr [esp + 0x54], 0
// 0083456f  7536                 jne 0x8345a7
// 00834571  837c245000           cmp dword ptr [esp + 0x50], 0
// 00834576  742f                 je 0x8345a7
// 00834578  ff15eccb9800         call dword ptr [0x98cbec]
// 0083457e  50                   push eax
// 0083457f  e8a6f5fbff           call 0x7f3b2a
// 00834584  3b4534               cmp eax, dword ptr [ebp + 0x34]
// 00834587  751e                 jne 0x8345a7
// 00834589  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0083458d  51                   push ecx
// 0083458e  8d4c2478             lea ecx, [esp + 0x78]
// 00834592  e8891f0f00           call 0x926520
// 00834597  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083459b  8d54242c             lea edx, [esp + 0x2c]
// 0083459f  52                   push edx
// 008345a0  50                   push eax
// 008345a1  ff15d4ca9800         call dword ptr [0x98cad4]
// 008345a7  57                   push edi
// 008345a8  8d4c2478             lea ecx, [esp + 0x78]
// 008345ac  e8631f0f00           call 0x926514
// 008345b1  8d4c243c             lea ecx, [esp + 0x3c]
// 008345b5  e864f8fbff           call 0x7f3e1e
// 008345ba  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008345bd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008345c0  53                   push ebx
// 008345c1  6a06                 push 6
// 008345c3  680a110000           push 0x110a
// 008345c8  51                   push ecx
// 008345c9  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008345cf  8d4c241c             lea ecx, [esp + 0x1c]
// 008345d3  8bd8                 mov ebx, eax
// 008345d5  ff15c0de9800         call dword ptr [0x98dec0]
// 008345db  8d4c243c             lea ecx, [esp + 0x3c]
// 008345df  c684249401000000     mov byte ptr [esp + 0x194], 0
// 008345e7  c744243c98019b00     mov dword ptr [esp + 0x3c], 0x9b0198
// 008345ef  e83cacbdff           call 0x40f230
// 008345f4  85db                 test ebx, ebx
// 008345f6  0f8504fcffff         jne 0x834200
// 008345fc  8b542460             mov edx, dword ptr [esp + 0x60]
// 00834600  52                   push edx
// 00834601  8d4c2478             lea ecx, [esp + 0x78]
// 00834605  e8fe1e0f00           call 0x926508
// 0083460a  8d4c2474             lea ecx, [esp + 0x74]
// 0083460e  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 00834619  e8226f0100           call 0x84b540
// 0083461e  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 00834625  64890d00000000       mov dword ptr fs:[0], ecx
// 0083462c  59                   pop ecx
// 0083462d  5f                   pop edi
// 0083462e  5e                   pop esi
// 0083462f  5d                   pop ebp
// 00834630  5b                   pop ebx
// 00834631  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 00834638  33cc                 xor ecx, esp
// 0083463a  e85b0dfcff           call 0x7f539a
// 0083463f  81c484010000         add esp, 0x184
// 00834645  c20800               ret 8
// copied from an identical function in another client (function ?DoPaint@CXTTreeBase@@MAEXAAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp