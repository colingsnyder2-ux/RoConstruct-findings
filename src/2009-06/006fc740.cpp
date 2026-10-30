// roc 2009-06 006fc740  unit: RBX::AdornRbxGfx  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc740
//
// 006fc740  83ec1c               sub esp, 0x1c
// 006fc743  d9e8                 fld1 
// 006fc745  56                   push esi
// 006fc746  d95c2410             fstp dword ptr [esp + 0x10]
// 006fc74a  8bf1                 mov esi, ecx
// 006fc74c  d9ee                 fldz 
// 006fc74e  8d8614010000         lea eax, [esi + 0x114]
// 006fc754  d9542414             fst dword ptr [esp + 0x14]
// 006fc758  50                   push eax
// 006fc759  d954241c             fst dword ptr [esp + 0x1c]
// 006fc75d  8d4c2414             lea ecx, [esp + 0x14]
// 006fc761  d95c2420             fstp dword ptr [esp + 0x20]
// 006fc765  ff1558078a00         call dword ptr [0x8a0758]
// 006fc76b  d9e8                 fld1 
// 006fc76d  8d4c2410             lea ecx, [esp + 0x10]
// 006fc771  d9542404             fst dword ptr [esp + 4]
// 006fc775  51                   push ecx
// 006fc776  d954240c             fst dword ptr [esp + 0xc]
// 006fc77a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fc77e  d95c2410             fstp dword ptr [esp + 0x10]
// 006fc782  8d542408             lea edx, [esp + 8]
// 006fc786  52                   push edx
// 006fc787  81c638010000         add esi, 0x138
// 006fc78d  56                   push esi
// 006fc78e  ff15480f8a00         call dword ptr [0x8a0f48]
// 006fc794  5e                   pop esi
// 006fc795  83c41c               add esp, 0x1c
// 006fc798  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXPAUMatrix4@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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