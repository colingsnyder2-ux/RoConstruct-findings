// roc 2009-12 0082fa40  unit: CXTPColorManager  size: 728 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082fa40
//
// 0082fa40  83ec74               sub esp, 0x74
// 0082fa43  56                   push esi
// 0082fa44  57                   push edi
// 0082fa45  8bf1                 mov esi, ecx
// 0082fa47  e8e4fcffff           call 0x82f730
// 0082fa4c  33ff                 xor edi, edi
// 0082fa4e  39be68010000         cmp dword ptr [esi + 0x168], edi
// 0082fa54  7402                 je 0x82fa58
// 0082fa56  33c0                 xor eax, eax
// 0082fa58  48                   dec eax
// 0082fa59  c744240826000000     mov dword ptr [esp + 8], 0x26
// 0082fa61  c744240c27000000     mov dword ptr [esp + 0xc], 0x27
// 0082fa69  c744241028000000     mov dword ptr [esp + 0x10], 0x28
// 0082fa71  c744241429000000     mov dword ptr [esp + 0x14], 0x29
// 0082fa79  c74424182b000000     mov dword ptr [esp + 0x18], 0x2b
// 0082fa81  c744241c1f000000     mov dword ptr [esp + 0x1c], 0x1f
// 0082fa89  c744242020000000     mov dword ptr [esp + 0x20], 0x20
// 0082fa91  c744242432000000     mov dword ptr [esp + 0x24], 0x32
// 0082fa99  c744242825000000     mov dword ptr [esp + 0x28], 0x25
// 0082faa1  c744242c21000000     mov dword ptr [esp + 0x2c], 0x21
// 0082faa9  c744243024000000     mov dword ptr [esp + 0x30], 0x24
// 0082fab1  c74424341e000000     mov dword ptr [esp + 0x34], 0x1e
// 0082fab9  c74424382f000000     mov dword ptr [esp + 0x38], 0x2f
// 0082fac1  c744243c3b000000     mov dword ptr [esp + 0x3c], 0x3b
// 0082fac9  83f804               cmp eax, 4
// 0082facc  0f871a020000         ja 0x82fcec
// 0082fad2  ff248504fd8200       jmp dword ptr [eax*4 + 0x82fd04]
// 0082fad9  b800008000           mov eax, 0x800000
// 0082fade  6a5a                 push 0x5a
// 0082fae0  6a05                 push 5
// 0082fae2  c744244827417600     mov dword ptr [esp + 0x48], 0x764127
// 0082faea  c744244c6a8ccb00     mov dword ptr [esp + 0x4c], 0xcb8c6a
// 0082faf2  c74424506d96d000     mov dword ptr [esp + 0x50], 0xd0966d
// 0082fafa  c7442454f6f6f600     mov dword ptr [esp + 0x54], 0xf6f6f6
// 0082fb02  c7442458002d9600     mov dword ptr [esp + 0x58], 0x962d00
// 0082fb0a  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 0082fb12  89442460             mov dword ptr [esp + 0x60], eax
// 0082fb16  89442464             mov dword ptr [esp + 0x64], eax
// 0082fb1a  89442468             mov dword ptr [esp + 0x68], eax
// 0082fb1e  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 0082fb26  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 0082fb2e  c74424749ebef500     mov dword ptr [esp + 0x74], 0xf5be9e
// 0082fb36  897c2478             mov dword ptr [esp + 0x78], edi
// 0082fb3a  c744247c161e3600     mov dword ptr [esp + 0x7c], 0x361e16
// 0082fb42  e8b9f5ffff           call 0x82f100
// 0082fb47  50                   push eax
// 0082fb48  6a0c                 push 0xc
// 0082fb4a  e8b1f5ffff           call 0x82f100
// 0082fb4f  50                   push eax
// 0082fb50  e8fbf4ffff           call 0x82f050
// 0082fb55  89442478             mov dword ptr [esp + 0x78], eax
// 0082fb59  33c0                 xor eax, eax
// 0082fb5b  eb03                 jmp 0x82fb60
// 0082fb5d  8d4900               lea ecx, [ecx]
// 0082fb60  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 0082fb64  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 0082fb68  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fb6f  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 0082fb73  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 0082fb77  83c008               add eax, 8
// 0082fb7a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fb81  83f838               cmp eax, 0x38
// 0082fb84  72da                 jb 0x82fb60
// 0082fb86  5f                   pop edi
// 0082fb87  5e                   pop esi
// 0082fb88  83c474               add esp, 0x74
// 0082fb8b  c3                   ret 
// 0082fb8c  b83f5d3800           mov eax, 0x385d3f
// 0082fb91  6a5a                 push 0x5a
// 0082fb93  6a05                 push 5
// 0082fb95  c7442448515e3300     mov dword ptr [esp + 0x48], 0x335e51
// 0082fb9d  c744244c60805800     mov dword ptr [esp + 0x4c], 0x588060
// 0082fba5  c74424509fae7a00     mov dword ptr [esp + 0x50], 0x7aae9f
// 0082fbad  c7442454f4f4ee00     mov dword ptr [esp + 0x54], 0xeef4f4
// 0082fbb5  c7442458758d5e00     mov dword ptr [esp + 0x58], 0x5e8d75
// 0082fbbd  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 0082fbc5  89442460             mov dword ptr [esp + 0x60], eax
// 0082fbc9  89442464             mov dword ptr [esp + 0x64], eax
// 0082fbcd  89442468             mov dword ptr [esp + 0x68], eax
// 0082fbd1  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 0082fbd9  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 0082fbe1  c7442474d9d9a700     mov dword ptr [esp + 0x74], 0xa7d9d9
// 0082fbe9  897c2478             mov dword ptr [esp + 0x78], edi
// 0082fbed  c744247c1f221900     mov dword ptr [esp + 0x7c], 0x19221f
// 0082fbf5  e806f5ffff           call 0x82f100
// 0082fbfa  50                   push eax
// 0082fbfb  6a0c                 push 0xc
// 0082fbfd  e8fef4ffff           call 0x82f100
// 0082fc02  50                   push eax
// 0082fc03  e848f4ffff           call 0x82f050
// 0082fc08  89442478             mov dword ptr [esp + 0x78], eax
// 0082fc0c  33c0                 xor eax, eax
// 0082fc0e  8bff                 mov edi, edi
// 0082fc10  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 0082fc14  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 0082fc18  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fc1f  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 0082fc23  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 0082fc27  83c008               add eax, 8
// 0082fc2a  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fc31  83f838               cmp eax, 0x38
// 0082fc34  72da                 jb 0x82fc10
// 0082fc36  5f                   pop edi
// 0082fc37  5e                   pop esi
// 0082fc38  83c474               add esp, 0x74
// 0082fc3b  c3                   ret 
// 0082fc3c  b84b4b6f00           mov eax, 0x6f4b4b
// 0082fc41  6a5a                 push 0x5a
// 0082fc43  6a05                 push 5
// 0082fc45  c744244854547500     mov dword ptr [esp + 0x48], 0x755454
// 0082fc4d  c744244c6e6d8f00     mov dword ptr [esp + 0x4c], 0x8f6d6e
// 0082fc55  c7442450a8a7be00     mov dword ptr [esp + 0x50], 0xbea7a8
// 0082fc5d  c7442454fdfaff00     mov dword ptr [esp + 0x54], 0xfffafd
// 0082fc65  c74424587c7c9400     mov dword ptr [esp + 0x58], 0x947c7c
// 0082fc6d  c744245cffeec200     mov dword ptr [esp + 0x5c], 0xc2eeff
// 0082fc75  89442460             mov dword ptr [esp + 0x60], eax
// 0082fc79  89442464             mov dword ptr [esp + 0x64], eax
// 0082fc7d  89442468             mov dword ptr [esp + 0x68], eax
// 0082fc81  c744246cfe803e00     mov dword ptr [esp + 0x6c], 0x3e80fe
// 0082fc89  c7442470ffc06f00     mov dword ptr [esp + 0x70], 0x6fc0ff
// 0082fc91  c7442474d7d7e500     mov dword ptr [esp + 0x74], 0xe5d7d7
// 0082fc99  897c2478             mov dword ptr [esp + 0x78], edi
// 0082fc9d  c744247c24202900     mov dword ptr [esp + 0x7c], 0x292024
// 0082fca5  e856f4ffff           call 0x82f100
// 0082fcaa  50                   push eax
// 0082fcab  6a0c                 push 0xc
// 0082fcad  e84ef4ffff           call 0x82f100
// 0082fcb2  50                   push eax
// 0082fcb3  e898f3ffff           call 0x82f050
// 0082fcb8  89442478             mov dword ptr [esp + 0x78], eax
// 0082fcbc  33c0                 xor eax, eax
// 0082fcbe  8bff                 mov edi, edi
// 0082fcc0  8b4c0408             mov ecx, dword ptr [esp + eax + 8]
// 0082fcc4  8b540440             mov edx, dword ptr [esp + eax + 0x40]
// 0082fcc8  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fccf  8b4c040c             mov ecx, dword ptr [esp + eax + 0xc]
// 0082fcd3  8b540444             mov edx, dword ptr [esp + eax + 0x44]
// 0082fcd7  83c008               add eax, 8
// 0082fcda  89948e64030000       mov dword ptr [esi + ecx*4 + 0x364], edx
// 0082fce1  83f838               cmp eax, 0x38
// 0082fce4  72da                 jb 0x82fcc0
// 0082fce6  5f                   pop edi
// 0082fce7  5e                   pop esi
// 0082fce8  83c474               add esp, 0x74
// 0082fceb  c3                   ret 
// 0082fcec  8dbe64030000         lea edi, [esi + 0x364]
// 0082fcf2  b93f000000           mov ecx, 0x3f
// 0082fcf7  83c8ff               or eax, 0xffffffff
// 0082fcfa  f3ab                 rep stosd dword ptr es:[edi], eax
// 0082fcfc  5f                   pop edi
// 0082fcfd  5e                   pop esi
// 0082fcfe  83c474               add esp, 0x74
// 0082fd01  c3                   ret 
// 0082fd02  8bff                 mov edi, edi
// 0082fd04  d9fa                 fsqrt 
// 0082fd06  82008c               add byte ptr [eax], 0x8c
// 0082fd09  fb                   sti 
// 0082fd0a  82003c               add byte ptr [eax], 0x3c
// 0082fd0d  fc                   cld 
// 0082fd0e  8200d9               add byte ptr [eax], 0xd9
// 0082fd11  fa                   cli 
// 0082fd12  8200d9               add byte ptr [eax], 0xd9
// 0082fd15  fa                   cli 
// copied from an identical function in another client (function ?RefreshLunaColors@CXTPColorManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp