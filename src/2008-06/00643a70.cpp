// from server: 79% by colin
// from server: 75% by king_originala
// roc 2008-06 00643a70  unit: RBX::HUMAN::Landed  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643a70
//
// 00643a70  83ec18               sub esp, 0x18
// 00643a73  57                   push edi
// 00643a74  8bf9                 mov edi, ecx
// 00643a76  8b4724               mov eax, dword ptr [edi + 0x24]
// 00643a79  85c0                 test eax, eax
// 00643a7b  747f                 je 0x643afc
// 00643a7d  0528020000           add eax, 0x228
// 00643a82  7478                 je 0x643afc
// 00643a84  8b4f08               mov ecx, dword ptr [edi + 8]
// 00643a87  53                   push ebx
// 00643a88  8b991c020000         mov ebx, dword ptr [ecx + 0x21c]
// 00643a8e  56                   push esi
// 00643a8f  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 00643a95  8bce                 mov ecx, esi
// 00643a97  e8c458f5ff           call 0x599360
// 00643a9c  83c72c               add edi, 0x2c
// 00643a9f  57                   push edi
// 00643aa0  8d542410             lea edx, [esp + 0x10]
// 00643aa4  52                   push edx
// 00643aa5  8d8e94000000         lea ecx, [esi + 0x94]
// 00643aab  e8b04ff5ff           call 0x598a60
// 00643ab0  d98380000000         fld dword ptr [ebx + 0x80]
// 00643ab6  d944240c             fld dword ptr [esp + 0xc]
// 00643aba  8b442428             mov eax, dword ptr [esp + 0x28]
// 00643abe  d8c9                 fmul st(1)
// 00643ac0  5e                   pop esi
// 00643ac1  d944240c             fld dword ptr [esp + 0xc]
// 00643ac5  5b                   pop ebx
// 00643ac6  d8ca                 fmul st(2)
// 00643ac8  5f                   pop edi
// 00643ac9  d9442408             fld dword ptr [esp + 8]
// 00643acd  d8cb                 fmul st(3)
// 00643acf  d944240c             fld dword ptr [esp + 0xc]
// 00643ad3  d8cc                 fmul st(4)
// 00643ad5  d9442410             fld dword ptr [esp + 0x10]
// 00643ad9  d8cd                 fmul st(5)
// 00643adb  d9442414             fld dword ptr [esp + 0x14]
// 00643adf  dece                 fmulp st(6)
// 00643ae1  d9cc                 fxch st(4)
// 00643ae3  d918                 fstp dword ptr [eax]
// 00643ae5  d9ca                 fxch st(2)
// 00643ae7  d95804               fstp dword ptr [eax + 4]
// 00643aea  d95808               fstp dword ptr [eax + 8]
// 00643aed  d9580c               fstp dword ptr [eax + 0xc]
// 00643af0  d95810               fstp dword ptr [eax + 0x10]
// 00643af3  d95814               fstp dword ptr [eax + 0x14]
// 00643af6  83c418               add esp, 0x18
// 00643af9  c20800               ret 8
// 00643afc  b801000000           mov eax, 1
// 00643b01  840580d59700         test byte ptr [0x97d580], al
// 00643b07  7510                 jne 0x643b19
// 00643b09  090580d59700         or dword ptr [0x97d580], eax
// 00643b0f  b968d59700           mov ecx, 0x97d568
// 00643b14  e85706fdff           call 0x614170
// 00643b19  d90568d59700         fld dword ptr [0x97d568]
// 00643b1f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00643b23  d918                 fstp dword ptr [eax]
// 00643b25  5f                   pop edi
// 00643b26  d9056cd59700         fld dword ptr [0x97d56c]
// 00643b2c  d95804               fstp dword ptr [eax + 4]
// 00643b2f  d90570d59700         fld dword ptr [0x97d570]
// 00643b35  d95808               fstp dword ptr [eax + 8]
// 00643b38  d90574d59700         fld dword ptr [0x97d574]
// 00643b3e  d9580c               fstp dword ptr [eax + 0xc]
// 00643b41  d90578d59700         fld dword ptr [0x97d578]
// 00643b47  d95810               fstp dword ptr [eax + 0x10]
// 00643b4a  d9057cd59700         fld dword ptr [0x97d57c]
// 00643b50  d95814               fstp dword ptr [eax + 0x14]
// 00643b53  83c418               add esp, 0x18
// 00643b56  c20800               ret 8
#include <intrin.h>

struct Six {
    float x, y, z, a, b, c;
    Six(double, double, double, double, double, double);
};

__forceinline Six::Six(double X, double Y, double Z,
                       double A, double B, double C)
    : x((float)X), y((float)Y), z((float)Z),
      a((float)A), b((float)B), c((float)C)
{
}

struct ZeroSix {
    float x, y, z, a, b, c;
    ZeroSix() throw();
};

struct Transform {
    Six apply(const Six&);
};

struct DataSource {
    char reserved[0x94];
    Transform transform;
    const void* get();
};

struct Attachment {
    char reserved[0xA0];
    DataSource* source;
};

struct Object {
    char reserved[0x228];
    Attachment attachment;
};

struct Scale {
    char reserved[0x80];
    float value;
};

struct Owner {
    char reserved[0x21C];
    Scale* scale;
};

struct S {
    char reserved0[8];
    Owner* owner;
    char reserved1[0x18];
    Object* object;
    char reserved2[4];
    Six local;
    Six f(int);
};

Six S::f(int)
{
    Attachment* attachment = object ? &object->attachment : 0;
    _ReadWriteBarrier();
    if (attachment) {
        Scale* scale = owner->scale;
        DataSource* source = attachment->source;
        source->get();
        Six transformed = source->transform.apply(local);
        double factor = scale->value;
        return Six(transformed.x * factor,
                   transformed.y * factor,
                   transformed.z * factor,
                   transformed.a * factor,
                   transformed.b * factor,
                   transformed.c * factor);
    }

    static ZeroSix zero;
    return Six(zero.x, zero.y, zero.z, zero.a, zero.b, zero.c);
}
