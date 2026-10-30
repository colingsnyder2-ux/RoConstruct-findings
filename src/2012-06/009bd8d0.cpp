// roc 2012-06 009bd8d0  unit: CXTPColorManager  size: 728 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd8d0
//
// 009bd8d0  83ec74               sub esp, 0x74
// 009bd8d3  56                   push esi
// 009bd8d4  57                   push edi
// 009bd8d5  8bf1                 mov esi, ecx
// 009bd8d7  e834fdffff           call 0x9bd610
// 009bd8dc  33ff                 xor edi, edi
// 009bd8de  39be68010000         cmp dword ptr [esi + 0x168], edi
// 009bd8e4  7402                 je 0x9bd8e8
// 009bd8e6  33c0                 xor eax, eax
// 009bd8e8  48                   dec eax
// 009bd8e9  c744240826000000     mov dword ptr [esp + 8], 0x26
// 009bd8f1  c744240c27000000     mov dword ptr [esp + 0xc], 0x27
// 009bd8f9  c744241028000000     mov dword ptr [esp + 0x10], 0x28
// 009bd901  c744241429000000     mov dword ptr [esp + 0x14], 0x29
// 009bd909  c74424182b000000     mov dword ptr [esp + 0x18], 0x2b
// 009bd911  c744241c1f000000     mov dword ptr [esp + 0x1c], 0x1f
// 009bd919  c744242020000000     mov dword ptr [esp + 0x20], 0x20
// 009bd921  c744242432000000     mov dword ptr [esp + 0x24], 0x32
// 009bd929  c744242825000000     mov dword ptr [esp + 0x28], 0x25
// 009bd931  c744242c21000000     mov dword ptr [esp + 0x2c], 0x21
// 009bd939  c744243024000000     mov dword ptr [esp + 0x30], 0x24
// 009bd941  c74424341e000000     mov dword ptr [esp + 0x34], 0x1e
// 009bd949  c74424382f000000     mov dword ptr [esp + 0x38], 0x2f
// 009bd951  c744243c3b000000     mov dword ptr [esp + 0x3c], 0x3b
// 009bd959  83f804               cmp eax, 4
// 009bd95c  0f871a020000         ja 0x9bdb7c
// 009bd962  ff248594db9b00       jmp dword ptr [eax*4 + 0x9bdb94]
// 009bd969  b800008000           mov eax, 0x800000
// 009bd96e  6a5a                 push 0x5a
// 009bd970  6a05                 push 5
// 009bd972  c744244827417600     mov dword ptr [esp + 0x48], 0x764127
// 009bd97a  c744244c6a8ccb00     mov dword ptr [esp + 0x4c], 0xcb8c6a
// 009bd982  c74424506d96d000     mov dword ptr [esp + 0x50], 0xd0966d
// 009bd98a  c7442454f6f6f600     mov dword ptr [esp + 0x54], 0xf6f6f6
// 009bd992  c7442458002d9600     mov dword ptr [esp + 0x58], 0x962d00
// 009bd99a  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 009bd9a2  89442460             mov dword ptr [esp + 0x60], eax
// 009bd9a6  89442464             mov dword ptr [esp + 0x64], eax
// 009bd9aa  89442468             mov dword ptr [esp + 0x68], eax
// 009bd9ae  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 009bd9b6  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 009bd9be  c74424749ebef500     mov dword ptr [esp + 0x74], 0xf5be9e
// 009bd9c6  897c2478             mov dword ptr [esp + 0x78], edi
// 009bd9ca  c744247c161e3600     mov dword ptr [esp + 0x7c], 0x361e16
// 009bd9d2  e809f6ffff           call 0x9bcfe0
// 009bd9d7  50                   push eax
// 009bd9d8  6a0c                 push 0xc
// 009bd9da  e801f6ffff           call 0x9bcfe0
// 009bd9df  50                   push eax
// 009bd9e0  e84bf5ffff           call 0x9bcf30
// 009bd9e5  89442478             mov dword ptr [esp + 0x78], eax
// 009bd9e9  33c0                 xor eax, eax
// 009bd9eb  eb03                 jmp 0x9bd9f0
// 009bd9ed  8d4900               lea ecx, [ecx]
// 009bd9f0  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 009bd9f4  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 009bd9f8  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bd9ff  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 009bda03  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 009bda07  83c008               add eax, 8
// 009bda0a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bda11  83f838               cmp eax, 0x38
// 009bda14  72da                 jb 0x9bd9f0
// 009bda16  5f                   pop edi
// 009bda17  5e                   pop esi
// 009bda18  83c474               add esp, 0x74
// 009bda1b  c3                   ret 
// 009bda1c  b83f5d3800           mov eax, 0x385d3f
// 009bda21  6a5a                 push 0x5a
// 009bda23  6a05                 push 5
// 009bda25  c7442448515e3300     mov dword ptr [esp + 0x48], 0x335e51
// 009bda2d  c744244c60805800     mov dword ptr [esp + 0x4c], 0x588060
// 009bda35  c74424509fae7a00     mov dword ptr [esp + 0x50], 0x7aae9f
// 009bda3d  c7442454f4f4ee00     mov dword ptr [esp + 0x54], 0xeef4f4
// 009bda45  c7442458758d5e00     mov dword ptr [esp + 0x58], 0x5e8d75
// 009bda4d  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 009bda55  89442460             mov dword ptr [esp + 0x60], eax
// 009bda59  89442464             mov dword ptr [esp + 0x64], eax
// 009bda5d  89442468             mov dword ptr [esp + 0x68], eax
// 009bda61  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 009bda69  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 009bda71  c7442474d9d9a700     mov dword ptr [esp + 0x74], 0xa7d9d9
// 009bda79  897c2478             mov dword ptr [esp + 0x78], edi
// 009bda7d  c744247c1f221900     mov dword ptr [esp + 0x7c], 0x19221f
// 009bda85  e856f5ffff           call 0x9bcfe0
// 009bda8a  50                   push eax
// 009bda8b  6a0c                 push 0xc
// 009bda8d  e84ef5ffff           call 0x9bcfe0
// 009bda92  50                   push eax
// 009bda93  e898f4ffff           call 0x9bcf30
// 009bda98  89442478             mov dword ptr [esp + 0x78], eax
// 009bda9c  33c0                 xor eax, eax
// 009bda9e  8bff                 mov edi, edi
// 009bdaa0  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 009bdaa4  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 009bdaa8  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bdaaf  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 009bdab3  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 009bdab7  83c008               add eax, 8
// 009bdaba  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bdac1  83f838               cmp eax, 0x38
// 009bdac4  72da                 jb 0x9bdaa0
// 009bdac6  5f                   pop edi
// 009bdac7  5e                   pop esi
// 009bdac8  83c474               add esp, 0x74
// 009bdacb  c3                   ret 
// 009bdacc  b84b4b6f00           mov eax, 0x6f4b4b
// 009bdad1  6a5a                 push 0x5a
// 009bdad3  6a05                 push 5
// 009bdad5  c744244854547500     mov dword ptr [esp + 0x48], 0x755454
// 009bdadd  c744244c6e6d8f00     mov dword ptr [esp + 0x4c], 0x8f6d6e
// 009bdae5  c7442450a8a7be00     mov dword ptr [esp + 0x50], 0xbea7a8
// 009bdaed  c7442454fdfaff00     mov dword ptr [esp + 0x54], 0xfffafd
// 009bdaf5  c74424587c7c9400     mov dword ptr [esp + 0x58], 0x947c7c
// 009bdafd  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 009bdb05  89442460             mov dword ptr [esp + 0x60], eax
// 009bdb09  89442464             mov dword ptr [esp + 0x64], eax
// 009bdb0d  89442468             mov dword ptr [esp + 0x68], eax
// 009bdb11  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 009bdb19  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 009bdb21  c7442474d7d7e500     mov dword ptr [esp + 0x74], 0xe5d7d7
// 009bdb29  897c2478             mov dword ptr [esp + 0x78], edi
// 009bdb2d  c744247c24202900     mov dword ptr [esp + 0x7c], 0x292024
// 009bdb35  e8a6f4ffff           call 0x9bcfe0
// 009bdb3a  50                   push eax
// 009bdb3b  6a0c                 push 0xc
// 009bdb3d  e89ef4ffff           call 0x9bcfe0
// 009bdb42  50                   push eax
// 009bdb43  e8e8f3ffff           call 0x9bcf30
// 009bdb48  89442478             mov dword ptr [esp + 0x78], eax
// 009bdb4c  33c0                 xor eax, eax
// 009bdb4e  8bff                 mov edi, edi
// 009bdb50  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 009bdb54  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 009bdb58  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bdb5f  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 009bdb63  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 009bdb67  83c008               add eax, 8
// 009bdb6a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 009bdb71  83f838               cmp eax, 0x38
// 009bdb74  72da                 jb 0x9bdb50
// 009bdb76  5f                   pop edi
// 009bdb77  5e                   pop esi
// 009bdb78  83c474               add esp, 0x74
// 009bdb7b  c3                   ret 
// 009bdb7c  8dbe64030000         lea edi, [esi + 0x364]
// 009bdb82  b93f000000           mov ecx, 0x3f
// 009bdb87  83c8ff               or eax, 0xffffffff
// 009bdb8a  f3ab                 rep stosd dword ptr es:[edi], eax
// 009bdb8c  5f                   pop edi
// 009bdb8d  5e                   pop esi
// 009bdb8e  83c474               add esp, 0x74
// 009bdb91  c3                   ret 
// 009bdb92  8bff                 mov edi, edi
// 009bdb94  69d99b001cda         imul ebx, ecx, 0xda1c009b
// 009bdb9a  9b                   wait 
// 009bdb9b  00cc                 add ah, cl
// 009bdb9d  da9b0069d99b         ficomp dword ptr [ebx - 0x64269700]
// 009bdba3  0069d9               add byte ptr [ecx - 0x27], ch
// 009bdba6  9b                   wait 
// copied from an identical function in another client (function ?RefreshLunaColors@CXTPColorManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp