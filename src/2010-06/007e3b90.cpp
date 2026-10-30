// roc 2010-06 007e3b90  unit: CXTPColorManager  size: 728 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e3b90
//
// 007e3b90  83ec74               sub esp, 0x74
// 007e3b93  56                   push esi
// 007e3b94  57                   push edi
// 007e3b95  8bf1                 mov esi, ecx
// 007e3b97  e834fdffff           call 0x7e38d0
// 007e3b9c  33ff                 xor edi, edi
// 007e3b9e  39be68010000         cmp dword ptr [esi + 0x168], edi
// 007e3ba4  7402                 je 0x7e3ba8
// 007e3ba6  33c0                 xor eax, eax
// 007e3ba8  48                   dec eax
// 007e3ba9  c744240826000000     mov dword ptr [esp + 8], 0x26
// 007e3bb1  c744240c27000000     mov dword ptr [esp + 0xc], 0x27
// 007e3bb9  c744241028000000     mov dword ptr [esp + 0x10], 0x28
// 007e3bc1  c744241429000000     mov dword ptr [esp + 0x14], 0x29
// 007e3bc9  c74424182b000000     mov dword ptr [esp + 0x18], 0x2b
// 007e3bd1  c744241c1f000000     mov dword ptr [esp + 0x1c], 0x1f
// 007e3bd9  c744242020000000     mov dword ptr [esp + 0x20], 0x20
// 007e3be1  c744242432000000     mov dword ptr [esp + 0x24], 0x32
// 007e3be9  c744242825000000     mov dword ptr [esp + 0x28], 0x25
// 007e3bf1  c744242c21000000     mov dword ptr [esp + 0x2c], 0x21
// 007e3bf9  c744243024000000     mov dword ptr [esp + 0x30], 0x24
// 007e3c01  c74424341e000000     mov dword ptr [esp + 0x34], 0x1e
// 007e3c09  c74424382f000000     mov dword ptr [esp + 0x38], 0x2f
// 007e3c11  c744243c3b000000     mov dword ptr [esp + 0x3c], 0x3b
// 007e3c19  83f804               cmp eax, 4
// 007e3c1c  0f871a020000         ja 0x7e3e3c
// 007e3c22  ff2485543e7e00       jmp dword ptr [eax*4 + 0x7e3e54]
// 007e3c29  b800008000           mov eax, 0x800000
// 007e3c2e  6a5a                 push 0x5a
// 007e3c30  6a05                 push 5
// 007e3c32  c744244827417600     mov dword ptr [esp + 0x48], 0x764127
// 007e3c3a  c744244c6a8ccb00     mov dword ptr [esp + 0x4c], 0xcb8c6a
// 007e3c42  c74424506d96d000     mov dword ptr [esp + 0x50], 0xd0966d
// 007e3c4a  c7442454f6f6f600     mov dword ptr [esp + 0x54], 0xf6f6f6
// 007e3c52  c7442458002d9600     mov dword ptr [esp + 0x58], 0x962d00
// 007e3c5a  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 007e3c62  89442460             mov dword ptr [esp + 0x60], eax
// 007e3c66  89442464             mov dword ptr [esp + 0x64], eax
// 007e3c6a  89442468             mov dword ptr [esp + 0x68], eax
// 007e3c6e  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 007e3c76  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 007e3c7e  c74424749ebef500     mov dword ptr [esp + 0x74], 0xf5be9e
// 007e3c86  897c2478             mov dword ptr [esp + 0x78], edi
// 007e3c8a  c744247c161e3600     mov dword ptr [esp + 0x7c], 0x361e16
// 007e3c92  e819f6ffff           call 0x7e32b0
// 007e3c97  50                   push eax
// 007e3c98  6a0c                 push 0xc
// 007e3c9a  e811f6ffff           call 0x7e32b0
// 007e3c9f  50                   push eax
// 007e3ca0  e85bf5ffff           call 0x7e3200
// 007e3ca5  89442478             mov dword ptr [esp + 0x78], eax
// 007e3ca9  33c0                 xor eax, eax
// 007e3cab  eb03                 jmp 0x7e3cb0
// 007e3cad  8d4900               lea ecx, [ecx]
// 007e3cb0  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 007e3cb4  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 007e3cb8  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3cbf  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 007e3cc3  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 007e3cc7  83c008               add eax, 8
// 007e3cca  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3cd1  83f838               cmp eax, 0x38
// 007e3cd4  72da                 jb 0x7e3cb0
// 007e3cd6  5f                   pop edi
// 007e3cd7  5e                   pop esi
// 007e3cd8  83c474               add esp, 0x74
// 007e3cdb  c3                   ret 
// 007e3cdc  b83f5d3800           mov eax, 0x385d3f
// 007e3ce1  6a5a                 push 0x5a
// 007e3ce3  6a05                 push 5
// 007e3ce5  c7442448515e3300     mov dword ptr [esp + 0x48], 0x335e51
// 007e3ced  c744244c60805800     mov dword ptr [esp + 0x4c], 0x588060
// 007e3cf5  c74424509fae7a00     mov dword ptr [esp + 0x50], 0x7aae9f
// 007e3cfd  c7442454f4f4ee00     mov dword ptr [esp + 0x54], 0xeef4f4
// 007e3d05  c7442458758d5e00     mov dword ptr [esp + 0x58], 0x5e8d75
// 007e3d0d  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 007e3d15  89442460             mov dword ptr [esp + 0x60], eax
// 007e3d19  89442464             mov dword ptr [esp + 0x64], eax
// 007e3d1d  89442468             mov dword ptr [esp + 0x68], eax
// 007e3d21  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 007e3d29  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 007e3d31  c7442474d9d9a700     mov dword ptr [esp + 0x74], 0xa7d9d9
// 007e3d39  897c2478             mov dword ptr [esp + 0x78], edi
// 007e3d3d  c744247c1f221900     mov dword ptr [esp + 0x7c], 0x19221f
// 007e3d45  e866f5ffff           call 0x7e32b0
// 007e3d4a  50                   push eax
// 007e3d4b  6a0c                 push 0xc
// 007e3d4d  e85ef5ffff           call 0x7e32b0
// 007e3d52  50                   push eax
// 007e3d53  e8a8f4ffff           call 0x7e3200
// 007e3d58  89442478             mov dword ptr [esp + 0x78], eax
// 007e3d5c  33c0                 xor eax, eax
// 007e3d5e  8bff                 mov edi, edi
// 007e3d60  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 007e3d64  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 007e3d68  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3d6f  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 007e3d73  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 007e3d77  83c008               add eax, 8
// 007e3d7a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3d81  83f838               cmp eax, 0x38
// 007e3d84  72da                 jb 0x7e3d60
// 007e3d86  5f                   pop edi
// 007e3d87  5e                   pop esi
// 007e3d88  83c474               add esp, 0x74
// 007e3d8b  c3                   ret 
// 007e3d8c  b84b4b6f00           mov eax, 0x6f4b4b
// 007e3d91  6a5a                 push 0x5a
// 007e3d93  6a05                 push 5
// 007e3d95  c744244854547500     mov dword ptr [esp + 0x48], 0x755454
// 007e3d9d  c744244c6e6d8f00     mov dword ptr [esp + 0x4c], 0x8f6d6e
// 007e3da5  c7442450a8a7be00     mov dword ptr [esp + 0x50], 0xbea7a8
// 007e3dad  c7442454fdfaff00     mov dword ptr [esp + 0x54], 0xfffafd
// 007e3db5  c74424587c7c9400     mov dword ptr [esp + 0x58], 0x947c7c
// 007e3dbd  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 007e3dc5  89442460             mov dword ptr [esp + 0x60], eax
// 007e3dc9  89442464             mov dword ptr [esp + 0x64], eax
// 007e3dcd  89442468             mov dword ptr [esp + 0x68], eax
// 007e3dd1  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 007e3dd9  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 007e3de1  c7442474d7d7e500     mov dword ptr [esp + 0x74], 0xe5d7d7
// 007e3de9  897c2478             mov dword ptr [esp + 0x78], edi
// 007e3ded  c744247c24202900     mov dword ptr [esp + 0x7c], 0x292024
// 007e3df5  e8b6f4ffff           call 0x7e32b0
// 007e3dfa  50                   push eax
// 007e3dfb  6a0c                 push 0xc
// 007e3dfd  e8aef4ffff           call 0x7e32b0
// 007e3e02  50                   push eax
// 007e3e03  e8f8f3ffff           call 0x7e3200
// 007e3e08  89442478             mov dword ptr [esp + 0x78], eax
// 007e3e0c  33c0                 xor eax, eax
// 007e3e0e  8bff                 mov edi, edi
// 007e3e10  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 007e3e14  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 007e3e18  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3e1f  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 007e3e23  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 007e3e27  83c008               add eax, 8
// 007e3e2a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 007e3e31  83f838               cmp eax, 0x38
// 007e3e34  72da                 jb 0x7e3e10
// 007e3e36  5f                   pop edi
// 007e3e37  5e                   pop esi
// 007e3e38  83c474               add esp, 0x74
// 007e3e3b  c3                   ret 
// 007e3e3c  8dbe64030000         lea edi, [esi + 0x364]
// 007e3e42  b93f000000           mov ecx, 0x3f
// 007e3e47  83c8ff               or eax, 0xffffffff
// 007e3e4a  f3ab                 rep stosd dword ptr es:[edi], eax
// 007e3e4c  5f                   pop edi
// 007e3e4d  5e                   pop esi
// 007e3e4e  83c474               add esp, 0x74
// 007e3e51  c3                   ret 
// 007e3e52  8bff                 mov edi, edi
// 007e3e54  293c7e               sub dword ptr [esi + edi*2], edi
// 007e3e57  00dc                 add ah, bl
// 007e3e59  3c7e                 cmp al, 0x7e
// 007e3e5b  008c3d7e00293c       add byte ptr [ebp + edi + 0x3c29007e], cl
// 007e3e62  7e00                 jle 0x7e3e64
// 007e3e64  293c7e               sub dword ptr [esi + edi*2], edi
// copied from an identical function in another client (function ?RefreshLunaColors@CXTPColorManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp