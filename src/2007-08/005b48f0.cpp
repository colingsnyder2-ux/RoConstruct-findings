// from server: 69% by colin
// roc 2007-08 005b48f0  unit: RBX::Geometry  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b48f0
//
// 005b48f0  d94174               fld dword ptr [ecx + 0x74]
// 005b48f3  d9442404             fld dword ptr [esp + 4]
// 005b48f7  dde1                 fucom st(1)
// 005b48f9  dfe0                 fnstsw ax
// 005b48fb  ddd9                 fstp st(1)
// 005b48fd  f6c444               test ah, 0x44
// 005b4900  7b15                 jnp 0x5b4917
// 005b4902  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005b4905  d95974               fstp dword ptr [ecx + 0x74]
// 005b4908  85c0                 test eax, eax
// 005b490a  740d                 je 0x5b4919
// 005b490c  894c2404             mov dword ptr [esp + 4], ecx
// 005b4910  8bc8                 mov ecx, eax
// 005b4912  e93947ffff           jmp 0x5a9050
// 005b4917  ddd8                 fstp st(0)
// 005b4919  c20400               ret 4

struct Geometry {
    char pad[0x1c];
    void* bulletCollisionObject;
    char pad2[0x74 - 0x20];
    float geometryParameter;
    void setGeometryParameter(float value);
};

extern void Geometry_setGeometryParameter_impl(void* obj, float value);

void Geometry::setGeometryParameter(float value)
{
    if (geometryParameter != value) {
        void* obj = bulletCollisionObject;
        geometryParameter = value;
        if (obj != 0) {
            Geometry_setGeometryParameter_impl(obj, value);
        }
    }
}
