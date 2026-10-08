// roc 2007-03 00514b90  unit: seg_00510000  size: 557 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514b90
//
// 00514b90  83ec18               sub esp, 0x18
// 00514b93  8b442420             mov eax, dword ptr [esp + 0x20]
// 00514b97  d94008               fld dword ptr [eax + 8]
// 00514b9a  56                   push esi
// 00514b9b  d95c2424             fstp dword ptr [esp + 0x24]
// 00514b9f  8bf1                 mov esi, ecx
// 00514ba1  d9442424             fld dword ptr [esp + 0x24]
// 00514ba5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00514ba9  d9562c               fst dword ptr [esi + 0x2c]
// 00514bac  ba01000000           mov edx, 1
// 00514bb1  d95620               fst dword ptr [esi + 0x20]
// 00514bb4  d95614               fst dword ptr [esi + 0x14]
// 00514bb7  d95e08               fstp dword ptr [esi + 8]
// 00514bba  d94108               fld dword ptr [ecx + 8]
// 00514bbd  d95c2424             fstp dword ptr [esp + 0x24]
// 00514bc1  d9442424             fld dword ptr [esp + 0x24]
// 00514bc5  d9565c               fst dword ptr [esi + 0x5c]
// 00514bc8  d95650               fst dword ptr [esi + 0x50]
// 00514bcb  d95644               fst dword ptr [esi + 0x44]
// 00514bce  d95e38               fstp dword ptr [esi + 0x38]
// 00514bd1  d900                 fld dword ptr [eax]
// 00514bd3  d95c2424             fstp dword ptr [esp + 0x24]
// 00514bd7  d9442424             fld dword ptr [esp + 0x24]
// 00514bdb  d95648               fst dword ptr [esi + 0x48]
// 00514bde  d9563c               fst dword ptr [esi + 0x3c]
// 00514be1  d95618               fst dword ptr [esi + 0x18]
// 00514be4  d95e0c               fstp dword ptr [esi + 0xc]
// 00514be7  d901                 fld dword ptr [ecx]
// 00514be9  d95c2424             fstp dword ptr [esp + 0x24]
// 00514bed  d9442424             fld dword ptr [esp + 0x24]
// 00514bf1  d95654               fst dword ptr [esi + 0x54]
// 00514bf4  d95630               fst dword ptr [esi + 0x30]
// 00514bf7  d95624               fst dword ptr [esi + 0x24]
// 00514bfa  d91e                 fstp dword ptr [esi]
// 00514bfc  d94004               fld dword ptr [eax + 4]
// 00514bff  d95c2424             fstp dword ptr [esp + 0x24]
// 00514c03  d9442424             fld dword ptr [esp + 0x24]
// 00514c07  d95658               fst dword ptr [esi + 0x58]
// 00514c0a  d9564c               fst dword ptr [esi + 0x4c]
// 00514c0d  d9561c               fst dword ptr [esi + 0x1c]
// 00514c10  d95e28               fstp dword ptr [esi + 0x28]
// 00514c13  d94104               fld dword ptr [ecx + 4]
// 00514c16  d95c2424             fstp dword ptr [esp + 0x24]
// 00514c1a  d9442424             fld dword ptr [esp + 0x24]
// 00514c1e  d95634               fst dword ptr [esi + 0x34]
// 00514c21  d95640               fst dword ptr [esi + 0x40]
// 00514c24  d95610               fst dword ptr [esi + 0x10]
// 00514c27  d95e04               fstp dword ptr [esi + 4]
// 00514c2a  d900                 fld dword ptr [eax]
// 00514c2c  d821                 fsub dword ptr [ecx]
// 00514c2e  d95c2404             fstp dword ptr [esp + 4]
// 00514c32  d94004               fld dword ptr [eax + 4]
// 00514c35  d86104               fsub dword ptr [ecx + 4]
// 00514c38  d95c2408             fstp dword ptr [esp + 8]
// 00514c3c  d94008               fld dword ptr [eax + 8]
// 00514c3f  d86108               fsub dword ptr [ecx + 8]
// 00514c42  d95c240c             fstp dword ptr [esp + 0xc]
// 00514c46  d9442404             fld dword ptr [esp + 4]
// 00514c4a  d99e90000000         fstp dword ptr [esi + 0x90]
// 00514c50  d9442408             fld dword ptr [esp + 8]
// 00514c54  d99e94000000         fstp dword ptr [esi + 0x94]
// 00514c5a  d944240c             fld dword ptr [esp + 0xc]
// 00514c5e  d99e98000000         fstp dword ptr [esi + 0x98]
// 00514c64  8415b8b08b00         test byte ptr [0x8bb0b8], dl
// 00514c6a  d9e8                 fld1 
// 00514c6c  d9ee                 fldz 
// 00514c6e  751c                 jne 0x514c8c
// 00514c70  0915b8b08b00         or dword ptr [0x8bb0b8], edx
// 00514c76  d9c9                 fxch st(1)
// 00514c78  d915acb08b00         fst dword ptr [0x8bb0ac]
// 00514c7e  d9c9                 fxch st(1)
// 00514c80  d915b0b08b00         fst dword ptr [0x8bb0b0]
// 00514c86  d915b4b08b00         fst dword ptr [0x8bb0b4]
// 00514c8c  d905acb08b00         fld dword ptr [0x8bb0ac]
// 00514c92  d95e60               fstp dword ptr [esi + 0x60]
// 00514c95  d905b0b08b00         fld dword ptr [0x8bb0b0]
// 00514c9b  d95e64               fstp dword ptr [esi + 0x64]
// 00514c9e  d905b4b08b00         fld dword ptr [0x8bb0b4]
// 00514ca4  d95e68               fstp dword ptr [esi + 0x68]
// 00514ca7  8415c4a08b00         test byte ptr [0x8ba0c4], dl
// 00514cad  751c                 jne 0x514ccb
// 00514caf  0915c4a08b00         or dword ptr [0x8ba0c4], edx
// 00514cb5  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 00514cbb  d915c0a08b00         fst dword ptr [0x8ba0c0]
// 00514cc1  d9c9                 fxch st(1)
// 00514cc3  d915bca08b00         fst dword ptr [0x8ba0bc]
// 00514cc9  d9c9                 fxch st(1)
// 00514ccb  d905b8a08b00         fld dword ptr [0x8ba0b8]
// 00514cd1  d95e6c               fstp dword ptr [esi + 0x6c]
// 00514cd4  d905bca08b00         fld dword ptr [0x8ba0bc]
// 00514cda  d95e70               fstp dword ptr [esi + 0x70]
// 00514cdd  d905c0a08b00         fld dword ptr [0x8ba0c0]
// 00514ce3  d95e74               fstp dword ptr [esi + 0x74]
// 00514ce6  841554778b00         test byte ptr [0x8b7754], dl
// 00514cec  751a                 jne 0x514d08
// 00514cee  091554778b00         or dword ptr [0x8b7754], edx
// 00514cf4  d91548778b00         fst dword ptr [0x8b7748]
// 00514cfa  d91d4c778b00         fstp dword ptr [0x8b774c]
// 00514d00  d91d50778b00         fstp dword ptr [0x8b7750]
// 00514d06  eb04                 jmp 0x514d0c
// 00514d08  ddd8                 fstp st(0)
// 00514d0a  ddd8                 fstp st(0)
// 00514d0c  d90548778b00         fld dword ptr [0x8b7748]
// 00514d12  51                   push ecx
// 00514d13  d95e78               fstp dword ptr [esi + 0x78]
// 00514d16  d9054c778b00         fld dword ptr [0x8b774c]
// 00514d1c  d95e7c               fstp dword ptr [esi + 0x7c]
// 00514d1f  d90550778b00         fld dword ptr [0x8b7750]
// 00514d25  d99e80000000         fstp dword ptr [esi + 0x80]
// 00514d2b  d98694000000         fld dword ptr [esi + 0x94]
// 00514d31  d88e90000000         fmul dword ptr [esi + 0x90]
// 00514d37  d98698000000         fld dword ptr [esi + 0x98]
// 00514d3d  d8c9                 fmul st(1)
// 00514d3f  d99ea0000000         fstp dword ptr [esi + 0xa0]
// 00514d45  d98698000000         fld dword ptr [esi + 0x98]
// 00514d4b  d88e94000000         fmul dword ptr [esi + 0x94]
// 00514d51  dec1                 faddp st(1)
// 00514d53  d98698000000         fld dword ptr [esi + 0x98]
// 00514d59  d88e90000000         fmul dword ptr [esi + 0x90]
// 00514d5f  dec1                 faddp st(1)
// 00514d61  dcc0                 fadd st(0), st(0)
// 00514d63  d99e9c000000         fstp dword ptr [esi + 0x9c]
// 00514d69  d901                 fld dword ptr [ecx]
// 00514d6b  d800                 fadd dword ptr [eax]
// 00514d6d  d95c2408             fstp dword ptr [esp + 8]
// 00514d71  d94104               fld dword ptr [ecx + 4]
// 00514d74  d84004               fadd dword ptr [eax + 4]
// 00514d77  d95c240c             fstp dword ptr [esp + 0xc]
// 00514d7b  d94108               fld dword ptr [ecx + 8]
// 00514d7e  8d4c2408             lea ecx, [esp + 8]
// 00514d82  d84008               fadd dword ptr [eax + 8]
// 00514d85  8d442414             lea eax, [esp + 0x14]
// 00514d89  d95c2410             fstp dword ptr [esp + 0x10]
// 00514d8d  d905084c7900         fld dword ptr [0x794c08]
// 00514d93  d91c24               fstp dword ptr [esp]
// 00514d96  50                   push eax
// 00514d97  e854effeff           call 0x503cf0
// 00514d9c  d900                 fld dword ptr [eax]
// 00514d9e  d99e84000000         fstp dword ptr [esi + 0x84]
// 00514da4  d94004               fld dword ptr [eax + 4]
// 00514da7  d99e88000000         fstp dword ptr [esi + 0x88]
// 00514dad  d94008               fld dword ptr [eax + 8]
// 00514db0  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 00514db6  5e                   pop esi
// 00514db7  83c418               add esp, 0x18
// 00514dba  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Box.cpp (function ?init@Box@G3D@@AAEXABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Box.cpp
