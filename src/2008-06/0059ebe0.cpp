// from server: 100% by king_originala
// roc 2008-06 0059ebe0  unit: RBX::PartInstance  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ebe0
//
// 0059ebe0  83ec18               sub esp, 0x18
// 0059ebe3  56                   push esi
// 0059ebe4  57                   push edi
// 0059ebe5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059ebe9  8bf1                 mov esi, ecx
// 0059ebeb  39bedc010000         cmp dword ptr [esi + 0x1dc], edi
// 0059ebf1  0f848c000000         je 0x59ec83
// 0059ebf7  56                   push esi
// 0059ebf8  e893470000           call 0x5a3390
// 0059ebfd  83c404               add esp, 4
// 0059ec00  85c0                 test eax, eax
// 0059ec02  740e                 je 0x59ec12
// 0059ec04  8d8e28020000         lea ecx, [esi + 0x228]
// 0059ec0a  51                   push ecx
// 0059ec0b  8bc8                 mov ecx, eax
// 0059ec0d  e8aeb80400           call 0x5ea4c0
// 0059ec12  57                   push edi
// 0059ec13  8bce                 mov ecx, esi
// 0059ec15  e836ffffff           call 0x59eb50
// 0059ec1a  83ff01               cmp edi, 1
// 0059ec1d  7442                 je 0x59ec61
// 0059ec1f  8b86c4020000         mov eax, dword ptr [esi + 0x2c4]
// 0059ec25  d94004               fld dword ptr [eax + 4]
// 0059ec28  83c004               add eax, 4
// 0059ec2b  d95c2408             fstp dword ptr [esp + 8]
// 0059ec2f  8d542408             lea edx, [esp + 8]
// 0059ec33  d94004               fld dword ptr [eax + 4]
// 0059ec36  52                   push edx
// 0059ec37  d95c2410             fstp dword ptr [esp + 0x10]
// 0059ec3b  8bce                 mov ecx, esi
// 0059ec3d  d94008               fld dword ptr [eax + 8]
// 0059ec40  8d442418             lea eax, [esp + 0x18]
// 0059ec44  50                   push eax
// 0059ec45  d95c2418             fstp dword ptr [esp + 0x18]
// 0059ec49  e862b2ffff           call 0x599eb0
// 0059ec4e  8d4c2414             lea ecx, [esp + 0x14]
// 0059ec52  51                   push ecx
// 0059ec53  8bce                 mov ecx, esi
// 0059ec55  e836efffff           call 0x59db90
// 0059ec5a  8bce                 mov ecx, esi
// 0059ec5c  e88fc8ffff           call 0x59b4f0
// 0059ec61  8bce                 mov ecx, esi
// 0059ec63  e888c8ffff           call 0x59b4f0
// 0059ec68  56                   push esi
// 0059ec69  e822470000           call 0x5a3390
// 0059ec6e  83c404               add esp, 4
// 0059ec71  85c0                 test eax, eax
// 0059ec73  740e                 je 0x59ec83
// 0059ec75  81c628020000         add esi, 0x228
// 0059ec7b  56                   push esi
// 0059ec7c  8bc8                 mov ecx, eax
// 0059ec7e  e84db90400           call 0x5ea5d0
// 0059ec83  5f                   pop edi
// 0059ec84  5e                   pop esi
// 0059ec85  83c418               add esp, 0x18
// 0059ec88  c20400               ret 4

struct Vector3 {
    float x, y, z;

    Vector3();
    Vector3(const Vector3& other);
};

inline Vector3::Vector3() {}

inline Vector3::Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z) {}

struct ShapeData {
    char padding[4];
    Vector3 size;
};

struct ChangeTracker {
    void beginChange(void* state);
    void endChange(void* state);
};

struct PartInstance {
    char padding0[0x1dc];
    int mode;
    char padding1[0x48];
    char state[0x9c];
    ShapeData* shape;

    void setMode(int value);
    Vector3 adjustSize(const Vector3& size);
    void applySize(const Vector3& size);
    void refresh();
    void changeMode(int value);
};

extern ChangeTracker* __cdecl findTracker(PartInstance* part);

void PartInstance::changeMode(int value) {
    if (mode == value)
        return;

    ChangeTracker* tracker = findTracker(this);
    if (tracker)
        tracker->beginChange(state);

    setMode(value);

    if (value != 1) {
        Vector3 size(shape->size);
        Vector3 adjusted = adjustSize(size);
        applySize(adjusted);
        refresh();
    }

    refresh();

    tracker = findTracker(this);
    if (tracker)
        tracker->endChange(state);
}
