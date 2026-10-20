// from server: 99% by colin
// roc 2008-06 006064a0  unit: RBX::RotateConnector  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006064a0
//
// 006064a0  83ec2c               sub esp, 0x2c
// 006064a3  d9ee                 fldz 
// 006064a5  56                   push esi
// 006064a6  8bf1                 mov esi, ecx
// 006064a8  d954240c             fst dword ptr [esp + 0xc]
// 006064ac  8d442408             lea eax, [esp + 8]
// 006064b0  d9542410             fst dword ptr [esp + 0x10]
// 006064b4  50                   push eax
// 006064b5  d95c2418             fstp dword ptr [esp + 0x18]
// 006064b9  8d4c2408             lea ecx, [esp + 8]
// 006064bd  51                   push ecx
// 006064be  8d542414             lea edx, [esp + 0x14]
// 006064c2  52                   push edx
// 006064c3  8bce                 mov ecx, esi
// 006064c5  e816feffff           call 0x6062e0
// 006064ca  d9442404             fld dword ptr [esp + 4]
// 006064ce  807e3000             cmp byte ptr [esi + 0x30], 0
// 006064d2  7412                 je 0x6064e6
// 006064d4  d94628               fld dword ptr [esi + 0x28]
// 006064d7  c6463000             mov byte ptr [esi + 0x30], 0
// 006064db  d8c1                 fadd st(1)
// 006064dd  d80dac9b8100         fmul dword ptr [0x819bac]
// 006064e3  d95e28               fstp dword ptr [esi + 0x28]
// 006064e6  d94628               fld dword ptr [esi + 0x28]
// 006064e9  57                   push edi
// 006064ea  d9462c               fld dword ptr [esi + 0x2c]
// 006064ed  d84628               fadd dword ptr [esi + 0x28]
// 006064f0  d95e28               fstp dword ptr [esi + 0x28]
// 006064f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 006064f6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006064f9  dee1                 fsubrp st(1)
// 006064fb  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006064fe  8b7a2c               mov edi, dword ptr [edx + 0x2c]
// 00606501  d84e08               fmul dword ptr [esi + 8]
// 00606504  d9442410             fld dword ptr [esp + 0x10]
// 00606508  d8c9                 fmul st(1)
// 0060650a  d9542428             fst dword ptr [esp + 0x28]
// 0060650e  d9442414             fld dword ptr [esp + 0x14]
// 00606512  d8ca                 fmul st(2)
// 00606514  d954242c             fst dword ptr [esp + 0x2c]
// 00606518  d9442418             fld dword ptr [esp + 0x18]
// 0060651c  decb                 fmulp st(3)
// 0060651e  d9ca                 fxch st(2)
// 00606520  d9542430             fst dword ptr [esp + 0x30]
// 00606524  d9c9                 fxch st(1)
// 00606526  d9e0                 fchs 
// 00606528  d95c241c             fstp dword ptr [esp + 0x1c]
// 0060652c  d9c9                 fxch st(1)
// 0060652e  d9e0                 fchs 
// 00606530  d95c2420             fstp dword ptr [esp + 0x20]
// 00606534  d9e0                 fchs 
// 00606536  d95c2424             fstp dword ptr [esp + 0x24]
// 0060653a  85ff                 test edi, edi
// 0060653c  743d                 je 0x60657b
// 0060653e  807f0800             cmp byte ptr [edi + 8], 0
// 00606542  7407                 je 0x60654b
// 00606544  8bcf                 mov ecx, edi
// 00606546  e8d5270500           call 0x658d20
// 0060654b  d98790000000         fld dword ptr [edi + 0x90]
// 00606551  d844241c             fadd dword ptr [esp + 0x1c]
// 00606555  d99f90000000         fstp dword ptr [edi + 0x90]
// 0060655b  d98794000000         fld dword ptr [edi + 0x94]
// 00606561  d8442420             fadd dword ptr [esp + 0x20]
// 00606565  d99f94000000         fstp dword ptr [edi + 0x94]
// 0060656b  d98798000000         fld dword ptr [edi + 0x98]
// 00606571  d8442424             fadd dword ptr [esp + 0x24]
// 00606575  d99f98000000         fstp dword ptr [edi + 0x98]
// 0060657b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0060657e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00606581  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00606584  8b722c               mov esi, dword ptr [edx + 0x2c]
// 00606587  5f                   pop edi
// 00606588  85f6                 test esi, esi
// 0060658a  743d                 je 0x6065c9
// 0060658c  807e0800             cmp byte ptr [esi + 8], 0
// 00606590  7407                 je 0x606599
// 00606592  8bce                 mov ecx, esi
// 00606594  e887270500           call 0x658d20
// 00606599  d9442424             fld dword ptr [esp + 0x24]
// 0060659d  d88690000000         fadd dword ptr [esi + 0x90]
// 006065a3  d99e90000000         fstp dword ptr [esi + 0x90]
// 006065a9  d98694000000         fld dword ptr [esi + 0x94]
// 006065af  d8442428             fadd dword ptr [esp + 0x28]
// 006065b3  d99e94000000         fstp dword ptr [esi + 0x94]
// 006065b9  d98698000000         fld dword ptr [esi + 0x98]
// 006065bf  d844242c             fadd dword ptr [esp + 0x2c]
// 006065c3  d99e98000000         fstp dword ptr [esi + 0x98]
// 006065c9  5e                   pop esi
// 006065ca  83c42c               add esp, 0x2c
// 006065cd  c20800               ret 8

// from server: 98% by colin
// from server: 96% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern const float half;

struct Vector3
{
    float x, y, z;
};

struct Body
{
    char padding0[8];
    unsigned char dirty;
    char padding1[135];
    float x, y, z;

    void refresh();
};

struct RotateConnector
{
    char padding0[8];
    float strength;
    char padding1[8];
    void *joint0;
    void *joint1;
    char padding2[12];
    float position;
    float increment;
    unsigned char reset;

    void measure(Vector3 &axis, float &angle, float &other);
    void update(int, int);
};

#include <intrin.h>
void RotateConnector::update(int, int)
{
    Vector3 axis = { 0.0f, 0.0f, 0.0f };
    float angle, other;
    measure(axis, angle, other);

    double measured = angle;
    if (reset)
    {
        reset = 0;
        position = (position + measured) * half;
    }

    double previous = position;
    position += increment;
    _ReadWriteBarrier();

    Body *first = *reinterpret_cast<Body **>(
        *reinterpret_cast<char **>(
            *reinterpret_cast<char **>(
                reinterpret_cast<char *>(joint0) + 12) + 16) + 44);

    _ReadWriteBarrier();
    double scale = (previous - measured) * strength;
    Vector3 force;
    double x = axis.x * scale;
    force.x = (float)x;
    double y = axis.y * scale;
    force.y = (float)y;
    double z = axis.z * scale;
    force.z = (float)z;
    Vector3 opposite = { (float)-x, (float)-y, (float)-z };

    if (first)
    {
        if (first->dirty)
            first->refresh();
        first->x += opposite.x;
        first->y += opposite.y;
        first->z += opposite.z;
    }

    Body *second = *reinterpret_cast<Body **>(
        *reinterpret_cast<char **>(
            *reinterpret_cast<char **>(
                reinterpret_cast<char *>(joint1) + 12) + 16) + 44);

    if (second)
    {
        if (second->dirty)
            second->refresh();
        second->x = *reinterpret_cast<volatile float*>(&force.x) + second->x;
        second->y += force.y;
        second->z += force.z;
    }
}
