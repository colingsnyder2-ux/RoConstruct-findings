// from server: 96% by colin
// roc 2008-06 00613080  unit: seg_00610000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613080
//
// 00613080  83ec0c               sub esp, 0xc
// 00613083  53                   push ebx
// 00613084  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00613088  56                   push esi
// 00613089  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061308d  d906                 fld dword ptr [esi]
// 0061308f  57                   push edi
// 00613090  d9e0                 fchs 
// 00613092  8bf9                 mov edi, ecx
// 00613094  8b470c               mov eax, dword ptr [edi + 0xc]
// 00613097  d95c240c             fstp dword ptr [esp + 0xc]
// 0061309b  d94604               fld dword ptr [esi + 4]
// 0061309e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006130a1  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 006130a4  d9e0                 fchs 
// 006130a6  d95c2410             fstp dword ptr [esp + 0x10]
// 006130aa  d94608               fld dword ptr [esi + 8]
// 006130ad  d9e0                 fchs 
// 006130af  d95c2414             fstp dword ptr [esp + 0x14]
// 006130b3  85c9                 test ecx, ecx
// 006130b5  740b                 je 0x6130c2
// 006130b7  53                   push ebx
// 006130b8  8d542410             lea edx, [esp + 0x10]
// 006130bc  52                   push edx
// 006130bd  e8eefeffff           call 0x612fb0
// 006130c2  8b4710               mov eax, dword ptr [edi + 0x10]
// 006130c5  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006130c8  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 006130cb  85c9                 test ecx, ecx
// 006130cd  7407                 je 0x6130d6
// 006130cf  53                   push ebx
// 006130d0  56                   push esi
// 006130d1  e8dafeffff           call 0x612fb0
// 006130d6  5f                   pop edi
// 006130d7  5e                   pop esi
// 006130d8  5b                   pop ebx
// 006130d9  83c40c               add esp, 0xc
// 006130dc  c20800               ret 8

// from server: 93% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3 operator-() const { return Vector3(-x, -y, -z); }
};
}
namespace RBX {
class SimBody {
public:
    void accumulateForce(const G3D::Vector3& force, const G3D::Vector3& worldPos);
};
class Body {
public:
    char pad0[0x10];
    Body* root;          // 0x10
    char pad14[0x18];
    SimBody* simBody;    // 0x2c
    void accumulateForce(const G3D::Vector3& force, const G3D::Vector3& worldPos)
    {
        SimBody* simBody = root->simBody;
        if (simBody)
            simBody->accumulateForce(force, worldPos);
    }
};
class GeoPair {
public:
    char pad0[0xc];
    Body* body0;   // 0xc
    Body* body1;   // 0x10
    void forceToBodies(const G3D::Vector3& _force, const G3D::Vector3& _position);
};
void GeoPair::forceToBodies(const G3D::Vector3& _force, const G3D::Vector3& _position)
{
    Body* first = this->body0;
    first->accumulateForce(-_force, _position);
    this->body1->accumulateForce(_force, _position);
}
}

