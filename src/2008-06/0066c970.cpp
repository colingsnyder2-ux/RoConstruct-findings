// from server: 97% by colin
// from server: 93% by king_originala
// roc 2008-06 0066c970  unit: RBX::GroupDragTool  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c970
//
// 0066c970  6aff                 push -1
// 0066c972  6860c57d00           push 0x7dc560
// 0066c977  64a100000000         mov eax, dword ptr fs:[0]
// 0066c97d  50                   push eax
// 0066c97e  64892500000000       mov dword ptr fs:[0], esp
// 0066c985  81ec8c000000         sub esp, 0x8c
// 0066c98b  53                   push ebx
// 0066c98c  55                   push ebp
// 0066c98d  56                   push esi
// 0066c98e  57                   push edi
// 0066c98f  8bf9                 mov edi, ecx
// 0066c991  897c2418             mov dword ptr [esp + 0x18], edi
// 0066c995  c744244c06000000     mov dword ptr [esp + 0x4c], 6
// 0066c99d  e8be3feaff           call 0x510960
// 0066c9a2  d900                 fld dword ptr [eax]
// 0066c9a4  d95c2450             fstp dword ptr [esp + 0x50]
// 0066c9a8  d94004               fld dword ptr [eax + 4]
// 0066c9ab  d95c2454             fstp dword ptr [esp + 0x54]
// 0066c9af  d94008               fld dword ptr [eax + 8]
// 0066c9b2  d95c2458             fstp dword ptr [esp + 0x58]
// 0066c9b6  e8a53feaff           call 0x510960
// 0066c9bb  d900                 fld dword ptr [eax]
// 0066c9bd  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0066c9c4  d95c245c             fstp dword ptr [esp + 0x5c]
// 0066c9c8  894c2448             mov dword ptr [esp + 0x48], ecx
// 0066c9cc  d94004               fld dword ptr [eax + 4]
// 0066c9cf  d95c2460             fstp dword ptr [esp + 0x60]
// 0066c9d3  d94008               fld dword ptr [eax + 8]
// 0066c9d6  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0066c9dc  d95c2464             fstp dword ptr [esp + 0x64]
// 0066c9e0  83c004               add eax, 4
// 0066c9e3  d900                 fld dword ptr [eax]
// 0066c9e5  d905ac9b8100         fld dword ptr [0x819bac]
// 0066c9eb  dcc9                 fmul st(1), st(0)
// 0066c9ed  d94004               fld dword ptr [eax + 4]
// 0066c9f0  d8c9                 fmul st(1)
// 0066c9f2  d94008               fld dword ptr [eax + 8]
// 0066c9f5  deca                 fmulp st(2)
// 0066c9f7  d9c2                 fld st(2)
// 0066c9f9  d9e0                 fchs 
// 0066c9fb  d9c1                 fld st(1)
// 0066c9fd  d9e0                 fchs 
// 0066c9ff  d9c3                 fld st(3)
// 0066ca01  d9e0                 fchs 
// 0066ca03  d9ca                 fxch st(2)
// 0066ca05  d95c2468             fstp dword ptr [esp + 0x68]
// 0066ca09  d95c246c             fstp dword ptr [esp + 0x6c]
// 0066ca0d  d95c2470             fstp dword ptr [esp + 0x70]
// 0066ca11  d9ca                 fxch st(2)
// 0066ca13  d95c2474             fstp dword ptr [esp + 0x74]
// 0066ca17  d9c9                 fxch st(1)
// 0066ca19  d95c2478             fstp dword ptr [esp + 0x78]
// 0066ca1d  d95c247c             fstp dword ptr [esp + 0x7c]
// 0066ca21  e89ab8f7ff           call 0x5e82c0
// 0066ca26  8bf0                 mov esi, eax
// 0066ca28  8d4744               lea eax, [edi + 0x44]
// 0066ca2b  50                   push eax
// 0066ca2c  8d8c2484000000       lea ecx, [esp + 0x84]
// 0066ca33  51                   push ecx
// 0066ca34  8bce                 mov ecx, esi
// 0066ca36  e835bfeaff           call 0x518970
// 0066ca3b  d9ee                 fldz 
// 0066ca3d  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 0066ca44  d95c2414             fstp dword ptr [esp + 0x14]
// 0066ca48  33ed                 xor ebp, ebp
// 0066ca4a  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 0066ca51  c644241300           mov byte ptr [esp + 0x13], 0
// 0066ca56  85db                 test ebx, ebx
// 0066ca58  7431                 je 0x66ca8b
// 0066ca5a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0066ca5d  33c0                 xor eax, eax
// 0066ca5f  85c9                 test ecx, ecx
// 0066ca61  7e14                 jle 0x66ca77
// 0066ca63  8b3b                 mov edi, dword ptr [ebx]
// 0066ca65  8bd7                 mov edx, edi
// 0066ca67  392a                 cmp dword ptr [edx], ebp
// 0066ca69  0f8439010000         je 0x66cba8
// 0066ca6f  40                   inc eax
// 0066ca70  83c204               add edx, 4
// 0066ca73  3bc1                 cmp eax, ecx
// 0066ca75  7cf0                 jl 0x66ca67
// 0066ca77  8b3b                 mov edi, dword ptr [ebx]
// 0066ca79  8d048f               lea eax, [edi + ecx*4]
// 0066ca7c  8d148f               lea edx, [edi + ecx*4]
// 0066ca7f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0066ca83  3bc2                 cmp eax, edx
// 0066ca85  0f8535010000         jne 0x66cbc0
// 0066ca8b  55                   push ebp
// 0066ca8c  8d44242c             lea eax, [esp + 0x2c]
// 0066ca90  50                   push eax
// 0066ca91  8d4c2470             lea ecx, [esp + 0x70]
// 0066ca95  e8a633faff           call 0x60fe40
// 0066ca9a  d9442430             fld dword ptr [esp + 0x30]
// 0066ca9e  d88c2488000000       fmul dword ptr [esp + 0x88]
// 0066caa5  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 0066caad  d9442434             fld dword ptr [esp + 0x34]
// 0066cab1  d88c248c000000       fmul dword ptr [esp + 0x8c]
// 0066cab8  dec1                 faddp st(1)
// 0066caba  d944242c             fld dword ptr [esp + 0x2c]
// 0066cabe  d88c2484000000       fmul dword ptr [esp + 0x84]
// 0066cac5  dec1                 faddp st(1)
// 0066cac7  d85c2438             fcomp dword ptr [esp + 0x38]
// 0066cacb  dfe0                 fnstsw ax
// 0066cacd  f6c401               test ah, 1
// 0066cad0  0f85e2000000         jne 0x66cbb8
// 0066cad6  d9ee                 fldz 
// 0066cad8  8d4c241c             lea ecx, [esp + 0x1c]
// 0066cadc  51                   push ecx
// 0066cadd  d9542420             fst dword ptr [esp + 0x20]
// 0066cae1  8d54242c             lea edx, [esp + 0x2c]
// 0066cae5  d9542424             fst dword ptr [esp + 0x24]
// 0066cae9  52                   push edx
// 0066caea  d95c242c             fstp dword ptr [esp + 0x2c]
// 0066caee  8d842488000000       lea eax, [esp + 0x88]
// 0066caf5  50                   push eax
// 0066caf6  e88528f7ff           call 0x5df380
// 0066cafb  83c40c               add esp, 0xc
// 0066cafe  84c0                 test al, al
// 0066cb00  0f84b2000000         je 0x66cbb8
// 0066cb06  d94608               fld dword ptr [esi + 8]
// 0066cb09  d9442424             fld dword ptr [esp + 0x24]
// 0066cb0d  dcc9                 fmul st(1), st(0)
// 0066cb0f  d94604               fld dword ptr [esi + 4]
// 0066cb12  d9442420             fld dword ptr [esp + 0x20]
// 0066cb16  dcc9                 fmul st(1), st(0)
// 0066cb18  d9cb                 fxch st(3)
// 0066cb1a  dec1                 faddp st(1)
// 0066cb1c  d944241c             fld dword ptr [esp + 0x1c]
// 0066cb20  d9c0                 fld st(0)
// 0066cb22  d80e                 fmul dword ptr [esi]
// 0066cb24  dec2                 faddp st(2)
// 0066cb26  d9c9                 fxch st(1)
// 0066cb28  d84624               fadd dword ptr [esi + 0x24]
// 0066cb2b  d94614               fld dword ptr [esi + 0x14]
// 0066cb2e  d8cb                 fmul st(3)
// 0066cb30  d94610               fld dword ptr [esi + 0x10]
// 0066cb33  d8cd                 fmul st(5)
// 0066cb35  dec1                 faddp st(1)
// 0066cb37  d9460c               fld dword ptr [esi + 0xc]
// 0066cb3a  d8cb                 fmul st(3)
// 0066cb3c  dec1                 faddp st(1)
// 0066cb3e  d84628               fadd dword ptr [esi + 0x28]
// 0066cb41  d94620               fld dword ptr [esi + 0x20]
// 0066cb44  decc                 fmulp st(4)
// 0066cb46  d9461c               fld dword ptr [esi + 0x1c]
// 0066cb49  decd                 fmulp st(5)
// 0066cb4b  d9cb                 fxch st(3)
// 0066cb4d  dec4                 faddp st(4)
// 0066cb4f  d94618               fld dword ptr [esi + 0x18]
// 0066cb52  deca                 fmulp st(2)
// 0066cb54  d9cb                 fxch st(3)
// 0066cb56  dec1                 faddp st(1)
// 0066cb58  d8462c               fadd dword ptr [esi + 0x2c]
// 0066cb5b  d94748               fld dword ptr [edi + 0x48]
// 0066cb5e  d8e3                 fsub st(3)
// 0066cb60  d9474c               fld dword ptr [edi + 0x4c]
// 0066cb63  d8e3                 fsub st(3)
// 0066cb65  d94750               fld dword ptr [edi + 0x50]
// 0066cb68  d8e3                 fsub st(3)
// 0066cb6a  d9c2                 fld st(2)
// 0066cb6c  decb                 fmulp st(3)
// 0066cb6e  d9c1                 fld st(1)
// 0066cb70  deca                 fmulp st(2)
// 0066cb72  d9ca                 fxch st(2)
// 0066cb74  dec1                 faddp st(1)
// 0066cb76  d9c1                 fld st(1)
// 0066cb78  deca                 fmulp st(2)
// 0066cb7a  dec1                 faddp st(1)
// 0066cb7c  d9fa                 fsqrt 
// 0066cb7e  d9442414             fld dword ptr [esp + 0x14]
// 0066cb82  d8d9                 fcomp st(1)
// 0066cb84  dfe0                 fnstsw ax
// 0066cb86  f6c405               test ah, 5
// 0066cb89  7a25                 jp 0x66cbb0
// 0066cb8b  d95c2414             fstp dword ptr [esp + 0x14]
// 0066cb8f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0066cb93  d9ca                 fxch st(2)
// 0066cb95  c644241301           mov byte ptr [esp + 0x13], 1
// 0066cb9a  d95c2450             fstp dword ptr [esp + 0x50]
// 0066cb9e  d95c2454             fstp dword ptr [esp + 0x54]
// 0066cba2  d95c2458             fstp dword ptr [esp + 0x58]
// 0066cba6  eb10                 jmp 0x66cbb8
// 0066cba8  8d0487               lea eax, [edi + eax*4]
// 0066cbab  e9ccfeffff           jmp 0x66ca7c
// 0066cbb0  ddd8                 fstp st(0)
// 0066cbb2  ddda                 fstp st(2)
// 0066cbb4  ddd8                 fstp st(0)
// 0066cbb6  ddd8                 fstp st(0)
// 0066cbb8  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0066cbc0  45                   inc ebp
// 0066cbc1  83fd06               cmp ebp, 6
// 0066cbc4  0f8c8cfeffff         jl 0x66ca56
// 0066cbca  807c241300           cmp byte ptr [esp + 0x13], 0
// 0066cbcf  5f                   pop edi
// 0066cbd0  5e                   pop esi
// 0066cbd1  5d                   pop ebp
// 0066cbd2  5b                   pop ebx
// 0066cbd3  7406                 je 0x66cbdb
// 0066cbd5  8d4c2438             lea ecx, [esp + 0x38]
// 0066cbd9  eb46                 jmp 0x66cc21
// 0066cbdb  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066cbe3  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0066cbeb  e8703deaff           call 0x510960
// 0066cbf0  d900                 fld dword ptr [eax]
// 0066cbf2  d95c2420             fstp dword ptr [esp + 0x20]
// 0066cbf6  d94004               fld dword ptr [eax + 4]
// 0066cbf9  d95c2424             fstp dword ptr [esp + 0x24]
// 0066cbfd  d94008               fld dword ptr [eax + 8]
// 0066cc00  d95c2428             fstp dword ptr [esp + 0x28]
// 0066cc04  e8573deaff           call 0x510960
// 0066cc09  d900                 fld dword ptr [eax]
// 0066cc0b  8d4c2418             lea ecx, [esp + 0x18]
// 0066cc0f  d95c242c             fstp dword ptr [esp + 0x2c]
// 0066cc13  d94004               fld dword ptr [eax + 4]
// 0066cc16  d95c2430             fstp dword ptr [esp + 0x30]
// 0066cc1a  d94008               fld dword ptr [eax + 8]
// 0066cc1d  d95c2434             fstp dword ptr [esp + 0x34]
// 0066cc21  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0066cc28  d94108               fld dword ptr [ecx + 8]
// 0066cc2b  8b11                 mov edx, dword ptr [ecx]
// 0066cc2d  8910                 mov dword ptr [eax], edx
// 0066cc2f  8b5104               mov edx, dword ptr [ecx + 4]
// 0066cc32  895004               mov dword ptr [eax + 4], edx
// 0066cc35  d95808               fstp dword ptr [eax + 8]
// 0066cc38  d9410c               fld dword ptr [ecx + 0xc]
// 0066cc3b  d9580c               fstp dword ptr [eax + 0xc]
// 0066cc3e  d94110               fld dword ptr [ecx + 0x10]
// 0066cc41  d95810               fstp dword ptr [eax + 0x10]
// 0066cc44  d94114               fld dword ptr [ecx + 0x14]
// 0066cc47  d95814               fstp dword ptr [eax + 0x14]
// 0066cc4a  d94118               fld dword ptr [ecx + 0x18]
// 0066cc4d  d95818               fstp dword ptr [eax + 0x18]
// 0066cc50  d9411c               fld dword ptr [ecx + 0x1c]
// 0066cc53  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0066cc5a  d9581c               fstp dword ptr [eax + 0x1c]
// 0066cc5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0066cc64  81c498000000         add esp, 0x98
// 0066cc6a  c20c00               ret 0xc

