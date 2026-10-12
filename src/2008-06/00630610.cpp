// from server: 87% by king_originala
// roc 2008-06 00630610  unit: RBX::BodyThrust  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630610
//
// 00630610  83ec20               sub esp, 0x20
// 00630613  53                   push ebx
// 00630614  56                   push esi
// 00630615  57                   push edi
// 00630616  8bf9                 mov edi, ecx
// 00630618  8d44240c             lea eax, [esp + 0xc]
// 0063061c  50                   push eax
// 0063061d  8d4f10               lea ecx, [edi + 0x10]
// 00630620  e8dba4f9ff           call 0x5cab00
// 00630625  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00630629  8b08                 mov ecx, dword ptr [eax]
// 0063062b  8bb1c8020000         mov esi, dword ptr [ecx + 0x2c8]
// 00630631  85db                 test ebx, ebx
// 00630633  742a                 je 0x63065f
// 00630635  8d5304               lea edx, [ebx + 4]
// 00630638  83c8ff               or eax, 0xffffffff
// 0063063b  f00fc102             lock xadd dword ptr [edx], eax
// 0063063f  751e                 jne 0x63065f
// 00630641  8b13                 mov edx, dword ptr [ebx]
// 00630643  8b4204               mov eax, dword ptr [edx + 4]
// 00630646  8bcb                 mov ecx, ebx
// 00630648  ffd0                 call eax
// 0063064a  8d4b08               lea ecx, [ebx + 8]
// 0063064d  83caff               or edx, 0xffffffff
// 00630650  f00fc111             lock xadd dword ptr [ecx], edx
// 00630654  7509                 jne 0x63065f
// 00630656  8b03                 mov eax, dword ptr [ebx]
// 00630658  8b5008               mov edx, dword ptr [eax + 8]
// 0063065b  8bcb                 mov ecx, ebx
// 0063065d  ffd2                 call edx
// 0063065f  8bce                 mov ecx, esi
// 00630661  e8fa8cf6ff           call 0x599360
// 00630666  d9869c000000         fld dword ptr [esi + 0x9c]
// 0063066c  d84f20               fmul dword ptr [edi + 0x20]
// 0063066f  8bce                 mov ecx, esi
// 00630671  d98698000000         fld dword ptr [esi + 0x98]
// 00630677  d84f1c               fmul dword ptr [edi + 0x1c]
// 0063067a  dec1                 faddp st(1)
// 0063067c  d94718               fld dword ptr [edi + 0x18]
// 0063067f  d88e94000000         fmul dword ptr [esi + 0x94]
// 00630685  dec1                 faddp st(1)
// 00630687  d95c2420             fstp dword ptr [esp + 0x20]
// 0063068b  d986a8000000         fld dword ptr [esi + 0xa8]
// 00630691  d84f20               fmul dword ptr [edi + 0x20]
// 00630694  d986a4000000         fld dword ptr [esi + 0xa4]
// 0063069a  d84f1c               fmul dword ptr [edi + 0x1c]
// 0063069d  dec1                 faddp st(1)
// 0063069f  d986a0000000         fld dword ptr [esi + 0xa0]
// 006306a5  d84f18               fmul dword ptr [edi + 0x18]
// 006306a8  dec1                 faddp st(1)
// 006306aa  d95c2424             fstp dword ptr [esp + 0x24]
// 006306ae  d986b4000000         fld dword ptr [esi + 0xb4]
// 006306b4  d84f20               fmul dword ptr [edi + 0x20]
// 006306b7  d986b0000000         fld dword ptr [esi + 0xb0]
// 006306bd  d84f1c               fmul dword ptr [edi + 0x1c]
// 006306c0  dec1                 faddp st(1)
// 006306c2  d986ac000000         fld dword ptr [esi + 0xac]
// 006306c8  d84f18               fmul dword ptr [edi + 0x18]
// 006306cb  dec1                 faddp st(1)
// 006306cd  d95c2428             fstp dword ptr [esp + 0x28]
// 006306d1  e88a8cf6ff           call 0x599360
// 006306d6  d9869c000000         fld dword ptr [esi + 0x9c]
// 006306dc  8b4610               mov eax, dword ptr [esi + 0x10]
// 006306df  d84f2c               fmul dword ptr [edi + 0x2c]
// 006306e2  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006306e5  d98698000000         fld dword ptr [esi + 0x98]
// 006306eb  d84f28               fmul dword ptr [edi + 0x28]
// 006306ee  dec1                 faddp st(1)
// 006306f0  d94724               fld dword ptr [edi + 0x24]
// 006306f3  d88e94000000         fmul dword ptr [esi + 0x94]
// 006306f9  dec1                 faddp st(1)
// 006306fb  d886b8000000         fadd dword ptr [esi + 0xb8]
// 00630701  d95c2414             fstp dword ptr [esp + 0x14]
// 00630705  d986a0000000         fld dword ptr [esi + 0xa0]
// 0063070b  d84f24               fmul dword ptr [edi + 0x24]
// 0063070e  d986a8000000         fld dword ptr [esi + 0xa8]
// 00630714  d84f2c               fmul dword ptr [edi + 0x2c]
// 00630717  dec1                 faddp st(1)
// 00630719  d986a4000000         fld dword ptr [esi + 0xa4]
// 0063071f  d84f28               fmul dword ptr [edi + 0x28]
// 00630722  dec1                 faddp st(1)
// 00630724  d886bc000000         fadd dword ptr [esi + 0xbc]
// 0063072a  d95c2418             fstp dword ptr [esp + 0x18]
// 0063072e  d986ac000000         fld dword ptr [esi + 0xac]
// 00630734  d84f24               fmul dword ptr [edi + 0x24]
// 00630737  d986b4000000         fld dword ptr [esi + 0xb4]
// 0063073d  d84f2c               fmul dword ptr [edi + 0x2c]
// 00630740  dec1                 faddp st(1)
// 00630742  d986b0000000         fld dword ptr [esi + 0xb0]
// 00630748  d84f28               fmul dword ptr [edi + 0x28]
// 0063074b  5f                   pop edi
// 0063074c  dec1                 faddp st(1)
// 0063074e  d886c0000000         fadd dword ptr [esi + 0xc0]
// 00630754  5e                   pop esi
// 00630755  5b                   pop ebx
// 00630756  d95c2410             fstp dword ptr [esp + 0x10]
// 0063075a  85c9                 test ecx, ecx
// 0063075c  740f                 je 0x63076d
// 0063075e  8d542408             lea edx, [esp + 8]
// 00630762  52                   push edx
// 00630763  8d442418             lea eax, [esp + 0x18]
// 00630767  50                   push eax
// 00630768  e84328feff           call 0x612fb0
// 0063076d  83c420               add esp, 0x20
// 00630770  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Vector3
{
    float x, y, z;
};

