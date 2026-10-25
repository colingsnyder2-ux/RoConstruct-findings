// from server: 100% by king_originala
// roc 2008-06 004f2030  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f2030
//
// 004f2030  83ec0c               sub esp, 0xc
// 004f2033  d9ee                 fldz 
// 004f2035  56                   push esi
// 004f2036  8bf1                 mov esi, ecx
// 004f2038  d916                 fst dword ptr [esi]
// 004f203a  d95e04               fstp dword ptr [esi + 4]
// 004f203d  57                   push edi
// 004f203e  d9053c6e8200         fld dword ptr [0x826e3c]
// 004f2044  8b3db0278000         mov edi, dword ptr [0x8027b0]
// 004f204a  d9c0                 fld st(0)
// 004f204c  d9e0                 fchs 
// 004f204e  d95c2410             fstp dword ptr [esp + 0x10]
// 004f2052  d95c240c             fstp dword ptr [esp + 0xc]
// 004f2056  ffd7                 call edi
// 004f2058  89442408             mov dword ptr [esp + 8], eax
// 004f205c  db442408             fild dword ptr [esp + 8]
// 004f2060  d944240c             fld dword ptr [esp + 0xc]
// 004f2064  d9442410             fld dword ptr [esp + 0x10]
// 004f2068  dce9                 fsub st(1), st(0)
// 004f206a  d9ca                 fxch st(2)
// 004f206c  dec9                 fmulp st(1)
// 004f206e  d80d406e8200         fmul dword ptr [0x826e40]
// 004f2074  dec1                 faddp st(1)
// 004f2076  d91e                 fstp dword ptr [esi]
// 004f2078  d9053c6e8200         fld dword ptr [0x826e3c]
// 004f207e  d9c0                 fld st(0)
// 004f2080  d9e0                 fchs 
// 004f2082  d95c2408             fstp dword ptr [esp + 8]
// 004f2086  d95c240c             fstp dword ptr [esp + 0xc]
// 004f208a  ffd7                 call edi
// 004f208c  89442410             mov dword ptr [esp + 0x10], eax
// 004f2090  db442410             fild dword ptr [esp + 0x10]
// 004f2094  d944240c             fld dword ptr [esp + 0xc]
// 004f2098  d9442408             fld dword ptr [esp + 8]
// 004f209c  dce9                 fsub st(1), st(0)
// 004f209e  d9ca                 fxch st(2)
// 004f20a0  dec9                 fmulp st(1)
// 004f20a2  d80d406e8200         fmul dword ptr [0x826e40]
// 004f20a8  dec1                 faddp st(1)
// 004f20aa  d95e04               fstp dword ptr [esi + 4]
// 004f20ad  ffd7                 call edi
// 004f20af  89442410             mov dword ptr [esp + 0x10], eax
// 004f20b3  db442410             fild dword ptr [esp + 0x10]
// 004f20b7  d80d406e8200         fmul dword ptr [0x826e40]
// 004f20bd  d81dac9b8100         fcomp dword ptr [0x819bac]
// 004f20c3  dfe0                 fnstsw ax
// 004f20c5  f6c441               test ah, 0x41
// 004f20c8  7507                 jne 0x4f20d1
// 004f20ca  b801000000           mov eax, 1
// 004f20cf  eb02                 jmp 0x4f20d3
// 004f20d1  33c0                 xor eax, eax
// 004f20d3  884608               mov byte ptr [esi + 8], al
// 004f20d6  ffd7                 call edi
// 004f20d8  89442410             mov dword ptr [esp + 0x10], eax
// 004f20dc  db442410             fild dword ptr [esp + 0x10]
// 004f20e0  d80d406e8200         fmul dword ptr [0x826e40]
// 004f20e6  d81dac9b8100         fcomp dword ptr [0x819bac]
// 004f20ec  dfe0                 fnstsw ax
// 004f20ee  f6c441               test ah, 0x41
// 004f20f1  7510                 jne 0x4f2103
// 004f20f3  b801000000           mov eax, 1
// 004f20f8  884609               mov byte ptr [esi + 9], al
// 004f20fb  5f                   pop edi
// 004f20fc  8bc6                 mov eax, esi
// 004f20fe  5e                   pop esi
// 004f20ff  83c40c               add esp, 0xc
// 004f2102  c3                   ret 
// 004f2103  33c0                 xor eax, eax
// 004f2105  884609               mov byte ptr [esi + 9], al
// 004f2108  5f                   pop edi
// 004f2109  8bc6                 mov eax, esi
// 004f210b  5e                   pop esi
// 004f210c  83c40c               add esp, 0xc
// 004f210f  c3                   ret 

#pragma float_control(precise, off)

extern "C" int (__cdecl *rand)();

extern const float g_826e3c;
const float g_826e40 = 1.0f / 32767.0f;
const float g_819bac = 0.5f;

struct S {
    float x;
    float y;
    bool b8;
    bool b9;
    S* init();
};

S* S::init()
{
    x = 0.0f;
    y = 0.0f;

    int (__cdecl *random)() = rand;

    float na = -g_826e3c;
    float a = g_826e3c;
    int r1 = random();
    x = na + (a - na) * (float)r1 * g_826e40;

    float nb = -g_826e3c;
    float b = g_826e3c;
    int r2 = random();
    y = nb + (b - nb) * (float)r2 * g_826e40;

    int r3 = random();
    b8 = (float)r3 * g_826e40 > g_819bac;

    int r4 = random();
    b9 = (float)r4 * g_826e40 > g_819bac;

    return this;
}
