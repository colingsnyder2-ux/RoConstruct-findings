// from server: 94% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 80% by king_originala
// roc 2008-06 007aacc0  unit: RBX::RenderNew::RenderScene  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007aacc0
//
// 007aacc0  6aff                 push -1
// 007aacc2  68d0d47e00           push 0x7ed4d0
// 007aacc7  64a100000000         mov eax, dword ptr fs:[0]
// 007aaccd  50                   push eax
// 007aacce  64892500000000       mov dword ptr fs:[0], esp
// 007aacd5  83ec60               sub esp, 0x60
// 007aacd8  56                   push esi
// 007aacd9  57                   push edi
// 007aacda  8bf9                 mov edi, ecx
// 007aacdc  8d44247c             lea eax, [esp + 0x7c]
// 007aace0  50                   push eax
// 007aace1  8d8fa0030000         lea ecx, [edi + 0x3a0]
// 007aace7  c744247400000000     mov dword ptr [esp + 0x74], 0
// 007aacef  e88c70d5ff           call 0x501d80
// 007aacf4  8d4c2408             lea ecx, [esp + 8]
// 007aacf8  51                   push ecx
// 007aacf9  e8628cd5ff           call 0x503960
// 007aacfe  d9842478010000       fld dword ptr [esp + 0x178]
// 007aad05  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007aad09  d95e18               fstp dword ptr [esi + 0x18]
// 007aad0c  6a01                 push 1
// 007aad0e  d9842480010000       fld dword ptr [esp + 0x180]
// 007aad15  6a01                 push 1
// 007aad17  d95e1c               fstp dword ptr [esi + 0x1c]
// 007aad1a  8d542418             lea edx, [esp + 0x18]
// 007aad1e  d9842488010000       fld dword ptr [esp + 0x188]
// 007aad25  52                   push edx
// 007aad26  d95e20               fstp dword ptr [esi + 0x20]
// 007aad29  8d8424c8000000       lea eax, [esp + 0xc8]
// 007aad30  d9842490010000       fld dword ptr [esp + 0x190]
// 007aad37  50                   push eax
// 007aad38  d95e24               fstp dword ptr [esi + 0x24]
// 007aad3b  8d4c242c             lea ecx, [esp + 0x2c]
// 007aad3f  d9842498010000       fld dword ptr [esp + 0x198]
// 007aad46  51                   push ecx
// 007aad47  d95e28               fstp dword ptr [esi + 0x28]
// 007aad4a  c684248800000001     mov byte ptr [esp + 0x88], 1
// 007aad52  d98424a0010000       fld dword ptr [esp + 0x1a0]
// 007aad59  d95e2c               fstp dword ptr [esi + 0x2c]
// 007aad5c  d98424b8000000       fld dword ptr [esp + 0xb8]
// 007aad63  d905c86f8200         fld dword ptr [0x826fc8]
// 007aad69  dcc9                 fmul st(1), st(0)
// 007aad6b  d98424bc000000       fld dword ptr [esp + 0xbc]
// 007aad72  d8c9                 fmul st(1)
// 007aad74  d98424c0000000       fld dword ptr [esp + 0xc0]
// 007aad7b  deca                 fmulp st(2)
// 007aad7d  d9ca                 fxch st(2)
// 007aad7f  d95c2424             fstp dword ptr [esp + 0x24]
// 007aad83  d9c9                 fxch st(1)
// 007aad85  d95c2428             fstp dword ptr [esp + 0x28]
// 007aad89  d95c242c             fstp dword ptr [esp + 0x2c]
// 007aad8d  e87e97d6ff           call 0x514510
// 007aad92  83c418               add esp, 0x18
// 007aad95  8d542418             lea edx, [esp + 0x18]
// 007aad99  52                   push edx
// 007aad9a  8d4e4c               lea ecx, [esi + 0x4c]
// 007aad9d  e85e82d5ff           call 0x503000
// 007aada2  8d442408             lea eax, [esp + 8]
// 007aada6  50                   push eax
// 007aada7  8bcf                 mov ecx, edi
// 007aada9  e802fbffff           call 0x7aa8b0
// 007aadae  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 007aadb4  c644247000           mov byte ptr [esp + 0x70], 0
// 007aadb9  85f6                 test esi, esi
// 007aadbb  741b                 je 0x7aadd8
// 007aadbd  8d4604               lea eax, [esi + 4]
// 007aadc0  50                   push eax
// 007aadc1  ffd7                 call edi
// 007aadc3  85c0                 test eax, eax
// 007aadc5  7511                 jne 0x7aadd8
// 007aadc7  8bce                 mov ecx, esi
// 007aadc9  e8c2ffcaff           call 0x45ad90
// 007aadce  8b16                 mov edx, dword ptr [esi]
// 007aadd0  8b02                 mov eax, dword ptr [edx]
// 007aadd2  6a01                 push 1
// 007aadd4  8bce                 mov ecx, esi
// 007aadd6  ffd0                 call eax
// 007aadd8  8b442478             mov eax, dword ptr [esp + 0x78]
// 007aaddc  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 007aade4  85c0                 test eax, eax
// 007aade6  7423                 je 0x7aae0b
// 007aade8  83c004               add eax, 4
// 007aadeb  50                   push eax
// 007aadec  ffd7                 call edi
// 007aadee  85c0                 test eax, eax
// 007aadf0  7519                 jne 0x7aae0b
// 007aadf2  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007aadf6  e895ffcaff           call 0x45ad90
// 007aadfb  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007aadff  85c9                 test ecx, ecx
// 007aae01  7408                 je 0x7aae0b
// 007aae03  8b11                 mov edx, dword ptr [ecx]
// 007aae05  8b02                 mov eax, dword ptr [edx]
// 007aae07  6a01                 push 1
// 007aae09  ffd0                 call eax
// 007aae0b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007aae0f  5f                   pop edi
// 007aae10  5e                   pop esi
// 007aae11  64890d00000000       mov dword ptr fs:[0], ecx
// 007aae18  83c46c               add esp, 0x6c
// 007aae1b  c21401               ret 0x114

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long *);

