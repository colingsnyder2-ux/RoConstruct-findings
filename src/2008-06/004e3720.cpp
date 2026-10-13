// roc 2008-06 004e3720  unit: seg_004e0000  size: 911 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e3720
//
// 004e3720  6aff                 push -1
// 004e3722  68d9a37c00           push 0x7ca3d9
// 004e3727  64a100000000         mov eax, dword ptr fs:[0]
// 004e372d  50                   push eax
// 004e372e  64892500000000       mov dword ptr fs:[0], esp
// 004e3735  81ec40010000         sub esp, 0x140
// 004e373b  53                   push ebx
// 004e373c  56                   push esi
// 004e373d  8bf1                 mov esi, ecx
// 004e373f  6a28                 push 0x28
// 004e3741  89b4249c000000       mov dword ptr [esp + 0x9c], esi
// 004e3748  e8d3d11b00           call 0x6a0920
// 004e374d  83c404               add esp, 4
// 004e3750  89442410             mov dword ptr [esp + 0x10], eax
// 004e3754  33db                 xor ebx, ebx
// 004e3756  899c2450010000       mov dword ptr [esp + 0x150], ebx
// 004e375d  3bc3                 cmp eax, ebx
// 004e375f  740b                 je 0x4e376c
// 004e3761  6a05                 push 5
// 004e3763  8bc8                 mov ecx, eax
// 004e3765  e8769bffff           call 0x4dd2e0
// 004e376a  eb02                 jmp 0x4e376e
// 004e376c  33c0                 xor eax, eax
// 004e376e  895c2420             mov dword ptr [esp + 0x20], ebx
// 004e3772  3bc3                 cmp eax, ebx
// 004e3774  7412                 je 0x4e3788
// 004e3776  89442420             mov dword ptr [esp + 0x20], eax
// 004e377a  83c004               add eax, 4
// 004e377d  50                   push eax
// 004e377e  ff15b0218000         call dword ptr [0x8021b0]
// 004e3784  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004e3788  55                   push ebp
// 004e3789  57                   push edi
// 004e378a  8d442428             lea eax, [esp + 0x28]
// 004e378e  50                   push eax
// 004e378f  8d4e0c               lea ecx, [esi + 0xc]
// 004e3792  c784245c01000001000000 mov dword ptr [esp + 0x15c], 1
// 004e379d  e80e94ffff           call 0x4dcbb0
// 004e37a2  8b842460010000       mov eax, dword ptr [esp + 0x160]
// 004e37a9  d900                 fld dword ptr [eax]
// 004e37ab  8d8c2468010000       lea ecx, [esp + 0x168]
// 004e37b2  d905ac9b8100         fld dword ptr [0x819bac]
// 004e37b8  dcc9                 fmul st(1), st(0)
// 004e37ba  d94004               fld dword ptr [eax + 4]
// 004e37bd  d8c9                 fmul st(1)
// 004e37bf  d94008               fld dword ptr [eax + 8]
// 004e37c2  deca                 fmulp st(2)
// 004e37c4  d9ca                 fxch st(2)
// 004e37c6  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 004e37cd  d9c9                 fxch st(1)
// 004e37cf  d99c24a8000000       fstp dword ptr [esp + 0xa8]
// 004e37d6  d99c24ac000000       fstp dword ptr [esp + 0xac]
// 004e37dd  e8ae240d00           call 0x5b5c90
// 004e37e2  89442418             mov dword ptr [esp + 0x18], eax
// 004e37e6  db442418             fild dword ptr [esp + 0x18]
// 004e37ea  85c0                 test eax, eax
// 004e37ec  7d06                 jge 0x4e37f4
// 004e37ee  d80578978100         fadd dword ptr [0x819778]
// 004e37f4  8b842464010000       mov eax, dword ptr [esp + 0x164]
// 004e37fb  d9542420             fst dword ptr [esp + 0x20]
// 004e37ff  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 004e3806  51                   push ecx
// 004e3807  8d54242c             lea edx, [esp + 0x2c]
// 004e380b  52                   push edx
// 004e380c  51                   push ecx
// 004e380d  d91c24               fstp dword ptr [esp]
// 004e3810  50                   push eax
// 004e3811  d90558279700         fld dword ptr [0x972758]
// 004e3817  51                   push ecx
// 004e3818  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 004e381f  d91c24               fstp dword ptr [esp]
// 004e3822  51                   push ecx
// 004e3823  e838abffff           call 0x4de360
// 004e3828  8bb42484010000       mov esi, dword ptr [esp + 0x184]
// 004e382f  8b560c               mov edx, dword ptr [esi + 0xc]
// 004e3832  8bbc2488010000       mov edi, dword ptr [esp + 0x188]
// 004e3839  c1e204               shl edx, 4
// 004e383c  d9443a08             fld dword ptr [edx + edi + 8]
// 004e3840  8d043a               lea eax, [edx + edi]
// 004e3843  d905746e8200         fld dword ptr [0x826e74]
// 004e3849  8bac248c010000       mov ebp, dword ptr [esp + 0x18c]
// 004e3850  dcc9                 fmul st(1), st(0)
// 004e3852  83c418               add esp, 0x18
// 004e3855  d8480c               fmul dword ptr [eax + 0xc]
// 004e3858  d9842478010000       fld dword ptr [esp + 0x178]
// 004e385f  dcca                 fmul st(2), st(0)
// 004e3861  dec9                 fmulp st(1)
// 004e3863  d9c1                 fld st(1)
// 004e3865  d800                 fadd dword ptr [eax]
// 004e3867  d9c0                 fld st(0)
// 004e3869  d9542438             fst dword ptr [esp + 0x38]
// 004e386d  d9c2                 fld st(2)
// 004e386f  d84004               fadd dword ptr [eax + 4]
// 004e3872  d9c0                 fld st(0)
// 004e3874  d9542410             fst dword ptr [esp + 0x10]
// 004e3878  d94008               fld dword ptr [eax + 8]
// 004e387b  d800                 fadd dword ptr [eax]
// 004e387d  dee6                 fsubrp st(6)
// 004e387f  d9c5                 fld st(5)
// 004e3881  d954243c             fst dword ptr [esp + 0x3c]
// 004e3885  d9ca                 fxch st(2)
// 004e3887  d9542434             fst dword ptr [esp + 0x34]
// 004e388b  d9ce                 fxch st(6)
// 004e388d  d9542418             fst dword ptr [esp + 0x18]
// 004e3891  d94004               fld dword ptr [eax + 4]
// 004e3894  d8400c               fadd dword ptr [eax + 0xc]
// 004e3897  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004e389a  dee6                 fsubrp st(6)
// 004e389c  d9cd                 fxch st(5)
// 004e389e  d9542424             fst dword ptr [esp + 0x24]
// 004e38a2  d9442424             fld dword ptr [esp + 0x24]
// 004e38a6  d9cd                 fxch st(5)
// 004e38a8  d954242c             fst dword ptr [esp + 0x2c]
// 004e38ac  d9c9                 fxch st(1)
// 004e38ae  d9542430             fst dword ptr [esp + 0x30]
// 004e38b2  a801                 test al, 1
// 004e38b4  7440                 je 0x4e38f6
// 004e38b6  dddc                 fstp st(4)
// 004e38b8  ddd9                 fstp st(1)
// 004e38ba  ddd9                 fstp st(1)
// 004e38bc  dddc                 fstp st(4)
// 004e38be  ddda                 fstp st(2)
// 004e38c0  ddd8                 fstp st(0)
// 004e38c2  ddd9                 fstp st(1)
// 004e38c4  ddd8                 fstp st(0)
// 004e38c6  d944243c             fld dword ptr [esp + 0x3c]
// 004e38ca  d9442434             fld dword ptr [esp + 0x34]
// 004e38ce  d9442438             fld dword ptr [esp + 0x38]
// 004e38d2  d9442410             fld dword ptr [esp + 0x10]
// 004e38d6  d944242c             fld dword ptr [esp + 0x2c]
// 004e38da  d9442430             fld dword ptr [esp + 0x30]
// 004e38de  d9442418             fld dword ptr [esp + 0x18]
// 004e38e2  d9442424             fld dword ptr [esp + 0x24]
// 004e38e6  d9cc                 fxch st(4)
// 004e38e8  d9cf                 fxch st(7)
// 004e38ea  d9cb                 fxch st(3)
// 004e38ec  d9ce                 fxch st(6)
// 004e38ee  d9ca                 fxch st(2)
// 004e38f0  d9cd                 fxch st(5)
// 004e38f2  d9cb                 fxch st(3)
// 004e38f4  d9cc                 fxch st(4)
// 004e38f6  a802                 test al, 2
// 004e38f8  7438                 je 0x4e3932
// 004e38fa  d9cc                 fxch st(4)
// 004e38fc  d95c2418             fstp dword ptr [esp + 0x18]
// 004e3900  d9c9                 fxch st(1)
// 004e3902  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e3906  d9442418             fld dword ptr [esp + 0x18]
// 004e390a  d944241c             fld dword ptr [esp + 0x1c]
// 004e390e  d9cb                 fxch st(3)
// 004e3910  d95c2418             fstp dword ptr [esp + 0x18]
// 004e3914  d9ce                 fxch st(6)
// 004e3916  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e391a  d9442418             fld dword ptr [esp + 0x18]
// 004e391e  d944241c             fld dword ptr [esp + 0x1c]
// 004e3922  d9cd                 fxch st(5)
// 004e3924  d9cf                 fxch st(7)
// 004e3926  d9c9                 fxch st(1)
// 004e3928  d9ce                 fxch st(6)
// 004e392a  d9ca                 fxch st(2)
// 004e392c  d9cc                 fxch st(4)
// 004e392e  d9ca                 fxch st(2)
// 004e3930  d9cb                 fxch st(3)
// 004e3932  a804                 test al, 4
// 004e3934  7426                 je 0x4e395c
// 004e3936  d9cc                 fxch st(4)
// 004e3938  d95c2418             fstp dword ptr [esp + 0x18]
// 004e393c  d9c9                 fxch st(1)
// 004e393e  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e3942  d9442418             fld dword ptr [esp + 0x18]
// 004e3946  d944241c             fld dword ptr [esp + 0x1c]
// 004e394a  d9cd                 fxch st(5)
// 004e394c  d9cf                 fxch st(7)
// 004e394e  d9ca                 fxch st(2)
// 004e3950  d9ce                 fxch st(6)
// 004e3952  d9cc                 fxch st(4)
// 004e3954  d9cd                 fxch st(5)
// 004e3956  d9cb                 fxch st(3)
// 004e3958  d9cc                 fxch st(4)
// 004e395a  d9cb                 fxch st(3)
// 004e395c  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004e3962  d9cc                 fxch st(4)
// 004e3964  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 004e396b  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 004e3972  d91cc1               fstp dword ptr [ecx + eax*8]
// 004e3975  8d04c1               lea eax, [ecx + eax*8]
// 004e3978  d9c9                 fxch st(1)
// 004e397a  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 004e3981  d95804               fstp dword ptr [eax + 4]
// 004e3984  a134399700           mov eax, dword ptr [0x973934]
// 004e3989  d9c9                 fxch st(1)
// 004e398b  d91cd0               fstp dword ptr [eax + edx*8]
// 004e398e  8d04d0               lea eax, [eax + edx*8]
// 004e3991  d9cc                 fxch st(4)
// 004e3993  d95804               fstp dword ptr [eax + 4]
// 004e3996  8b1534399700         mov edx, dword ptr [0x973934]
// 004e399c  8d04ca               lea eax, [edx + ecx*8]
// 004e399f  d9ca                 fxch st(2)
// 004e39a1  d918                 fstp dword ptr [eax]
// 004e39a3  8d9424c0000000       lea edx, [esp + 0xc0]
// 004e39aa  52                   push edx
// 004e39ab  d95804               fstp dword ptr [eax + 4]
// 004e39ae  8b0d34399700         mov ecx, dword ptr [0x973934]
// 004e39b4  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 004e39bb  d9c9                 fxch st(1)
// 004e39bd  d91cc1               fstp dword ptr [ecx + eax*8]
// 004e39c0  8d04c1               lea eax, [ecx + eax*8]
// 004e39c3  8d9424a8000000       lea edx, [esp + 0xa8]
// 004e39ca  d95804               fstp dword ptr [eax + 4]
// 004e39cd  8d44242c             lea eax, [esp + 0x2c]
// 004e39d1  d9442424             fld dword ptr [esp + 0x24]
// 004e39d5  50                   push eax
// 004e39d6  51                   push ecx
// 004e39d7  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 004e39de  d91c24               fstp dword ptr [esp]
// 004e39e1  d90558279700         fld dword ptr [0x972758]
// 004e39e7  51                   push ecx
// 004e39e8  51                   push ecx
// 004e39e9  d91c24               fstp dword ptr [esp]
// 004e39ec  52                   push edx
// 004e39ed  e88eb5ffff           call 0x4def80
// 004e39f2  8b4610               mov eax, dword ptr [esi + 0x10]
// 004e39f5  c1e004               shl eax, 4
// 004e39f8  d9443808             fld dword ptr [eax + edi + 8]
// 004e39fc  03c7                 add eax, edi
// 004e39fe  d905746e8200         fld dword ptr [0x826e74]
// 004e3a04  83c418               add esp, 0x18
// 004e3a07  dcc9                 fmul st(1), st(0)
// 004e3a09  d8480c               fmul dword ptr [eax + 0xc]
// 004e3a0c  d9842478010000       fld dword ptr [esp + 0x178]
// 004e3a13  dcca                 fmul st(2), st(0)
// 004e3a15  dec9                 fmulp st(1)
// 004e3a17  d9c1                 fld st(1)
// 004e3a19  d800                 fadd dword ptr [eax]
// 004e3a1b  d9c0                 fld st(0)
// 004e3a1d  d954242c             fst dword ptr [esp + 0x2c]
// 004e3a21  d9c2                 fld st(2)
// 004e3a23  d84004               fadd dword ptr [eax + 4]
// 004e3a26  d9c0                 fld st(0)
// 004e3a28  d9542410             fst dword ptr [esp + 0x10]
// 004e3a2c  d94008               fld dword ptr [eax + 8]
// 004e3a2f  d800                 fadd dword ptr [eax]
// 004e3a31  dee6                 fsubrp st(6)
// 004e3a33  d9c5                 fld st(5)
// 004e3a35  d9542418             fst dword ptr [esp + 0x18]
// 004e3a39  d9ca                 fxch st(2)
// 004e3a3b  d9542430             fst dword ptr [esp + 0x30]
// 004e3a3f  d9ce                 fxch st(6)
// 004e3a41  d954243c             fst dword ptr [esp + 0x3c]
// 004e3a45  d9400c               fld dword ptr [eax + 0xc]
// 004e3a48  d84004               fadd dword ptr [eax + 4]
// 004e3a4b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004e3a4e  a801                 test al, 1
// 004e3a50  dee6                 fsubrp st(6)
// 004e3a52  d9cd                 fxch st(5)
// 004e3a54  d9542424             fst dword ptr [esp + 0x24]
// 004e3a58  d9442424             fld dword ptr [esp + 0x24]
// 004e3a5c  d9cd                 fxch st(5)
// 004e3a5e  d9542438             fst dword ptr [esp + 0x38]
// 004e3a62  d9c9                 fxch st(1)
// 004e3a64  d9542434             fst dword ptr [esp + 0x34]
// 004e3a68  7440                 je 0x4e3aaa
// 004e3a6a  dddc                 fstp st(4)
// 004e3a6c  ddd9                 fstp st(1)
// 004e3a6e  ddd9                 fstp st(1)
// 004e3a70  dddc                 fstp st(4)
// 004e3a72  ddda                 fstp st(2)
// 004e3a74  ddd8                 fstp st(0)
// 004e3a76  ddd9                 fstp st(1)
// 004e3a78  ddd8                 fstp st(0)
// 004e3a7a  d9442418             fld dword ptr [esp + 0x18]
// 004e3a7e  d9442430             fld dword ptr [esp + 0x30]
// 004e3a82  d944242c             fld dword ptr [esp + 0x2c]
// 004e3a86  d9442410             fld dword ptr [esp + 0x10]
// 004e3a8a  d9442438             fld dword ptr [esp + 0x38]
// 004e3a8e  d9442434             fld dword ptr [esp + 0x34]
// 004e3a92  d944243c             fld dword ptr [esp + 0x3c]
// 004e3a96  d9442424             fld dword ptr [esp + 0x24]
// 004e3a9a  d9cc                 fxch st(4)
// 004e3a9c  d9cf                 fxch st(7)
// 004e3a9e  d9cb                 fxch st(3)
// 004e3aa0  d9ce                 fxch st(6)
// 004e3aa2  d9ca                 fxch st(2)
// 004e3aa4  d9cd                 fxch st(5)
// 004e3aa6  d9cb                 fxch st(3)
// 004e3aa8  d9cc                 fxch st(4)
// 004e3aaa  a802                 test al, 2
// 004e3aac  7438                 je 0x4e3ae6

void func_004e3720()
{
}
