// from server: 100% by king_originala
// roc 2008-06 005d4b60  unit: RBX::BodyColors  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4b60
//
// 005d4b60  57                   push edi
// 005d4b61  8bf9                 mov edi, ecx
// 005d4b63  8b8704010000         mov eax, dword ptr [edi + 0x104]
// 005d4b69  85c0                 test eax, eax
// 005d4b6b  742a                 je 0x5d4b97
// 005d4b6d  6a00                 push 0
// 005d4b6f  68402a9300           push 0x932a40
// 005d4b74  687c909200           push 0x92907c
// 005d4b79  6a00                 push 0
// 005d4b7b  50                   push eax
// 005d4b7c  e845cc0c00           call 0x6a17c6
// 005d4b81  83c414               add esp, 0x14
// 005d4b84  85c0                 test eax, eax
// 005d4b86  740f                 je 0x5d4b97
// 005d4b88  8bc8                 mov ecx, eax
// 005d4b8a  e8d1f8ffff           call 0x5d4460
// 005d4b8f  85c0                 test eax, eax
// 005d4b91  0f85a0000000         jne 0x5d4c37
// 005d4b97  56                   push esi
// 005d4b98  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d4b9c  8bce                 mov ecx, esi
// 005d4b9e  e86d3e0000           call 0x5d8a10
// 005d4ba3  85c0                 test eax, eax
// 005d4ba5  740e                 je 0x5d4bb5
// 005d4ba7  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 005d4bad  51                   push ecx
// 005d4bae  8bc8                 mov ecx, eax
// 005d4bb0  e88b93fcff           call 0x59df40
// 005d4bb5  8bce                 mov ecx, esi
// 005d4bb7  e854400000           call 0x5d8c10
// 005d4bbc  85c0                 test eax, eax
// 005d4bbe  740e                 je 0x5d4bce
// 005d4bc0  8b9744010000         mov edx, dword ptr [edi + 0x144]
// 005d4bc6  52                   push edx
// 005d4bc7  8bc8                 mov ecx, eax
// 005d4bc9  e87293fcff           call 0x59df40
// 005d4bce  8bce                 mov ecx, esi
// 005d4bd0  e83b410000           call 0x5d8d10
// 005d4bd5  85c0                 test eax, eax
// 005d4bd7  740e                 je 0x5d4be7
// 005d4bd9  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 005d4bdf  51                   push ecx
// 005d4be0  8bc8                 mov ecx, eax
// 005d4be2  e85993fcff           call 0x59df40
// 005d4be7  8bce                 mov ecx, esi
// 005d4be9  e8223f0000           call 0x5d8b10
// 005d4bee  85c0                 test eax, eax
// 005d4bf0  740e                 je 0x5d4c00
// 005d4bf2  8b9740010000         mov edx, dword ptr [edi + 0x140]
// 005d4bf8  52                   push edx
// 005d4bf9  8bc8                 mov ecx, eax
// 005d4bfb  e84093fcff           call 0x59df40
// 005d4c00  8bce                 mov ecx, esi
// 005d4c02  e809420000           call 0x5d8e10
// 005d4c07  85c0                 test eax, eax
// 005d4c09  740e                 je 0x5d4c19
// 005d4c0b  8b8f38010000         mov ecx, dword ptr [edi + 0x138]
// 005d4c11  51                   push ecx
// 005d4c12  8bc8                 mov ecx, eax
// 005d4c14  e82793fcff           call 0x59df40
// 005d4c19  8bce                 mov ecx, esi
// 005d4c1b  e8f0420000           call 0x5d8f10
// 005d4c20  5e                   pop esi
// 005d4c21  85c0                 test eax, eax
// 005d4c23  7412                 je 0x5d4c37
// 005d4c25  8b973c010000         mov edx, dword ptr [edi + 0x13c]
// 005d4c2b  5f                   pop edi
// 005d4c2c  89542404             mov dword ptr [esp + 4], edx
// 005d4c30  8bc8                 mov ecx, eax
// 005d4c32  e90993fcff           jmp 0x59df40
// 005d4c37  5f                   pop edi
// 005d4c38  c20400               ret 4

extern "C" void* __cdecl _RTDynamicCast(void*, long, void*, void*, int);
extern "C" char instance_type;
extern "C" char model_type;

struct Settings {
    unsigned char padding[0x1e4];
    int value;
    void notify(void*);
    void setValue(int);
};

struct Model {
    int hasBodyColors();
    Settings* getHead();
    Settings* getTorso();
    Settings* getLeftArm();
    Settings* getRightArm();
    Settings* getLeftLeg();
    Settings* getRightLeg();
};

struct BodyColors {
    unsigned char padding[0x104];
    void* parent;
    unsigned char padding2[0x2c];
    int headColor;
    int leftLegColor;
    int rightLegColor;
    int torsoColor;
    int leftArmColor;
    int rightArmColor;

    void apply(Model*);
};

void BodyColors::apply(Model* model)
{
    if (parent) {
        Model* owner = static_cast<Model*>(
            _RTDynamicCast(parent, 0, &instance_type, &model_type, 0));
        if (owner && owner->hasBodyColors())
            return;
    }

    Settings* part = model->getHead();
    if (part)
        part->setValue(headColor);

    part = model->getLeftArm();
    if (part)
        part->setValue(leftArmColor);

    part = model->getRightArm();
    if (part)
        part->setValue(rightArmColor);

    part = model->getTorso();
    if (part)
        part->setValue(torsoColor);

    part = model->getLeftLeg();
    if (part)
        part->setValue(leftLegColor);

    part = model->getRightLeg();
    if (part)
        part->setValue(rightLegColor);
}
