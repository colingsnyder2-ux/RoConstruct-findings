// roc 2008-06 00744f20  unit: VCRect::?$CArray  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00744f20
//
// 00744f20  83ec44               sub esp, 0x44
// 00744f23  56                   push esi
// 00744f24  6a2c                 push 0x2c
// 00744f26  33f6                 xor esi, esi
// 00744f28  8d442420             lea eax, [esp + 0x20]
// 00744f2c  56                   push esi
// 00744f2d  50                   push eax
// 00744f2e  e8d1c7f5ff           call 0x6a1704
// 00744f33  8b542460             mov edx, dword ptr [esp + 0x60]
// 00744f37  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00744f3b  83c40c               add esp, 0xc
// 00744f3e  56                   push esi
// 00744f3f  f7da                 neg edx
// 00744f41  56                   push esi
// 00744f42  8954242c             mov dword ptr [esp + 0x2c], edx
// 00744f46  8d542410             lea edx, [esp + 0x10]
// 00744f4a  52                   push edx
// 00744f4b  b801000000           mov eax, 1
// 00744f50  6689442434           mov word ptr [esp + 0x34], ax
// 00744f55  56                   push esi
// 00744f56  8d44242c             lea eax, [esp + 0x2c]
// 00744f5a  894c2430             mov dword ptr [esp + 0x30], ecx
// 00744f5e  50                   push eax
// 00744f5f  b920000000           mov ecx, 0x20
// 00744f64  56                   push esi
// 00744f65  c744243428000000     mov dword ptr [esp + 0x34], 0x28
// 00744f6d  66894c2442           mov word ptr [esp + 0x42], cx
// 00744f72  89742444             mov dword ptr [esp + 0x44], esi
// 00744f76  ff154c218000         call dword ptr [0x80214c]
// 00744f7c  8bc8                 mov ecx, eax
// 00744f7e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00744f82  3bce                 cmp ecx, esi
// 00744f84  0f84ad000000         je 0x745037
// 00744f8a  39742408             cmp dword ptr [esp + 8], esi
// 00744f8e  0f84a3000000         je 0x745037
// 00744f94  8b442450             mov eax, dword ptr [esp + 0x50]
// 00744f98  53                   push ebx
// 00744f99  57                   push edi
// 00744f9a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00744f9e  8bd8                 mov ebx, eax
// 00744fa0  0fafdf               imul ebx, edi
// 00744fa3  3974245c             cmp dword ptr [esp + 0x5c], esi
// 00744fa7  8d148500000000       lea edx, [eax*4]
// 00744fae  895c2418             mov dword ptr [esp + 0x18], ebx
// 00744fb2  8954241c             mov dword ptr [esp + 0x1c], edx
// 00744fb6  89742414             mov dword ptr [esp + 0x14], esi
// 00744fba  7e70                 jle 0x74502c
// 00744fbc  55                   push ebp
// 00744fbd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00744fc1  89742410             mov dword ptr [esp + 0x10], esi
// 00744fc5  8b742410             mov esi, dword ptr [esp + 0x10]
// 00744fc9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00744fcd  03ce                 add ecx, esi
// 00744fcf  33f6                 xor esi, esi
// 00744fd1  8bd5                 mov edx, ebp
// 00744fd3  85c0                 test eax, eax
// 00744fd5  7e37                 jle 0x74500e
// 00744fd7  8a02                 mov al, byte ptr [edx]
// 00744fd9  0fb65a01             movzx ebx, byte ptr [edx + 1]
// 00744fdd  42                   inc edx
// 00744fde  42                   inc edx
// 00744fdf  885c2464             mov byte ptr [esp + 0x64], bl
// 00744fe3  8a1a                 mov bl, byte ptr [edx]
// 00744fe5  8819                 mov byte ptr [ecx], bl
// 00744fe7  0fb65c2464           movzx ebx, byte ptr [esp + 0x64]
// 00744fec  41                   inc ecx
// 00744fed  8819                 mov byte ptr [ecx], bl
// 00744fef  41                   inc ecx
// 00744ff0  8801                 mov byte ptr [ecx], al
// 00744ff2  42                   inc edx
// 00744ff3  41                   inc ecx
// 00744ff4  32c0                 xor al, al
// 00744ff6  83ff04               cmp edi, 4
// 00744ff9  7503                 jne 0x744ffe
// 00744ffb  8a02                 mov al, byte ptr [edx]
// 00744ffd  42                   inc edx
// 00744ffe  8801                 mov byte ptr [ecx], al
// 00745000  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00745004  46                   inc esi
// 00745005  41                   inc ecx
// 00745006  3bf0                 cmp esi, eax
// 00745008  7ccd                 jl 0x744fd7
// 0074500a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0074500e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00745012  8b542420             mov edx, dword ptr [esp + 0x20]
// 00745016  01542410             add dword ptr [esp + 0x10], edx
// 0074501a  41                   inc ecx
// 0074501b  03eb                 add ebp, ebx
// 0074501d  3b4c2460             cmp ecx, dword ptr [esp + 0x60]
// 00745021  894c2418             mov dword ptr [esp + 0x18], ecx
// 00745025  7c9e                 jl 0x744fc5
// 00745027  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074502b  5d                   pop ebp
// 0074502c  5f                   pop edi
// 0074502d  5b                   pop ebx
// 0074502e  8bc1                 mov eax, ecx
// 00745030  5e                   pop esi
// 00745031  83c444               add esp, 0x44
// 00745034  c21000               ret 0x10
// 00745037  33c0                 xor eax, eax
// 00745039  5e                   pop esi
// 0074503a  83c444               add esp, 0x44
// 0074503d  c21000               ret 0x10
// library xtp-11.2.2/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?ConvertToBitmap@CXTPGraphicBitmapPng@@ABEPAUHBITMAP__@@PAEVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
