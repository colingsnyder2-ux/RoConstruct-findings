// from server: 82% by EspClaude
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 74% by colin
// roc 2008-06 005b1fc0  unit: RBX::VHat::?$FactoryProduct  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1fc0
//
// 005b1fc0  83ec4c               sub esp, 0x4c
// 005b1fc3  53                   push ebx
// 005b1fc4  56                   push esi
// 005b1fc5  57                   push edi
// 005b1fc6  8bf9                 mov edi, ecx
// 005b1fc8  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 005b1fce  8d9f34010000         lea ebx, [edi + 0x134]
// 005b1fd4  33f6                 xor esi, esi
// 005b1fd6  85c9                 test ecx, ecx
// 005b1fd8  7436                 je 0x5b2010
// 005b1fda  e8310a0300           call 0x5e2a10
// 005b1fdf  85c0                 test eax, eax
// 005b1fe1  741d                 je 0x5b2000
// 005b1fe3  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 005b1fe9  56                   push esi
// 005b1fea  68402a9300           push 0x932a40
// 005b1fef  687c909200           push 0x92907c
// 005b1ff4  56                   push esi
// 005b1ff5  50                   push eax
// 005b1ff6  e8cbf70e00           call 0x6a17c6
// 005b1ffb  83c414               add esp, 0x14
// 005b1ffe  8bf0                 mov esi, eax
// 005b2000  8b0b                 mov ecx, dword ptr [ebx]
// 005b2002  6a00                 push 0
// 005b2004  e8e788faff           call 0x55a8f0
// 005b2009  8bcb                 mov ecx, ebx
// 005b200b  e8704eeaff           call 0x456e80
// 005b2010  56                   push esi
// 005b2011  e80a7a0200           call 0x5d9a20
// 005b2016  83c404               add esp, 4
// 005b2019  85c0                 test eax, eax
// 005b201b  0f84e6000000         je 0x5b2107
// 005b2021  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005b2027  8b4808               mov ecx, dword ptr [eax + 8]
// 005b202a  8b943134010000       mov edx, dword ptr [ecx + esi + 0x134]
// 005b2031  8b12                 mov edx, dword ptr [edx]
// 005b2033  8d8c3134010000       lea ecx, [ecx + esi + 0x134]
// 005b203a  8d442428             lea eax, [esp + 0x28]
// 005b203e  50                   push eax
// 005b203f  ffd2                 call edx
// 005b2041  d944244c             fld dword ptr [esp + 0x4c]
// 005b2045  d95c2410             fstp dword ptr [esp + 0x10]
// 005b2049  6a02                 push 2
// 005b204b  d9442458             fld dword ptr [esp + 0x58]
// 005b204f  8d442420             lea eax, [esp + 0x20]
// 005b2053  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b2057  50                   push eax
// 005b2058  d9442458             fld dword ptr [esp + 0x58]
// 005b205c  8d4c2430             lea ecx, [esp + 0x30]
// 005b2060  d8056c6e8200         fadd dword ptr [0x826e6c]
// 005b2066  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b206a  d905608b8200         fld dword ptr [0x828b60]
// 005b2070  d95c2414             fstp dword ptr [esp + 0x14]
// 005b2074  e8c711f6ff           call 0x513240
// 005b2079  d900                 fld dword ptr [eax]
// 005b207b  8bcf                 mov ecx, edi
// 005b207d  d944240c             fld dword ptr [esp + 0xc]
// 005b2081  dcc9                 fmul st(1), st(0)
// 005b2083  d94004               fld dword ptr [eax + 4]
// 005b2086  d8c9                 fmul st(1)
// 005b2088  d94008               fld dword ptr [eax + 8]
// 005b208b  deca                 fmulp st(2)
// 005b208d  d90540ca8200         fld dword ptr [0x82ca40]
// 005b2093  dccb                 fmul st(3), st(0)
// 005b2095  dcc9                 fmul st(1), st(0)
// 005b2097  deca                 fmulp st(2)
// 005b2099  d9ca                 fxch st(2)
// 005b209b  d8442410             fadd dword ptr [esp + 0x10]
// 005b209f  d95c2410             fstp dword ptr [esp + 0x10]
// 005b20a3  d9c9                 fxch st(1)
// 005b20a5  d8442414             fadd dword ptr [esp + 0x14]
// 005b20a9  d95c2414             fstp dword ptr [esp + 0x14]
// 005b20ad  d8442418             fadd dword ptr [esp + 0x18]
// 005b20b1  d95c2418             fstp dword ptr [esp + 0x18]
// 005b20b5  e8e6e7ffff           call 0x5b08a0
// 005b20ba  8bf0                 mov esi, eax
// 005b20bc  85f6                 test esi, esi
// 005b20be  7447                 je 0x5b2107
// 005b20c0  6a01                 push 1
// 005b20c2  8bce                 mov ecx, esi
// 005b20c4  e8b7bcfeff           call 0x59dd80
// 005b20c9  d9442410             fld dword ptr [esp + 0x10]
// 005b20cd  83ec0c               sub esp, 0xc
// 005b20d0  8bc4                 mov eax, esp
// 005b20d2  d918                 fstp dword ptr [eax]
// 005b20d4  8bce                 mov ecx, esi
// 005b20d6  d9442420             fld dword ptr [esp + 0x20]
// 005b20da  89642418             mov dword ptr [esp + 0x18], esp
// 005b20de  d95804               fstp dword ptr [eax + 4]
// 005b20e1  d9442424             fld dword ptr [esp + 0x24]
// 005b20e5  d95808               fstp dword ptr [eax + 8]
// 005b20e8  e873680500           call 0x608960
// 005b20ed  d9e8                 fld1 
// 005b20ef  8d4c2410             lea ecx, [esp + 0x10]
// 005b20f3  d9542410             fst dword ptr [esp + 0x10]
// 005b20f7  51                   push ecx
// 005b20f8  d9542418             fst dword ptr [esp + 0x18]
// 005b20fc  8bce                 mov ecx, esi
// 005b20fe  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b2102  e8c9b9feff           call 0x59dad0
// 005b2107  8b9750010000         mov edx, dword ptr [edi + 0x150]
// 005b210d  d905ec4d8300         fld dword ptr [0x834dec]
// 005b2113  8b4208               mov eax, dword ptr [edx + 8]
// 005b2116  8b943850010000       mov edx, dword ptr [eax + edi + 0x150]
// 005b211d  8d8c3850010000       lea ecx, [eax + edi + 0x150]
// 005b2124  8b4204               mov eax, dword ptr [edx + 4]
// 005b2127  51                   push ecx
// 005b2128  d91c24               fstp dword ptr [esp]
// 005b212b  ffd0                 call eax
// 005b212d  8bcf                 mov ecx, edi
// 005b212f  5f                   pop edi
// 005b2130  5e                   pop esi
// 005b2131  5b                   pop ebx
// 005b2132  83c44c               add esp, 0x4c
// 005b2135  e936fcffff           jmp 0x5b1d70

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
    Vec3 operator*(float s) const { return Vec3(x * s, y * s, z * s); }
    Vec3 operator+(const Vec3& v) const { return Vec3(x + v.x, y + v.y, z + v.z); }
    Vec3& operator+=(const Vec3& v) { x += v.x; y += v.y; z += v.z; return *this; }
};