struct Vector3 {
    float x, y, z;
    Vector3(float a,float b,float c):x(a),y(b),z(c){}
};

struct Transform {
    float data[12];
};

struct Parameters {
    char prefix[36];
    Vector3 color;
    char gap[12];
    Transform transform;
    char remainder[140];
    float values[6];
};

struct Light {
    char data[80];
};

struct LightList {
    char data[12];
    void append(const Light &);
};

struct Object {
    virtual ~Object();
    long references;
    void *resource;
    char padding[12];
    float values[6];
    char unused[28];
    LightList lights;
    void dispose();
};

struct Reference {
    Object *pointer;
    ~Reference();
};

inline Reference::~Reference()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->dispose();
        if (pointer)
            delete pointer;
    }
}

struct LocalReference {
    Object *pointer;
    ~LocalReference();
};

inline LocalReference::~LocalReference()
{
    Object *p = pointer;
    if (p && InterlockedDecrement(&p->references) == 0) {
        p->dispose();
        delete p;
    }
}

struct ParameterStore {
    ParameterStore &assign(const Parameters &);
};

extern LocalReference createLighting();
extern void createLight(Light *, const Transform &, const Vector3 &, bool, bool);

struct Scene {
    char padding[0x3a0];
    ParameterStore parameters;
    void submit(const LocalReference &);
    void configure(Reference reference, Parameters input);
};

void Scene::configure(Reference reference, Parameters input)
{
    parameters.assign(input);

    LocalReference lighting = createLighting();
    Object *p = lighting.pointer;

    p->values[0] = input.values[0];
    p->values[1] = input.values[1];
    p->values[2] = input.values[2];
    p->values[3] = input.values[3];
    p->values[4] = input.values[4];
    p->values[5] = input.values[5];

    Vector3 color(input.color.x * 0.9f,input.color.y * 0.9f,input.color.z * 0.9f);

    Light light;
    createLight(&light, input.transform, color, true, true);
    p->lights.append(light);
    submit(lighting);
    lighting.pointer = p;
}
