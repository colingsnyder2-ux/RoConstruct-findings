// from server: 96% by EspClaude
// roc 2008-06 00630140  unit: RBX::BodyPosition  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630140
//
// 00630140  83ec20               sub esp, 0x20
// 00630143  53                   push ebx
// 00630144  56                   push esi
// 00630145  57                   push edi
// 00630146  8bd9                 mov ebx, ecx
// 00630148  8d44240c             lea eax, [esp + 0xc]
// 0063014c  50                   push eax
// 0063014d  8d4b10               lea ecx, [ebx + 0x10]
// 00630150  e8aba9f9ff           call 0x5cab00
// 00630155  8b742410             mov esi, dword ptr [esp + 0x10]
// 00630159  8b08                 mov ecx, dword ptr [eax]
// 0063015b  8bb9c8020000         mov edi, dword ptr [ecx + 0x2c8]
// 00630161  85f6                 test esi, esi
// 00630163  742a                 je 0x63018f
// 00630165  8d5604               lea edx, [esi + 4]
// 00630168  83c8ff               or eax, 0xffffffff
// 0063016b  f00fc102             lock xadd dword ptr [edx], eax
// 0063016f  751e                 jne 0x63018f
// 00630171  8b16                 mov edx, dword ptr [esi]
// 00630173  8b4204               mov eax, dword ptr [edx + 4]
// 00630176  8bce                 mov ecx, esi
// 00630178  ffd0                 call eax
// 0063017a  8d4e08               lea ecx, [esi + 8]
// 0063017d  83caff               or edx, 0xffffffff
// 00630180  f00fc111             lock xadd dword ptr [ecx], edx
// 00630184  7509                 jne 0x63018f
// 00630186  8b06                 mov eax, dword ptr [esi]
// 00630188  8b5008               mov edx, dword ptr [eax + 8]
// 0063018b  8bce                 mov ecx, esi
// 0063018d  ffd2                 call edx
// 0063018f  8bcf                 mov ecx, edi
// 00630191  e8ca91f6ff           call 0x599360
// 00630196  d9432c               fld dword ptr [ebx + 0x2c]
// 00630199  d8a7b8000000         fsub dword ptr [edi + 0xb8]
// 0063019f  8bcf                 mov ecx, edi
// 006301a1  d94330               fld dword ptr [ebx + 0x30]
// 006301a4  d8a7bc000000         fsub dword ptr [edi + 0xbc]
// 006301aa  d94334               fld dword ptr [ebx + 0x34]
// 006301ad  d8a7c0000000         fsub dword ptr [edi + 0xc0]
// 006301b3  d94318               fld dword ptr [ebx + 0x18]
// 006301b6  dccb                 fmul st(3), st(0)
// 006301b8  d9cb                 fxch st(3)
// 006301ba  d95c2414             fstp dword ptr [esp + 0x14]
// 006301be  d9c9                 fxch st(1)
// 006301c0  d8ca                 fmul st(2)
// 006301c2  d95c2418             fstp dword ptr [esp + 0x18]
// 006301c6  dec9                 fmulp st(1)
// 006301c8  d95c241c             fstp dword ptr [esp + 0x1c]
// 006301cc  e88f91f6ff           call 0x599360
// 006301d1  d9431c               fld dword ptr [ebx + 0x1c]
// 006301d4  8b4710               mov eax, dword ptr [edi + 0x10]
// 006301d7  d9e0                 fchs 
// 006301d9  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006301dc  d987c4000000         fld dword ptr [edi + 0xc4]
// 006301e2  d8c9                 fmul st(1)
// 006301e4  d987c8000000         fld dword ptr [edi + 0xc8]
// 006301ea  d8ca                 fmul st(2)
// 006301ec  d987cc000000         fld dword ptr [edi + 0xcc]
// 006301f2  decb                 fmulp st(3)
// 006301f4  d9c9                 fxch st(1)
// 006301f6  d8442414             fadd dword ptr [esp + 0x14]
// 006301fa  d95c2420             fstp dword ptr [esp + 0x20]
// 006301fe  d8442418             fadd dword ptr [esp + 0x18]
// 00630202  d95c2424             fstp dword ptr [esp + 0x24]
// 00630206  d844241c             fadd dword ptr [esp + 0x1c]
// 0063020a  d95c2428             fstp dword ptr [esp + 0x28]
// 0063020e  85c9                 test ecx, ecx
// 00630210  7407                 je 0x630219
// 00630212  e8f9fc0200           call 0x65ff10
// 00630217  eb06                 jmp 0x63021f
// 00630219  d9808c000000         fld dword ptr [eax + 0x8c]
// 0063021f  d9442420             fld dword ptr [esp + 0x20]
// 00630223  8d7338               lea esi, [ebx + 0x38]
// 00630226  d8c9                 fmul st(1)
// 00630228  83c320               add ebx, 0x20
// 0063022b  d9c1                 fld st(1)
// 0063022d  53                   push ebx
// 0063022e  d84c2428             fmul dword ptr [esp + 0x28]
// 00630232  8d442424             lea eax, [esp + 0x24]
// 00630236  d9ca                 fxch st(2)
// 00630238  50                   push eax
// 00630239  d84c2430             fmul dword ptr [esp + 0x30]
// 0063023d  8d4c241c             lea ecx, [esp + 0x1c]
// 00630241  d9c9                 fxch st(1)
// 00630243  51                   push ecx
// 00630244  8bce                 mov ecx, esi
// 00630246  d91e                 fstp dword ptr [esi]
// 00630248  d9c9                 fxch st(1)
// 0063024a  d95e04               fstp dword ptr [esi + 4]
// 0063024d  d95e08               fstp dword ptr [esi + 8]
// 00630250  d903                 fld dword ptr [ebx]
// 00630252  d9e0                 fchs 
// 00630254  d95c242c             fstp dword ptr [esp + 0x2c]
// 00630258  d94304               fld dword ptr [ebx + 4]
// 0063025b  d9e0                 fchs 
// 0063025d  d95c2430             fstp dword ptr [esp + 0x30]
// 00630261  d94308               fld dword ptr [ebx + 8]
// 00630264  d9e0                 fchs 
// 00630266  d95c2434             fstp dword ptr [esp + 0x34]
// 0063026a  e8915ee7ff           call 0x4a6100
// 0063026f  d900                 fld dword ptr [eax]
// 00630271  d91e                 fstp dword ptr [esi]
// 00630273  d94004               fld dword ptr [eax + 4]
// 00630276  d95e04               fstp dword ptr [esi + 4]
// 00630279  d94008               fld dword ptr [eax + 8]
// 0063027c  d95e08               fstp dword ptr [esi + 8]
// 0063027f  8b5710               mov edx, dword ptr [edi + 0x10]
// 00630282  8b4210               mov eax, dword ptr [edx + 0x10]
// 00630285  8b782c               mov edi, dword ptr [eax + 0x2c]
// 00630288  85ff                 test edi, edi
// 0063028a  7439                 je 0x6302c5
// 0063028c  807f0800             cmp byte ptr [edi + 8], 0
// 00630290  7407                 je 0x630299
// 00630292  8bcf                 mov ecx, edi
// 00630294  e8878a0200           call 0x658d20
// 00630299  d906                 fld dword ptr [esi]
// 0063029b  d88784000000         fadd dword ptr [edi + 0x84]
// 006302a1  d99f84000000         fstp dword ptr [edi + 0x84]
// 006302a7  d94604               fld dword ptr [esi + 4]
// 006302aa  d88788000000         fadd dword ptr [edi + 0x88]
// 006302b0  d99f88000000         fstp dword ptr [edi + 0x88]
// 006302b6  d94608               fld dword ptr [esi + 8]
// 006302b9  d8878c000000         fadd dword ptr [edi + 0x8c]
// 006302bf  d99f8c000000         fstp dword ptr [edi + 0x8c]
// 006302c5  5f                   pop edi
// 006302c6  5e                   pop esi
// 006302c7  5b                   pop ebx
// 006302c8  83c420               add esp, 0x20
// 006302cb  c20800               ret 8

