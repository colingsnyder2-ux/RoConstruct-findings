// roc 2009-12 00883ee0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 669 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00883ee0
//
// 00883ee0  6aff                 push -1
// 00883ee2  68180a9600           push 0x960a18
// 00883ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00883eed  50                   push eax
// 00883eee  83ec48               sub esp, 0x48
// 00883ef1  53                   push ebx
// 00883ef2  55                   push ebp
// 00883ef3  56                   push esi
// 00883ef4  57                   push edi
// 00883ef5  a10052b600           mov eax, dword ptr [0xb65200]
// 00883efa  33c4                 xor eax, esp
// 00883efc  50                   push eax
// 00883efd  8d44245c             lea eax, [esp + 0x5c]
// 00883f01  64a300000000         mov dword ptr fs:[0], eax
// 00883f07  8bf1                 mov esi, ecx
// 00883f09  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00883f0d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00883f13  83f804               cmp eax, 4
// 00883f16  7511                 jne 0x883f29
// 00883f18  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 00883f1f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00883f27  7508                 jne 0x883f31
// 00883f29  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00883f31  33ed                 xor ebp, ebp
// 00883f33  396c247c             cmp dword ptr [esp + 0x7c], ebp
// 00883f37  7537                 jne 0x883f70
// 00883f39  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00883f3d  7412                 je 0x883f51
// 00883f3f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00883f43  c70006000000         mov dword ptr [eax], 6
// 00883f49  896804               mov dword ptr [eax + 4], ebp
// 00883f4c  e916020000           jmp 0x884167
// 00883f51  8b442478             mov eax, dword ptr [esp + 0x78]
// 00883f55  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00883f59  55                   push ebp
// 00883f5a  50                   push eax
// 00883f5b  51                   push ecx
// 00883f5c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00883f60  51                   push ecx
// 00883f61  57                   push edi
// 00883f62  8bce                 mov ecx, esi
// 00883f64  e8f75c0000           call 0x889c60
// 00883f69  8bc7                 mov eax, edi
// 00883f6b  e9f7010000           jmp 0x884167
// 00883f70  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00883f73  8d542438             lea edx, [esp + 0x38]
// 00883f77  52                   push edx
// 00883f78  50                   push eax
// 00883f79  ff1550cc9800         call dword ptr [0x98cc50]
// 00883f7f  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00883f83  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00883f89  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 00883f8d  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00883f93  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00883f99  894c2428             mov dword ptr [esp + 0x28], ecx
// 00883f9d  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00883fa3  8954242c             mov dword ptr [esp + 0x2c], edx
// 00883fa7  89442430             mov dword ptr [esp + 0x30], eax
// 00883fab  894c2434             mov dword ptr [esp + 0x34], ecx
// 00883faf  3bdd                 cmp ebx, ebp
// 00883fb1  7403                 je 0x883fb6
// 00883fb3  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00883fb6  6a27                 push 0x27
// 00883fb8  8bce                 mov ecx, esi
// 00883fba  e88196f7ff           call 0x7fd640
// 00883fbf  50                   push eax
// 00883fc0  55                   push ebp
// 00883fc1  8d4c2450             lea ecx, [esp + 0x50]
// 00883fc5  e83677fcff           call 0x84b700
// 00883fca  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00883fd0  8b442474             mov eax, dword ptr [esp + 0x74]
// 00883fd4  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00883fda  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 00883fe0  8bafb4000000         mov ebp, dword ptr [edi + 0xb4]
// 00883fe6  89542418             mov dword ptr [esp + 0x18], edx
// 00883fea  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 00883ff0  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00883ff8  894c2420             mov dword ptr [esp + 0x20], ecx
// 00883ffc  89542424             mov dword ptr [esp + 0x24], edx
// 00884000  83f803               cmp eax, 3
// 00884003  0f84c2000000         je 0x8840cb
// 00884009  83f802               cmp eax, 2
// 0088400c  0f84b9000000         je 0x8840cb
// 00884012  85c0                 test eax, eax
// 00884014  743c                 je 0x884052
// 00884016  83f801               cmp eax, 1
// 00884019  7437                 je 0x884052
// 0088401b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00884020  7530                 jne 0x884052
// 00884022  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00884026  8b542474             mov edx, dword ptr [esp + 0x74]
// 0088402a  51                   push ecx
// 0088402b  57                   push edi
// 0088402c  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00884030  52                   push edx
// 00884031  53                   push ebx
// 00884032  57                   push edi
// 00884033  8bce                 mov ecx, esi
// 00884035  e8265c0000           call 0x889c60
// 0088403a  8d4c2448             lea ecx, [esp + 0x48]
// 0088403e  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00884046  e84577fcff           call 0x84b790
// 0088404b  8bc7                 mov eax, edi
// 0088404d  e915010000           jmp 0x884167
// 00884052  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00884059  7537                 jne 0x884092
// 0088405b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0088405f  6a27                 push 0x27
// 00884061  83c2fc               add edx, -4
// 00884064  52                   push edx
// 00884065  8d47fc               lea eax, [edi - 4]
// 00884068  50                   push eax
// 00884069  8d4d04               lea ecx, [ebp + 4]
// 0088406c  51                   push ecx
// 0088406d  50                   push eax
// 0088406e  53                   push ebx
// 0088406f  8bce                 mov ecx, esi
// 00884071  e82aabf7ff           call 0x7feba0
// 00884076  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 0088407d  0f85c0000000         jne 0x884143
// 00884083  8b542424             mov edx, dword ptr [esp + 0x24]
// 00884087  8d47fd               lea eax, [edi - 3]
// 0088408a  83c2fd               add edx, -3
// 0088408d  e9a0000000           jmp 0x884132
// 00884092  837c241400           cmp dword ptr [esp + 0x14], 0
// 00884097  0f85a6000000         jne 0x884143
// 0088409d  6a27                 push 0x27
// 0088409f  8d45fc               lea eax, [ebp - 4]
// 008840a2  50                   push eax
// 008840a3  51                   push ecx
// 008840a4  50                   push eax
// 008840a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008840a9  83c004               add eax, 4
// 008840ac  50                   push eax
// 008840ad  53                   push ebx
// 008840ae  8bce                 mov ecx, esi
// 008840b0  e8ebaaf7ff           call 0x7feba0
// 008840b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008840b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008840bd  6a14                 push 0x14
// 008840bf  83c5fd               add ebp, -3
// 008840c2  55                   push ebp
// 008840c3  51                   push ecx
// 008840c4  55                   push ebp
// 008840c5  83c205               add edx, 5
// 008840c8  52                   push edx
// 008840c9  eb70                 jmp 0x88413b
// 008840cb  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 008840d2  6a27                 push 0x27
// 008840d4  753f                 jne 0x884115
// 008840d6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008840da  8d47fc               lea eax, [edi - 4]
// 008840dd  50                   push eax
// 008840de  83c1fc               add ecx, -4
// 008840e1  51                   push ecx
// 008840e2  50                   push eax
// 008840e3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008840e7  83c004               add eax, 4
// 008840ea  50                   push eax
// 008840eb  53                   push ebx
// 008840ec  8bce                 mov ecx, esi
// 008840ee  e8adaaf7ff           call 0x7feba0
// 008840f3  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 008840fa  7547                 jne 0x884143
// 008840fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00884100  8b542418             mov edx, dword ptr [esp + 0x18]
// 00884104  6a14                 push 0x14
// 00884106  8d47fd               lea eax, [edi - 3]
// 00884109  50                   push eax
// 0088410a  83c1fd               add ecx, -3
// 0088410d  51                   push ecx
// 0088410e  50                   push eax
// 0088410f  83c205               add edx, 5
// 00884112  52                   push edx
// 00884113  eb26                 jmp 0x88413b
// 00884115  8d4102               lea eax, [ecx + 2]
// 00884118  52                   push edx
// 00884119  50                   push eax
// 0088411a  8d4d04               lea ecx, [ebp + 4]
// 0088411d  51                   push ecx
// 0088411e  50                   push eax
// 0088411f  53                   push ebx
// 00884120  8bce                 mov ecx, esi
// 00884122  e879aaf7ff           call 0x7feba0
// 00884127  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088412b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088412f  83c003               add eax, 3
// 00884132  6a14                 push 0x14
// 00884134  52                   push edx
// 00884135  50                   push eax
// 00884136  83c505               add ebp, 5
// 00884139  55                   push ebp
// 0088413a  50                   push eax
// 0088413b  53                   push ebx
// 0088413c  8bce                 mov ecx, esi
// 0088413e  e85daaf7ff           call 0x7feba0
// 00884143  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00884147  8d4c2448             lea ecx, [esp + 0x48]
// 0088414b  c70600000000         mov dword ptr [esi], 0
// 00884151  c7460400000000       mov dword ptr [esi + 4], 0
// 00884158  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00884160  e82b76fcff           call 0x84b790
// 00884165  8bc6                 mov eax, esi
// 00884167  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088416b  64890d00000000       mov dword ptr fs:[0], ecx
// 00884172  59                   pop ecx
// 00884173  5f                   pop edi
// 00884174  5e                   pop esi
// 00884175  5d                   pop ebp
// 00884176  5b                   pop ebx
// 00884177  83c454               add esp, 0x54
// 0088417a  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp