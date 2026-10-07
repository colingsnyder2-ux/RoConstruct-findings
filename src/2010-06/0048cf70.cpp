// roc 2010-06 0048cf70  unit: G3D::Win32Window  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048cf70
//
// 0048cf70  6aff                 push -1
// 0048cf72  68095b9800           push 0x985b09
// 0048cf77  64a100000000         mov eax, dword ptr fs:[0]
// 0048cf7d  50                   push eax
// 0048cf7e  64892500000000       mov dword ptr fs:[0], esp
// 0048cf85  83ec1c               sub esp, 0x1c
// 0048cf88  56                   push esi
// 0048cf89  e872fcffff           call 0x48cc00
// 0048cf8e  50                   push eax
// 0048cf8f  8d4c2408             lea ecx, [esp + 8]
// 0048cf93  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048cf99  8b3558a49e00         mov esi, dword ptr [0x9ea458]
// 0048cf9f  8d442404             lea eax, [esp + 4]
// 0048cfa3  68083ea100           push 0xa13e08
// 0048cfa8  50                   push eax
// 0048cfa9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0048cfb1  ffd6                 call esi
// 0048cfb3  83c408               add esp, 8
// 0048cfb6  8d4c2404             lea ecx, [esp + 4]
// 0048cfba  84c0                 test al, al
// 0048cfbc  7420                 je 0x48cfde
// 0048cfbe  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048cfc6  ff1500a49e00         call dword ptr [0x9ea400]
// 0048cfcc  33c0                 xor eax, eax
// 0048cfce  5e                   pop esi
// 0048cfcf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048cfd3  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cfda  83c428               add esp, 0x28
// 0048cfdd  c3                   ret 
// 0048cfde  68f43da100           push 0xa13df4
// 0048cfe3  51                   push ecx
// 0048cfe4  ffd6                 call esi
// 0048cfe6  83c408               add esp, 8
// 0048cfe9  84c0                 test al, al
// 0048cfeb  7427                 je 0x48d014
// 0048cfed  8d4c2404             lea ecx, [esp + 4]
// 0048cff1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048cff9  ff1500a49e00         call dword ptr [0x9ea400]
// 0048cfff  b801000000           mov eax, 1
// 0048d004  5e                   pop esi
// 0048d005  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048d009  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d010  83c428               add esp, 0x28
// 0048d013  c3                   ret 
// 0048d014  8d542404             lea edx, [esp + 4]
// 0048d018  68e83da100           push 0xa13de8
// 0048d01d  52                   push edx
// 0048d01e  ffd6                 call esi
// 0048d020  83c408               add esp, 8
// 0048d023  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048d02b  8d4c2404             lea ecx, [esp + 4]
// 0048d02f  84c0                 test al, al
// 0048d031  741b                 je 0x48d04e
// 0048d033  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d039  b802000000           mov eax, 2
// 0048d03e  5e                   pop esi
// 0048d03f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048d043  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d04a  83c428               add esp, 0x28
// 0048d04d  c3                   ret 
// 0048d04e  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d054  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048d058  b803000000           mov eax, 3
// 0048d05d  5e                   pop esi
// 0048d05e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d065  83c428               add esp, 0x28
// 0048d068  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?computeVendor@GLCaps@G3D@@CA?AW4Vendor@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
