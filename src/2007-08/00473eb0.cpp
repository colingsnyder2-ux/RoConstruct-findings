// roc 2007-08 00473eb0  unit: G3D::VARArea  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473eb0
//
// 00473eb0  53                   push ebx
// 00473eb1  55                   push ebp
// 00473eb2  56                   push esi
// 00473eb3  8bf1                 mov esi, ecx
// 00473eb5  83467801             add dword ptr [esi + 0x78], 1
// 00473eb9  b808000000           mov eax, 8
// 00473ebe  39442410             cmp dword ptr [esp + 0x10], eax
// 00473ec2  57                   push edi
// 00473ec3  750a                 jne 0x473ecf
// 00473ec5  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 00473ecb  894c2414             mov dword ptr [esp + 0x14], ecx
// 00473ecf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00473ed3  3bd0                 cmp edx, eax
// 00473ed5  750a                 jne 0x473ee1
// 00473ed7  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 00473edd  89542418             mov dword ptr [esp + 0x18], edx
// 00473ee1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00473ee5  3bf8                 cmp edi, eax
// 00473ee7  7506                 jne 0x473eef
// 00473ee9  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 00473eef  39442420             cmp dword ptr [esp + 0x20], eax
// 00473ef3  750a                 jne 0x473eff
// 00473ef5  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 00473efb  894c2420             mov dword ptr [esp + 0x20], ecx
// 00473eff  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00473f03  3bd8                 cmp ebx, eax
// 00473f05  750c                 jne 0x473f13
// 00473f07  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 00473f0d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00473f11  8bd9                 mov ebx, ecx
// 00473f13  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00473f17  3be8                 cmp ebp, eax
// 00473f19  7506                 jne 0x473f21
// 00473f1b  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 00473f21  8b442414             mov eax, dword ptr [esp + 0x14]
// 00473f25  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 00473f2b  7541                 jne 0x473f6e
// 00473f2d  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 00473f33  7539                 jne 0x473f6e
// 00473f35  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 00473f3b  7531                 jne 0x473f6e
// 00473f3d  e84e8cffff           call 0x46cb90
// 00473f42  84c0                 test al, al
// 00473f44  0f84af010000         je 0x4740f9
// 00473f4a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00473f4e  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 00473f54  7514                 jne 0x473f6a
// 00473f56  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 00473f5c  750c                 jne 0x473f6a
// 00473f5e  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 00473f64  0f848f010000         je 0x4740f9
// 00473f6a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00473f6e  803d67cf8b0000       cmp byte ptr [0x8bcf67], 0
// 00473f75  7466                 je 0x473fdd
// 00473f77  6805040000           push 0x405
// 00473f7c  ff15ccd98b00         call dword ptr [0x8bd9cc]
// 00473f82  55                   push ebp
// 00473f83  8bce                 mov ecx, esi
// 00473f85  e8a6feffff           call 0x473e30
// 00473f8a  50                   push eax
// 00473f8b  53                   push ebx
// 00473f8c  e89ffeffff           call 0x473e30
// 00473f91  8b542424             mov edx, dword ptr [esp + 0x24]
// 00473f95  50                   push eax
// 00473f96  52                   push edx
// 00473f97  e894feffff           call 0x473e30
// 00473f9c  8b1dd0ea7700         mov ebx, dword ptr [0x77ead0]
// 00473fa2  50                   push eax
// 00473fa3  ffd3                 call ebx
// 00473fa5  6804040000           push 0x404
// 00473faa  ff15ccd98b00         call dword ptr [0x8bd9cc]
// 00473fb0  57                   push edi
// 00473fb1  8bce                 mov ecx, esi
// 00473fb3  e878feffff           call 0x473e30
// 00473fb8  50                   push eax
// 00473fb9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00473fbd  50                   push eax
// 00473fbe  e86dfeffff           call 0x473e30
// 00473fc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00473fc7  50                   push eax
// 00473fc8  51                   push ecx
// 00473fc9  8bce                 mov ecx, esi
// 00473fcb  e860feffff           call 0x473e30
// 00473fd0  50                   push eax
// 00473fd1  ffd3                 call ebx
// 00473fd3  83467004             add dword ptr [esi + 0x70], 4
// 00473fd7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00473fdb  eb7f                 jmp 0x47405c
// 00473fdd  803d68cf8b0000       cmp byte ptr [0x8bcf68], 0
// 00473fe4  57                   push edi
// 00473fe5  8bce                 mov ecx, esi
// 00473fe7  744f                 je 0x474038
// 00473fe9  83467002             add dword ptr [esi + 0x70], 2
// 00473fed  e83efeffff           call 0x473e30
// 00473ff2  50                   push eax
// 00473ff3  52                   push edx
// 00473ff4  e837feffff           call 0x473e30
// 00473ff9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00473ffd  50                   push eax
// 00473ffe  52                   push edx
// 00473fff  e82cfeffff           call 0x473e30
// 00474004  50                   push eax
// 00474005  6804040000           push 0x404
// 0047400a  ff151cdb8b00         call dword ptr [0x8bdb1c]
// 00474010  55                   push ebp
// 00474011  8bce                 mov ecx, esi
// 00474013  e818feffff           call 0x473e30
// 00474018  50                   push eax
// 00474019  53                   push ebx
// 0047401a  e811feffff           call 0x473e30
// 0047401f  50                   push eax
// 00474020  8b442428             mov eax, dword ptr [esp + 0x28]
// 00474024  50                   push eax
// 00474025  e806feffff           call 0x473e30
// 0047402a  50                   push eax
// 0047402b  6805040000           push 0x405
// 00474030  ff151cdb8b00         call dword ptr [0x8bdb1c]
// 00474036  eb24                 jmp 0x47405c
// 00474038  e8f3fdffff           call 0x473e30
// 0047403d  50                   push eax
// 0047403e  52                   push edx
// 0047403f  e8ecfdffff           call 0x473e30
// 00474044  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00474048  50                   push eax
// 00474049  51                   push ecx
// 0047404a  8bce                 mov ecx, esi
// 0047404c  e8dffdffff           call 0x473e30
// 00474051  50                   push eax
// 00474052  ff15d0ea7700         call dword ptr [0x77ead0]
// 00474058  83467001             add dword ptr [esi + 0x70], 1
// 0047405c  b802000000           mov eax, 2
// 00474061  39442414             cmp dword ptr [esp + 0x14], eax
// 00474065  7539                 jne 0x4740a0
// 00474067  3bf8                 cmp edi, eax
// 00474069  7535                 jne 0x4740a0
// 0047406b  39442418             cmp dword ptr [esp + 0x18], eax
// 0047406f  752f                 jne 0x4740a0
// 00474071  e81a8bffff           call 0x46cb90
// 00474076  84c0                 test al, al
// 00474078  7410                 je 0x47408a
// 0047407a  837c242002           cmp dword ptr [esp + 0x20], 2
// 0047407f  751f                 jne 0x4740a0
// 00474081  83fd02               cmp ebp, 2
// 00474084  751a                 jne 0x4740a0
// 00474086  3bdd                 cmp ebx, ebp
// 00474088  7516                 jne 0x4740a0
// 0047408a  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 00474091  7536                 jne 0x4740c9
// 00474093  68900b0000           push 0xb90
// 00474098  ff154ceb7700         call dword ptr [0x77eb4c]
// 0047409e  eb29                 jmp 0x4740c9
// 004740a0  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 004740a7  7520                 jne 0x4740c9
// 004740a9  68900b0000           push 0xb90
// 004740ae  ff1554eb7700         call dword ptr [0x77eb54]
// 004740b4  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 004740ba  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 004740c0  52                   push edx
// 004740c1  50                   push eax
// 004740c2  8bce                 mov ecx, esi
// 004740c4  e8a7faffff           call 0x473b70
// 004740c9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004740cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 004740d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004740d5  898e28040000         mov dword ptr [esi + 0x428], ecx
// 004740db  89962c040000         mov dword ptr [esi + 0x42c], edx
// 004740e1  89be30040000         mov dword ptr [esi + 0x430], edi
// 004740e7  898634040000         mov dword ptr [esi + 0x434], eax
// 004740ed  899e38040000         mov dword ptr [esi + 0x438], ebx
// 004740f3  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 004740f9  5f                   pop edi
// 004740fa  5e                   pop esi
// 004740fb  5d                   pop ebp
// 004740fc  5b                   pop ebx
// 004740fd  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
