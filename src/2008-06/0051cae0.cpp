// from server: 100% by king_originala
// roc 2008-06 0051cae0  unit: G3D::_internal::DialogTemplate  size: 489 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051cae0
//
// 0051cae0  83ec08               sub esp, 8
// 0051cae3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0051cae8  0f84d7010000         je 0x51ccc5
// 0051caee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051caf2  85c9                 test ecx, ecx
// 0051caf4  0f84cb010000         je 0x51ccc5
// 0051cafa  837c241400           cmp dword ptr [esp + 0x14], 0
// 0051caff  53                   push ebx
// 0051cb00  55                   push ebp
// 0051cb01  56                   push esi
// 0051cb02  57                   push edi
// 0051cb03  0f8ca6010000         jl 0x51ccaf
// 0051cb09  837c242800           cmp dword ptr [esp + 0x28], 0
// 0051cb0e  0f8c9b010000         jl 0x51ccaf
// 0051cb14  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0051cb19  0f8c90010000         jl 0x51ccaf
// 0051cb1f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0051cb23  85ed                 test ebp, ebp
// 0051cb25  0f8c84010000         jl 0x51ccaf
// 0051cb2b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0051cb2f  85db                 test ebx, ebx
// 0051cb31  0f8c78010000         jl 0x51ccaf
// 0051cb37  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0051cb3b  85ff                 test edi, edi
// 0051cb3d  0f8c6c010000         jl 0x51ccaf
// 0051cb43  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0051cb47  85f6                 test esi, esi
// 0051cb49  0f8c60010000         jl 0x51ccaf
// 0051cb4f  8b542440             mov edx, dword ptr [esp + 0x40]
// 0051cb53  85d2                 test edx, edx
// 0051cb55  0f8c54010000         jl 0x51ccaf
// 0051cb5b  db442424             fild dword ptr [esp + 0x24]
// 0051cb5f  dd05888f8200         fld qword ptr [0x828f88]
// 0051cb65  d8d1                 fcom st(1)
// 0051cb67  dfe0                 fnstsw ax
// 0051cb69  f6c405               test ah, 5
// 0051cb6c  0f8b1f010000         jnp 0x51cc91
// 0051cb72  db442428             fild dword ptr [esp + 0x28]
// 0051cb76  dd542410             fst qword ptr [esp + 0x10]
// 0051cb7a  d8d9                 fcomp st(1)
// 0051cb7c  dfe0                 fnstsw ax
// 0051cb7e  f6c441               test ah, 0x41
// 0051cb81  0f840a010000         je 0x51cc91
// 0051cb87  db44242c             fild dword ptr [esp + 0x2c]
// 0051cb8b  d8d1                 fcom st(1)
// 0051cb8d  dfe0                 fnstsw ax
// 0051cb8f  f6c441               test ah, 0x41
// 0051cb92  0f84f7000000         je 0x51cc8f
// 0051cb98  db442430             fild dword ptr [esp + 0x30]
// 0051cb9c  d8d2                 fcom st(2)
// 0051cb9e  dfe0                 fnstsw ax
// 0051cba0  f6c441               test ah, 0x41
// 0051cba3  0f84e4000000         je 0x51cc8d
// 0051cba9  db442434             fild dword ptr [esp + 0x34]
// 0051cbad  d8d3                 fcom st(3)
// 0051cbaf  dfe0                 fnstsw ax
// 0051cbb1  f6c441               test ah, 0x41
// 0051cbb4  0f84d1000000         je 0x51cc8b
// 0051cbba  db442438             fild dword ptr [esp + 0x38]
// 0051cbbe  d8d4                 fcom st(4)
// 0051cbc0  dfe0                 fnstsw ax
// 0051cbc2  f6c441               test ah, 0x41
// 0051cbc5  0f84be000000         je 0x51cc89
// 0051cbcb  db44243c             fild dword ptr [esp + 0x3c]
// 0051cbcf  d8d5                 fcom st(5)
// 0051cbd1  dfe0                 fnstsw ax
// 0051cbd3  f6c441               test ah, 0x41
// 0051cbd6  0f84ab000000         je 0x51cc87
// 0051cbdc  db442440             fild dword ptr [esp + 0x40]
// 0051cbe0  d8d6                 fcom st(6)
// 0051cbe2  dfe0                 fnstsw ax
// 0051cbe4  ddde                 fstp st(6)
// 0051cbe6  f6c441               test ah, 0x41
// 0051cbe9  0f8498000000         je 0x51cc87
// 0051cbef  dd05808f8200         fld qword ptr [0x828f80]
// 0051cbf5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051cbf9  dccf                 fmul st(7), st(0)
// 0051cbfb  83490804             or dword ptr [ecx + 8], 4
// 0051cbff  d9cf                 fxch st(7)
// 0051cc01  898100010000         mov dword ptr [ecx + 0x100], eax
// 0051cc07  8b442428             mov eax, dword ptr [esp + 0x28]
// 0051cc0b  d99980000000         fstp dword ptr [ecx + 0x80]
// 0051cc11  89b914010000         mov dword ptr [ecx + 0x114], edi
// 0051cc17  dd442410             fld qword ptr [esp + 0x10]
// 0051cc1b  5f                   pop edi
// 0051cc1c  d8cf                 fmul st(7)
// 0051cc1e  89b118010000         mov dword ptr [ecx + 0x118], esi
// 0051cc24  5e                   pop esi
// 0051cc25  898104010000         mov dword ptr [ecx + 0x104], eax
// 0051cc2b  d99984000000         fstp dword ptr [ecx + 0x84]
// 0051cc31  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051cc35  d9cc                 fxch st(4)
// 0051cc37  89a90c010000         mov dword ptr [ecx + 0x10c], ebp
// 0051cc3d  d8ce                 fmul st(6)
// 0051cc3f  5d                   pop ebp
// 0051cc40  899910010000         mov dword ptr [ecx + 0x110], ebx
// 0051cc46  898108010000         mov dword ptr [ecx + 0x108], eax
// 0051cc4c  d99988000000         fstp dword ptr [ecx + 0x88]
// 0051cc52  89911c010000         mov dword ptr [ecx + 0x11c], edx
// 0051cc58  d9ca                 fxch st(2)
// 0051cc5a  5b                   pop ebx
// 0051cc5b  d8cd                 fmul st(5)
// 0051cc5d  d9998c000000         fstp dword ptr [ecx + 0x8c]
// 0051cc63  d8cc                 fmul st(4)
// 0051cc65  d99990000000         fstp dword ptr [ecx + 0x90]
// 0051cc6b  d8cb                 fmul st(3)
// 0051cc6d  d99994000000         fstp dword ptr [ecx + 0x94]
// 0051cc73  d8ca                 fmul st(2)
// 0051cc75  d99998000000         fstp dword ptr [ecx + 0x98]
// 0051cc7b  dec9                 fmulp st(1)
// 0051cc7d  d9999c000000         fstp dword ptr [ecx + 0x9c]
// 0051cc83  83c408               add esp, 8
// 0051cc86  c3                   ret 
// 0051cc87  dddd                 fstp st(5)
// 0051cc89  dddc                 fstp st(4)
// 0051cc8b  dddb                 fstp st(3)
// 0051cc8d  ddda                 fstp st(2)
// 0051cc8f  ddd9                 fstp st(1)
// 0051cc91  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051cc95  ddd8                 fstp st(0)
// 0051cc97  682c8f8200           push 0x828f2c
// 0051cc9c  ddd8                 fstp st(0)
// 0051cc9e  51                   push ecx
// 0051cc9f  e8accd0000           call 0x529a50
// 0051cca4  83c408               add esp, 8
// 0051cca7  5f                   pop edi
// 0051cca8  5e                   pop esi
// 0051cca9  5d                   pop ebp
// 0051ccaa  5b                   pop ebx
// 0051ccab  83c408               add esp, 8
// 0051ccae  c3                   ret 
// 0051ccaf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051ccb3  68f88e8200           push 0x828ef8
// 0051ccb8  52                   push edx
// 0051ccb9  e892cd0000           call 0x529a50
// 0051ccbe  83c408               add esp, 8
// 0051ccc1  5f                   pop edi
// 0051ccc2  5e                   pop esi
// 0051ccc3  5d                   pop ebp
// 0051ccc4  5b                   pop ebx
// 0051ccc5  83c408               add esp, 8
// 0051ccc8  c3                   ret 

