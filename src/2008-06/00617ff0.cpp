// from server: 97% by colin
// from server: 91% by king_originala
// roc 2008-06 00617ff0  unit: RBX::NewNullTool  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617ff0
//
// 00617ff0  83ec0c               sub esp, 0xc
// 00617ff3  d9ee                 fldz 
// 00617ff5  53                   push ebx
// 00617ff6  57                   push edi
// 00617ff7  d9542408             fst dword ptr [esp + 8]
// 00617ffb  8bf9                 mov edi, ecx
// 00617ffd  d954240c             fst dword ptr [esp + 0xc]
// 00618001  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00618005  d95c2410             fstp dword ptr [esp + 0x10]
// 00618009  8d442408             lea eax, [esp + 8]
// 0061800d  50                   push eax
// 0061800e  51                   push ecx
// 0061800f  8bcf                 mov ecx, edi
// 00618011  e87adfffff           call 0x615f90
// 00618016  6a01                 push 1
// 00618018  8d54240c             lea edx, [esp + 0xc]
// 0061801c  52                   push edx
// 0061801d  8bcf                 mov ecx, edi
// 0061801f  8bd8                 mov ebx, eax
// 00618021  e80ad8ffff           call 0x615830
// 00618026  51                   push ecx
// 00618027  d91c24               fstp dword ptr [esp]
// 0061802a  53                   push ebx
// 0061802b  e8f01a0100           call 0x629b20
// 00618030  83c40c               add esp, 0xc
// 00618033  84c0                 test al, al
// 00618035  7559                 jne 0x618090
// 00618037  85db                 test ebx, ebx
// 00618039  7455                 je 0x618090
// 0061803b  8d442408             lea eax, [esp + 8]
// 0061803f  50                   push eax
// 00618040  8bcf                 mov ecx, edi
// 00618042  e839d8ffff           call 0x615880
// 00618047  84c0                 test al, al
// 00618049  7445                 je 0x618090
// 0061804b  8bcf                 mov ecx, edi
// 0061804d  e82efeffff           call 0x617e80
// 00618052  84c0                 test al, al
// 00618054  753a                 jne 0x618090
// 00618056  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00618059  56                   push esi
// 0061805a  51                   push ecx
// 0061805b  e8402ce8ff           call 0x49aca0
// 00618060  8bf0                 mov esi, eax
// 00618062  83c404               add esp, 4
// 00618065  85f6                 test esi, esi
// 00618067  7426                 je 0x61808f
// 00618069  53                   push ebx
// 0061806a  8bce                 mov ecx, esi
// 0061806c  e83ff4f3ff           call 0x5574b0
// 00618071  84c0                 test al, al
// 00618073  751a                 jne 0x61808f
// 00618075  56                   push esi
// 00618076  e8a519fcff           call 0x5d9a20
// 0061807b  83c404               add esp, 4
// 0061807e  85c0                 test eax, eax
// 00618080  740d                 je 0x61808f
// 00618082  53                   push ebx
// 00618083  8d542410             lea edx, [esp + 0x10]
// 00618087  52                   push edx
// 00618088  8bc8                 mov ecx, eax
// 0061808a  e84143fcff           call 0x5dc3d0
// 0061808f  5e                   pop esi
// 00618090  8bc7                 mov eax, edi
// 00618092  5f                   pop edi
// 00618093  5b                   pop ebx
// 00618094  83c40c               add esp, 0xc
// 00618097  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct Instance {
    bool contains(Instance* other);
};

struct Service {
    void apply(const Vector3& position, Instance* target);
};

extern "C" Instance* __cdecl findInstance(void* context);
extern "C" Service* __cdecl findService(Instance* instance);
extern "C" bool __cdecl testTarget(Instance* target, float distance, bool enabled);

struct Tool {
    char padding[24];
    void* context;

    Instance* pick(void* input, Vector3& position);
    float distance(const Vector3& position);
    bool checkPosition(const Vector3& position);
    bool blocked();
    Tool* update(void* input);
};

Tool* Tool::update(void* input)
{
    Vector3 position = { 0.0f, 0.0f, 0.0f };
    Instance* target = pick(input, position);

    if (testTarget(target, distance(position), true))
        return this;
    if (!target)
        return this;
    if (!checkPosition(position))
        return this;
    if (blocked())
        return this;

    void* contextCopy = context;
    Instance* instance = findInstance(contextCopy);
    if (instance && !instance->contains(target))
    {
        Service* service = findService(instance);
        if (service)
            service->apply(position, target);
    }

    return this;
}
