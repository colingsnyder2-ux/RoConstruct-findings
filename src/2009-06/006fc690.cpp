// roc 2009-06 006fc690  unit: RBX::AdornRbxGfx  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc690
//
// 006fc690  83ec20               sub esp, 0x20
// 006fc693  d9e8                 fld1 
// 006fc695  56                   push esi
// 006fc696  d95c2414             fstp dword ptr [esp + 0x14]
// 006fc69a  8bf1                 mov esi, ecx
// 006fc69c  d9ee                 fldz 
// 006fc69e  8d8614010000         lea eax, [esi + 0x114]
// 006fc6a4  d9542418             fst dword ptr [esp + 0x18]
// 006fc6a8  50                   push eax
// 006fc6a9  d9542420             fst dword ptr [esp + 0x20]
// 006fc6ad  8d4c2418             lea ecx, [esp + 0x18]
// 006fc6b1  d95c2424             fstp dword ptr [esp + 0x24]
// 006fc6b5  ff1558078a00         call dword ptr [0x8a0758]
// 006fc6bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006fc6bf  51                   push ecx
// 006fc6c0  8d542408             lea edx, [esp + 8]
// 006fc6c4  52                   push edx
// 006fc6c5  8d4c241c             lea ecx, [esp + 0x1c]
// 006fc6c9  ff15440f8a00         call dword ptr [0x8a0f44]
// 006fc6cf  d900                 fld dword ptr [eax]
// 006fc6d1  d95c2414             fstp dword ptr [esp + 0x14]
// 006fc6d5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fc6d9  d94004               fld dword ptr [eax + 4]
// 006fc6dc  8d542404             lea edx, [esp + 4]
// 006fc6e0  d95c2418             fstp dword ptr [esp + 0x18]
// 006fc6e4  d94008               fld dword ptr [eax + 8]
// 006fc6e7  d95c241c             fstp dword ptr [esp + 0x1c]
// 006fc6eb  d9400c               fld dword ptr [eax + 0xc]
// 006fc6ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006fc6f2  d95c2420             fstp dword ptr [esp + 0x20]
// 006fc6f6  d900                 fld dword ptr [eax]
// 006fc6f8  d88638010000         fadd dword ptr [esi + 0x138]
// 006fc6fe  d95c2404             fstp dword ptr [esp + 4]
// 006fc702  d9863c010000         fld dword ptr [esi + 0x13c]
// 006fc708  d84004               fadd dword ptr [eax + 4]
// 006fc70b  d95c2408             fstp dword ptr [esp + 8]
// 006fc70f  d98640010000         fld dword ptr [esi + 0x140]
// 006fc715  d84008               fadd dword ptr [eax + 8]
// 006fc718  8d442414             lea eax, [esp + 0x14]
// 006fc71c  50                   push eax
// 006fc71d  51                   push ecx
// 006fc71e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fc722  d95c2414             fstp dword ptr [esp + 0x14]
// 006fc726  52                   push edx
// 006fc727  ff15480f8a00         call dword ptr [0x8a0f48]
// 006fc72d  5e                   pop esi
// 006fc72e  83c420               add esp, 0x20
// 006fc731  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S@@QAEXPAUMatrix4@@PBUVector3@@1PBUQuaternion@@@Z)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct Quaternion {
    float w, x, y, z;
};

struct Matrix4 {
    float m[16];
};

extern void (__thiscall *FromRotationMatrix)(Quaternion *, const Matrix3 *);
extern Quaternion *(__thiscall *MultiplyQuaternion)(
    const Quaternion *, Quaternion *, const Quaternion *);
extern void (__thiscall *MakeTransform)(
    Matrix4 *, const Vector3 *, const Vector3 *, const Quaternion *);

struct S {
    char padding[0x114];
    Matrix3 rotation;
    Vector3 translation;

    void f(Matrix4 *, const Vector3 *, const Vector3 *, const Quaternion *);
};

void S::f(Matrix4 *output, const Vector3 *position,
          const Vector3 *scale, const Quaternion *orientation)
{
    struct Locals {
        union {
            Quaternion temporary;
            Vector3 translated;
        } scratch;
        Quaternion q;
    } local;

    local.q.w = 1.0f;
    local.q.x = 0.0f;
    local.q.y = 0.0f;
    local.q.z = 0.0f;

    FromRotationMatrix(&local.q, &rotation);

    Quaternion *result =
        MultiplyQuaternion(&local.q, &local.scratch.temporary, orientation);
    local.q.w = result->w;
    local.q.x = result->x;
    local.q.y = result->y;
    local.q.z = result->z;

    local.scratch.translated.x =
        static_cast<const volatile Vector3 *>(position)->x + translation.x;
    local.scratch.translated.y = translation.y + position->y;
    local.scratch.translated.z = translation.z + position->z;

    MakeTransform(output, &local.scratch.translated, scale, &local.q);
}