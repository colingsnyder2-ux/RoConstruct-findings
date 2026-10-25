// from server: 100% by king_originala
// roc 2008-06 005faaa0  unit: UString_sink::?$stream_buffer  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faaa0
//
// 005faaa0  83ec34               sub esp, 0x34
// 005faaa3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005faaa6  53                   push ebx
// 005faaa7  33db                 xor ebx, ebx
// 005faaa9  395804               cmp dword ptr [eax + 4], ebx
// 005faaac  89442404             mov dword ptr [esp + 4], eax
// 005faab0  0f8e8c000000         jle 0x5fab42
// 005faab6  55                   push ebp
// 005faab7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005faabb  56                   push esi
// 005faabc  57                   push edi
// 005faabd  eb03                 jmp 0x5faac2
// 005faabf  90                   nop 
// 005faac0  8bc1                 mov eax, ecx
// 005faac2  8b00                 mov eax, dword ptr [eax]
// 005faac4  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 005faac7  8bcf                 mov ecx, edi
// 005faac9  e892e8f9ff           call 0x599360
// 005faace  8db794000000         lea esi, [edi + 0x94]
// 005faad4  56                   push esi
// 005faad5  8d4c2418             lea ecx, [esp + 0x18]
// 005faad9  e84287f1ff           call 0x513220
// 005faade  d94624               fld dword ptr [esi + 0x24]
// 005faae1  d9542438             fst dword ptr [esp + 0x38]
// 005faae5  51                   push ecx
// 005faae6  d94628               fld dword ptr [esi + 0x28]
// 005faae9  8d4c2418             lea ecx, [esp + 0x18]
// 005faaed  d9542440             fst dword ptr [esp + 0x40]
// 005faaf1  d9462c               fld dword ptr [esi + 0x2c]
// 005faaf4  d94500               fld dword ptr [ebp]
// 005faaf7  dec3                 faddp st(3)
// 005faaf9  d9ca                 fxch st(2)
// 005faafb  d95c243c             fstp dword ptr [esp + 0x3c]
// 005faaff  d84504               fadd dword ptr [ebp + 4]
// 005fab02  d95c2440             fstp dword ptr [esp + 0x40]
// 005fab06  d84508               fadd dword ptr [ebp + 8]
// 005fab09  d95c2444             fstp dword ptr [esp + 0x44]
// 005fab0d  d9058c748200         fld dword ptr [0x82748c]
// 005fab13  d91c24               fstp dword ptr [esp]
// 005fab16  51                   push ecx
// 005fab17  e82446feff           call 0x5df140
// 005fab1c  8d54241c             lea edx, [esp + 0x1c]
// 005fab20  52                   push edx
// 005fab21  e87a45feff           call 0x5df0a0
// 005fab26  83c40c               add esp, 0xc
// 005fab29  8d442414             lea eax, [esp + 0x14]
// 005fab2d  50                   push eax
// 005fab2e  8bcf                 mov ecx, edi
// 005fab30  e8cb980100           call 0x614400
// 005fab35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fab39  43                   inc ebx
// 005fab3a  3b5904               cmp ebx, dword ptr [ecx + 4]
// 005fab3d  7c81                 jl 0x5faac0
// 005fab3f  5f                   pop edi
// 005fab40  5e                   pop esi
// 005fab41  5d                   pop ebp
// 005fab42  5b                   pop ebx
// 005fab43  83c434               add esp, 0x34
// 005fab46  c20400               ret 4

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Matrix3 {
    float elements[9];
    Matrix3(const Matrix3&);
};

struct Transform {
    Matrix3 rotation;
    Vector3 position;
};

struct Item {
    char reserved[0x94];
    Transform transform;
    const void* get();
    void set(const Transform&);
};

struct Collection {
    Item** items;
    int count;
};

extern float angle;
extern void __cdecl adjust(Matrix3*, float);
extern bool __cdecl validate(Matrix3*);

struct S {
    char reserved[0x10];
    Collection* collection;
    void f(const Vector3&);
};

void S::f(const Vector3& offset)
{
    Collection* list = collection;
    for (int i = 0; i < list->count; ++i) {
        Item* item = list->items[i];
        item->get();
        Transform value = item->transform;
        value.position.x += offset.x;
        value.position.y += offset.y;
        value.position.z += offset.z;
        adjust(&value.rotation, angle);
        validate(&value.rotation);
        item->set(value);
    }
}