#pragma float_control(precise, off)
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct Vector3 {
    float x, y, z;
    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }
};

extern const Vector3& __cdecl zeroVector();

struct Ray {
    unsigned int tag;
    Vector3 origin, direction;
    ~Ray();
};

Ray::~Ray()
{
    tag = 0;
}

struct Plane {
    unsigned int tag;
    Vector3 normal;
    float distance;
    ~Plane();
};

Plane::~Plane()
{
    tag = 0;
}

struct Box {
    Vector3 low, high;
    Plane face(int index) const;
};

struct Transform {
    float m[3][3];
    Vector3 translation;
    Ray transformRay(const Ray& ray) const;
};

struct Geometry {
    unsigned int tag;
    Vector3 size;
};

struct Object {
    char padding[0x9c];
    Geometry* geometry;
    const Transform& getTransform() const;
};

struct FaceList {
    int* data;
    int count;
    int* find(int value) const;
};

inline int* FaceList::find(int value) const
{
    for (int i = 0; i < count; ++i) {
        if (data[i] == value)
            return data + i;
    }
    return data + count;
}

struct Result {
    Object* object;
    int face;
    Vector3 position, normal;
    Result();
};

inline Result::Result()
    : object(0), face(6), position(zeroVector()), normal(zeroVector())
{
}

