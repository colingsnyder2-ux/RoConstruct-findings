// from server: 100% by auto
// roc 2007-08 0052b9b0  unit: seg_00520000  size: 1346 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052b9b0
//
// 0052b9b0  8b442404             mov eax, dword ptr [esp + 4]
// 0052b9b4  dd0558487a00         fld qword ptr [0x7a4858]
// 0052b9ba  8b542408             mov edx, dword ptr [esp + 8]
// 0052b9be  dd0550487a00         fld qword ptr [0x7a4850]
// 0052b9c4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052b9c8  dd0548487a00         fld qword ptr [0x7a4848]
// 0052b9ce  8b5250               mov edx, dword ptr [edx + 0x50]
// 0052b9d1  81ec24010000         sub esp, 0x124
// 0052b9d7  53                   push ebx
// 0052b9d8  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0052b9de  55                   push ebp
// 0052b9df  56                   push esi
// 0052b9e0  57                   push edi
// 0052b9e1  81c380000000         add ebx, 0x80
// 0052b9e7  8d442434             lea eax, [esp + 0x34]
// 0052b9eb  bf08000000           mov edi, 8
// 0052b9f0  0fb77110             movzx esi, word ptr [ecx + 0x10]
// 0052b9f4  6685f6               test si, si
// 0052b9f7  7561                 jne 0x52ba5a
// 0052b9f9  66397120             cmp word ptr [ecx + 0x20], si
// 0052b9fd  755b                 jne 0x52ba5a
// 0052b9ff  66397130             cmp word ptr [ecx + 0x30], si
// 0052ba03  7555                 jne 0x52ba5a
// 0052ba05  66397140             cmp word ptr [ecx + 0x40], si
// 0052ba09  754f                 jne 0x52ba5a
// 0052ba0b  66397150             cmp word ptr [ecx + 0x50], si
// 0052ba0f  7549                 jne 0x52ba5a
// 0052ba11  66397160             cmp word ptr [ecx + 0x60], si
// 0052ba15  7543                 jne 0x52ba5a
// 0052ba17  66397170             cmp word ptr [ecx + 0x70], si
// 0052ba1b  753d                 jne 0x52ba5a
// 0052ba1d  0fbf31               movsx esi, word ptr [ecx]
// 0052ba20  89742410             mov dword ptr [esp + 0x10], esi
// 0052ba24  db442410             fild dword ptr [esp + 0x10]
// 0052ba28  d80a                 fmul dword ptr [edx]
// 0052ba2a  d95c2410             fstp dword ptr [esp + 0x10]
// 0052ba2e  d9442410             fld dword ptr [esp + 0x10]
// 0052ba32  d910                 fst dword ptr [eax]
// 0052ba34  d95020               fst dword ptr [eax + 0x20]
// 0052ba37  d95040               fst dword ptr [eax + 0x40]
// 0052ba3a  d95060               fst dword ptr [eax + 0x60]
// 0052ba3d  d99080000000         fst dword ptr [eax + 0x80]
// 0052ba43  d990a0000000         fst dword ptr [eax + 0xa0]
// 0052ba49  d990c0000000         fst dword ptr [eax + 0xc0]
// 0052ba4f  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0052ba55  e948020000           jmp 0x52bca2
// 0052ba5a  ddd8                 fstp st(0)
// 0052ba5c  0fbf29               movsx ebp, word ptr [ecx]
// 0052ba5f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052ba63  0fbf6920             movsx ebp, word ptr [ecx + 0x20]
// 0052ba67  db442410             fild dword ptr [esp + 0x10]
// 0052ba6b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052ba6f  0fbf6940             movsx ebp, word ptr [ecx + 0x40]
// 0052ba73  d80a                 fmul dword ptr [edx]
// 0052ba75  0fbff6               movsx esi, si
// 0052ba78  d95c2424             fstp dword ptr [esp + 0x24]
// 0052ba7c  db442410             fild dword ptr [esp + 0x10]
// 0052ba80  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052ba84  0fbf6960             movsx ebp, word ptr [ecx + 0x60]
// 0052ba88  d84a40               fmul dword ptr [edx + 0x40]
// 0052ba8b  d95c2428             fstp dword ptr [esp + 0x28]
// 0052ba8f  db442410             fild dword ptr [esp + 0x10]
// 0052ba93  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052ba97  d88a80000000         fmul dword ptr [edx + 0x80]
// 0052ba9d  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052baa1  db442410             fild dword ptr [esp + 0x10]
// 0052baa5  d88ac0000000         fmul dword ptr [edx + 0xc0]
// 0052baab  d95c2430             fstp dword ptr [esp + 0x30]
// 0052baaf  d944241c             fld dword ptr [esp + 0x1c]
// 0052bab3  d9c0                 fld st(0)
// 0052bab5  d9442424             fld dword ptr [esp + 0x24]
// 0052bab9  d9c0                 fld st(0)
// 0052babb  dec2                 faddp st(2)
// 0052babd  d9c9                 fxch st(1)
// 0052babf  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bac3  dee1                 fsubrp st(1)
// 0052bac5  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bac9  d9442430             fld dword ptr [esp + 0x30]
// 0052bacd  d9c0                 fld st(0)
// 0052bacf  d9442428             fld dword ptr [esp + 0x28]
// 0052bad3  d9c0                 fld st(0)
// 0052bad5  dec2                 faddp st(2)
// 0052bad7  d9c9                 fxch st(1)
// 0052bad9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052badd  dee1                 fsubrp st(1)
// 0052badf  d8ca                 fmul st(2)
// 0052bae1  d9442410             fld dword ptr [esp + 0x10]
// 0052bae5  d9c0                 fld st(0)
// 0052bae7  deea                 fsubp st(2)
// 0052bae9  d9c9                 fxch st(1)
// 0052baeb  d95c2410             fstp dword ptr [esp + 0x10]
// 0052baef  d9c0                 fld st(0)
// 0052baf1  d9442414             fld dword ptr [esp + 0x14]
// 0052baf5  d9c0                 fld st(0)
// 0052baf7  dec2                 faddp st(2)
// 0052baf9  d9c9                 fxch st(1)
// 0052bafb  d95c2424             fstp dword ptr [esp + 0x24]
// 0052baff  dee1                 fsubrp st(1)
// 0052bb01  d95c2430             fstp dword ptr [esp + 0x30]
// 0052bb05  d9442410             fld dword ptr [esp + 0x10]
// 0052bb09  89742410             mov dword ptr [esp + 0x10], esi
// 0052bb0d  d9c0                 fld st(0)
// 0052bb0f  0fbf7130             movsx esi, word ptr [ecx + 0x30]
// 0052bb13  d944241c             fld dword ptr [esp + 0x1c]
// 0052bb17  d9c0                 fld st(0)
// 0052bb19  dec2                 faddp st(2)
// 0052bb1b  d9c9                 fxch st(1)
// 0052bb1d  d95c2428             fstp dword ptr [esp + 0x28]
// 0052bb21  dee1                 fsubrp st(1)
// 0052bb23  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bb27  d94220               fld dword ptr [edx + 0x20]
// 0052bb2a  da4c2410             fimul dword ptr [esp + 0x10]
// 0052bb2e  89742410             mov dword ptr [esp + 0x10], esi
// 0052bb32  0fbf7150             movsx esi, word ptr [ecx + 0x50]
// 0052bb36  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bb3a  db442410             fild dword ptr [esp + 0x10]
// 0052bb3e  89742410             mov dword ptr [esp + 0x10], esi
// 0052bb42  0fbf7170             movsx esi, word ptr [ecx + 0x70]
// 0052bb46  d84a60               fmul dword ptr [edx + 0x60]
// 0052bb49  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bb4d  db442410             fild dword ptr [esp + 0x10]
// 0052bb51  89742410             mov dword ptr [esp + 0x10], esi
// 0052bb55  d88aa0000000         fmul dword ptr [edx + 0xa0]
// 0052bb5b  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bb5f  db442410             fild dword ptr [esp + 0x10]
// 0052bb63  d88ae0000000         fmul dword ptr [edx + 0xe0]
// 0052bb69  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bb6d  d9442420             fld dword ptr [esp + 0x20]
// 0052bb71  d9c0                 fld st(0)
// 0052bb73  d9442418             fld dword ptr [esp + 0x18]
// 0052bb77  d9c0                 fld st(0)
// 0052bb79  dec2                 faddp st(2)
// 0052bb7b  d9c9                 fxch st(1)
// 0052bb7d  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bb81  dee9                 fsubp st(1)
// 0052bb83  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bb87  d944242c             fld dword ptr [esp + 0x2c]
// 0052bb8b  d9c0                 fld st(0)
// 0052bb8d  d9442414             fld dword ptr [esp + 0x14]
// 0052bb91  d9c0                 fld st(0)
// 0052bb93  dec2                 faddp st(2)
// 0052bb95  d9c9                 fxch st(1)
// 0052bb97  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bb9b  dee1                 fsubrp st(1)
// 0052bb9d  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bba1  d9442410             fld dword ptr [esp + 0x10]
// 0052bba5  d9c0                 fld st(0)
// 0052bba7  d9442418             fld dword ptr [esp + 0x18]
// 0052bbab  d9c0                 fld st(0)
// 0052bbad  dec2                 faddp st(2)
// 0052bbaf  d9c9                 fxch st(1)
// 0052bbb1  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bbb5  d9442414             fld dword ptr [esp + 0x14]
// 0052bbb9  d9c0                 fld st(0)
// 0052bbbb  d9442420             fld dword ptr [esp + 0x20]
// 0052bbbf  d9c0                 fld st(0)
// 0052bbc1  dec2                 faddp st(2)
// 0052bbc3  d9c9                 fxch st(1)
// 0052bbc5  decd                 fmulp st(5)
// 0052bbc7  d9cc                 fxch st(4)
// 0052bbc9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bbcd  d9442410             fld dword ptr [esp + 0x10]
// 0052bbd1  d9c0                 fld st(0)
// 0052bbd3  d9cd                 fxch st(5)
// 0052bbd5  dc0d40487a00         fmul qword ptr [0x7a4840]
// 0052bbdb  deed                 fsubp st(5)
// 0052bbdd  d9cc                 fxch st(4)
// 0052bbdf  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bbe3  d9442410             fld dword ptr [esp + 0x10]
// 0052bbe7  d944242c             fld dword ptr [esp + 0x2c]
// 0052bbeb  d9c0                 fld st(0)
// 0052bbed  deea                 fsubp st(2)
// 0052bbef  d9c9                 fxch st(1)
// 0052bbf1  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bbf5  d9cb                 fxch st(3)
// 0052bbf7  dee2                 fsubrp st(2)
// 0052bbf9  d9c9                 fxch st(1)
// 0052bbfb  d8cc                 fmul st(4)
// 0052bbfd  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bc01  d9442410             fld dword ptr [esp + 0x10]
// 0052bc05  d9442420             fld dword ptr [esp + 0x20]
// 0052bc09  d9c0                 fld st(0)
// 0052bc0b  deea                 fsubp st(2)
// 0052bc0d  d9c9                 fxch st(1)
// 0052bc0f  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bc13  dd0548487a00         fld qword ptr [0x7a4848]
// 0052bc19  dcca                 fmul st(2), st(0)
// 0052bc1b  d9ca                 fxch st(2)
// 0052bc1d  dee4                 fsubrp st(4)
// 0052bc1f  d9cb                 fxch st(3)
// 0052bc21  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bc25  d9442410             fld dword ptr [esp + 0x10]
// 0052bc29  d9442418             fld dword ptr [esp + 0x18]
// 0052bc2d  d9c0                 fld st(0)
// 0052bc2f  dec2                 faddp st(2)
// 0052bc31  d9c9                 fxch st(1)
// 0052bc33  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bc37  d9c2                 fld st(2)
// 0052bc39  d9442424             fld dword ptr [esp + 0x24]
// 0052bc3d  d9c0                 fld st(0)
// 0052bc3f  dec2                 faddp st(2)
// 0052bc41  d9c9                 fxch st(1)
// 0052bc43  d918                 fstp dword ptr [eax]
// 0052bc45  dee3                 fsubrp st(3)
// 0052bc47  d9ca                 fxch st(2)
// 0052bc49  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0052bc4f  d9c2                 fld st(2)
// 0052bc51  d9442428             fld dword ptr [esp + 0x28]
// 0052bc55  d9c0                 fld st(0)
// 0052bc57  dec2                 faddp st(2)
// 0052bc59  d9c9                 fxch st(1)
// 0052bc5b  d95820               fstp dword ptr [eax + 0x20]
// 0052bc5e  dee3                 fsubrp st(3)
// 0052bc60  d9ca                 fxch st(2)
// 0052bc62  d998c0000000         fstp dword ptr [eax + 0xc0]
// 0052bc68  d9c0                 fld st(0)
// 0052bc6a  d944241c             fld dword ptr [esp + 0x1c]
// 0052bc6e  d9c0                 fld st(0)
// 0052bc70  dec2                 faddp st(2)
// 0052bc72  d9c9                 fxch st(1)
// 0052bc74  d95840               fstp dword ptr [eax + 0x40]
// 0052bc77  dee1                 fsubrp st(1)
// 0052bc79  d998a0000000         fstp dword ptr [eax + 0xa0]
// 0052bc7f  d9442414             fld dword ptr [esp + 0x14]
// 0052bc83  d9c0                 fld st(0)
// 0052bc85  d9442430             fld dword ptr [esp + 0x30]
// 0052bc89  d9c0                 fld st(0)
// 0052bc8b  dec2                 faddp st(2)
// 0052bc8d  d9c9                 fxch st(1)
// 0052bc8f  d99880000000         fstp dword ptr [eax + 0x80]
// 0052bc95  dee1                 fsubrp st(1)
// 0052bc97  d95860               fstp dword ptr [eax + 0x60]
// 0052bc9a  dd0550487a00         fld qword ptr [0x7a4850]
// 0052bca0  d9c9                 fxch st(1)
// 0052bca2  83ef01               sub edi, 1
// 0052bca5  83c102               add ecx, 2
// 0052bca8  83c204               add edx, 4
// 0052bcab  83c004               add eax, 4
// 0052bcae  85ff                 test edi, edi
// 0052bcb0  0f8f3afdffff         jg 0x52b9f0
// 0052bcb6  33ed                 xor ebp, ebp
// 0052bcb8  8d74243c             lea esi, [esp + 0x3c]
// 0052bcbc  d94608               fld dword ptr [esi + 8]
// 0052bcbf  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 0052bcc6  d846f8               fadd dword ptr [esi - 8]
// 0052bcc9  8b3ca8               mov edi, dword ptr [eax + ebp*4]
// 0052bccc  03bc2448010000       add edi, dword ptr [esp + 0x148]
// 0052bcd3  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bcd7  d946f8               fld dword ptr [esi - 8]
// 0052bcda  d86608               fsub dword ptr [esi + 8]
// 0052bcdd  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bce1  d94610               fld dword ptr [esi + 0x10]
// 0052bce4  d806                 fadd dword ptr [esi]
// 0052bce6  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bcea  d906                 fld dword ptr [esi]
// 0052bcec  d86610               fsub dword ptr [esi + 0x10]
// 0052bcef  d8cb                 fmul st(3)
// 0052bcf1  d9442410             fld dword ptr [esp + 0x10]
// 0052bcf5  d9c0                 fld st(0)
// 0052bcf7  deea                 fsubp st(2)
// 0052bcf9  d9c9                 fxch st(1)
// 0052bcfb  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bcff  d9c0                 fld st(0)
// 0052bd01  d9442414             fld dword ptr [esp + 0x14]
// 0052bd05  d9c0                 fld st(0)
// 0052bd07  dec2                 faddp st(2)
// 0052bd09  d9c9                 fxch st(1)
// 0052bd0b  d95c2424             fstp dword ptr [esp + 0x24]
// 0052bd0f  dee1                 fsubrp st(1)
// 0052bd11  d95c2430             fstp dword ptr [esp + 0x30]
// 0052bd15  d9442410             fld dword ptr [esp + 0x10]
// 0052bd19  d9c0                 fld st(0)
// 0052bd1b  d944241c             fld dword ptr [esp + 0x1c]
// 0052bd1f  d9c0                 fld st(0)
// 0052bd21  dec2                 faddp st(2)
// 0052bd23  d9c9                 fxch st(1)
// 0052bd25  d95c2428             fstp dword ptr [esp + 0x28]
// 0052bd29  dee1                 fsubrp st(1)
// 0052bd2b  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bd2f  d9460c               fld dword ptr [esi + 0xc]
// 0052bd32  d84604               fadd dword ptr [esi + 4]
// 0052bd35  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bd39  d9460c               fld dword ptr [esi + 0xc]
// 0052bd3c  d86604               fsub dword ptr [esi + 4]
// 0052bd3f  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bd43  d94614               fld dword ptr [esi + 0x14]
// 0052bd46  d846fc               fadd dword ptr [esi - 4]
// 0052bd49  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bd4d  d946fc               fld dword ptr [esi - 4]
// 0052bd50  d86614               fsub dword ptr [esi + 0x14]
// 0052bd53  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bd57  d9442410             fld dword ptr [esp + 0x10]
// 0052bd5b  d9c0                 fld st(0)
// 0052bd5d  d9442418             fld dword ptr [esp + 0x18]
// 0052bd61  d9c0                 fld st(0)
// 0052bd63  dec2                 faddp st(2)
// 0052bd65  d9c9                 fxch st(1)
// 0052bd67  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bd6b  d9442414             fld dword ptr [esp + 0x14]
// 0052bd6f  d9442420             fld dword ptr [esp + 0x20]
// 0052bd73  d9c0                 fld st(0)
// 0052bd75  dec2                 faddp st(2)
// 0052bd77  d9c9                 fxch st(1)
// 0052bd79  d8cd                 fmul st(5)
// 0052bd7b  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bd7f  d9442410             fld dword ptr [esp + 0x10]
// 0052bd83  d9c9                 fxch st(1)
// 0052bd85  dc0d40487a00         fmul qword ptr [0x7a4840]
// 0052bd8b  dee9                 fsubp st(1)
// 0052bd8d  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bd91  d9442418             fld dword ptr [esp + 0x18]
// 0052bd95  d944242c             fld dword ptr [esp + 0x2c]
// 0052bd99  d9c0                 fld st(0)
// 0052bd9b  deea                 fsubp st(2)
// 0052bd9d  d9c9                 fxch st(1)
// 0052bd9f  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bda3  d9ca                 fxch st(2)
// 0052bda5  dee1                 fsubrp st(1)
// 0052bda7  d8cc                 fmul st(4)
// 0052bda9  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bdad  d9442418             fld dword ptr [esp + 0x18]
// 0052bdb1  d9442420             fld dword ptr [esp + 0x20]
// 0052bdb5  d9c0                 fld st(0)
// 0052bdb7  deea                 fsubp st(2)
// 0052bdb9  d9c9                 fxch st(1)
// 0052bdbb  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bdbf  d9442414             fld dword ptr [esp + 0x14]
// 0052bdc3  d8cb                 fmul st(3)
// 0052bdc5  d8642410             fsub dword ptr [esp + 0x10]
// 0052bdc9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bdcd  d9442410             fld dword ptr [esp + 0x10]
// 0052bdd1  d9442418             fld dword ptr [esp + 0x18]
// 0052bdd5  d9c0                 fld st(0)
// 0052bdd7  dec2                 faddp st(2)
// 0052bdd9  d9c9                 fxch st(1)
// 0052bddb  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bddf  d9c2                 fld st(2)
// 0052bde1  d8442424             fadd dword ptr [esp + 0x24]
// 0052bde5  e8764f1000           call 0x630d60
// 0052bdea  d9442424             fld dword ptr [esp + 0x24]
// 0052bdee  83c004               add eax, 4
// 0052bdf1  dee3                 fsubrp st(3)
// 0052bdf3  c1f803               sar eax, 3
// 0052bdf6  d9ca                 fxch st(2)
// 0052bdf8  25ff030000           and eax, 0x3ff
// 0052bdfd  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052be01  880f                 mov byte ptr [edi], cl
// 0052be03  e8584f1000           call 0x630d60
// 0052be08  83c004               add eax, 4
// 0052be0b  d9c0                 fld st(0)
// 0052be0d  c1f803               sar eax, 3
// 0052be10  d9442428             fld dword ptr [esp + 0x28]
// 0052be14  25ff030000           and eax, 0x3ff
// 0052be19  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052be1d  d9c0                 fld st(0)
// 0052be1f  dec2                 faddp st(2)
// 0052be21  d9c9                 fxch st(1)
// 0052be23  885707               mov byte ptr [edi + 7], dl
// 0052be26  e8354f1000           call 0x630d60
// 0052be2b  83c004               add eax, 4
// 0052be2e  c1f803               sar eax, 3
// 0052be31  dee1                 fsubrp st(1)
// 0052be33  25ff030000           and eax, 0x3ff
// 0052be38  0fb60418             movzx eax, byte ptr [eax + ebx]
// 0052be3c  884701               mov byte ptr [edi + 1], al
// 0052be3f  e81c4f1000           call 0x630d60
// 0052be44  83c004               add eax, 4
// 0052be47  d9c0                 fld st(0)
// 0052be49  c1f803               sar eax, 3
// 0052be4c  d944241c             fld dword ptr [esp + 0x1c]
// 0052be50  25ff030000           and eax, 0x3ff
// 0052be55  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052be59  d9c0                 fld st(0)
// 0052be5b  dec2                 faddp st(2)
// 0052be5d  d9c9                 fxch st(1)
// 0052be5f  884f06               mov byte ptr [edi + 6], cl
// 0052be62  e8f94e1000           call 0x630d60
// 0052be67  83c004               add eax, 4
// 0052be6a  c1f803               sar eax, 3
// 0052be6d  dee1                 fsubrp st(1)
// 0052be6f  25ff030000           and eax, 0x3ff
// 0052be74  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052be78  885702               mov byte ptr [edi + 2], dl
// 0052be7b  e8e04e1000           call 0x630d60
// 0052be80  83c004               add eax, 4
// 0052be83  d9442414             fld dword ptr [esp + 0x14]
// 0052be87  c1f803               sar eax, 3
// 0052be8a  d9c0                 fld st(0)
// 0052be8c  25ff030000           and eax, 0x3ff
// 0052be91  d9442430             fld dword ptr [esp + 0x30]
// 0052be95  0fb60418             movzx eax, byte ptr [eax + ebx]
// 0052be99  d9c0                 fld st(0)
// 0052be9b  dec2                 faddp st(2)
// 0052be9d  884705               mov byte ptr [edi + 5], al
// 0052bea0  d9c9                 fxch st(1)
// 0052bea2  e8b94e1000           call 0x630d60
// 0052bea7  83c004               add eax, 4
// 0052beaa  c1f803               sar eax, 3
// 0052bead  dee1                 fsubrp st(1)
// 0052beaf  25ff030000           and eax, 0x3ff
// 0052beb4  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052beb8  884f04               mov byte ptr [edi + 4], cl
// 0052bebb  e8a04e1000           call 0x630d60
// 0052bec0  83c004               add eax, 4
// 0052bec3  c1f803               sar eax, 3
// 0052bec6  25ff030000           and eax, 0x3ff
// 0052becb  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052becf  83c501               add ebp, 1
// 0052bed2  83c620               add esi, 0x20
// 0052bed5  83fd08               cmp ebp, 8
// 0052bed8  885703               mov byte ptr [edi + 3], dl
// 0052bedb  0f8cdbfdffff         jl 0x52bcbc
// 0052bee1  5f                   pop edi
// 0052bee2  ddda                 fstp st(2)
// 0052bee4  5e                   pop esi
// 0052bee5  ddd8                 fstp st(0)
// 0052bee7  5d                   pop ebp
// 0052bee8  ddd8                 fstp st(0)
// 0052beea  5b                   pop ebx
// 0052beeb  81c424010000         add esp, 0x124
// 0052bef1  c3                   ret 
// library jpeg-6b/jidctflt.c (function _jpeg_idct_float)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctflt.c