struct RefCount
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct ForceTarget
{
    void apply(const Vector3& force, const Vector3& position);
};

struct Owner
{
    char padding[0x2c];
    ForceTarget* target;
};

struct Body
{
    char padding0[0x10];
    Owner* owner;
    char padding1[0x80];
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    Vector3 translation;

    void update();
};

struct Part
{
    char padding[0x2c8];
    Body* body;
};

struct SharedPart
{
    Part* object;
    RefCount* count;
};

struct Handle
{
    char storage[8];
    SharedPart* get(SharedPart* result);
};

struct S
{
    char padding[0x10];
    Handle handle;
    Vector3 force;
    Vector3 position;

    void f(float, float);
};

void S::f(float, float)
{
    SharedPart result;
    SharedPart* acquired = handle.get(&result);
    RefCount* count = result.count;
    Body* body = acquired->object->body;

    if (count)
    {
        if (_InterlockedDecrement(&count->strong) == 0)
        {
            count->dispose();
            if (_InterlockedDecrement(&count->weak) == 0)
                count->destroy();
        }
    }

    body->update();

    Vector3 worldForce;
    worldForce.x = body->r02 * force.z + body->r01 * force.y
                 + body->r00 * force.x;
    worldForce.y = body->r11 * force.y + force.z * body->r12
                 + force.x * body->r10;
    worldForce.z = body->r22 * force.z + body->r21 * force.y
                 + body->r20 * force.x;

    body->update();

    ForceTarget* target = body->owner->target;
    Vector3 worldPosition;
    worldPosition.x = body->r02 * position.z + body->r01 * position.y
                    + body->r00 * position.x + body->translation.x;
    worldPosition.y = position.x * body->r10 + position.z * body->r12
                    + body->r11 * position.y + body->translation.y;
    worldPosition.z = body->r20 * position.x + body->r22 * position.z
                    + body->r21 * position.y + body->translation.z;

    if (target)
        target->apply(worldForce, worldPosition);
}