struct DialogTemplate {
    int field0;
    int field4;
    int flags;
    char pad[0x80 - 0x0c];
    float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    char pad2[0x100 - 0xa0];
    int i100;
    int i104;
    int i108;
    int i10c;
    int i110;
    int i114;
    int i118;
    int i11c;
};

extern "C" int __cdecl sub_529a50(int, const char*);
extern const double g_828f80;
extern const double g_828f88;
extern const char g_828ef8[];
extern const char g_828f2c[];

void __cdecl sub_51cae0(
    int context, DialogTemplate* self,
    int a3, int a4, int a5, int a6,
    int a7, int a8, int a9, int a10)
{
    if (context == 0)
        return;
    if (self == 0)
        return;

    if (a3 < 0 || a4 < 0 || a5 < 0 || a6 < 0 ||
        a7 < 0 || a8 < 0 || a9 < 0 || a10 < 0) {
        sub_529a50(context, g_828ef8);
        return;
    }

    if ((double)a3 > g_828f88 ||
        (double)a4 > g_828f88 ||
        (double)a5 > g_828f88 ||
        (double)a6 > g_828f88 ||
        (double)a7 > g_828f88 ||
        (double)a8 > g_828f88 ||
        (double)a9 > g_828f88 ||
        (double)a10 > g_828f88) {
        sub_529a50(context, g_828f2c);
        return;
    }

    const double scale = g_828f80;
    self->flags |= 4;

    self->i100 = a3;
    self->f80 = (float)((double)a3 * scale);
    self->i104 = a4;
    self->f84 = (float)((double)a4 * scale);
    self->i108 = a5;
    self->f88 = (float)((double)a5 * scale);
    self->i10c = a6;
    self->f8c = (float)((double)a6 * scale);
    self->i110 = a7;
    self->f90 = (float)((double)a7 * scale);
    self->i114 = a8;
    self->f94 = (float)((double)a8 * scale);
    self->i118 = a9;
    self->f98 = (float)((double)a9 * scale);
    self->i11c = a10;
    self->f9c = (float)((double)a10 * scale);
}
