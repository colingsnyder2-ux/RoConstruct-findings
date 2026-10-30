// roc 2007-03 0052bbc0  unit: seg_00520000  size: 1346 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052bbc0
//
// 0052bbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0052bbc4  dd0550487a00         fld qword ptr [0x7a4850]
// 0052bbca  8b542408             mov edx, dword ptr [esp + 8]
// 0052bbce  dd0548487a00         fld qword ptr [0x7a4848]
// 0052bbd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052bbd8  dd0540487a00         fld qword ptr [0x7a4840]
// 0052bbde  8b5250               mov edx, dword ptr [edx + 0x50]
// 0052bbe1  81ec24010000         sub esp, 0x124
// 0052bbe7  53                   push ebx
// 0052bbe8  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0052bbee  55                   push ebp
// 0052bbef  56                   push esi
// 0052bbf0  57                   push edi
// 0052bbf1  81c380000000         add ebx, 0x80
// 0052bbf7  8d442434             lea eax, [esp + 0x34]
// 0052bbfb  bf08000000           mov edi, 8
// 0052bc00  0fb77110             movzx esi, word ptr [ecx + 0x10]
// 0052bc04  6685f6               test si, si
// 0052bc07  7561                 jne 0x52bc6a
// 0052bc09  66397120             cmp word ptr [ecx + 0x20], si
// 0052bc0d  755b                 jne 0x52bc6a
// 0052bc0f  66397130             cmp word ptr [ecx + 0x30], si
// 0052bc13  7555                 jne 0x52bc6a
// 0052bc15  66397140             cmp word ptr [ecx + 0x40], si
// 0052bc19  754f                 jne 0x52bc6a
// 0052bc1b  66397150             cmp word ptr [ecx + 0x50], si
// 0052bc1f  7549                 jne 0x52bc6a
// 0052bc21  66397160             cmp word ptr [ecx + 0x60], si
// 0052bc25  7543                 jne 0x52bc6a
// 0052bc27  66397170             cmp word ptr [ecx + 0x70], si
// 0052bc2b  753d                 jne 0x52bc6a
// 0052bc2d  0fbf31               movsx esi, word ptr [ecx]
// 0052bc30  89742410             mov dword ptr [esp + 0x10], esi
// 0052bc34  db442410             fild dword ptr [esp + 0x10]
// 0052bc38  d80a                 fmul dword ptr [edx]
// 0052bc3a  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bc3e  d9442410             fld dword ptr [esp + 0x10]
// 0052bc42  d910                 fst dword ptr [eax]
// 0052bc44  d95020               fst dword ptr [eax + 0x20]
// 0052bc47  d95040               fst dword ptr [eax + 0x40]
// 0052bc4a  d95060               fst dword ptr [eax + 0x60]
// 0052bc4d  d99080000000         fst dword ptr [eax + 0x80]
// 0052bc53  d990a0000000         fst dword ptr [eax + 0xa0]
// 0052bc59  d990c0000000         fst dword ptr [eax + 0xc0]
// 0052bc5f  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0052bc65  e948020000           jmp 0x52beb2
// 0052bc6a  ddd8                 fstp st(0)
// 0052bc6c  0fbf29               movsx ebp, word ptr [ecx]
// 0052bc6f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052bc73  0fbf6920             movsx ebp, word ptr [ecx + 0x20]
// 0052bc77  db442410             fild dword ptr [esp + 0x10]
// 0052bc7b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052bc7f  0fbf6940             movsx ebp, word ptr [ecx + 0x40]
// 0052bc83  d80a                 fmul dword ptr [edx]
// 0052bc85  0fbff6               movsx esi, si
// 0052bc88  d95c2424             fstp dword ptr [esp + 0x24]
// 0052bc8c  db442410             fild dword ptr [esp + 0x10]
// 0052bc90  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052bc94  0fbf6960             movsx ebp, word ptr [ecx + 0x60]
// 0052bc98  d84a40               fmul dword ptr [edx + 0x40]
// 0052bc9b  d95c2428             fstp dword ptr [esp + 0x28]
// 0052bc9f  db442410             fild dword ptr [esp + 0x10]
// 0052bca3  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052bca7  d88a80000000         fmul dword ptr [edx + 0x80]
// 0052bcad  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bcb1  db442410             fild dword ptr [esp + 0x10]
// 0052bcb5  d88ac0000000         fmul dword ptr [edx + 0xc0]
// 0052bcbb  d95c2430             fstp dword ptr [esp + 0x30]
// 0052bcbf  d944241c             fld dword ptr [esp + 0x1c]
// 0052bcc3  d9c0                 fld st(0)
// 0052bcc5  d9442424             fld dword ptr [esp + 0x24]
// 0052bcc9  d9c0                 fld st(0)
// 0052bccb  dec2                 faddp st(2)
// 0052bccd  d9c9                 fxch st(1)
// 0052bccf  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bcd3  dee1                 fsubrp st(1)
// 0052bcd5  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bcd9  d9442430             fld dword ptr [esp + 0x30]
// 0052bcdd  d9c0                 fld st(0)
// 0052bcdf  d9442428             fld dword ptr [esp + 0x28]
// 0052bce3  d9c0                 fld st(0)
// 0052bce5  dec2                 faddp st(2)
// 0052bce7  d9c9                 fxch st(1)
// 0052bce9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bced  dee1                 fsubrp st(1)
// 0052bcef  d8ca                 fmul st(2)
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
// 0052bd19  89742410             mov dword ptr [esp + 0x10], esi
// 0052bd1d  d9c0                 fld st(0)
// 0052bd1f  0fbf7130             movsx esi, word ptr [ecx + 0x30]
// 0052bd23  d944241c             fld dword ptr [esp + 0x1c]
// 0052bd27  d9c0                 fld st(0)
// 0052bd29  dec2                 faddp st(2)
// 0052bd2b  d9c9                 fxch st(1)
// 0052bd2d  d95c2428             fstp dword ptr [esp + 0x28]
// 0052bd31  dee1                 fsubrp st(1)
// 0052bd33  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bd37  d94220               fld dword ptr [edx + 0x20]
// 0052bd3a  da4c2410             fimul dword ptr [esp + 0x10]
// 0052bd3e  89742410             mov dword ptr [esp + 0x10], esi
// 0052bd42  0fbf7150             movsx esi, word ptr [ecx + 0x50]
// 0052bd46  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bd4a  db442410             fild dword ptr [esp + 0x10]
// 0052bd4e  89742410             mov dword ptr [esp + 0x10], esi
// 0052bd52  0fbf7170             movsx esi, word ptr [ecx + 0x70]
// 0052bd56  d84a60               fmul dword ptr [edx + 0x60]
// 0052bd59  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bd5d  db442410             fild dword ptr [esp + 0x10]
// 0052bd61  89742410             mov dword ptr [esp + 0x10], esi
// 0052bd65  d88aa0000000         fmul dword ptr [edx + 0xa0]
// 0052bd6b  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bd6f  db442410             fild dword ptr [esp + 0x10]
// 0052bd73  d88ae0000000         fmul dword ptr [edx + 0xe0]
// 0052bd79  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bd7d  d9442420             fld dword ptr [esp + 0x20]
// 0052bd81  d9c0                 fld st(0)
// 0052bd83  d9442418             fld dword ptr [esp + 0x18]
// 0052bd87  d9c0                 fld st(0)
// 0052bd89  dec2                 faddp st(2)
// 0052bd8b  d9c9                 fxch st(1)
// 0052bd8d  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bd91  dee9                 fsubp st(1)
// 0052bd93  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bd97  d944242c             fld dword ptr [esp + 0x2c]
// 0052bd9b  d9c0                 fld st(0)
// 0052bd9d  d9442414             fld dword ptr [esp + 0x14]
// 0052bda1  d9c0                 fld st(0)
// 0052bda3  dec2                 faddp st(2)
// 0052bda5  d9c9                 fxch st(1)
// 0052bda7  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bdab  dee1                 fsubrp st(1)
// 0052bdad  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bdb1  d9442410             fld dword ptr [esp + 0x10]
// 0052bdb5  d9c0                 fld st(0)
// 0052bdb7  d9442418             fld dword ptr [esp + 0x18]
// 0052bdbb  d9c0                 fld st(0)
// 0052bdbd  dec2                 faddp st(2)
// 0052bdbf  d9c9                 fxch st(1)
// 0052bdc1  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bdc5  d9442414             fld dword ptr [esp + 0x14]
// 0052bdc9  d9c0                 fld st(0)
// 0052bdcb  d9442420             fld dword ptr [esp + 0x20]
// 0052bdcf  d9c0                 fld st(0)
// 0052bdd1  dec2                 faddp st(2)
// 0052bdd3  d9c9                 fxch st(1)
// 0052bdd5  decd                 fmulp st(5)
// 0052bdd7  d9cc                 fxch st(4)
// 0052bdd9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bddd  d9442410             fld dword ptr [esp + 0x10]
// 0052bde1  d9c0                 fld st(0)
// 0052bde3  d9cd                 fxch st(5)
// 0052bde5  dc0d38487a00         fmul qword ptr [0x7a4838]
// 0052bdeb  deed                 fsubp st(5)
// 0052bded  d9cc                 fxch st(4)
// 0052bdef  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bdf3  d9442410             fld dword ptr [esp + 0x10]
// 0052bdf7  d944242c             fld dword ptr [esp + 0x2c]
// 0052bdfb  d9c0                 fld st(0)
// 0052bdfd  deea                 fsubp st(2)
// 0052bdff  d9c9                 fxch st(1)
// 0052be01  d95c2420             fstp dword ptr [esp + 0x20]
// 0052be05  d9cb                 fxch st(3)
// 0052be07  dee2                 fsubrp st(2)
// 0052be09  d9c9                 fxch st(1)
// 0052be0b  d8cc                 fmul st(4)
// 0052be0d  d95c2410             fstp dword ptr [esp + 0x10]
// 0052be11  d9442410             fld dword ptr [esp + 0x10]
// 0052be15  d9442420             fld dword ptr [esp + 0x20]
// 0052be19  d9c0                 fld st(0)
// 0052be1b  deea                 fsubp st(2)
// 0052be1d  d9c9                 fxch st(1)
// 0052be1f  d95c2418             fstp dword ptr [esp + 0x18]
// 0052be23  dd0540487a00         fld qword ptr [0x7a4840]
// 0052be29  dcca                 fmul st(2), st(0)
// 0052be2b  d9ca                 fxch st(2)
// 0052be2d  dee4                 fsubrp st(4)
// 0052be2f  d9cb                 fxch st(3)
// 0052be31  d95c2410             fstp dword ptr [esp + 0x10]
// 0052be35  d9442410             fld dword ptr [esp + 0x10]
// 0052be39  d9442418             fld dword ptr [esp + 0x18]
// 0052be3d  d9c0                 fld st(0)
// 0052be3f  dec2                 faddp st(2)
// 0052be41  d9c9                 fxch st(1)
// 0052be43  d95c2414             fstp dword ptr [esp + 0x14]
// 0052be47  d9c2                 fld st(2)
// 0052be49  d9442424             fld dword ptr [esp + 0x24]
// 0052be4d  d9c0                 fld st(0)
// 0052be4f  dec2                 faddp st(2)
// 0052be51  d9c9                 fxch st(1)
// 0052be53  d918                 fstp dword ptr [eax]
// 0052be55  dee3                 fsubrp st(3)
// 0052be57  d9ca                 fxch st(2)
// 0052be59  d998e0000000         fstp dword ptr [eax + 0xe0]
// 0052be5f  d9c2                 fld st(2)
// 0052be61  d9442428             fld dword ptr [esp + 0x28]
// 0052be65  d9c0                 fld st(0)
// 0052be67  dec2                 faddp st(2)
// 0052be69  d9c9                 fxch st(1)
// 0052be6b  d95820               fstp dword ptr [eax + 0x20]
// 0052be6e  dee3                 fsubrp st(3)
// 0052be70  d9ca                 fxch st(2)
// 0052be72  d998c0000000         fstp dword ptr [eax + 0xc0]
// 0052be78  d9c0                 fld st(0)
// 0052be7a  d944241c             fld dword ptr [esp + 0x1c]
// 0052be7e  d9c0                 fld st(0)
// 0052be80  dec2                 faddp st(2)
// 0052be82  d9c9                 fxch st(1)
// 0052be84  d95840               fstp dword ptr [eax + 0x40]
// 0052be87  dee1                 fsubrp st(1)
// 0052be89  d998a0000000         fstp dword ptr [eax + 0xa0]
// 0052be8f  d9442414             fld dword ptr [esp + 0x14]
// 0052be93  d9c0                 fld st(0)
// 0052be95  d9442430             fld dword ptr [esp + 0x30]
// 0052be99  d9c0                 fld st(0)
// 0052be9b  dec2                 faddp st(2)
// 0052be9d  d9c9                 fxch st(1)
// 0052be9f  d99880000000         fstp dword ptr [eax + 0x80]
// 0052bea5  dee1                 fsubrp st(1)
// 0052bea7  d95860               fstp dword ptr [eax + 0x60]
// 0052beaa  dd0548487a00         fld qword ptr [0x7a4848]
// 0052beb0  d9c9                 fxch st(1)
// 0052beb2  83ef01               sub edi, 1
// 0052beb5  83c102               add ecx, 2
// 0052beb8  83c204               add edx, 4
// 0052bebb  83c004               add eax, 4
// 0052bebe  85ff                 test edi, edi
// 0052bec0  0f8f3afdffff         jg 0x52bc00
// 0052bec6  33ed                 xor ebp, ebp
// 0052bec8  8d74243c             lea esi, [esp + 0x3c]
// 0052becc  d94608               fld dword ptr [esi + 8]
// 0052becf  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 0052bed6  d846f8               fadd dword ptr [esi - 8]
// 0052bed9  8b3ca8               mov edi, dword ptr [eax + ebp*4]
// 0052bedc  03bc2448010000       add edi, dword ptr [esp + 0x148]
// 0052bee3  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bee7  d946f8               fld dword ptr [esi - 8]
// 0052beea  d86608               fsub dword ptr [esi + 8]
// 0052beed  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bef1  d94610               fld dword ptr [esi + 0x10]
// 0052bef4  d806                 fadd dword ptr [esi]
// 0052bef6  d95c2410             fstp dword ptr [esp + 0x10]
// 0052befa  d906                 fld dword ptr [esi]
// 0052befc  d86610               fsub dword ptr [esi + 0x10]
// 0052beff  d8cb                 fmul st(3)
// 0052bf01  d9442410             fld dword ptr [esp + 0x10]
// 0052bf05  d9c0                 fld st(0)
// 0052bf07  deea                 fsubp st(2)
// 0052bf09  d9c9                 fxch st(1)
// 0052bf0b  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bf0f  d9c0                 fld st(0)
// 0052bf11  d9442414             fld dword ptr [esp + 0x14]
// 0052bf15  d9c0                 fld st(0)
// 0052bf17  dec2                 faddp st(2)
// 0052bf19  d9c9                 fxch st(1)
// 0052bf1b  d95c2424             fstp dword ptr [esp + 0x24]
// 0052bf1f  dee1                 fsubrp st(1)
// 0052bf21  d95c2430             fstp dword ptr [esp + 0x30]
// 0052bf25  d9442410             fld dword ptr [esp + 0x10]
// 0052bf29  d9c0                 fld st(0)
// 0052bf2b  d944241c             fld dword ptr [esp + 0x1c]
// 0052bf2f  d9c0                 fld st(0)
// 0052bf31  dec2                 faddp st(2)
// 0052bf33  d9c9                 fxch st(1)
// 0052bf35  d95c2428             fstp dword ptr [esp + 0x28]
// 0052bf39  dee1                 fsubrp st(1)
// 0052bf3b  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052bf3f  d9460c               fld dword ptr [esi + 0xc]
// 0052bf42  d84604               fadd dword ptr [esi + 4]
// 0052bf45  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bf49  d9460c               fld dword ptr [esi + 0xc]
// 0052bf4c  d86604               fsub dword ptr [esi + 4]
// 0052bf4f  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bf53  d94614               fld dword ptr [esi + 0x14]
// 0052bf56  d846fc               fadd dword ptr [esi - 4]
// 0052bf59  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bf5d  d946fc               fld dword ptr [esi - 4]
// 0052bf60  d86614               fsub dword ptr [esi + 0x14]
// 0052bf63  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bf67  d9442410             fld dword ptr [esp + 0x10]
// 0052bf6b  d9c0                 fld st(0)
// 0052bf6d  d9442418             fld dword ptr [esp + 0x18]
// 0052bf71  d9c0                 fld st(0)
// 0052bf73  dec2                 faddp st(2)
// 0052bf75  d9c9                 fxch st(1)
// 0052bf77  d95c242c             fstp dword ptr [esp + 0x2c]
// 0052bf7b  d9442414             fld dword ptr [esp + 0x14]
// 0052bf7f  d9442420             fld dword ptr [esp + 0x20]
// 0052bf83  d9c0                 fld st(0)
// 0052bf85  dec2                 faddp st(2)
// 0052bf87  d9c9                 fxch st(1)
// 0052bf89  d8cd                 fmul st(5)
// 0052bf8b  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bf8f  d9442410             fld dword ptr [esp + 0x10]
// 0052bf93  d9c9                 fxch st(1)
// 0052bf95  dc0d38487a00         fmul qword ptr [0x7a4838]
// 0052bf9b  dee9                 fsubp st(1)
// 0052bf9d  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bfa1  d9442418             fld dword ptr [esp + 0x18]
// 0052bfa5  d944242c             fld dword ptr [esp + 0x2c]
// 0052bfa9  d9c0                 fld st(0)
// 0052bfab  deea                 fsubp st(2)
// 0052bfad  d9c9                 fxch st(1)
// 0052bfaf  d95c2420             fstp dword ptr [esp + 0x20]
// 0052bfb3  d9ca                 fxch st(2)
// 0052bfb5  dee1                 fsubrp st(1)
// 0052bfb7  d8cc                 fmul st(4)
// 0052bfb9  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bfbd  d9442418             fld dword ptr [esp + 0x18]
// 0052bfc1  d9442420             fld dword ptr [esp + 0x20]
// 0052bfc5  d9c0                 fld st(0)
// 0052bfc7  deea                 fsubp st(2)
// 0052bfc9  d9c9                 fxch st(1)
// 0052bfcb  d95c2418             fstp dword ptr [esp + 0x18]
// 0052bfcf  d9442414             fld dword ptr [esp + 0x14]
// 0052bfd3  d8cb                 fmul st(3)
// 0052bfd5  d8642410             fsub dword ptr [esp + 0x10]
// 0052bfd9  d95c2410             fstp dword ptr [esp + 0x10]
// 0052bfdd  d9442410             fld dword ptr [esp + 0x10]
// 0052bfe1  d9442418             fld dword ptr [esp + 0x18]
// 0052bfe5  d9c0                 fld st(0)
// 0052bfe7  dec2                 faddp st(2)
// 0052bfe9  d9c9                 fxch st(1)
// 0052bfeb  d95c2414             fstp dword ptr [esp + 0x14]
// 0052bfef  d9c2                 fld st(2)
// 0052bff1  d8442424             fadd dword ptr [esp + 0x24]
// 0052bff5  e806320f00           call 0x61f200
// 0052bffa  d9442424             fld dword ptr [esp + 0x24]
// 0052bffe  83c004               add eax, 4
// 0052c001  dee3                 fsubrp st(3)
// 0052c003  c1f803               sar eax, 3
// 0052c006  d9ca                 fxch st(2)
// 0052c008  25ff030000           and eax, 0x3ff
// 0052c00d  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052c011  880f                 mov byte ptr [edi], cl
// 0052c013  e8e8310f00           call 0x61f200
// 0052c018  83c004               add eax, 4
// 0052c01b  d9c0                 fld st(0)
// 0052c01d  c1f803               sar eax, 3
// 0052c020  d9442428             fld dword ptr [esp + 0x28]
// 0052c024  25ff030000           and eax, 0x3ff
// 0052c029  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052c02d  d9c0                 fld st(0)
// 0052c02f  dec2                 faddp st(2)
// 0052c031  d9c9                 fxch st(1)
// 0052c033  885707               mov byte ptr [edi + 7], dl
// 0052c036  e8c5310f00           call 0x61f200
// 0052c03b  83c004               add eax, 4
// 0052c03e  c1f803               sar eax, 3
// 0052c041  dee1                 fsubrp st(1)
// 0052c043  25ff030000           and eax, 0x3ff
// 0052c048  0fb60418             movzx eax, byte ptr [eax + ebx]
// 0052c04c  884701               mov byte ptr [edi + 1], al
// 0052c04f  e8ac310f00           call 0x61f200
// 0052c054  83c004               add eax, 4
// 0052c057  d9c0                 fld st(0)
// 0052c059  c1f803               sar eax, 3
// 0052c05c  d944241c             fld dword ptr [esp + 0x1c]
// 0052c060  25ff030000           and eax, 0x3ff
// 0052c065  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052c069  d9c0                 fld st(0)
// 0052c06b  dec2                 faddp st(2)
// 0052c06d  d9c9                 fxch st(1)
// 0052c06f  884f06               mov byte ptr [edi + 6], cl
// 0052c072  e889310f00           call 0x61f200
// 0052c077  83c004               add eax, 4
// 0052c07a  c1f803               sar eax, 3
// 0052c07d  dee1                 fsubrp st(1)
// 0052c07f  25ff030000           and eax, 0x3ff
// 0052c084  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052c088  885702               mov byte ptr [edi + 2], dl
// 0052c08b  e870310f00           call 0x61f200
// 0052c090  83c004               add eax, 4
// 0052c093  d9442414             fld dword ptr [esp + 0x14]
// 0052c097  c1f803               sar eax, 3
// 0052c09a  d9c0                 fld st(0)
// 0052c09c  25ff030000           and eax, 0x3ff
// 0052c0a1  d9442430             fld dword ptr [esp + 0x30]
// 0052c0a5  0fb60418             movzx eax, byte ptr [eax + ebx]
// 0052c0a9  d9c0                 fld st(0)
// 0052c0ab  dec2                 faddp st(2)
// 0052c0ad  884705               mov byte ptr [edi + 5], al
// 0052c0b0  d9c9                 fxch st(1)
// 0052c0b2  e849310f00           call 0x61f200
// 0052c0b7  83c004               add eax, 4
// 0052c0ba  c1f803               sar eax, 3
// 0052c0bd  dee1                 fsubrp st(1)
// 0052c0bf  25ff030000           and eax, 0x3ff
// 0052c0c4  0fb60c18             movzx ecx, byte ptr [eax + ebx]
// 0052c0c8  884f04               mov byte ptr [edi + 4], cl
// 0052c0cb  e830310f00           call 0x61f200
// 0052c0d0  83c004               add eax, 4
// 0052c0d3  c1f803               sar eax, 3
// 0052c0d6  25ff030000           and eax, 0x3ff
// 0052c0db  0fb61418             movzx edx, byte ptr [eax + ebx]
// 0052c0df  83c501               add ebp, 1
// 0052c0e2  83c620               add esi, 0x20
// 0052c0e5  83fd08               cmp ebp, 8
// 0052c0e8  885703               mov byte ptr [edi + 3], dl
// 0052c0eb  0f8cdbfdffff         jl 0x52becc
// 0052c0f1  5f                   pop edi
// 0052c0f2  ddda                 fstp st(2)
// 0052c0f4  5e                   pop esi
// 0052c0f5  ddd8                 fstp st(0)
// 0052c0f7  5d                   pop ebp
// 0052c0f8  ddd8                 fstp st(0)
// 0052c0fa  5b                   pop ebx
// 0052c0fb  81c424010000         add esp, 0x124
// 0052c101  c3                   ret 
// library jpeg-6b/jidctflt.c (function _jpeg_idct_float)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctflt.c
