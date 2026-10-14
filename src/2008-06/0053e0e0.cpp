// roc 2008-06 0053e0e0  unit: seg_00530000  size: 4074 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053e0e0
//
// 0053e0e0  83ec18               sub esp, 0x18
// 0053e0e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053e0e7  d900                 fld dword ptr [eax]
// 0053e0e9  d8401c               fadd dword ptr [eax + 0x1c]
// 0053e0ec  d900                 fld dword ptr [eax]
// 0053e0ee  d8601c               fsub dword ptr [eax + 0x1c]
// 0053e0f1  d94004               fld dword ptr [eax + 4]
// 0053e0f4  d84018               fadd dword ptr [eax + 0x18]
// 0053e0f7  d94004               fld dword ptr [eax + 4]
// 0053e0fa  d86018               fsub dword ptr [eax + 0x18]
// 0053e0fd  d94008               fld dword ptr [eax + 8]
// 0053e100  d84014               fadd dword ptr [eax + 0x14]
// 0053e103  d94008               fld dword ptr [eax + 8]
// 0053e106  d86014               fsub dword ptr [eax + 0x14]
// 0053e109  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e10d  d9400c               fld dword ptr [eax + 0xc]
// 0053e110  d84010               fadd dword ptr [eax + 0x10]
// 0053e113  d9400c               fld dword ptr [eax + 0xc]
// 0053e116  d86010               fsub dword ptr [eax + 0x10]
// 0053e119  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e11d  d9c0                 fld st(0)
// 0053e11f  d8c6                 fadd st(6)
// 0053e121  d9ce                 fxch st(6)
// 0053e123  dee1                 fsubrp st(1)
// 0053e125  d9c1                 fld st(1)
// 0053e127  d8c4                 fadd st(4)
// 0053e129  d9c0                 fld st(0)
// 0053e12b  d8c7                 fadd st(7)
// 0053e12d  d918                 fstp dword ptr [eax]
// 0053e12f  deee                 fsubp st(6)
// 0053e131  d9cd                 fxch st(5)
// 0053e133  d95810               fstp dword ptr [eax + 0x10]
// 0053e136  deea                 fsubp st(2)
// 0053e138  d9c9                 fxch st(1)
// 0053e13a  d8c3                 fadd st(3)
// 0053e13c  d90528ce8200         fld dword ptr [0x82ce28]
// 0053e142  dcc9                 fmul st(1), st(0)
// 0053e144  d9c1                 fld st(1)
// 0053e146  d8c5                 fadd st(5)
// 0053e148  d95808               fstp dword ptr [eax + 8]
// 0053e14b  d9cc                 fxch st(4)
// 0053e14d  dee1                 fsubrp st(1)
// 0053e14f  d95818               fstp dword ptr [eax + 0x18]
// 0053e152  d944240c             fld dword ptr [esp + 0xc]
// 0053e156  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e15a  d9c1                 fld st(1)
// 0053e15c  d8c3                 fadd st(3)
// 0053e15e  d9c1                 fld st(1)
// 0053e160  d8e1                 fsub st(1)
// 0053e162  d90524ce8200         fld dword ptr [0x82ce24]
// 0053e168  dcc9                 fmul st(1), st(0)
// 0053e16a  d90520ce8200         fld dword ptr [0x82ce20]
// 0053e170  dccc                 fmul st(4), st(0)
// 0053e172  d9cc                 fxch st(4)
// 0053e174  d8c2                 fadd st(2)
// 0053e176  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e17a  d9051cce8200         fld dword ptr [0x82ce1c]
// 0053e180  dccb                 fmul st(3), st(0)
// 0053e182  d9cb                 fxch st(3)
// 0053e184  dec2                 faddp st(2)
// 0053e186  d944241c             fld dword ptr [esp + 0x1c]
// 0053e18a  dec5                 faddp st(5)
// 0053e18c  d9cc                 fxch st(4)
// 0053e18e  d8ce                 fmul st(6)
// 0053e190  d9c0                 fld st(0)
// 0053e192  d8c6                 fadd st(6)
// 0053e194  d9ce                 fxch st(6)
// 0053e196  dee1                 fsubrp st(1)
// 0053e198  d954241c             fst dword ptr [esp + 0x1c]
// 0053e19c  d9442414             fld dword ptr [esp + 0x14]
// 0053e1a0  dcc1                 fadd st(1), st(0)
// 0053e1a2  d9c9                 fxch st(1)
// 0053e1a4  d95814               fstp dword ptr [eax + 0x14]
// 0053e1a7  d86c241c             fsubr dword ptr [esp + 0x1c]
// 0053e1ab  d9580c               fstp dword ptr [eax + 0xc]
// 0053e1ae  d9c4                 fld st(4)
// 0053e1b0  d8c1                 fadd st(1)
// 0053e1b2  d95804               fstp dword ptr [eax + 4]
// 0053e1b5  deec                 fsubp st(4)
// 0053e1b7  d9cb                 fxch st(3)
// 0053e1b9  d9581c               fstp dword ptr [eax + 0x1c]
// 0053e1bc  d94020               fld dword ptr [eax + 0x20]
// 0053e1bf  d8403c               fadd dword ptr [eax + 0x3c]
// 0053e1c2  d94020               fld dword ptr [eax + 0x20]
// 0053e1c5  d8603c               fsub dword ptr [eax + 0x3c]
// 0053e1c8  d94024               fld dword ptr [eax + 0x24]
// 0053e1cb  d84038               fadd dword ptr [eax + 0x38]
// 0053e1ce  d91c24               fstp dword ptr [esp]
// 0053e1d1  d94024               fld dword ptr [eax + 0x24]
// 0053e1d4  d86038               fsub dword ptr [eax + 0x38]
// 0053e1d7  d95c2408             fstp dword ptr [esp + 8]
// 0053e1db  d94028               fld dword ptr [eax + 0x28]
// 0053e1de  d84034               fadd dword ptr [eax + 0x34]
// 0053e1e1  d95c2404             fstp dword ptr [esp + 4]
// 0053e1e5  d94028               fld dword ptr [eax + 0x28]
// 0053e1e8  d86034               fsub dword ptr [eax + 0x34]
// 0053e1eb  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e1ef  d9402c               fld dword ptr [eax + 0x2c]
// 0053e1f2  d84030               fadd dword ptr [eax + 0x30]
// 0053e1f5  d9402c               fld dword ptr [eax + 0x2c]
// 0053e1f8  d86030               fsub dword ptr [eax + 0x30]
// 0053e1fb  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e1ff  d9c0                 fld st(0)
// 0053e201  d8c3                 fadd st(3)
// 0053e203  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e207  deea                 fsubp st(2)
// 0053e209  d9442404             fld dword ptr [esp + 4]
// 0053e20d  d80424               fadd dword ptr [esp]
// 0053e210  d9542414             fst dword ptr [esp + 0x14]
// 0053e214  d9442410             fld dword ptr [esp + 0x10]
// 0053e218  dcc1                 fadd st(1), st(0)
// 0053e21a  d9c9                 fxch st(1)
// 0053e21c  d95820               fstp dword ptr [eax + 0x20]
// 0053e21f  d8642414             fsub dword ptr [esp + 0x14]
// 0053e223  d95830               fstp dword ptr [eax + 0x30]
// 0053e226  d90424               fld dword ptr [esp]
// 0053e229  d8642404             fsub dword ptr [esp + 4]
// 0053e22d  d8c2                 fadd st(2)
// 0053e22f  d8ce                 fmul st(6)
// 0053e231  d9c0                 fld st(0)
// 0053e233  d8c3                 fadd st(3)
// 0053e235  d95828               fstp dword ptr [eax + 0x28]
// 0053e238  deea                 fsubp st(2)
// 0053e23a  d9c9                 fxch st(1)
// 0053e23c  d95838               fstp dword ptr [eax + 0x38]
// 0053e23f  d944240c             fld dword ptr [esp + 0xc]
// 0053e243  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e247  d9442408             fld dword ptr [esp + 8]
// 0053e24b  d8c2                 fadd st(2)
// 0053e24d  d9c1                 fld st(1)
// 0053e24f  d8e1                 fsub st(1)
// 0053e251  d8cd                 fmul st(5)
// 0053e253  d9ca                 fxch st(2)
// 0053e255  d8cc                 fmul st(4)
// 0053e257  d8c2                 fadd st(2)
// 0053e259  d9c9                 fxch st(1)
// 0053e25b  d8ce                 fmul st(6)
// 0053e25d  dec2                 faddp st(2)
// 0053e25f  d944241c             fld dword ptr [esp + 0x1c]
// 0053e263  d8442408             fadd dword ptr [esp + 8]
// 0053e267  d8cf                 fmul st(7)
// 0053e269  d954241c             fst dword ptr [esp + 0x1c]
// 0053e26d  d8c3                 fadd st(3)
// 0053e26f  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e273  d9ca                 fxch st(2)
// 0053e275  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e279  d9c0                 fld st(0)
// 0053e27b  d8c3                 fadd st(3)
// 0053e27d  d95834               fstp dword ptr [eax + 0x34]
// 0053e280  dee2                 fsubrp st(2)
// 0053e282  d9c9                 fxch st(1)
// 0053e284  d9582c               fstp dword ptr [eax + 0x2c]
// 0053e287  d9442414             fld dword ptr [esp + 0x14]
// 0053e28b  d9c0                 fld st(0)
// 0053e28d  d8c2                 fadd st(2)
// 0053e28f  d95824               fstp dword ptr [eax + 0x24]
// 0053e292  dee1                 fsubrp st(1)
// 0053e294  d9583c               fstp dword ptr [eax + 0x3c]
// 0053e297  d94040               fld dword ptr [eax + 0x40]
// 0053e29a  d8405c               fadd dword ptr [eax + 0x5c]
// 0053e29d  d94040               fld dword ptr [eax + 0x40]
// 0053e2a0  d8605c               fsub dword ptr [eax + 0x5c]
// 0053e2a3  d94044               fld dword ptr [eax + 0x44]
// 0053e2a6  d84058               fadd dword ptr [eax + 0x58]
// 0053e2a9  d91c24               fstp dword ptr [esp]
// 0053e2ac  d94044               fld dword ptr [eax + 0x44]
// 0053e2af  d86058               fsub dword ptr [eax + 0x58]
// 0053e2b2  d95c2408             fstp dword ptr [esp + 8]
// 0053e2b6  d94048               fld dword ptr [eax + 0x48]
// 0053e2b9  d84054               fadd dword ptr [eax + 0x54]
// 0053e2bc  d95c2404             fstp dword ptr [esp + 4]
// 0053e2c0  d94048               fld dword ptr [eax + 0x48]
// 0053e2c3  d86054               fsub dword ptr [eax + 0x54]
// 0053e2c6  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e2ca  d9404c               fld dword ptr [eax + 0x4c]
// 0053e2cd  d84050               fadd dword ptr [eax + 0x50]
// 0053e2d0  d9404c               fld dword ptr [eax + 0x4c]
// 0053e2d3  d86050               fsub dword ptr [eax + 0x50]
// 0053e2d6  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e2da  d9c0                 fld st(0)
// 0053e2dc  d8c3                 fadd st(3)
// 0053e2de  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e2e2  deea                 fsubp st(2)
// 0053e2e4  d9442404             fld dword ptr [esp + 4]
// 0053e2e8  d80424               fadd dword ptr [esp]
// 0053e2eb  d9542414             fst dword ptr [esp + 0x14]
// 0053e2ef  d9442410             fld dword ptr [esp + 0x10]
// 0053e2f3  dcc1                 fadd st(1), st(0)
// 0053e2f5  d9c9                 fxch st(1)
// 0053e2f7  d95840               fstp dword ptr [eax + 0x40]
// 0053e2fa  d8642414             fsub dword ptr [esp + 0x14]
// 0053e2fe  d95850               fstp dword ptr [eax + 0x50]
// 0053e301  d90424               fld dword ptr [esp]
// 0053e304  d8642404             fsub dword ptr [esp + 4]
// 0053e308  d8c2                 fadd st(2)
// 0053e30a  d8ce                 fmul st(6)
// 0053e30c  d9c0                 fld st(0)
// 0053e30e  d8c3                 fadd st(3)
// 0053e310  d95848               fstp dword ptr [eax + 0x48]
// 0053e313  deea                 fsubp st(2)
// 0053e315  d9c9                 fxch st(1)
// 0053e317  d95858               fstp dword ptr [eax + 0x58]
// 0053e31a  d944240c             fld dword ptr [esp + 0xc]
// 0053e31e  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e322  d9442408             fld dword ptr [esp + 8]
// 0053e326  d8c2                 fadd st(2)
// 0053e328  d9c1                 fld st(1)
// 0053e32a  d8e1                 fsub st(1)
// 0053e32c  d8cd                 fmul st(5)
// 0053e32e  d9ca                 fxch st(2)
// 0053e330  d8cc                 fmul st(4)
// 0053e332  d8c2                 fadd st(2)
// 0053e334  d9c9                 fxch st(1)
// 0053e336  d8ce                 fmul st(6)
// 0053e338  dec2                 faddp st(2)
// 0053e33a  d944241c             fld dword ptr [esp + 0x1c]
// 0053e33e  d8442408             fadd dword ptr [esp + 8]
// 0053e342  d8cf                 fmul st(7)
// 0053e344  d954241c             fst dword ptr [esp + 0x1c]
// 0053e348  d8c3                 fadd st(3)
// 0053e34a  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e34e  d9ca                 fxch st(2)
// 0053e350  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e354  d9c0                 fld st(0)
// 0053e356  d8c3                 fadd st(3)
// 0053e358  d95854               fstp dword ptr [eax + 0x54]
// 0053e35b  dee2                 fsubrp st(2)
// 0053e35d  d9c9                 fxch st(1)
// 0053e35f  d9584c               fstp dword ptr [eax + 0x4c]
// 0053e362  d9442414             fld dword ptr [esp + 0x14]
// 0053e366  d9c0                 fld st(0)
// 0053e368  d8c2                 fadd st(2)
// 0053e36a  d95844               fstp dword ptr [eax + 0x44]
// 0053e36d  dee1                 fsubrp st(1)
// 0053e36f  d9585c               fstp dword ptr [eax + 0x5c]
// 0053e372  d94060               fld dword ptr [eax + 0x60]
// 0053e375  d8407c               fadd dword ptr [eax + 0x7c]
// 0053e378  d94060               fld dword ptr [eax + 0x60]
// 0053e37b  d8607c               fsub dword ptr [eax + 0x7c]
// 0053e37e  d94064               fld dword ptr [eax + 0x64]
// 0053e381  d84078               fadd dword ptr [eax + 0x78]
// 0053e384  d91c24               fstp dword ptr [esp]
// 0053e387  d94064               fld dword ptr [eax + 0x64]
// 0053e38a  d86078               fsub dword ptr [eax + 0x78]
// 0053e38d  d95c2408             fstp dword ptr [esp + 8]
// 0053e391  d94068               fld dword ptr [eax + 0x68]
// 0053e394  d84074               fadd dword ptr [eax + 0x74]
// 0053e397  d95c2404             fstp dword ptr [esp + 4]
// 0053e39b  d94068               fld dword ptr [eax + 0x68]
// 0053e39e  d86074               fsub dword ptr [eax + 0x74]
// 0053e3a1  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e3a5  d9406c               fld dword ptr [eax + 0x6c]
// 0053e3a8  d84070               fadd dword ptr [eax + 0x70]
// 0053e3ab  d9406c               fld dword ptr [eax + 0x6c]
// 0053e3ae  d86070               fsub dword ptr [eax + 0x70]
// 0053e3b1  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e3b5  d9c0                 fld st(0)
// 0053e3b7  d8c3                 fadd st(3)
// 0053e3b9  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e3bd  deea                 fsubp st(2)
// 0053e3bf  d9442404             fld dword ptr [esp + 4]
// 0053e3c3  d80424               fadd dword ptr [esp]
// 0053e3c6  d9542414             fst dword ptr [esp + 0x14]
// 0053e3ca  d9442410             fld dword ptr [esp + 0x10]
// 0053e3ce  dcc1                 fadd st(1), st(0)
// 0053e3d0  d9c9                 fxch st(1)
// 0053e3d2  d95860               fstp dword ptr [eax + 0x60]
// 0053e3d5  d8642414             fsub dword ptr [esp + 0x14]
// 0053e3d9  d95870               fstp dword ptr [eax + 0x70]
// 0053e3dc  d90424               fld dword ptr [esp]
// 0053e3df  d8642404             fsub dword ptr [esp + 4]
// 0053e3e3  d8c2                 fadd st(2)
// 0053e3e5  d8ce                 fmul st(6)
// 0053e3e7  d9c0                 fld st(0)
// 0053e3e9  d8c3                 fadd st(3)
// 0053e3eb  d95868               fstp dword ptr [eax + 0x68]
// 0053e3ee  deea                 fsubp st(2)
// 0053e3f0  d9c9                 fxch st(1)
// 0053e3f2  d95878               fstp dword ptr [eax + 0x78]
// 0053e3f5  d944240c             fld dword ptr [esp + 0xc]
// 0053e3f9  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e3fd  d9442408             fld dword ptr [esp + 8]
// 0053e401  d8c2                 fadd st(2)
// 0053e403  d9c1                 fld st(1)
// 0053e405  d8e1                 fsub st(1)
// 0053e407  d8cd                 fmul st(5)
// 0053e409  d9ca                 fxch st(2)
// 0053e40b  d8cc                 fmul st(4)
// 0053e40d  d8c2                 fadd st(2)
// 0053e40f  d9c9                 fxch st(1)
// 0053e411  d8ce                 fmul st(6)
// 0053e413  dec2                 faddp st(2)
// 0053e415  d944241c             fld dword ptr [esp + 0x1c]
// 0053e419  d8442408             fadd dword ptr [esp + 8]
// 0053e41d  d8cf                 fmul st(7)
// 0053e41f  d954241c             fst dword ptr [esp + 0x1c]
// 0053e423  d8c3                 fadd st(3)
// 0053e425  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e429  d9ca                 fxch st(2)
// 0053e42b  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e42f  d9c0                 fld st(0)
// 0053e431  d8c3                 fadd st(3)
// 0053e433  d95874               fstp dword ptr [eax + 0x74]
// 0053e436  dee2                 fsubrp st(2)
// 0053e438  d9c9                 fxch st(1)
// 0053e43a  d9586c               fstp dword ptr [eax + 0x6c]
// 0053e43d  d9442414             fld dword ptr [esp + 0x14]
// 0053e441  d9c0                 fld st(0)
// 0053e443  d8c2                 fadd st(2)
// 0053e445  d95864               fstp dword ptr [eax + 0x64]
// 0053e448  dee1                 fsubrp st(1)
// 0053e44a  d9587c               fstp dword ptr [eax + 0x7c]
// 0053e44d  d98080000000         fld dword ptr [eax + 0x80]
// 0053e453  d8809c000000         fadd dword ptr [eax + 0x9c]
// 0053e459  d98080000000         fld dword ptr [eax + 0x80]
// 0053e45f  d8a09c000000         fsub dword ptr [eax + 0x9c]
// 0053e465  d98084000000         fld dword ptr [eax + 0x84]
// 0053e46b  d88098000000         fadd dword ptr [eax + 0x98]
// 0053e471  d91c24               fstp dword ptr [esp]
// 0053e474  d98084000000         fld dword ptr [eax + 0x84]
// 0053e47a  d8a098000000         fsub dword ptr [eax + 0x98]
// 0053e480  d95c2408             fstp dword ptr [esp + 8]
// 0053e484  d98088000000         fld dword ptr [eax + 0x88]
// 0053e48a  d88094000000         fadd dword ptr [eax + 0x94]
// 0053e490  d95c2404             fstp dword ptr [esp + 4]
// 0053e494  d98088000000         fld dword ptr [eax + 0x88]
// 0053e49a  d8a094000000         fsub dword ptr [eax + 0x94]
// 0053e4a0  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e4a4  d9808c000000         fld dword ptr [eax + 0x8c]
// 0053e4aa  d88090000000         fadd dword ptr [eax + 0x90]
// 0053e4b0  d9808c000000         fld dword ptr [eax + 0x8c]
// 0053e4b6  d8a090000000         fsub dword ptr [eax + 0x90]
// 0053e4bc  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e4c0  d9c0                 fld st(0)
// 0053e4c2  d8c3                 fadd st(3)
// 0053e4c4  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e4c8  deea                 fsubp st(2)
// 0053e4ca  d9442404             fld dword ptr [esp + 4]
// 0053e4ce  d80424               fadd dword ptr [esp]
// 0053e4d1  d9542414             fst dword ptr [esp + 0x14]
// 0053e4d5  d9442410             fld dword ptr [esp + 0x10]
// 0053e4d9  dcc1                 fadd st(1), st(0)
// 0053e4db  d9c9                 fxch st(1)
// 0053e4dd  d99880000000         fstp dword ptr [eax + 0x80]
// 0053e4e3  d8642414             fsub dword ptr [esp + 0x14]
// 0053e4e7  d99890000000         fstp dword ptr [eax + 0x90]
// 0053e4ed  d90424               fld dword ptr [esp]
// 0053e4f0  d8642404             fsub dword ptr [esp + 4]
// 0053e4f4  d8c2                 fadd st(2)
// 0053e4f6  d8ce                 fmul st(6)
// 0053e4f8  d9c0                 fld st(0)
// 0053e4fa  d8c3                 fadd st(3)
// 0053e4fc  d99888000000         fstp dword ptr [eax + 0x88]
// 0053e502  deea                 fsubp st(2)
// 0053e504  d9c9                 fxch st(1)
// 0053e506  d99898000000         fstp dword ptr [eax + 0x98]
// 0053e50c  d944240c             fld dword ptr [esp + 0xc]
// 0053e510  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e514  d9442408             fld dword ptr [esp + 8]
// 0053e518  d8c2                 fadd st(2)
// 0053e51a  d9c1                 fld st(1)
// 0053e51c  d8e1                 fsub st(1)
// 0053e51e  d8cd                 fmul st(5)
// 0053e520  d9ca                 fxch st(2)
// 0053e522  d8cc                 fmul st(4)
// 0053e524  d8c2                 fadd st(2)
// 0053e526  d9c9                 fxch st(1)
// 0053e528  d8ce                 fmul st(6)
// 0053e52a  dec2                 faddp st(2)
// 0053e52c  d944241c             fld dword ptr [esp + 0x1c]
// 0053e530  d8442408             fadd dword ptr [esp + 8]
// 0053e534  d8cf                 fmul st(7)
// 0053e536  d954241c             fst dword ptr [esp + 0x1c]
// 0053e53a  d8c3                 fadd st(3)
// 0053e53c  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e540  d9ca                 fxch st(2)
// 0053e542  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e546  d9c0                 fld st(0)
// 0053e548  d8c3                 fadd st(3)
// 0053e54a  d99894000000         fstp dword ptr [eax + 0x94]
// 0053e550  dee2                 fsubrp st(2)
// 0053e552  d9c9                 fxch st(1)
// 0053e554  d9988c000000         fstp dword ptr [eax + 0x8c]
// 0053e55a  d9442414             fld dword ptr [esp + 0x14]
// 0053e55e  d9c0                 fld st(0)
// 0053e560  d8c2                 fadd st(2)
// 0053e562  d99884000000         fstp dword ptr [eax + 0x84]
// 0053e568  dee1                 fsubrp st(1)
// 0053e56a  d9989c000000         fstp dword ptr [eax + 0x9c]
// 0053e570  d980a0000000         fld dword ptr [eax + 0xa0]
// 0053e576  d880bc000000         fadd dword ptr [eax + 0xbc]
// 0053e57c  d980a0000000         fld dword ptr [eax + 0xa0]
// 0053e582  d8a0bc000000         fsub dword ptr [eax + 0xbc]
// 0053e588  d980a4000000         fld dword ptr [eax + 0xa4]
// 0053e58e  d880b8000000         fadd dword ptr [eax + 0xb8]
// 0053e594  d91c24               fstp dword ptr [esp]
// 0053e597  d980a4000000         fld dword ptr [eax + 0xa4]
// 0053e59d  d8a0b8000000         fsub dword ptr [eax + 0xb8]
// 0053e5a3  d95c2408             fstp dword ptr [esp + 8]
// 0053e5a7  d980a8000000         fld dword ptr [eax + 0xa8]
// 0053e5ad  d880b4000000         fadd dword ptr [eax + 0xb4]
// 0053e5b3  d95c2404             fstp dword ptr [esp + 4]
// 0053e5b7  d980a8000000         fld dword ptr [eax + 0xa8]
// 0053e5bd  d8a0b4000000         fsub dword ptr [eax + 0xb4]
// 0053e5c3  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e5c7  d980ac000000         fld dword ptr [eax + 0xac]
// 0053e5cd  d880b0000000         fadd dword ptr [eax + 0xb0]
// 0053e5d3  d980ac000000         fld dword ptr [eax + 0xac]
// 0053e5d9  d8a0b0000000         fsub dword ptr [eax + 0xb0]
// 0053e5df  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e5e3  d9c0                 fld st(0)
// 0053e5e5  d8c3                 fadd st(3)
// 0053e5e7  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e5eb  deea                 fsubp st(2)
// 0053e5ed  d9442404             fld dword ptr [esp + 4]
// 0053e5f1  d80424               fadd dword ptr [esp]
// 0053e5f4  d9542414             fst dword ptr [esp + 0x14]
// 0053e5f8  d9442410             fld dword ptr [esp + 0x10]
// 0053e5fc  dcc1                 fadd st(1), st(0)
// 0053e5fe  d9c9                 fxch st(1)
// 0053e600  d998a0000000         fstp dword ptr [eax + 0xa0]
// 0053e606  d8642414             fsub dword ptr [esp + 0x14]
// 0053e60a  d998b0000000         fstp dword ptr [eax + 0xb0]
// 0053e610  d90424               fld dword ptr [esp]
// 0053e613  d8642404             fsub dword ptr [esp + 4]
// 0053e617  d8c2                 fadd st(2)
// 0053e619  d8ce                 fmul st(6)
// 0053e61b  d9c0                 fld st(0)
// 0053e61d  d8c3                 fadd st(3)
// 0053e61f  d998a8000000         fstp dword ptr [eax + 0xa8]
// 0053e625  deea                 fsubp st(2)
// 0053e627  d9c9                 fxch st(1)
// 0053e629  d998b8000000         fstp dword ptr [eax + 0xb8]
// 0053e62f  d944240c             fld dword ptr [esp + 0xc]
// 0053e633  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e637  d9442408             fld dword ptr [esp + 8]
// 0053e63b  d8c2                 fadd st(2)
// 0053e63d  d9c1                 fld st(1)
// 0053e63f  d8e1                 fsub st(1)
// 0053e641  d8cd                 fmul st(5)
// 0053e643  d9ca                 fxch st(2)
// 0053e645  d8cc                 fmul st(4)
// 0053e647  d8c2                 fadd st(2)
// 0053e649  d9c9                 fxch st(1)
// 0053e64b  d8ce                 fmul st(6)
// 0053e64d  dec2                 faddp st(2)
// 0053e64f  d944241c             fld dword ptr [esp + 0x1c]
// 0053e653  d8442408             fadd dword ptr [esp + 8]
// 0053e657  d8cf                 fmul st(7)
// 0053e659  d954241c             fst dword ptr [esp + 0x1c]
// 0053e65d  d8c3                 fadd st(3)
// 0053e65f  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e663  d9ca                 fxch st(2)
// 0053e665  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e669  d9c0                 fld st(0)
// 0053e66b  d8c3                 fadd st(3)
// 0053e66d  d998b4000000         fstp dword ptr [eax + 0xb4]
// 0053e673  dee2                 fsubrp st(2)
// 0053e675  d9c9                 fxch st(1)
// 0053e677  d998ac000000         fstp dword ptr [eax + 0xac]
// 0053e67d  d9442414             fld dword ptr [esp + 0x14]
// 0053e681  d9c0                 fld st(0)
// 0053e683  d8c2                 fadd st(2)
// 0053e685  d998a4000000         fstp dword ptr [eax + 0xa4]
// 0053e68b  dee1                 fsubrp st(1)
// 0053e68d  d998bc000000         fstp dword ptr [eax + 0xbc]
// 0053e693  d980c0000000         fld dword ptr [eax + 0xc0]
// 0053e699  d880dc000000         fadd dword ptr [eax + 0xdc]
// 0053e69f  d980c0000000         fld dword ptr [eax + 0xc0]
// 0053e6a5  d8a0dc000000         fsub dword ptr [eax + 0xdc]
// 0053e6ab  d980c4000000         fld dword ptr [eax + 0xc4]
// 0053e6b1  d880d8000000         fadd dword ptr [eax + 0xd8]
// 0053e6b7  d91c24               fstp dword ptr [esp]
// 0053e6ba  d980c4000000         fld dword ptr [eax + 0xc4]
// 0053e6c0  d8a0d8000000         fsub dword ptr [eax + 0xd8]
// 0053e6c6  d95c2408             fstp dword ptr [esp + 8]
// 0053e6ca  d980c8000000         fld dword ptr [eax + 0xc8]
// 0053e6d0  d880d4000000         fadd dword ptr [eax + 0xd4]
// 0053e6d6  d95c2404             fstp dword ptr [esp + 4]
// 0053e6da  d980c8000000         fld dword ptr [eax + 0xc8]
// 0053e6e0  d8a0d4000000         fsub dword ptr [eax + 0xd4]
// 0053e6e6  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e6ea  d980cc000000         fld dword ptr [eax + 0xcc]
// 0053e6f0  d880d0000000         fadd dword ptr [eax + 0xd0]
// 0053e6f6  d980cc000000         fld dword ptr [eax + 0xcc]
// 0053e6fc  d8a0d0000000         fsub dword ptr [eax + 0xd0]
// 0053e702  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e706  d9c0                 fld st(0)
// 0053e708  d8c3                 fadd st(3)
// 0053e70a  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e70e  deea                 fsubp st(2)
// 0053e710  d9442404             fld dword ptr [esp + 4]
// 0053e714  d80424               fadd dword ptr [esp]
// 0053e717  d9542414             fst dword ptr [esp + 0x14]
// 0053e71b  d9442410             fld dword ptr [esp + 0x10]
// 0053e71f  dcc1                 fadd st(1), st(0)
// 0053e721  d9c9                 fxch st(1)
// 0053e723  d998c0000000         fstp dword ptr [eax + 0xc0]
// 0053e729  d8642414             fsub dword ptr [esp + 0x14]
// 0053e72d  d998d0000000         fstp dword ptr [eax + 0xd0]
// 0053e733  d90424               fld dword ptr [esp]
// 0053e736  d8642404             fsub dword ptr [esp + 4]
// 0053e73a  d8c2                 fadd st(2)
// 0053e73c  d8ce                 fmul st(6)
// 0053e73e  d9c0                 fld st(0)
// 0053e740  d8c3                 fadd st(3)
// 0053e742  d998c8000000         fstp dword ptr [eax + 0xc8]
// 0053e748  deea                 fsubp st(2)
// 0053e74a  d9c9                 fxch st(1)
// 0053e74c  d998d8000000         fstp dword ptr [eax + 0xd8]
// 0053e752  d944240c             fld dword ptr [esp + 0xc]
// 0053e756  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e75a  d9442408             fld dword ptr [esp + 8]
// 0053e75e  d8c2                 fadd st(2)
// 0053e760  d9c1                 fld st(1)
// 0053e762  d8e1                 fsub st(1)
// 0053e764  d8cd                 fmul st(5)
// 0053e766  d9ca                 fxch st(2)
// 0053e768  d8cc                 fmul st(4)
// 0053e76a  d8c2                 fadd st(2)
// 0053e76c  d9c9                 fxch st(1)
// 0053e76e  d8ce                 fmul st(6)
// 0053e770  dec2                 faddp st(2)
// 0053e772  d944241c             fld dword ptr [esp + 0x1c]
// 0053e776  d8442408             fadd dword ptr [esp + 8]
// 0053e77a  d8cf                 fmul st(7)
// 0053e77c  d954241c             fst dword ptr [esp + 0x1c]
// 0053e780  d8c3                 fadd st(3)
// 0053e782  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e786  d9ca                 fxch st(2)
// 0053e788  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e78c  d9c0                 fld st(0)
// 0053e78e  d8c3                 fadd st(3)
// 0053e790  d998d4000000         fstp dword ptr [eax + 0xd4]
// 0053e796  dee2                 fsubrp st(2)
// 0053e798  d9c9                 fxch st(1)
// 0053e79a  d998cc000000         fstp dword ptr [eax + 0xcc]
// 0053e7a0  d9442414             fld dword ptr [esp + 0x14]
// 0053e7a4  d9c0                 fld st(0)
// 0053e7a6  d8c2                 fadd st(2)
// 0053e7a8  d998c4000000         fstp dword ptr [eax + 0xc4]
// 0053e7ae  dee1                 fsubrp st(1)
// 0053e7b0  d998dc000000         fstp dword ptr [eax + 0xdc]
// 0053e7b6  d980e0000000         fld dword ptr [eax + 0xe0]
// 0053e7bc  d880fc000000         fadd dword ptr [eax + 0xfc]
// 0053e7c2  d980e0000000         fld dword ptr [eax + 0xe0]
// 0053e7c8  d8a0fc000000         fsub dword ptr [eax + 0xfc]
// 0053e7ce  d980e4000000         fld dword ptr [eax + 0xe4]
// 0053e7d4  d880f8000000         fadd dword ptr [eax + 0xf8]
// 0053e7da  d91c24               fstp dword ptr [esp]
// 0053e7dd  d980e4000000         fld dword ptr [eax + 0xe4]
// 0053e7e3  d8a0f8000000         fsub dword ptr [eax + 0xf8]
// 0053e7e9  d95c2408             fstp dword ptr [esp + 8]
// 0053e7ed  d980e8000000         fld dword ptr [eax + 0xe8]
// 0053e7f3  d880f4000000         fadd dword ptr [eax + 0xf4]
// 0053e7f9  d95c2404             fstp dword ptr [esp + 4]
// 0053e7fd  d980e8000000         fld dword ptr [eax + 0xe8]
// 0053e803  d8a0f4000000         fsub dword ptr [eax + 0xf4]
// 0053e809  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e80d  d980ec000000         fld dword ptr [eax + 0xec]
// 0053e813  d880f0000000         fadd dword ptr [eax + 0xf0]
// 0053e819  d980ec000000         fld dword ptr [eax + 0xec]
// 0053e81f  d8a0f0000000         fsub dword ptr [eax + 0xf0]
// 0053e825  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e829  d9c0                 fld st(0)
// 0053e82b  d8c3                 fadd st(3)
// 0053e82d  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e831  deea                 fsubp st(2)
// 0053e833  d9442404             fld dword ptr [esp + 4]
// 0053e837  d80424               fadd dword ptr [esp]
// 0053e83a  d9542414             fst dword ptr [esp + 0x14]
// 0053e83e  d9442410             fld dword ptr [esp + 0x10]
// 0053e842  dcc1                 fadd st(1), st(0)
// 0053e844  d9c9                 fxch st(1)
// 0053e846  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0053e84c  d8642414             fsub dword ptr [esp + 0x14]
// 0053e850  d998f0000000         fstp dword ptr [eax + 0xf0]
// 0053e856  d90424               fld dword ptr [esp]
// 0053e859  d8642404             fsub dword ptr [esp + 4]
// 0053e85d  d8c2                 fadd st(2)
// 0053e85f  d8ce                 fmul st(6)
// 0053e861  d9c0                 fld st(0)
// 0053e863  d8c3                 fadd st(3)
// 0053e865  d998e8000000         fstp dword ptr [eax + 0xe8]
// 0053e86b  deea                 fsubp st(2)
// 0053e86d  d9c9                 fxch st(1)
// 0053e86f  d998f8000000         fstp dword ptr [eax + 0xf8]
// 0053e875  d944240c             fld dword ptr [esp + 0xc]
// 0053e879  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e87d  d9442408             fld dword ptr [esp + 8]
// 0053e881  d8c2                 fadd st(2)
// 0053e883  d9c1                 fld st(1)
// 0053e885  d8e1                 fsub st(1)
// 0053e887  d8cd                 fmul st(5)
// 0053e889  d9ca                 fxch st(2)
// 0053e88b  d8cc                 fmul st(4)
// 0053e88d  d8c2                 fadd st(2)
// 0053e88f  d9c9                 fxch st(1)
// 0053e891  d8ce                 fmul st(6)
// 0053e893  dec2                 faddp st(2)
// 0053e895  d944241c             fld dword ptr [esp + 0x1c]
// 0053e899  d8442408             fadd dword ptr [esp + 8]
// 0053e89d  d8cf                 fmul st(7)
// 0053e89f  d954241c             fst dword ptr [esp + 0x1c]
// 0053e8a3  d8c3                 fadd st(3)
// 0053e8a5  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e8a9  d9ca                 fxch st(2)
// 0053e8ab  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e8af  d9c0                 fld st(0)
// 0053e8b1  d8c3                 fadd st(3)
// 0053e8b3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 0053e8b9  dee2                 fsubrp st(2)
// 0053e8bb  d9c9                 fxch st(1)
// 0053e8bd  d998ec000000         fstp dword ptr [eax + 0xec]
// 0053e8c3  d9442414             fld dword ptr [esp + 0x14]
// 0053e8c7  d9c0                 fld st(0)
// 0053e8c9  d8c2                 fadd st(2)
// 0053e8cb  d998e4000000         fstp dword ptr [eax + 0xe4]
// 0053e8d1  dee1                 fsubrp st(1)
// 0053e8d3  d998fc000000         fstp dword ptr [eax + 0xfc]
// 0053e8d9  d980e0000000         fld dword ptr [eax + 0xe0]
// 0053e8df  d800                 fadd dword ptr [eax]
// 0053e8e1  d900                 fld dword ptr [eax]
// 0053e8e3  d8a0e0000000         fsub dword ptr [eax + 0xe0]
// 0053e8e9  d980c0000000         fld dword ptr [eax + 0xc0]
// 0053e8ef  d84020               fadd dword ptr [eax + 0x20]
// 0053e8f2  d91c24               fstp dword ptr [esp]
// 0053e8f5  d94020               fld dword ptr [eax + 0x20]
// 0053e8f8  d8a0c0000000         fsub dword ptr [eax + 0xc0]
// 0053e8fe  d95c2408             fstp dword ptr [esp + 8]
// 0053e902  d980a0000000         fld dword ptr [eax + 0xa0]
// 0053e908  d84040               fadd dword ptr [eax + 0x40]
// 0053e90b  d95c2404             fstp dword ptr [esp + 4]
// 0053e90f  d94040               fld dword ptr [eax + 0x40]
// 0053e912  d8a0a0000000         fsub dword ptr [eax + 0xa0]
// 0053e918  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053e91c  d98080000000         fld dword ptr [eax + 0x80]
// 0053e922  d84060               fadd dword ptr [eax + 0x60]
// 0053e925  d94060               fld dword ptr [eax + 0x60]
// 0053e928  d8a080000000         fsub dword ptr [eax + 0x80]
// 0053e92e  d95c240c             fstp dword ptr [esp + 0xc]
// 0053e932  d9c0                 fld st(0)
// 0053e934  d8c3                 fadd st(3)
// 0053e936  d95c2410             fstp dword ptr [esp + 0x10]
// 0053e93a  deea                 fsubp st(2)
// 0053e93c  d9442404             fld dword ptr [esp + 4]
// 0053e940  d80424               fadd dword ptr [esp]
// 0053e943  d9542414             fst dword ptr [esp + 0x14]
// 0053e947  d9442410             fld dword ptr [esp + 0x10]
// 0053e94b  dcc1                 fadd st(1), st(0)
// 0053e94d  d9c9                 fxch st(1)
// 0053e94f  d918                 fstp dword ptr [eax]
// 0053e951  d8642414             fsub dword ptr [esp + 0x14]
// 0053e955  d99880000000         fstp dword ptr [eax + 0x80]
// 0053e95b  d90424               fld dword ptr [esp]
// 0053e95e  d8642404             fsub dword ptr [esp + 4]
// 0053e962  d8c2                 fadd st(2)
// 0053e964  d8ce                 fmul st(6)
// 0053e966  d9c0                 fld st(0)
// 0053e968  d8c3                 fadd st(3)
// 0053e96a  d95840               fstp dword ptr [eax + 0x40]
// 0053e96d  deea                 fsubp st(2)
// 0053e96f  d9c9                 fxch st(1)
// 0053e971  d998c0000000         fstp dword ptr [eax + 0xc0]
// 0053e977  d944240c             fld dword ptr [esp + 0xc]
// 0053e97b  d844241c             fadd dword ptr [esp + 0x1c]
// 0053e97f  d9442408             fld dword ptr [esp + 8]
// 0053e983  d8c2                 fadd st(2)
// 0053e985  d9c1                 fld st(1)
// 0053e987  d8e1                 fsub st(1)
// 0053e989  d8cd                 fmul st(5)
// 0053e98b  d9ca                 fxch st(2)
// 0053e98d  d8cc                 fmul st(4)
// 0053e98f  d8c2                 fadd st(2)
// 0053e991  d9c9                 fxch st(1)
// 0053e993  d8ce                 fmul st(6)
// 0053e995  dec2                 faddp st(2)
// 0053e997  d944241c             fld dword ptr [esp + 0x1c]
// 0053e99b  d8442408             fadd dword ptr [esp + 8]
// 0053e99f  d8cf                 fmul st(7)
// 0053e9a1  d954241c             fst dword ptr [esp + 0x1c]
// 0053e9a5  d8c3                 fadd st(3)
// 0053e9a7  d95c2414             fstp dword ptr [esp + 0x14]
// 0053e9ab  d9ca                 fxch st(2)
// 0053e9ad  d864241c             fsub dword ptr [esp + 0x1c]
// 0053e9b1  d9c0                 fld st(0)
// 0053e9b3  d8c3                 fadd st(3)
// 0053e9b5  d998a0000000         fstp dword ptr [eax + 0xa0]
// 0053e9bb  dee2                 fsubrp st(2)
// 0053e9bd  d9c9                 fxch st(1)
// 0053e9bf  d95860               fstp dword ptr [eax + 0x60]
// 0053e9c2  d9442414             fld dword ptr [esp + 0x14]
// 0053e9c6  d9c0                 fld st(0)
// 0053e9c8  d8c2                 fadd st(2)
// 0053e9ca  d95820               fstp dword ptr [eax + 0x20]
// 0053e9cd  dee1                 fsubrp st(1)
// 0053e9cf  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0053e9d5  d980e4000000         fld dword ptr [eax + 0xe4]
// 0053e9db  d84004               fadd dword ptr [eax + 4]
// 0053e9de  d94004               fld dword ptr [eax + 4]
// 0053e9e1  d8a0e4000000         fsub dword ptr [eax + 0xe4]
// 0053e9e7  d980c4000000         fld dword ptr [eax + 0xc4]
// 0053e9ed  d84024               fadd dword ptr [eax + 0x24]
// 0053e9f0  d91c24               fstp dword ptr [esp]
// 0053e9f3  d94024               fld dword ptr [eax + 0x24]
// 0053e9f6  d8a0c4000000         fsub dword ptr [eax + 0xc4]
// 0053e9fc  d95c2408             fstp dword ptr [esp + 8]
// 0053ea00  d980a4000000         fld dword ptr [eax + 0xa4]
// 0053ea06  d84044               fadd dword ptr [eax + 0x44]
// 0053ea09  d95c2404             fstp dword ptr [esp + 4]
// 0053ea0d  d94044               fld dword ptr [eax + 0x44]
// 0053ea10  d8a0a4000000         fsub dword ptr [eax + 0xa4]
// 0053ea16  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053ea1a  d98084000000         fld dword ptr [eax + 0x84]
// 0053ea20  d84064               fadd dword ptr [eax + 0x64]
// 0053ea23  d94064               fld dword ptr [eax + 0x64]
// 0053ea26  d8a084000000         fsub dword ptr [eax + 0x84]
// 0053ea2c  d95c240c             fstp dword ptr [esp + 0xc]
// 0053ea30  d9c0                 fld st(0)
// 0053ea32  d8c3                 fadd st(3)
// 0053ea34  d95c2410             fstp dword ptr [esp + 0x10]
// 0053ea38  deea                 fsubp st(2)
// 0053ea3a  d9442404             fld dword ptr [esp + 4]
// 0053ea3e  d80424               fadd dword ptr [esp]
// 0053ea41  d9542414             fst dword ptr [esp + 0x14]
// 0053ea45  d9442410             fld dword ptr [esp + 0x10]
// 0053ea49  dcc1                 fadd st(1), st(0)
// 0053ea4b  d9c9                 fxch st(1)
// 0053ea4d  d95804               fstp dword ptr [eax + 4]
// 0053ea50  d8642414             fsub dword ptr [esp + 0x14]
// 0053ea54  d99884000000         fstp dword ptr [eax + 0x84]
// 0053ea5a  d90424               fld dword ptr [esp]
// 0053ea5d  d8642404             fsub dword ptr [esp + 4]
// 0053ea61  d8c2                 fadd st(2)
// 0053ea63  d8ce                 fmul st(6)
// 0053ea65  d9c0                 fld st(0)
// 0053ea67  d8c3                 fadd st(3)
// 0053ea69  d95844               fstp dword ptr [eax + 0x44]
// 0053ea6c  deea                 fsubp st(2)
// 0053ea6e  d9c9                 fxch st(1)
// 0053ea70  d998c4000000         fstp dword ptr [eax + 0xc4]
// 0053ea76  d944240c             fld dword ptr [esp + 0xc]
// 0053ea7a  d844241c             fadd dword ptr [esp + 0x1c]
// 0053ea7e  d9442408             fld dword ptr [esp + 8]
// 0053ea82  d8c2                 fadd st(2)
// 0053ea84  d9c1                 fld st(1)
// 0053ea86  d8e1                 fsub st(1)
// 0053ea88  d8cd                 fmul st(5)
// 0053ea8a  d9ca                 fxch st(2)
// 0053ea8c  d8cc                 fmul st(4)
// 0053ea8e  d8c2                 fadd st(2)
// 0053ea90  d9c9                 fxch st(1)
// 0053ea92  d8ce                 fmul st(6)
// 0053ea94  dec2                 faddp st(2)
// 0053ea96  d944241c             fld dword ptr [esp + 0x1c]
// 0053ea9a  d8442408             fadd dword ptr [esp + 8]
// 0053ea9e  d8cf                 fmul st(7)
// 0053eaa0  d954241c             fst dword ptr [esp + 0x1c]
// 0053eaa4  d8c3                 fadd st(3)
// 0053eaa6  d95c2414             fstp dword ptr [esp + 0x14]
// 0053eaaa  d9ca                 fxch st(2)
// 0053eaac  d864241c             fsub dword ptr [esp + 0x1c]
// 0053eab0  d9c0                 fld st(0)
// 0053eab2  d8c3                 fadd st(3)
// 0053eab4  d998a4000000         fstp dword ptr [eax + 0xa4]
// 0053eaba  dee2                 fsubrp st(2)
// 0053eabc  d9c9                 fxch st(1)
// 0053eabe  d95864               fstp dword ptr [eax + 0x64]
// 0053eac1  d9442414             fld dword ptr [esp + 0x14]
// 0053eac5  d9c0                 fld st(0)
// 0053eac7  d8c2                 fadd st(2)
// 0053eac9  d95824               fstp dword ptr [eax + 0x24]
// 0053eacc  dee1                 fsubrp st(1)
// 0053eace  d998e4000000         fstp dword ptr [eax + 0xe4]
// 0053ead4  d980e8000000         fld dword ptr [eax + 0xe8]
// 0053eada  d84008               fadd dword ptr [eax + 8]
// 0053eadd  d94008               fld dword ptr [eax + 8]
// 0053eae0  d8a0e8000000         fsub dword ptr [eax + 0xe8]
// 0053eae6  d980c8000000         fld dword ptr [eax + 0xc8]
// 0053eaec  d84028               fadd dword ptr [eax + 0x28]
// 0053eaef  d91c24               fstp dword ptr [esp]
// 0053eaf2  d94028               fld dword ptr [eax + 0x28]
// 0053eaf5  d8a0c8000000         fsub dword ptr [eax + 0xc8]
// 0053eafb  d95c2408             fstp dword ptr [esp + 8]
// 0053eaff  d980a8000000         fld dword ptr [eax + 0xa8]
// 0053eb05  d84048               fadd dword ptr [eax + 0x48]
// 0053eb08  d95c2404             fstp dword ptr [esp + 4]
// 0053eb0c  d94048               fld dword ptr [eax + 0x48]
// 0053eb0f  d8a0a8000000         fsub dword ptr [eax + 0xa8]
// 0053eb15  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053eb19  d98088000000         fld dword ptr [eax + 0x88]
// 0053eb1f  d84068               fadd dword ptr [eax + 0x68]
// 0053eb22  d94068               fld dword ptr [eax + 0x68]
// 0053eb25  d8a088000000         fsub dword ptr [eax + 0x88]
// 0053eb2b  d95c240c             fstp dword ptr [esp + 0xc]
// 0053eb2f  d9c0                 fld st(0)
// 0053eb31  d8c3                 fadd st(3)
// 0053eb33  d95c2410             fstp dword ptr [esp + 0x10]
// 0053eb37  deea                 fsubp st(2)
// 0053eb39  d9442404             fld dword ptr [esp + 4]
// 0053eb3d  d80424               fadd dword ptr [esp]
// 0053eb40  d9542414             fst dword ptr [esp + 0x14]
// 0053eb44  d9442410             fld dword ptr [esp + 0x10]
// 0053eb48  dcc1                 fadd st(1), st(0)
// 0053eb4a  d9c9                 fxch st(1)
// 0053eb4c  d95808               fstp dword ptr [eax + 8]
// 0053eb4f  d8642414             fsub dword ptr [esp + 0x14]
// 0053eb53  d99888000000         fstp dword ptr [eax + 0x88]
// 0053eb59  d90424               fld dword ptr [esp]
// 0053eb5c  d8642404             fsub dword ptr [esp + 4]
// 0053eb60  d8c2                 fadd st(2)
// 0053eb62  d8ce                 fmul st(6)
// 0053eb64  d9c0                 fld st(0)
// 0053eb66  d8c3                 fadd st(3)
// 0053eb68  d95848               fstp dword ptr [eax + 0x48]
// 0053eb6b  deea                 fsubp st(2)
// 0053eb6d  d9c9                 fxch st(1)
// 0053eb6f  d998c8000000         fstp dword ptr [eax + 0xc8]
// 0053eb75  d944240c             fld dword ptr [esp + 0xc]
// 0053eb79  d844241c             fadd dword ptr [esp + 0x1c]
// 0053eb7d  d9442408             fld dword ptr [esp + 8]
// 0053eb81  d8c2                 fadd st(2)
// 0053eb83  d9c1                 fld st(1)
// 0053eb85  d8e1                 fsub st(1)
// 0053eb87  d8cd                 fmul st(5)
// 0053eb89  d9ca                 fxch st(2)
// 0053eb8b  d8cc                 fmul st(4)
// 0053eb8d  d8c2                 fadd st(2)
// 0053eb8f  d9c9                 fxch st(1)
// 0053eb91  d8ce                 fmul st(6)
// 0053eb93  dec2                 faddp st(2)
// 0053eb95  d944241c             fld dword ptr [esp + 0x1c]
// 0053eb99  d8442408             fadd dword ptr [esp + 8]
// 0053eb9d  d8cf                 fmul st(7)
// 0053eb9f  d954241c             fst dword ptr [esp + 0x1c]
// 0053eba3  d8c3                 fadd st(3)
// 0053eba5  d95c2414             fstp dword ptr [esp + 0x14]
// 0053eba9  d9ca                 fxch st(2)
// 0053ebab  d864241c             fsub dword ptr [esp + 0x1c]
// 0053ebaf  d9c0                 fld st(0)
// 0053ebb1  d8c3                 fadd st(3)
// 0053ebb3  d998a8000000         fstp dword ptr [eax + 0xa8]
// 0053ebb9  dee2                 fsubrp st(2)
// 0053ebbb  d9c9                 fxch st(1)
// 0053ebbd  d95868               fstp dword ptr [eax + 0x68]
// 0053ebc0  d9442414             fld dword ptr [esp + 0x14]
// 0053ebc4  d9c0                 fld st(0)
// 0053ebc6  d8c2                 fadd st(2)
// 0053ebc8  d95828               fstp dword ptr [eax + 0x28]
// 0053ebcb  dee1                 fsubrp st(1)
// 0053ebcd  d998e8000000         fstp dword ptr [eax + 0xe8]
// 0053ebd3  d980ec000000         fld dword ptr [eax + 0xec]
// 0053ebd9  d8400c               fadd dword ptr [eax + 0xc]
// 0053ebdc  d9400c               fld dword ptr [eax + 0xc]
// 0053ebdf  d8a0ec000000         fsub dword ptr [eax + 0xec]
// 0053ebe5  d980cc000000         fld dword ptr [eax + 0xcc]
// 0053ebeb  d8402c               fadd dword ptr [eax + 0x2c]
// 0053ebee  d91c24               fstp dword ptr [esp]
// 0053ebf1  d9402c               fld dword ptr [eax + 0x2c]
// 0053ebf4  d8a0cc000000         fsub dword ptr [eax + 0xcc]
// 0053ebfa  d95c2408             fstp dword ptr [esp + 8]
// 0053ebfe  d980ac000000         fld dword ptr [eax + 0xac]
// 0053ec04  d8404c               fadd dword ptr [eax + 0x4c]
// 0053ec07  d95c2404             fstp dword ptr [esp + 4]
// 0053ec0b  d9404c               fld dword ptr [eax + 0x4c]
// 0053ec0e  d8a0ac000000         fsub dword ptr [eax + 0xac]
// 0053ec14  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053ec18  d9808c000000         fld dword ptr [eax + 0x8c]
// 0053ec1e  d8406c               fadd dword ptr [eax + 0x6c]
// 0053ec21  d9406c               fld dword ptr [eax + 0x6c]
// 0053ec24  d8a08c000000         fsub dword ptr [eax + 0x8c]
// 0053ec2a  d95c240c             fstp dword ptr [esp + 0xc]
// 0053ec2e  d9c0                 fld st(0)
// 0053ec30  d8c3                 fadd st(3)
// 0053ec32  d95c2410             fstp dword ptr [esp + 0x10]
// 0053ec36  deea                 fsubp st(2)
// 0053ec38  d9442404             fld dword ptr [esp + 4]
// 0053ec3c  d80424               fadd dword ptr [esp]
// 0053ec3f  d9542414             fst dword ptr [esp + 0x14]
// 0053ec43  d9442410             fld dword ptr [esp + 0x10]
// 0053ec47  dcc1                 fadd st(1), st(0)
// 0053ec49  d9c9                 fxch st(1)
// 0053ec4b  d9580c               fstp dword ptr [eax + 0xc]
// 0053ec4e  d8642414             fsub dword ptr [esp + 0x14]
// 0053ec52  d9988c000000         fstp dword ptr [eax + 0x8c]
// 0053ec58  d90424               fld dword ptr [esp]
// 0053ec5b  d8642404             fsub dword ptr [esp + 4]
// 0053ec5f  d8c2                 fadd st(2)
// 0053ec61  d8ce                 fmul st(6)
// 0053ec63  d9c0                 fld st(0)
// 0053ec65  d8c3                 fadd st(3)
// 0053ec67  d9584c               fstp dword ptr [eax + 0x4c]
// 0053ec6a  deea                 fsubp st(2)
// 0053ec6c  d9c9                 fxch st(1)
// 0053ec6e  d998cc000000         fstp dword ptr [eax + 0xcc]
// 0053ec74  d944240c             fld dword ptr [esp + 0xc]
// 0053ec78  d844241c             fadd dword ptr [esp + 0x1c]
// 0053ec7c  d9442408             fld dword ptr [esp + 8]
// 0053ec80  d8c2                 fadd st(2)
// 0053ec82  d9c1                 fld st(1)
// 0053ec84  d8e1                 fsub st(1)
// 0053ec86  d8cd                 fmul st(5)
// 0053ec88  d9ca                 fxch st(2)
// 0053ec8a  d8cc                 fmul st(4)
// 0053ec8c  d8c2                 fadd st(2)
// 0053ec8e  d9c9                 fxch st(1)
// 0053ec90  d8ce                 fmul st(6)
// 0053ec92  dec2                 faddp st(2)
// 0053ec94  d944241c             fld dword ptr [esp + 0x1c]
// 0053ec98  d8442408             fadd dword ptr [esp + 8]
// 0053ec9c  d8cf                 fmul st(7)
// 0053ec9e  d954241c             fst dword ptr [esp + 0x1c]
// 0053eca2  d8c3                 fadd st(3)
// 0053eca4  d95c2414             fstp dword ptr [esp + 0x14]
// 0053eca8  d9ca                 fxch st(2)
// 0053ecaa  d864241c             fsub dword ptr [esp + 0x1c]
// 0053ecae  d9c0                 fld st(0)
// 0053ecb0  d8c3                 fadd st(3)
// 0053ecb2  d998ac000000         fstp dword ptr [eax + 0xac]
// 0053ecb8  dee2                 fsubrp st(2)
// 0053ecba  d9c9                 fxch st(1)
// 0053ecbc  d9586c               fstp dword ptr [eax + 0x6c]
// 0053ecbf  d9442414             fld dword ptr [esp + 0x14]
// 0053ecc3  d9c0                 fld st(0)
// 0053ecc5  d8c2                 fadd st(2)
// 0053ecc7  d9582c               fstp dword ptr [eax + 0x2c]
// 0053ecca  dee1                 fsubrp st(1)
// 0053eccc  d998ec000000         fstp dword ptr [eax + 0xec]
// 0053ecd2  d980f0000000         fld dword ptr [eax + 0xf0]
// 0053ecd8  d84010               fadd dword ptr [eax + 0x10]
// 0053ecdb  d94010               fld dword ptr [eax + 0x10]
// 0053ecde  d8a0f0000000         fsub dword ptr [eax + 0xf0]
// 0053ece4  d980d0000000         fld dword ptr [eax + 0xd0]
// 0053ecea  d84030               fadd dword ptr [eax + 0x30]
// 0053eced  d91c24               fstp dword ptr [esp]
// 0053ecf0  d94030               fld dword ptr [eax + 0x30]
// 0053ecf3  d8a0d0000000         fsub dword ptr [eax + 0xd0]
// 0053ecf9  d95c2408             fstp dword ptr [esp + 8]
// 0053ecfd  d980b0000000         fld dword ptr [eax + 0xb0]
// 0053ed03  d84050               fadd dword ptr [eax + 0x50]
// 0053ed06  d95c2404             fstp dword ptr [esp + 4]
// 0053ed0a  d94050               fld dword ptr [eax + 0x50]
// 0053ed0d  d8a0b0000000         fsub dword ptr [eax + 0xb0]
// 0053ed13  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053ed17  d98090000000         fld dword ptr [eax + 0x90]
// 0053ed1d  d84070               fadd dword ptr [eax + 0x70]
// 0053ed20  d94070               fld dword ptr [eax + 0x70]
// 0053ed23  d8a090000000         fsub dword ptr [eax + 0x90]
// 0053ed29  d95c240c             fstp dword ptr [esp + 0xc]
// 0053ed2d  d9c0                 fld st(0)
// 0053ed2f  d8c3                 fadd st(3)
// 0053ed31  d95c2410             fstp dword ptr [esp + 0x10]
// 0053ed35  deea                 fsubp st(2)
// 0053ed37  d9442404             fld dword ptr [esp + 4]
// 0053ed3b  d80424               fadd dword ptr [esp]
// 0053ed3e  d9542414             fst dword ptr [esp + 0x14]
// 0053ed42  d9442410             fld dword ptr [esp + 0x10]
// 0053ed46  dcc1                 fadd st(1), st(0)
// 0053ed48  d9c9                 fxch st(1)
// 0053ed4a  d95810               fstp dword ptr [eax + 0x10]
// 0053ed4d  d8642414             fsub dword ptr [esp + 0x14]
// 0053ed51  d99890000000         fstp dword ptr [eax + 0x90]
// 0053ed57  d90424               fld dword ptr [esp]
// 0053ed5a  d8642404             fsub dword ptr [esp + 4]
// 0053ed5e  d8c2                 fadd st(2)
// 0053ed60  d8ce                 fmul st(6)
// 0053ed62  d9c0                 fld st(0)
// 0053ed64  d8c3                 fadd st(3)
// 0053ed66  d95850               fstp dword ptr [eax + 0x50]
// 0053ed69  deea                 fsubp st(2)
// 0053ed6b  d9c9                 fxch st(1)
// 0053ed6d  d998d0000000         fstp dword ptr [eax + 0xd0]
// 0053ed73  d944240c             fld dword ptr [esp + 0xc]
// 0053ed77  d844241c             fadd dword ptr [esp + 0x1c]
// 0053ed7b  d9442408             fld dword ptr [esp + 8]
// 0053ed7f  d8c2                 fadd st(2)
// 0053ed81  d9c1                 fld st(1)
// 0053ed83  d8e1                 fsub st(1)
// 0053ed85  d8cd                 fmul st(5)
// 0053ed87  d9ca                 fxch st(2)
// 0053ed89  d8cc                 fmul st(4)
// 0053ed8b  d8c2                 fadd st(2)
// 0053ed8d  d9c9                 fxch st(1)
// 0053ed8f  d8ce                 fmul st(6)
// 0053ed91  dec2                 faddp st(2)
// 0053ed93  d944241c             fld dword ptr [esp + 0x1c]
// 0053ed97  d8442408             fadd dword ptr [esp + 8]
// 0053ed9b  d8cf                 fmul st(7)
// 0053ed9d  d954241c             fst dword ptr [esp + 0x1c]
// 0053eda1  d8c3                 fadd st(3)
// 0053eda3  d95c2414             fstp dword ptr [esp + 0x14]
// 0053eda7  d9ca                 fxch st(2)
// 0053eda9  d864241c             fsub dword ptr [esp + 0x1c]
// 0053edad  d9c0                 fld st(0)
// 0053edaf  d8c3                 fadd st(3)
// 0053edb1  d998b0000000         fstp dword ptr [eax + 0xb0]
// 0053edb7  dee2                 fsubrp st(2)
// 0053edb9  d9c9                 fxch st(1)
// 0053edbb  d95870               fstp dword ptr [eax + 0x70]
// 0053edbe  d9442414             fld dword ptr [esp + 0x14]
// 0053edc2  d9c0                 fld st(0)
// 0053edc4  d8c2                 fadd st(2)
// 0053edc6  d95830               fstp dword ptr [eax + 0x30]
// 0053edc9  dee1                 fsubrp st(1)
// 0053edcb  d998f0000000         fstp dword ptr [eax + 0xf0]
// 0053edd1  d980f4000000         fld dword ptr [eax + 0xf4]
// 0053edd7  d84014               fadd dword ptr [eax + 0x14]
// 0053edda  d94014               fld dword ptr [eax + 0x14]
// 0053eddd  d8a0f4000000         fsub dword ptr [eax + 0xf4]
// 0053ede3  d980d4000000         fld dword ptr [eax + 0xd4]
// 0053ede9  d84034               fadd dword ptr [eax + 0x34]
// 0053edec  d91c24               fstp dword ptr [esp]
// 0053edef  d94034               fld dword ptr [eax + 0x34]
// 0053edf2  d8a0d4000000         fsub dword ptr [eax + 0xd4]
// 0053edf8  d95c2408             fstp dword ptr [esp + 8]
// 0053edfc  d980b4000000         fld dword ptr [eax + 0xb4]
// 0053ee02  d84054               fadd dword ptr [eax + 0x54]
// 0053ee05  d95c2404             fstp dword ptr [esp + 4]
// 0053ee09  d94054               fld dword ptr [eax + 0x54]
// 0053ee0c  d8a0b4000000         fsub dword ptr [eax + 0xb4]
// 0053ee12  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053ee16  d98094000000         fld dword ptr [eax + 0x94]
// 0053ee1c  d84074               fadd dword ptr [eax + 0x74]
// 0053ee1f  d94074               fld dword ptr [eax + 0x74]
// 0053ee22  d8a094000000         fsub dword ptr [eax + 0x94]
// 0053ee28  d95c240c             fstp dword ptr [esp + 0xc]
// 0053ee2c  d9c0                 fld st(0)
// 0053ee2e  d8c3                 fadd st(3)
// 0053ee30  d95c2410             fstp dword ptr [esp + 0x10]
// 0053ee34  deea                 fsubp st(2)
// 0053ee36  d9442404             fld dword ptr [esp + 4]
// 0053ee3a  d80424               fadd dword ptr [esp]
// 0053ee3d  d9542414             fst dword ptr [esp + 0x14]
// 0053ee41  d9442410             fld dword ptr [esp + 0x10]
// 0053ee45  dcc1                 fadd st(1), st(0)
// 0053ee47  d9c9                 fxch st(1)
// 0053ee49  d95814               fstp dword ptr [eax + 0x14]
// 0053ee4c  d8642414             fsub dword ptr [esp + 0x14]
// 0053ee50  d99894000000         fstp dword ptr [eax + 0x94]
// 0053ee56  d90424               fld dword ptr [esp]
// 0053ee59  d8642404             fsub dword ptr [esp + 4]
// 0053ee5d  d8c2                 fadd st(2)
// 0053ee5f  d8ce                 fmul st(6)
// 0053ee61  d9c0                 fld st(0)
// 0053ee63  d8c3                 fadd st(3)
// 0053ee65  d95854               fstp dword ptr [eax + 0x54]
// 0053ee68  deea                 fsubp st(2)
// 0053ee6a  d9c9                 fxch st(1)
// 0053ee6c  d998d4000000         fstp dword ptr [eax + 0xd4]
// 0053ee72  d944240c             fld dword ptr [esp + 0xc]
// 0053ee76  d844241c             fadd dword ptr [esp + 0x1c]
// 0053ee7a  d9442408             fld dword ptr [esp + 8]
// 0053ee7e  d8c2                 fadd st(2)
// 0053ee80  d9c1                 fld st(1)
// 0053ee82  d8e1                 fsub st(1)
// 0053ee84  d8cd                 fmul st(5)
// 0053ee86  d9ca                 fxch st(2)
// 0053ee88  d8cc                 fmul st(4)
// 0053ee8a  d8c2                 fadd st(2)
// 0053ee8c  d9c9                 fxch st(1)
// 0053ee8e  d8ce                 fmul st(6)
// 0053ee90  dec2                 faddp st(2)
// 0053ee92  d944241c             fld dword ptr [esp + 0x1c]
// 0053ee96  d8442408             fadd dword ptr [esp + 8]
// 0053ee9a  d8cf                 fmul st(7)
// 0053ee9c  d954241c             fst dword ptr [esp + 0x1c]
// 0053eea0  d8c3                 fadd st(3)
// 0053eea2  d95c2414             fstp dword ptr [esp + 0x14]
// 0053eea6  d9ca                 fxch st(2)
// 0053eea8  d864241c             fsub dword ptr [esp + 0x1c]
// 0053eeac  d9c0                 fld st(0)
// 0053eeae  d8c3                 fadd st(3)
// 0053eeb0  d998b4000000         fstp dword ptr [eax + 0xb4]
// 0053eeb6  dee2                 fsubrp st(2)
// 0053eeb8  d9c9                 fxch st(1)
// 0053eeba  d95874               fstp dword ptr [eax + 0x74]
// 0053eebd  d9442414             fld dword ptr [esp + 0x14]
// 0053eec1  d9c0                 fld st(0)
// 0053eec3  d8c2                 fadd st(2)
// 0053eec5  d95834               fstp dword ptr [eax + 0x34]
// 0053eec8  dee1                 fsubrp st(1)
// 0053eeca  d998f4000000         fstp dword ptr [eax + 0xf4]
// 0053eed0  d980f8000000         fld dword ptr [eax + 0xf8]
// 0053eed6  d84018               fadd dword ptr [eax + 0x18]
// 0053eed9  d94018               fld dword ptr [eax + 0x18]
// 0053eedc  d8a0f8000000         fsub dword ptr [eax + 0xf8]
// 0053eee2  d980d8000000         fld dword ptr [eax + 0xd8]
// 0053eee8  d84038               fadd dword ptr [eax + 0x38]
// 0053eeeb  d91c24               fstp dword ptr [esp]
// 0053eeee  d94038               fld dword ptr [eax + 0x38]
// 0053eef1  d8a0d8000000         fsub dword ptr [eax + 0xd8]
// 0053eef7  d95c2408             fstp dword ptr [esp + 8]
// 0053eefb  d980b8000000         fld dword ptr [eax + 0xb8]
// 0053ef01  d84058               fadd dword ptr [eax + 0x58]
// 0053ef04  d95c2404             fstp dword ptr [esp + 4]
// 0053ef08  d94058               fld dword ptr [eax + 0x58]
// 0053ef0b  d8a0b8000000         fsub dword ptr [eax + 0xb8]
// 0053ef11  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053ef15  d98098000000         fld dword ptr [eax + 0x98]
// 0053ef1b  d84078               fadd dword ptr [eax + 0x78]
// 0053ef1e  d94078               fld dword ptr [eax + 0x78]
// 0053ef21  d8a098000000         fsub dword ptr [eax + 0x98]
// 0053ef27  d95c240c             fstp dword ptr [esp + 0xc]
// 0053ef2b  d9c0                 fld st(0)
// 0053ef2d  d8c3                 fadd st(3)
// 0053ef2f  d95c2410             fstp dword ptr [esp + 0x10]
// 0053ef33  deea                 fsubp st(2)
// 0053ef35  d9442404             fld dword ptr [esp + 4]
// 0053ef39  d80424               fadd dword ptr [esp]
// 0053ef3c  d9542414             fst dword ptr [esp + 0x14]
// 0053ef40  d9442410             fld dword ptr [esp + 0x10]
// 0053ef44  dcc1                 fadd st(1), st(0)
// 0053ef46  d9c9                 fxch st(1)
// 0053ef48  d95818               fstp dword ptr [eax + 0x18]
// 0053ef4b  d8642414             fsub dword ptr [esp + 0x14]
// 0053ef4f  d99898000000         fstp dword ptr [eax + 0x98]
// 0053ef55  d90424               fld dword ptr [esp]
// 0053ef58  d8642404             fsub dword ptr [esp + 4]
// 0053ef5c  d8c2                 fadd st(2)
// 0053ef5e  d8ce                 fmul st(6)
// 0053ef60  d9c0                 fld st(0)
// 0053ef62  d8c3                 fadd st(3)
// 0053ef64  d95858               fstp dword ptr [eax + 0x58]
// 0053ef67  deea                 fsubp st(2)
// 0053ef69  d9c9                 fxch st(1)
// 0053ef6b  d998d8000000         fstp dword ptr [eax + 0xd8]
// 0053ef71  d944240c             fld dword ptr [esp + 0xc]
// 0053ef75  d844241c             fadd dword ptr [esp + 0x1c]
// 0053ef79  d9442408             fld dword ptr [esp + 8]
// 0053ef7d  d8c2                 fadd st(2)
// 0053ef7f  d9c1                 fld st(1)
// 0053ef81  d8e1                 fsub st(1)
// 0053ef83  d8cd                 fmul st(5)
// 0053ef85  d9ca                 fxch st(2)
// 0053ef87  d8cc                 fmul st(4)
// 0053ef89  d8c2                 fadd st(2)
// 0053ef8b  d9c9                 fxch st(1)
// 0053ef8d  d8ce                 fmul st(6)
// 0053ef8f  dec2                 faddp st(2)
// 0053ef91  d944241c             fld dword ptr [esp + 0x1c]
// 0053ef95  d8442408             fadd dword ptr [esp + 8]
// 0053ef99  d8cf                 fmul st(7)
// 0053ef9b  d954241c             fst dword ptr [esp + 0x1c]
// 0053ef9f  d8c3                 fadd st(3)
// 0053efa1  d95c2414             fstp dword ptr [esp + 0x14]
// 0053efa5  d9ca                 fxch st(2)
// 0053efa7  d864241c             fsub dword ptr [esp + 0x1c]
// 0053efab  d9c0                 fld st(0)
// 0053efad  d8c3                 fadd st(3)
// 0053efaf  d998b8000000         fstp dword ptr [eax + 0xb8]
// 0053efb5  dee2                 fsubrp st(2)
// 0053efb7  d9c9                 fxch st(1)
// 0053efb9  d95878               fstp dword ptr [eax + 0x78]
// 0053efbc  d9442414             fld dword ptr [esp + 0x14]
// 0053efc0  d9c0                 fld st(0)
// 0053efc2  d8c2                 fadd st(2)
// 0053efc4  d95838               fstp dword ptr [eax + 0x38]
// 0053efc7  dee1                 fsubrp st(1)
// 0053efc9  d998f8000000         fstp dword ptr [eax + 0xf8]
// 0053efcf  d980fc000000         fld dword ptr [eax + 0xfc]
// 0053efd5  d8401c               fadd dword ptr [eax + 0x1c]
// 0053efd8  d9401c               fld dword ptr [eax + 0x1c]
// 0053efdb  d8a0fc000000         fsub dword ptr [eax + 0xfc]
// 0053efe1  d980dc000000         fld dword ptr [eax + 0xdc]
// 0053efe7  d8403c               fadd dword ptr [eax + 0x3c]
// 0053efea  d91c24               fstp dword ptr [esp]
// 0053efed  d9403c               fld dword ptr [eax + 0x3c]
// 0053eff0  d8a0dc000000         fsub dword ptr [eax + 0xdc]
// 0053eff6  d95c2408             fstp dword ptr [esp + 8]
// 0053effa  d980bc000000         fld dword ptr [eax + 0xbc]
// 0053f000  d8405c               fadd dword ptr [eax + 0x5c]
// 0053f003  d95c2404             fstp dword ptr [esp + 4]
// 0053f007  d9405c               fld dword ptr [eax + 0x5c]
// 0053f00a  d8a0bc000000         fsub dword ptr [eax + 0xbc]
// 0053f010  d95c241c             fstp dword ptr [esp + 0x1c]
// 0053f014  d9809c000000         fld dword ptr [eax + 0x9c]
// 0053f01a  d8407c               fadd dword ptr [eax + 0x7c]
// 0053f01d  d9407c               fld dword ptr [eax + 0x7c]
// 0053f020  d8a09c000000         fsub dword ptr [eax + 0x9c]
// 0053f026  d95c240c             fstp dword ptr [esp + 0xc]
// 0053f02a  d9c0                 fld st(0)
// 0053f02c  d8c3                 fadd st(3)
// 0053f02e  d95c2410             fstp dword ptr [esp + 0x10]
// 0053f032  deea                 fsubp st(2)
// 0053f034  d9442404             fld dword ptr [esp + 4]
// 0053f038  d80424               fadd dword ptr [esp]
// 0053f03b  d9542414             fst dword ptr [esp + 0x14]
// 0053f03f  d9442410             fld dword ptr [esp + 0x10]
// 0053f043  dcc1                 fadd st(1), st(0)
// 0053f045  d9c9                 fxch st(1)
// 0053f047  d9581c               fstp dword ptr [eax + 0x1c]
// 0053f04a  d8642414             fsub dword ptr [esp + 0x14]
// 0053f04e  d9989c000000         fstp dword ptr [eax + 0x9c]
// 0053f054  d90424               fld dword ptr [esp]
// 0053f057  d8642404             fsub dword ptr [esp + 4]
// 0053f05b  d8c2                 fadd st(2)
// 0053f05d  d8ce                 fmul st(6)
// 0053f05f  d9c0                 fld st(0)
// 0053f061  d8c3                 fadd st(3)
// 0053f063  d9585c               fstp dword ptr [eax + 0x5c]
// 0053f066  deea                 fsubp st(2)
// 0053f068  d9c9                 fxch st(1)
// 0053f06a  d998dc000000         fstp dword ptr [eax + 0xdc]
// 0053f070  d944240c             fld dword ptr [esp + 0xc]
// 0053f074  d844241c             fadd dword ptr [esp + 0x1c]
// 0053f078  d9442408             fld dword ptr [esp + 8]
// 0053f07c  d8c2                 fadd st(2)
// 0053f07e  d9c1                 fld st(1)
// 0053f080  d8e1                 fsub st(1)
// 0053f082  decd                 fmulp st(5)
// 0053f084  d9c9                 fxch st(1)
// 0053f086  decb                 fmulp st(3)
// 0053f088  d9ca                 fxch st(2)
// 0053f08a  d8c3                 fadd st(3)
// 0053f08c  d9ca                 fxch st(2)
// 0053f08e  decc                 fmulp st(4)
// 0053f090  d9cb                 fxch st(3)
// 0053f092  dec2                 faddp st(2)
// 0053f094  d944241c             fld dword ptr [esp + 0x1c]
// 0053f098  d8442408             fadd dword ptr [esp + 8]
// 0053f09c  decc                 fmulp st(4)
// 0053f09e  d9c3                 fld st(3)
// 0053f0a0  d8c3                 fadd st(3)
// 0053f0a2  d9cb                 fxch st(3)
// 0053f0a4  dee4                 fsubrp st(4)
// 0053f0a6  d9c3                 fld st(3)
// 0053f0a8  d8c1                 fadd st(1)
// 0053f0aa  d998bc000000         fstp dword ptr [eax + 0xbc]
// 0053f0b0  deeb                 fsubp st(3)
// 0053f0b2  d9ca                 fxch st(2)
// 0053f0b4  d9587c               fstp dword ptr [eax + 0x7c]
// 0053f0b7  d9c0                 fld st(0)
// 0053f0b9  d8c2                 fadd st(2)
// 0053f0bb  d9583c               fstp dword ptr [eax + 0x3c]
// 0053f0be  dee1                 fsubrp st(1)
// 0053f0c0  d998fc000000         fstp dword ptr [eax + 0xfc]
// 0053f0c6  83c418               add esp, 0x18
// 0053f0c9  c3                   ret 
// library g3d-6.09-ijg/jfdctflt.c (function _jpeg_fdct_float)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: g3d-6.09-ijg jfdctflt.c
