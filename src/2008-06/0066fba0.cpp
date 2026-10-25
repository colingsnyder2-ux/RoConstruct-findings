// from server: 100% by king_originala
// roc 2008-06 0066fba0  unit: RBX::AdornRbxGfx  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066fba0
//
// 0066fba0  83ec1c               sub esp, 0x1c
// 0066fba3  d9e8                 fld1 
// 0066fba5  56                   push esi
// 0066fba6  d95c2410             fstp dword ptr [esp + 0x10]
// 0066fbaa  8bf1                 mov esi, ecx
// 0066fbac  d9ee                 fldz 
// 0066fbae  8d8614010000         lea eax, [esi + 0x114]
// 0066fbb4  d9542414             fst dword ptr [esp + 0x14]
// 0066fbb8  50                   push eax
// 0066fbb9  d954241c             fst dword ptr [esp + 0x1c]
// 0066fbbd  8d4c2414             lea ecx, [esp + 0x14]
// 0066fbc1  d95c2420             fstp dword ptr [esp + 0x20]
// 0066fbc5  ff15784c8000         call dword ptr [0x804c78]
// 0066fbcb  d9e8                 fld1 
// 0066fbcd  8d4c2410             lea ecx, [esp + 0x10]
// 0066fbd1  d9542404             fst dword ptr [esp + 4]
// 0066fbd5  51                   push ecx
// 0066fbd6  d954240c             fst dword ptr [esp + 0xc]
// 0066fbda  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066fbde  d95c2410             fstp dword ptr [esp + 0x10]
// 0066fbe2  8d542408             lea edx, [esp + 8]
// 0066fbe6  52                   push edx
// 0066fbe7  81c638010000         add esi, 0x138
// 0066fbed  56                   push esi
// 0066fbee  ff15744c8000         call dword ptr [0x804c74]
// 0066fbf4  5e                   pop esi
// 0066fbf5  83c41c               add esp, 0x1c
// 0066fbf8  c20400               ret 4

struct Matrix3 {
    float m[9];
};

struct Vector3 {
    float x, y, z;
};

struct Quaternion {
    float w, x, y, z;
};

struct Matrix4 {
    float m[16];
};

typedef void (__thiscall *FromRotationMatrixFn)(Quaternion*, const Matrix3&);
typedef void (__thiscall *MakeTransformFn)(Matrix4*, const Vector3&, const Vector3&, const Quaternion&);

extern FromRotationMatrixFn FromRotationMatrix;
extern MakeTransformFn makeTransform;

struct S {
    char padding[0x114];
    Matrix3 rotation;
    Vector3 position;

    void f(Matrix4*);
};

void S::f(Matrix4* output) {
    Quaternion q;
    q.w = 1.0f;
    q.x = 0.0f;
    q.y = 0.0f;
    q.z = 0.0f;
    FromRotationMatrix(&q, rotation);

    Vector3 scale;
    scale.x = 1.0f;
    scale.y = 1.0f;
    scale.z = 1.0f;
    makeTransform(output, position, scale, q);
}