// from server: 95% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    ~shared_count() { if (pi_ != 0) pi_->release(); }
    shared_count& operator=(const shared_count& r);
};

template<class T> class shared_ptr {
public:
    T* px;
    shared_count pn;
    T* get() const { return px; }
    T* operator->() const { return px; }
    void reset();
    operator bool() const { return px != 0; }
};

class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
    Vector3 operator-(const Vector3& v) const { return Vector3(x - v.x, y - v.y, z - v.z); }
    Vector3 operator+(const Vector3& v) const { return Vector3(x + v.x, y + v.y, z + v.z); }
    Vector3 operator*(float s) const { return Vector3(s * x, s * y, s * z); }
    Vector3 operator-() const { return Vector3(-x, -y, -z); }
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3& operator+=(const Vector3& v) { x += v.x; y += v.y; z += v.z; return *this; }
    Vector3 clamp(const Vector3& low, const Vector3& high) const;
};

namespace RBX {
struct CoordinateFrame { float rotation[9]; Vector3 translation; };
struct Velocity { Vector3 linear; Vector3 rotational; };
struct PV { CoordinateFrame position; Velocity velocity; };

class Cofm {
public:
    float getMass();
};

class Clump {
public:
    char pad[8];
    bool dirty;
    void update();
    char pad2[0x84 - 9];
    Vector3 force;
};

class Body;
class Assembly {
public:
    char pad[0x2c];
    Clump* clump;
};

class Body {
public:
    char pad[0x10];
    Body* root;
    char pad2[0x28 - 0x14];
    Cofm* cofm;
    char pad3[0x8c - 0x2c];
    float mass;
    char pad4[0x94 - 0x90];
    PV pv;
    void updatePV();
    const PV& getPV() { updatePV(); return pv; }
    Body* getRoot() { return root; }
    float getBranchMass() { return cofm ? cofm->getMass() : mass; }
    void accumulateForceAtBranchCofm(const Vector3& force)
    {
        Clump* c = ((Assembly*)root)->clump;
        if (c)
        {
            if (c->dirty)
                c->update();
            c->force.x = force.x + c->force.x; c->force.y = force.y + c->force.y; c->force.z = force.z + c->force.z;
        }
    }
};

class Primitive {
public:
    Body* getBody() { return (Body*)this; }
};

class PartInstance {
public:
    char pad[0x2c8];
    Primitive* primitive;
    Primitive* getPrimitive() { return primitive; }
};

template<class T> class weak_ptr {
public:
    T* px;
    shared_count pn;
    shared_ptr<T> lock() const;
};

class BodyPosition {
public:
    char pad[0x10];
    weak_ptr<PartInstance> part;
    float kP;
    float kD;
    Vector3 maxForce;
    Vector3 position;
    Vector3 lastForce;
    void computeForce(float dt, bool throttling);
};

void BodyPosition::computeForce(float dt, bool throttling)
{
    Body* body = part.lock()->getPrimitive()->getBody();

    Vector3 positionForce = (position - body->getPV().position.translation) * kP;

    Vector3 goalForce = positionForce + body->getPV().velocity.linear * -kD;

    lastForce = goalForce * body->getRoot()->getBranchMass();

    lastForce = lastForce.clamp(-maxForce, maxForce);

    body->getRoot()->accumulateForceAtBranchCofm(lastForce);
}
}