extern bool __cdecl intersect(const Ray*, const Plane*, Vector3*);

struct S {
    char padding[0x44];
    Ray ray;
    Result findFace(Object* object, const FaceList* excluded);
};

Result S::findFace(Object* object, const FaceList* excluded)
{
    Result result;
    result.object = object;

    const Vector3& size = object->geometry->size;
    Vector3 half(size.x * 0.5f, size.y * 0.5f, size.z * 0.5f);
    Box box;
    box.low = Vector3(-half.x, -half.y, -half.z);
    box.high = half;

    const Transform& transform = object->getTransform();
    const Ray& source = ray;
    Ray localRay = transform.transformRay(source);
    float bestDistance = 0.0f;
    bool found = false;

    for (int i = 0; i < 6; ++i) {
        if (excluded && excluded->find(i) != excluded->data + excluded->count)
            continue;

        Plane plane = box.face(i);
        if (!(localRay.origin.x * plane.normal.x + localRay.origin.z * plane.normal.z + localRay.origin.y * plane.normal.y >= plane.distance))
            continue;

        Vector3 point(0.0f, 0.0f, 0.0f);
        if (!intersect(&localRay, &plane, &point))
            continue;

        Vector3 world(
            point.x * transform.m[0][0] +
            point.y * transform.m[0][1] +
            point.z * transform.m[0][2] + transform.translation.x,
            point.x * transform.m[1][0] +
            point.y * transform.m[1][1] +
            point.z * transform.m[1][2] + transform.translation.y,
            point.x * transform.m[2][0] +
            point.y * transform.m[2][1] +
            point.z * transform.m[2][2] + transform.translation.z);

        Vector3 delta(ray.origin.x - world.x,
                      ray.origin.y - world.y,
                      ray.origin.z - world.z);
        float distance = (float)sqrt(delta.x * delta.x +
                                    delta.y * delta.y +
                                    delta.z * delta.z);
        if (distance > bestDistance) {
            bestDistance = distance;
            result.face = i;
            found = true;
            result.position = world;
        }
    }

    return found ? result : Result();
}
