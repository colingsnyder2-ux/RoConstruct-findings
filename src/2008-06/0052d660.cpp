// from server: 87% by colin
// roc 2008-06 0052d660  unit: seg_00520000  size: 1310 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052d660
//
// 0052d660  55                   push ebp
// 0052d661  8bec                 mov ebp, esp
// 0052d663  83e4c0               and esp, 0xffffffc0
// 0052d666  83ec74               sub esp, 0x74
// 0052d669  53                   push ebx
// 0052d66a  56                   push esi
// 0052d66b  8b7508               mov esi, dword ptr [ebp + 8]
// 0052d66e  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052d671  57                   push edi
// 0052d672  a801                 test al, 1
// 0052d674  750d                 jne 0x52d683
// 0052d676  6844c18200           push 0x82c144
// 0052d67b  56                   push esi
// 0052d67c  e82fc3ffff           call 0x5299b0
// 0052d681  eb32                 jmp 0x52d6b5
// 0052d683  a804                 test al, 4
// 0052d685  741f                 je 0x52d6a6
// 0052d687  682cc18200           push 0x82c12c
// 0052d68c  56                   push esi
// 0052d68d  e8bec3ffff           call 0x529a50
// 0052d692  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0052d695  50                   push eax
// 0052d696  56                   push esi
// 0052d697  e844f8ffff           call 0x52cee0
// 0052d69c  83c410               add esp, 0x10
// 0052d69f  5f                   pop edi
// 0052d6a0  5e                   pop esi
// 0052d6a1  5b                   pop ebx
// 0052d6a2  8be5                 mov esp, ebp
// 0052d6a4  5d                   pop ebp
// 0052d6a5  c3                   ret 
// 0052d6a6  a802                 test al, 2
// 0052d6a8  740e                 je 0x52d6b8
// 0052d6aa  6810c18200           push 0x82c110
// 0052d6af  56                   push esi
// 0052d6b0  e89bc3ffff           call 0x529a50
// 0052d6b5  83c408               add esp, 8
// 0052d6b8  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0052d6bb  85c0                 test eax, eax
// 0052d6bd  742d                 je 0x52d6ec
// 0052d6bf  8b4008               mov eax, dword ptr [eax + 8]
// 0052d6c2  a804                 test al, 4
// 0052d6c4  7426                 je 0x52d6ec
// 0052d6c6  a900080000           test eax, 0x800
// 0052d6cb  751f                 jne 0x52d6ec
// 0052d6cd  68f8c08200           push 0x82c0f8
// 0052d6d2  56                   push esi
// 0052d6d3  e878c3ffff           call 0x529a50
// 0052d6d8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0052d6db  51                   push ecx
// 0052d6dc  56                   push esi
// 0052d6dd  e8fef7ffff           call 0x52cee0
// 0052d6e2  83c410               add esp, 0x10
// 0052d6e5  5f                   pop edi
// 0052d6e6  5e                   pop esi
// 0052d6e7  5b                   pop ebx
// 0052d6e8  8be5                 mov esp, ebp
// 0052d6ea  5d                   pop ebp
// 0052d6eb  c3                   ret 
// 0052d6ec  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0052d6ef  83ff20               cmp edi, 0x20
// 0052d6f2  741c                 je 0x52d710
// 0052d6f4  68dcc08200           push 0x82c0dc
// 0052d6f9  56                   push esi
// 0052d6fa  e851c3ffff           call 0x529a50
// 0052d6ff  57                   push edi
// 0052d700  56                   push esi
// 0052d701  e8daf7ffff           call 0x52cee0
// 0052d706  83c410               add esp, 0x10
// 0052d709  5f                   pop edi
// 0052d70a  5e                   pop esi
// 0052d70b  5b                   pop ebx
// 0052d70c  8be5                 mov esp, ebp
// 0052d70e  5d                   pop ebp
// 0052d70f  c3                   ret 
// 0052d710  6a04                 push 4
// 0052d712  8d542448             lea edx, [esp + 0x48]
// 0052d716  52                   push edx
// 0052d717  56                   push esi
// 0052d718  e89373ffff           call 0x524ab0
// 0052d71d  6a04                 push 4
// 0052d71f  8d442454             lea eax, [esp + 0x54]
// 0052d723  50                   push eax
// 0052d724  56                   push esi
// 0052d725  e85606ffff           call 0x51dd80
// 0052d72a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0052d72e  0fb654245e           movzx edx, byte ptr [esp + 0x5e]
// 0052d733  0fb6f8               movzx edi, al
// 0052d736  0fb6cc               movzx ecx, ah
// 0052d739  0fb644245f           movzx eax, byte ptr [esp + 0x5f]
// 0052d73e  c1e708               shl edi, 8
// 0052d741  03f9                 add edi, ecx
// 0052d743  c1e708               shl edi, 8
// 0052d746  03fa                 add edi, edx
// 0052d748  6a04                 push 4
// 0052d74a  8d4c2460             lea ecx, [esp + 0x60]
// 0052d74e  51                   push ecx
// 0052d74f  c1e708               shl edi, 8
// 0052d752  56                   push esi
// 0052d753  03f8                 add edi, eax
// 0052d755  e85673ffff           call 0x524ab0
// 0052d75a  6a04                 push 4
// 0052d75c  8d54246c             lea edx, [esp + 0x6c]
// 0052d760  52                   push edx
// 0052d761  56                   push esi
// 0052d762  e81906ffff           call 0x51dd80
// 0052d767  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0052d76b  0fb6542476           movzx edx, byte ptr [esp + 0x76]
// 0052d770  0fb6c1               movzx eax, cl
// 0052d773  c1e008               shl eax, 8
// 0052d776  0fb6cd               movzx ecx, ch
// 0052d779  03c1                 add eax, ecx
// 0052d77b  0fb64c2477           movzx ecx, byte ptr [esp + 0x77]
// 0052d780  c1e008               shl eax, 8
// 0052d783  03c2                 add eax, edx
// 0052d785  c1e008               shl eax, 8
// 0052d788  83c430               add esp, 0x30
// 0052d78b  03c1                 add eax, ecx
// 0052d78d  81ff80380100         cmp edi, 0x13880
// 0052d793  0f87c8030000         ja 0x52db61
// 0052d799  3d80380100           cmp eax, 0x13880
// 0052d79e  0f87bd030000         ja 0x52db61
// 0052d7a4  8d1438               lea edx, [eax + edi]
// 0052d7a7  81faa0860100         cmp edx, 0x186a0
// 0052d7ad  0f87ae030000         ja 0x52db61
// 0052d7b3  89442458             mov dword ptr [esp + 0x58], eax
// 0052d7b7  6a04                 push 4
// 0052d7b9  8d442448             lea eax, [esp + 0x48]
// 0052d7bd  50                   push eax
// 0052d7be  56                   push esi
// 0052d7bf  897c2468             mov dword ptr [esp + 0x68], edi
// 0052d7c3  e8d8e6ffff           call 0x52bea0
// 0052d7c8  8d4c2450             lea ecx, [esp + 0x50]
// 0052d7cc  51                   push ecx
// 0052d7cd  e89ee6ffff           call 0x52be70
// 0052d7d2  6a04                 push 4
// 0052d7d4  8d542458             lea edx, [esp + 0x58]
// 0052d7d8  52                   push edx
// 0052d7d9  56                   push esi
// 0052d7da  8bf8                 mov edi, eax
// 0052d7dc  e8bfe6ffff           call 0x52bea0
// 0052d7e1  8d442460             lea eax, [esp + 0x60]
// 0052d7e5  50                   push eax
// 0052d7e6  e885e6ffff           call 0x52be70
// 0052d7eb  83c420               add esp, 0x20
// 0052d7ee  81ff80380100         cmp edi, 0x13880
// 0052d7f4  0f874a030000         ja 0x52db44
// 0052d7fa  3d80380100           cmp eax, 0x13880
// 0052d7ff  0f873f030000         ja 0x52db44
// 0052d805  8d0c38               lea ecx, [eax + edi]
// 0052d808  81f9a0860100         cmp ecx, 0x186a0
// 0052d80e  0f8730030000         ja 0x52db44
// 0052d814  6a04                 push 4
// 0052d816  8d542448             lea edx, [esp + 0x48]
// 0052d81a  52                   push edx
// 0052d81b  56                   push esi
// 0052d81c  897c2460             mov dword ptr [esp + 0x60], edi
// 0052d820  8944245c             mov dword ptr [esp + 0x5c], eax
// 0052d824  e877e6ffff           call 0x52bea0
// 0052d829  8d442450             lea eax, [esp + 0x50]
// 0052d82d  50                   push eax
// 0052d82e  e83de6ffff           call 0x52be70
// 0052d833  6a04                 push 4
// 0052d835  8d4c2458             lea ecx, [esp + 0x58]
// 0052d839  51                   push ecx
// 0052d83a  56                   push esi
// 0052d83b  8bf8                 mov edi, eax
// 0052d83d  e85ee6ffff           call 0x52bea0
// 0052d842  8d542460             lea edx, [esp + 0x60]
// 0052d846  52                   push edx
// 0052d847  e824e6ffff           call 0x52be70
// 0052d84c  83c420               add esp, 0x20
// 0052d84f  81ff80380100         cmp edi, 0x13880
// 0052d855  0f87cc020000         ja 0x52db27
// 0052d85b  3d80380100           cmp eax, 0x13880
// 0052d860  0f87c1020000         ja 0x52db27
// 0052d866  8d0c38               lea ecx, [eax + edi]
// 0052d869  81f9a0860100         cmp ecx, 0x186a0
// 0052d86f  0f87b2020000         ja 0x52db27
// 0052d875  6a04                 push 4
// 0052d877  8d542448             lea edx, [esp + 0x48]
// 0052d87b  52                   push edx
// 0052d87c  56                   push esi
// 0052d87d  897c2458             mov dword ptr [esp + 0x58], edi
// 0052d881  89442454             mov dword ptr [esp + 0x54], eax
// 0052d885  e816e6ffff           call 0x52bea0
// 0052d88a  8d442450             lea eax, [esp + 0x50]
// 0052d88e  50                   push eax
// 0052d88f  e8dce5ffff           call 0x52be70
// 0052d894  6a04                 push 4
// 0052d896  8d4c2458             lea ecx, [esp + 0x58]
// 0052d89a  51                   push ecx
// 0052d89b  8bf8                 mov edi, eax
// 0052d89d  56                   push esi
// 0052d89e  897c247c             mov dword ptr [esp + 0x7c], edi
// 0052d8a2  e8f9e5ffff           call 0x52bea0
// 0052d8a7  8d542460             lea edx, [esp + 0x60]
// 0052d8ab  52                   push edx
// 0052d8ac  e8bfe5ffff           call 0x52be70
// 0052d8b1  83c420               add esp, 0x20
// 0052d8b4  8bd8                 mov ebx, eax
// 0052d8b6  895c2464             mov dword ptr [esp + 0x64], ebx
// 0052d8ba  81ff80380100         cmp edi, 0x13880
// 0052d8c0  0f8744020000         ja 0x52db0a
// 0052d8c6  81fb80380100         cmp ebx, 0x13880
// 0052d8cc  0f8738020000         ja 0x52db0a
// 0052d8d2  8d043b               lea eax, [ebx + edi]
// 0052d8d5  3da0860100           cmp eax, 0x186a0
// 0052d8da  0f872a020000         ja 0x52db0a
// 0052d8e0  db44245c             fild dword ptr [esp + 0x5c]
// 0052d8e4  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0052d8e7  f7400800080000       test dword ptr [eax + 8], 0x800
// 0052d8ee  d905b0b38200         fld dword ptr [0x82b3b0]
// 0052d8f4  dcc9                 fmul st(1), st(0)
// 0052d8f6  d9c9                 fxch st(1)
// 0052d8f8  d9542474             fst dword ptr [esp + 0x74]
// 0052d8fc  db442458             fild dword ptr [esp + 0x58]
// 0052d900  d8ca                 fmul st(2)
// 0052d902  d9542470             fst dword ptr [esp + 0x70]
// 0052d906  db442454             fild dword ptr [esp + 0x54]
// 0052d90a  d8cb                 fmul st(3)
// 0052d90c  d954246c             fst dword ptr [esp + 0x6c]
// 0052d910  db442450             fild dword ptr [esp + 0x50]
// 0052d914  d8cc                 fmul st(4)
// 0052d916  d9542468             fst dword ptr [esp + 0x68]
// 0052d91a  db44244c             fild dword ptr [esp + 0x4c]
// 0052d91e  d8cd                 fmul st(5)
// 0052d920  d954247c             fst dword ptr [esp + 0x7c]
// 0052d924  db442448             fild dword ptr [esp + 0x48]
// 0052d928  d8ce                 fmul st(6)
// 0052d92a  d9542478             fst dword ptr [esp + 0x78]
// 0052d92e  db442460             fild dword ptr [esp + 0x60]
// 0052d932  d8cf                 fmul st(7)
// 0052d934  d95c2460             fstp dword ptr [esp + 0x60]
// 0052d938  db442464             fild dword ptr [esp + 0x64]
// 0052d93c  decf                 fmulp st(7)
// 0052d93e  d9ce                 fxch st(6)
// 0052d940  d9542464             fst dword ptr [esp + 0x64]
// 0052d944  0f8435010000         je 0x52da7f
// 0052d94a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0052d94e  ddd8                 fstp st(0)
// 0052d950  dddc                 fstp st(4)
// 0052d952  81c1c289ffff         add ecx, 0xffff89c2
// 0052d958  ddda                 fstp st(2)
// 0052d95a  ddd8                 fstp st(0)
// 0052d95c  ddd8                 fstp st(0)
// 0052d95e  ddd8                 fstp st(0)
// 0052d960  ddd8                 fstp st(0)
// 0052d962  81f9d0070000         cmp ecx, 0x7d0
// 0052d968  777a                 ja 0x52d9e4
// 0052d96a  8b542458             mov edx, dword ptr [esp + 0x58]
// 0052d96e  81c26483ffff         add edx, 0xffff8364
// 0052d974  81fad0070000         cmp edx, 0x7d0
// 0052d97a  7768                 ja 0x52d9e4
// 0052d97c  8b442454             mov eax, dword ptr [esp + 0x54]
// 0052d980  05e809ffff           add eax, 0xffff09e8
// 0052d985  3dd0070000           cmp eax, 0x7d0
// 0052d98a  7758                 ja 0x52d9e4
// 0052d98c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0052d990  81c10083ffff         add ecx, 0xffff8300
// 0052d996  81f9d0070000         cmp ecx, 0x7d0
// 0052d99c  7746                 ja 0x52d9e4
// 0052d99e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0052d9a2  81c2b88effff         add edx, 0xffff8eb8
// 0052d9a8  81fad0070000         cmp edx, 0x7d0
// 0052d9ae  7734                 ja 0x52d9e4
// 0052d9b0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0052d9b4  058819ffff           add eax, 0xffff1988
// 0052d9b9  3dd0070000           cmp eax, 0x7d0
// 0052d9be  7724                 ja 0x52d9e4
// 0052d9c0  81ffb0360000         cmp edi, 0x36b0
// 0052d9c6  7c1c                 jl 0x52d9e4
// 0052d9c8  81ff803e0000         cmp edi, 0x3e80
// 0052d9ce  7f14                 jg 0x52d9e4
// 0052d9d0  81fb88130000         cmp ebx, 0x1388
// 0052d9d6  7c0c                 jl 0x52d9e4
// 0052d9d8  81fb581b0000         cmp ebx, 0x1b58
// 0052d9de  0f8e89000000         jle 0x52da6d
// 0052d9e4  68a4c08200           push 0x82c0a4
// 0052d9e9  56                   push esi
// 0052d9ea  e861c0ffff           call 0x529a50
// 0052d9ef  d9442470             fld dword ptr [esp + 0x70]
// 0052d9f3  8b3d58278000         mov edi, dword ptr [0x802758]
// 0052d9f9  dd1c24               fstp qword ptr [esp]
// 0052d9fc  d9442474             fld dword ptr [esp + 0x74]
// 0052da00  83ec18               sub esp, 0x18
// 0052da03  dd5c2410             fstp qword ptr [esp + 0x10]
// 0052da07  d9842490000000       fld dword ptr [esp + 0x90]
// 0052da0e  dd5c2408             fstp qword ptr [esp + 8]
// 0052da12  d9842494000000       fld dword ptr [esp + 0x94]
// 0052da19  dd1c24               fstp qword ptr [esp]
// 0052da1c  6888c08200           push 0x82c088
// 0052da21  ffd7                 call edi
// 0052da23  8b1d1c288000         mov ebx, dword ptr [0x80281c]
// 0052da29  83c040               add eax, 0x40
// 0052da2c  50                   push eax
// 0052da2d  ffd3                 call ebx
// 0052da2f  d984248c000000       fld dword ptr [esp + 0x8c]
// 0052da36  dd5c2420             fstp qword ptr [esp + 0x20]
// 0052da3a  83c408               add esp, 8
// 0052da3d  d9842480000000       fld dword ptr [esp + 0x80]
// 0052da44  dd5c2410             fstp qword ptr [esp + 0x10]
// 0052da48  d9842498000000       fld dword ptr [esp + 0x98]
// 0052da4f  dd5c2408             fstp qword ptr [esp + 8]
// 0052da53  d984249c000000       fld dword ptr [esp + 0x9c]
// 0052da5a  dd1c24               fstp qword ptr [esp]
// 0052da5d  686cc08200           push 0x82c06c
// 0052da62  ffd7                 call edi
// 0052da64  83c040               add eax, 0x40
// 0052da67  50                   push eax
// 0052da68  ffd3                 call ebx
// 0052da6a  83c428               add esp, 0x28
// 0052da6d  6a00                 push 0
// 0052da6f  56                   push esi
// 0052da70  e86bf4ffff           call 0x52cee0
// 0052da75  83c408               add esp, 8
// 0052da78  5f                   pop edi
// 0052da79  5e                   pop esi
// 0052da7a  5b                   pop ebx
// 0052da7b  8be5                 mov esp, ebp
// 0052da7d  5d                   pop ebp
// 0052da7e  c3                   ret 
// 0052da7f  83ec40               sub esp, 0x40
// 0052da82  dd5c2438             fstp qword ptr [esp + 0x38]
// 0052da86  d98424a0000000       fld dword ptr [esp + 0xa0]
// 0052da8d  dd5c2430             fstp qword ptr [esp + 0x30]
// 0052da91  d9cd                 fxch st(5)
// 0052da93  dd5c2428             fstp qword ptr [esp + 0x28]
// 0052da97  d9cc                 fxch st(4)
// 0052da99  dd5c2420             fstp qword ptr [esp + 0x20]
// 0052da9d  d9cb                 fxch st(3)
// 0052da9f  dd5c2418             fstp qword ptr [esp + 0x18]
// 0052daa3  d9ca                 fxch st(2)
// 0052daa5  dd5c2410             fstp qword ptr [esp + 0x10]
// 0052daa9  d9c9                 fxch st(1)
// 0052daab  dd5c2408             fstp qword ptr [esp + 8]
// 0052daaf  dd1c24               fstp qword ptr [esp]
// 0052dab2  50                   push eax
// 0052dab3  56                   push esi
// 0052dab4  e8e7ecfeff           call 0x51c7a0
// 0052dab9  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0052dac0  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0052dac7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0052dace  53                   push ebx
// 0052dacf  57                   push edi
// 0052dad0  51                   push ecx
// 0052dad1  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0052dad8  52                   push edx
// 0052dad9  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 0052dae0  50                   push eax
// 0052dae1  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 0052dae8  51                   push ecx
// 0052dae9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0052daec  52                   push edx
// 0052daed  50                   push eax
// 0052daee  51                   push ecx
// 0052daef  56                   push esi
// 0052daf0  e8ebeffeff           call 0x51cae0
// 0052daf5  83c470               add esp, 0x70
// 0052daf8  6a00                 push 0
// 0052dafa  56                   push esi
// 0052dafb  e8e0f3ffff           call 0x52cee0
// 0052db00  83c408               add esp, 8
// 0052db03  5f                   pop edi
// 0052db04  5e                   pop esi
// 0052db05  5b                   pop ebx
// 0052db06  8be5                 mov esp, ebp
// 0052db08  5d                   pop ebp
// 0052db09  c3                   ret 
// 0052db0a  6854c08200           push 0x82c054
// 0052db0f  56                   push esi
// 0052db10  e83bbfffff           call 0x529a50
// 0052db15  6a00                 push 0
// 0052db17  56                   push esi
// 0052db18  e8c3f3ffff           call 0x52cee0
// 0052db1d  83c410               add esp, 0x10
// 0052db20  5f                   pop edi
// 0052db21  5e                   pop esi
// 0052db22  5b                   pop ebx
// 0052db23  8be5                 mov esp, ebp
// 0052db25  5d                   pop ebp
// 0052db26  c3                   ret 
// 0052db27  6838c08200           push 0x82c038
// 0052db2c  56                   push esi
// 0052db2d  e81ebfffff           call 0x529a50
// 0052db32  6a08                 push 8
// 0052db34  56                   push esi
// 0052db35  e8a6f3ffff           call 0x52cee0
// 0052db3a  83c410               add esp, 0x10
// 0052db3d  5f                   pop edi
// 0052db3e  5e                   pop esi
// 0052db3f  5b                   pop ebx
// 0052db40  8be5                 mov esp, ebp
// 0052db42  5d                   pop ebp
// 0052db43  c3                   ret 
// 0052db44  6820c08200           push 0x82c020
// 0052db49  56                   push esi
// 0052db4a  e801bfffff           call 0x529a50
// 0052db4f  6a10                 push 0x10
// 0052db51  56                   push esi
// 0052db52  e889f3ffff           call 0x52cee0
// 0052db57  83c410               add esp, 0x10
// 0052db5a  5f                   pop edi
// 0052db5b  5e                   pop esi
// 0052db5c  5b                   pop ebx
// 0052db5d  8be5                 mov esp, ebp
// 0052db5f  5d                   pop ebp
// 0052db60  c3                   ret 
// 0052db61  6804c08200           push 0x82c004
// 0052db66  56                   push esi
// 0052db67  e8e4beffff           call 0x529a50
// 0052db6c  6a18                 push 0x18
// 0052db6e  56                   push esi
// 0052db6f  e86cf3ffff           call 0x52cee0
// 0052db74  83c410               add esp, 0x10
// 0052db77  5f                   pop edi
// 0052db78  5e                   pop esi
// 0052db79  5b                   pop ebx
// 0052db7a  8be5                 mov esp, ebp
// 0052db7c  5d                   pop ebp
// 0052db7d  c3                   ret 

// from server: 78% by colin
// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: libpng-1.2.6 pngrutil.c