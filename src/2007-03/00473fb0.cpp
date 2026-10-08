// roc 2007-03 00473fb0  unit: seg_00470000  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473fb0
//
// 00473fb0  53                   push ebx
// 00473fb1  55                   push ebp
// 00473fb2  56                   push esi
// 00473fb3  8bf1                 mov esi, ecx
// 00473fb5  83467801             add dword ptr [esi + 0x78], 1
// 00473fb9  b808000000           mov eax, 8
// 00473fbe  39442410             cmp dword ptr [esp + 0x10], eax
// 00473fc2  57                   push edi
// 00473fc3  750a                 jne 0x473fcf
// 00473fc5  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 00473fcb  894c2414             mov dword ptr [esp + 0x14], ecx
// 00473fcf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00473fd3  3bd0                 cmp edx, eax
// 00473fd5  750a                 jne 0x473fe1
// 00473fd7  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 00473fdd  89542418             mov dword ptr [esp + 0x18], edx
// 00473fe1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00473fe5  3bf8                 cmp edi, eax
// 00473fe7  7506                 jne 0x473fef
// 00473fe9  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 00473fef  39442420             cmp dword ptr [esp + 0x20], eax
// 00473ff3  750a                 jne 0x473fff
// 00473ff5  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 00473ffb  894c2420             mov dword ptr [esp + 0x20], ecx
// 00473fff  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00474003  3bd8                 cmp ebx, eax
// 00474005  750c                 jne 0x474013
// 00474007  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 0047400d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00474011  8bd9                 mov ebx, ecx
// 00474013  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00474017  3be8                 cmp ebp, eax
// 00474019  7506                 jne 0x474021
// 0047401b  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 00474021  8b442414             mov eax, dword ptr [esp + 0x14]
// 00474025  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 0047402b  7541                 jne 0x47406e
// 0047402d  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 00474033  7539                 jne 0x47406e
// 00474035  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 0047403b  7531                 jne 0x47406e
// 0047403d  e8de8affff           call 0x46cb20
// 00474042  84c0                 test al, al
// 00474044  0f84af010000         je 0x4741f9
// 0047404a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047404e  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 00474054  7514                 jne 0x47406a
// 00474056  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 0047405c  750c                 jne 0x47406a
// 0047405e  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 00474064  0f848f010000         je 0x4741f9
// 0047406a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047406e  803d2f768b0000       cmp byte ptr [0x8b762f], 0
// 00474075  7466                 je 0x4740dd
// 00474077  6805040000           push 0x405
// 0047407c  ff1584808b00         call dword ptr [0x8b8084]
// 00474082  55                   push ebp
// 00474083  8bce                 mov ecx, esi
// 00474085  e8a6feffff           call 0x473f30
// 0047408a  50                   push eax
// 0047408b  53                   push ebx
// 0047408c  e89ffeffff           call 0x473f30
// 00474091  8b542424             mov edx, dword ptr [esp + 0x24]
// 00474095  50                   push eax
// 00474096  52                   push edx
// 00474097  e894feffff           call 0x473f30
// 0047409c  8b1deceb7700         mov ebx, dword ptr [0x77ebec]
// 004740a2  50                   push eax
// 004740a3  ffd3                 call ebx
// 004740a5  6804040000           push 0x404
// 004740aa  ff1584808b00         call dword ptr [0x8b8084]
// 004740b0  57                   push edi
// 004740b1  8bce                 mov ecx, esi
// 004740b3  e878feffff           call 0x473f30
// 004740b8  50                   push eax
// 004740b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004740bd  50                   push eax
// 004740be  e86dfeffff           call 0x473f30
// 004740c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004740c7  50                   push eax
// 004740c8  51                   push ecx
// 004740c9  8bce                 mov ecx, esi
// 004740cb  e860feffff           call 0x473f30
// 004740d0  50                   push eax
// 004740d1  ffd3                 call ebx
// 004740d3  83467004             add dword ptr [esi + 0x70], 4
// 004740d7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004740db  eb7f                 jmp 0x47415c
// 004740dd  803d30768b0000       cmp byte ptr [0x8b7630], 0
// 004740e4  57                   push edi
// 004740e5  8bce                 mov ecx, esi
// 004740e7  744f                 je 0x474138
// 004740e9  83467002             add dword ptr [esi + 0x70], 2
// 004740ed  e83efeffff           call 0x473f30
// 004740f2  50                   push eax
// 004740f3  52                   push edx
// 004740f4  e837feffff           call 0x473f30
// 004740f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004740fd  50                   push eax
// 004740fe  52                   push edx
// 004740ff  e82cfeffff           call 0x473f30
// 00474104  50                   push eax
// 00474105  6804040000           push 0x404
// 0047410a  ff15d4818b00         call dword ptr [0x8b81d4]
// 00474110  55                   push ebp
// 00474111  8bce                 mov ecx, esi
// 00474113  e818feffff           call 0x473f30
// 00474118  50                   push eax
// 00474119  53                   push ebx
// 0047411a  e811feffff           call 0x473f30
// 0047411f  50                   push eax
// 00474120  8b442428             mov eax, dword ptr [esp + 0x28]
// 00474124  50                   push eax
// 00474125  e806feffff           call 0x473f30
// 0047412a  50                   push eax
// 0047412b  6805040000           push 0x405
// 00474130  ff15d4818b00         call dword ptr [0x8b81d4]
// 00474136  eb24                 jmp 0x47415c
// 00474138  e8f3fdffff           call 0x473f30
// 0047413d  50                   push eax
// 0047413e  52                   push edx
// 0047413f  e8ecfdffff           call 0x473f30
// 00474144  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00474148  50                   push eax
// 00474149  51                   push ecx
// 0047414a  8bce                 mov ecx, esi
// 0047414c  e8dffdffff           call 0x473f30
// 00474151  50                   push eax
// 00474152  ff15eceb7700         call dword ptr [0x77ebec]
// 00474158  83467001             add dword ptr [esi + 0x70], 1
// 0047415c  b802000000           mov eax, 2
// 00474161  39442414             cmp dword ptr [esp + 0x14], eax
// 00474165  7539                 jne 0x4741a0
// 00474167  3bf8                 cmp edi, eax
// 00474169  7535                 jne 0x4741a0
// 0047416b  39442418             cmp dword ptr [esp + 0x18], eax
// 0047416f  752f                 jne 0x4741a0
// 00474171  e8aa89ffff           call 0x46cb20
// 00474176  84c0                 test al, al
// 00474178  7410                 je 0x47418a
// 0047417a  837c242002           cmp dword ptr [esp + 0x20], 2
// 0047417f  751f                 jne 0x4741a0
// 00474181  83fd02               cmp ebp, 2
// 00474184  751a                 jne 0x4741a0
// 00474186  3bdd                 cmp ebx, ebp
// 00474188  7516                 jne 0x4741a0
// 0047418a  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 00474191  7536                 jne 0x4741c9
// 00474193  68900b0000           push 0xb90
// 00474198  ff1574eb7700         call dword ptr [0x77eb74]
// 0047419e  eb29                 jmp 0x4741c9
// 004741a0  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 004741a7  7520                 jne 0x4741c9
// 004741a9  68900b0000           push 0xb90
// 004741ae  ff156ceb7700         call dword ptr [0x77eb6c]
// 004741b4  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 004741ba  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 004741c0  52                   push edx
// 004741c1  50                   push eax
// 004741c2  8bce                 mov ecx, esi
// 004741c4  e8a7faffff           call 0x473c70
// 004741c9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004741cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 004741d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004741d5  898e28040000         mov dword ptr [esi + 0x428], ecx
// 004741db  89962c040000         mov dword ptr [esi + 0x42c], edx
// 004741e1  89be30040000         mov dword ptr [esi + 0x430], edi
// 004741e7  898634040000         mov dword ptr [esi + 0x434], eax
// 004741ed  899e38040000         mov dword ptr [esi + 0x438], ebx
// 004741f3  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 004741f9  5f                   pop edi
// 004741fa  5e                   pop esi
// 004741fb  5d                   pop ebp
// 004741fc  5b                   pop ebx
// 004741fd  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
