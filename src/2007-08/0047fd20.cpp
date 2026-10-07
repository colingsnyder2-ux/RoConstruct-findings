// roc 2007-08 0047fd20  unit: G3D::Win32Window  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047fd20
//
// 0047fd20  6aff                 push -1
// 0047fd22  68775d7400           push 0x745d77
// 0047fd27  64a100000000         mov eax, dword ptr fs:[0]
// 0047fd2d  50                   push eax
// 0047fd2e  81eca8010000         sub esp, 0x1a8
// 0047fd34  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fd39  33c4                 xor eax, esp
// 0047fd3b  898424a4010000       mov dword ptr [esp + 0x1a4], eax
// 0047fd42  53                   push ebx
// 0047fd43  56                   push esi
// 0047fd44  57                   push edi
// 0047fd45  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fd4a  33c4                 xor eax, esp
// 0047fd4c  50                   push eax
// 0047fd4d  8d8424b8010000       lea eax, [esp + 0x1b8]
// 0047fd54  64a300000000         mov dword ptr fs:[0], eax
// 0047fd5a  8bbc24c8010000       mov edi, dword ptr [esp + 0x1c8]
// 0047fd61  8b9c24cc010000       mov ebx, dword ptr [esp + 0x1cc]
// 0047fd68  8d4c2444             lea ecx, [esp + 0x44]
// 0047fd6c  ff15a4e67700         call dword ptr [0x77e6a4]
// 0047fd72  33f6                 xor esi, esi
// 0047fd74  89742470             mov dword ptr [esp + 0x70], esi
// 0047fd78  89742474             mov dword ptr [esp + 0x74], esi
// 0047fd7c  8974246c             mov dword ptr [esp + 0x6c], esi
// 0047fd80  8b03                 mov eax, dword ptr [ebx]
// 0047fd82  8b08                 mov ecx, dword ptr [eax]
// 0047fd84  56                   push esi
// 0047fd85  8d542444             lea edx, [esp + 0x44]
// 0047fd89  52                   push edx
// 0047fd8a  8d5704               lea edx, [edi + 4]
// 0047fd8d  52                   push edx
// 0047fd8e  50                   push eax
// 0047fd8f  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047fd92  c78424d001000001000000 mov dword ptr [esp + 0x1d0], 1
// 0047fd9d  ffd0                 call eax
// 0047fd9f  85c0                 test eax, eax
// 0047fda1  0f85d1000000         jne 0x47fe78
// 0047fda7  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047fdab  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0047fdae  8b08                 mov ecx, dword ptr [eax]
// 0047fdb0  6a06                 push 6
// 0047fdb2  52                   push edx
// 0047fdb3  50                   push eax
// 0047fdb4  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0047fdb7  ffd0                 call eax
// 0047fdb9  85c0                 test eax, eax
// 0047fdbb  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047fdbf  8b08                 mov ecx, dword ptr [eax]
// 0047fdc1  7515                 jne 0x47fdd8
// 0047fdc3  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0047fdc6  68f8877900           push 0x7987f8
// 0047fdcb  50                   push eax
// 0047fdcc  ffd2                 call edx
// 0047fdce  85c0                 test eax, eax
// 0047fdd0  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047fdd4  740d                 je 0x47fde3
// 0047fdd6  8b08                 mov ecx, dword ptr [eax]
// 0047fdd8  8b5108               mov edx, dword ptr [ecx + 8]
// 0047fddb  50                   push eax
// 0047fddc  ffd2                 call edx
// 0047fdde  e995000000           jmp 0x47fe78
// 0047fde3  8d542414             lea edx, [esp + 0x14]
// 0047fde7  c74424142c000000     mov dword ptr [esp + 0x14], 0x2c
// 0047fdef  8b08                 mov ecx, dword ptr [eax]
// 0047fdf1  52                   push edx
// 0047fdf2  50                   push eax
// 0047fdf3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047fdf6  ffd0                 call eax
// 0047fdf8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047fdfc  81c72c010000         add edi, 0x12c
// 0047fe02  894c2468             mov dword ptr [esp + 0x68], ecx
// 0047fe06  57                   push edi
// 0047fe07  8d4c2448             lea ecx, [esp + 0x48]
// 0047fe0b  ff152ce67700         call dword ptr [0x77e62c]
// 0047fe11  bf3c010000           mov edi, 0x13c
// 0047fe16  eb08                 jmp 0x47fe20
// 0047fe18  8da42400000000       lea esp, [esp]
// 0047fe1f  90                   nop 
// 0047fe20  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047fe24  6a01                 push 1
// 0047fe26  8d0cb500000000       lea ecx, [esi*4]
// 0047fe2d  51                   push ecx
// 0047fe2e  8d8c2480000000       lea ecx, [esp + 0x80]
// 0047fe35  89bc2480000000       mov dword ptr [esp + 0x80], edi
// 0047fe3c  8b10                 mov edx, dword ptr [eax]
// 0047fe3e  8b5238               mov edx, dword ptr [edx + 0x38]
// 0047fe41  51                   push ecx
// 0047fe42  50                   push eax
// 0047fe43  ffd2                 call edx
// 0047fe45  85c0                 test eax, eax
// 0047fe47  7512                 jne 0x47fe5b
// 0047fe49  8d442410             lea eax, [esp + 0x10]
// 0047fe4d  50                   push eax
// 0047fe4e  8d4c2470             lea ecx, [esp + 0x70]
// 0047fe52  89742414             mov dword ptr [esp + 0x14], esi
// 0047fe56  e8e5d6ffff           call 0x47d540
// 0047fe5b  83c601               add esi, 1
// 0047fe5e  83fe08               cmp esi, 8
// 0047fe61  72bd                 jb 0x47fe20
// 0047fe63  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0047fe67  8d542440             lea edx, [esp + 0x40]
// 0047fe6b  894c2464             mov dword ptr [esp + 0x64], ecx
// 0047fe6f  52                   push edx
// 0047fe70  8d4b04               lea ecx, [ebx + 4]
// 0047fe73  e8a8fdffff           call 0x47fc20
// 0047fe78  8d4c2440             lea ecx, [esp + 0x40]
// 0047fe7c  c78424c0010000ffffffff mov dword ptr [esp + 0x1c0], 0xffffffff
// 0047fe87  e824c7ffff           call 0x47c5b0
// 0047fe8c  b801000000           mov eax, 1
// 0047fe91  8b8c24b8010000       mov ecx, dword ptr [esp + 0x1b8]
// 0047fe98  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fe9f  59                   pop ecx
// 0047fea0  5f                   pop edi
// 0047fea1  5e                   pop esi
// 0047fea2  5b                   pop ebx
// 0047fea3  8b8c24a4010000       mov ecx, dword ptr [esp + 0x1a4]
// 0047feaa  33cc                 xor ecx, esp
// 0047feac  e86d0b1b00           call 0x630a1e
// 0047feb1  81c4b4010000         add esp, 0x1b4
// 0047feb7  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