struct Frame {
    float rotation[9];
    Vec3 position;
    Vec3 column(int index) const;
};

struct FrameInterface {
    virtual Frame getFrame();
};

struct FloatInterface {
    virtual void unused();
    virtual void setValue(float value);
};

struct Parent {
    char padding[0x104];
    void* instance;
};

struct Link {
    Parent* get();
    void setParent(void* parent);
};

struct LinkHolder {
    Link* pointer;
    void* control;
    void reset();
};

struct Model {
    char padding[0x134];
    int* baseOffsets;
};

struct Part {
    void setValue(int value);
    void setPosition(Vec3 position);
    void setSize(const Vec3& size);
};

extern "C" void* __cdecl castObject(
    void* object, int displacement, const void* sourceType,
    const void* targetType, int reference);

extern "C" int __cdecl usable(Model* model);

extern const char instanceType;
extern const char modelType;
extern const float verticalOffset;
extern const float horizontalOffset;
extern const float distanceMultiplier;
extern const float finalValue;

struct S {
    char padding[0x134];
    LinkHolder link;
    char gap[0x14];
    int* valueBaseOffsets;

    Part* getPart();
    void finish();
    void update();
};

void S::update()
{
    Model* model = 0;

    if (link.pointer) {
        Parent* parent = link.pointer->get();
        if (parent)
            model = static_cast<Model*>(
                castObject(parent->instance, 0,
                           &instanceType, &modelType, 0));

        link.pointer->setParent(0);
        link.reset();
    }

    if (usable(model)) {
        FrameInterface* frameInterface =
            reinterpret_cast<FrameInterface*>(
                reinterpret_cast<char*>(model) + 0x134 +
                model->baseOffsets[2]);

        Frame frame = frameInterface->getFrame();
        Vec3 position = frame.position + Vec3(0.0f, verticalOffset, 0.0f);
        float distance = horizontalOffset;

        position += frame.column(2) * distance * distanceMultiplier;

        Part* part = getPart();
        if (part) {
            part->setValue(1);
            part->setPosition(position);
            position.x = 1.0f;
            position.y = 1.0f;
            position.z = 1.0f;
            part->setSize(position);
        }
    }

    FloatInterface* valueInterface =
        reinterpret_cast<FloatInterface*>(
            reinterpret_cast<char*>(this) + 0x150 +
            valueBaseOffsets[2]);
    valueInterface->setValue(finalValue);
    finish();
}
