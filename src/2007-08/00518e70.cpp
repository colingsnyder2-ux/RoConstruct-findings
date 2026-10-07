// roc 2007-08 00518e70  unit: seg_00510000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518e70
//
// 00518e70  8b442404             mov eax, dword ptr [esp + 4]
// 00518e74  f7407000100000       test dword ptr [eax + 0x70], 0x1000
// 00518e7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00518e7f  743f                 je 0x518ec0
// 00518e81  8a5119               mov dl, byte ptr [ecx + 0x19]
// 00518e84  80fa03               cmp dl, 3
// 00518e87  7517                 jne 0x518ea0
// 00518e89  6683b81a01000000     cmp word ptr [eax + 0x11a], 0
// 00518e91  0f95c2               setne dl
// 00518e94  8d149502000000       lea edx, [edx*4 + 2]
// 00518e9b  885119               mov byte ptr [ecx + 0x19], dl
// 00518e9e  eb16                 jmp 0x518eb6
// 00518ea0  6683b81a01000000     cmp word ptr [eax + 0x11a], 0
// 00518ea8  7406                 je 0x518eb0
// 00518eaa  80ca04               or dl, 4
// 00518ead  885119               mov byte ptr [ecx + 0x19], dl
// 00518eb0  80791808             cmp byte ptr [ecx + 0x18], 8
// 00518eb4  7304                 jae 0x518eba
// 00518eb6  c6411808             mov byte ptr [ecx + 0x18], 8
// 00518eba  66c741160000         mov word ptr [ecx + 0x16], 0
// 00518ec0  f6407080             test byte ptr [eax + 0x70], 0x80
// 00518ec4  7427                 je 0x518eed
// 00518ec6  806119fb             and byte ptr [ecx + 0x19], 0xfb
// 00518eca  66c741160000         mov word ptr [ecx + 0x16], 0
// 00518ed0  8b9038010000         mov edx, dword ptr [eax + 0x138]
// 00518ed6  89515a               mov dword ptr [ecx + 0x5a], edx
// 00518ed9  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 00518edf  89515e               mov dword ptr [ecx + 0x5e], edx
// 00518ee2  668b9040010000       mov dx, word ptr [eax + 0x140]
// 00518ee9  66895162             mov word ptr [ecx + 0x62], dx
// 00518eed  f7407000200000       test dword ptr [eax + 0x70], 0x2000
// 00518ef4  7415                 je 0x518f0b
// 00518ef6  d9805c010000         fld dword ptr [eax + 0x15c]
// 00518efc  d95928               fstp dword ptr [ecx + 0x28]
// 00518eff  8b9034020000         mov edx, dword ptr [eax + 0x234]
// 00518f05  8991fc000000         mov dword ptr [ecx + 0xfc], edx
// 00518f0b  f7407000040000       test dword ptr [eax + 0x70], 0x400
// 00518f12  740a                 je 0x518f1e
// 00518f14  80791810             cmp byte ptr [ecx + 0x18], 0x10
// 00518f18  7504                 jne 0x518f1e
// 00518f1a  c6411808             mov byte ptr [ecx + 0x18], 8
// 00518f1e  f6407040             test byte ptr [eax + 0x70], 0x40
// 00518f22  7420                 je 0x518f44
// 00518f24  8a5119               mov dl, byte ptr [ecx + 0x19]
// 00518f27  80fa02               cmp dl, 2
// 00518f2a  7405                 je 0x518f31
// 00518f2c  80fa06               cmp dl, 6
// 00518f2f  7513                 jne 0x518f44
// 00518f31  83b8ec01000000       cmp dword ptr [eax + 0x1ec], 0
// 00518f38  740a                 je 0x518f44
// 00518f3a  80791808             cmp byte ptr [ecx + 0x18], 8
// 00518f3e  7504                 jne 0x518f44
// 00518f40  c6411903             mov byte ptr [ecx + 0x19], 3
// 00518f44  f6407004             test byte ptr [eax + 0x70], 4
// 00518f48  740a                 je 0x518f54
// 00518f4a  80791808             cmp byte ptr [ecx + 0x18], 8
// 00518f4e  7304                 jae 0x518f54
// 00518f50  c6411808             mov byte ptr [ecx + 0x18], 8
// 00518f54  f7407000400000       test dword ptr [eax + 0x70], 0x4000
// 00518f5b  7404                 je 0x518f61
// 00518f5d  80491902             or byte ptr [ecx + 0x19], 2
// 00518f61  f7407000006000       test dword ptr [eax + 0x70], 0x600000
// 00518f68  7404                 je 0x518f6e
// 00518f6a  806119fd             and byte ptr [ecx + 0x19], 0xfd
// 00518f6e  8a5119               mov dl, byte ptr [ecx + 0x19]
// 00518f71  80fa03               cmp dl, 3
// 00518f74  53                   push ebx
// 00518f75  b301                 mov bl, 1
// 00518f77  740b                 je 0x518f84
// 00518f79  f6c202               test dl, 2
// 00518f7c  7406                 je 0x518f84
// 00518f7e  c6411d03             mov byte ptr [ecx + 0x1d], 3
// 00518f82  eb03                 jmp 0x518f87
// 00518f84  88591d               mov byte ptr [ecx + 0x1d], bl
// 00518f87  f7407000000400       test dword ptr [eax + 0x70], 0x40000
// 00518f8e  7406                 je 0x518f96
// 00518f90  80e2fb               and dl, 0xfb
// 00518f93  885119               mov byte ptr [ecx + 0x19], dl
// 00518f96  8a5119               mov dl, byte ptr [ecx + 0x19]
// 00518f99  f6c204               test dl, 4
// 00518f9c  7403                 je 0x518fa1
// 00518f9e  00591d               add byte ptr [ecx + 0x1d], bl
// 00518fa1  f7407000800000       test dword ptr [eax + 0x70], 0x8000
// 00518fa8  741b                 je 0x518fc5
// 00518faa  80fa02               cmp dl, 2
// 00518fad  7404                 je 0x518fb3
// 00518faf  84d2                 test dl, dl
// 00518fb1  7512                 jne 0x518fc5
// 00518fb3  00591d               add byte ptr [ecx + 0x1d], bl
// 00518fb6  f7407000000001       test dword ptr [eax + 0x70], 0x1000000
// 00518fbd  7406                 je 0x518fc5
// 00518fbf  80ca04               or dl, 4
// 00518fc2  885119               mov byte ptr [ecx + 0x19], dl
// 00518fc5  f7407000001000       test dword ptr [eax + 0x70], 0x100000
// 00518fcc  5b                   pop ebx
// 00518fcd  7416                 je 0x518fe5
// 00518fcf  8a5064               mov dl, byte ptr [eax + 0x64]
// 00518fd2  385118               cmp byte ptr [ecx + 0x18], dl
// 00518fd5  7303                 jae 0x518fda
// 00518fd7  885118               mov byte ptr [ecx + 0x18], dl
// 00518fda  8a4065               mov al, byte ptr [eax + 0x65]
// 00518fdd  38411d               cmp byte ptr [ecx + 0x1d], al
// 00518fe0  7303                 jae 0x518fe5
// 00518fe2  88411d               mov byte ptr [ecx + 0x1d], al
// 00518fe5  8a4118               mov al, byte ptr [ecx + 0x18]
// 00518fe8  f6691d               imul byte ptr [ecx + 0x1d]
// 00518feb  88411e               mov byte ptr [ecx + 0x1e], al
// 00518fee  3c08                 cmp al, 8
// 00518ff0  0fb6c0               movzx eax, al
// 00518ff3  720a                 jb 0x518fff
// 00518ff5  c1e803               shr eax, 3
// 00518ff8  0faf01               imul eax, dword ptr [ecx]
// 00518ffb  89410c               mov dword ptr [ecx + 0xc], eax
// 00518ffe  c3                   ret 
// 00518fff  0faf01               imul eax, dword ptr [ecx]
// 00519002  83c007               add eax, 7
// 00519005  c1e803               shr eax, 3
// 00519008  89410c               mov dword ptr [ecx + 0xc], eax
// 0051900b  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_read_transform_info)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
