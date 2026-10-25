// from server: 100% by user
// roc 2008-06 007aa770  unit: RBX::RenderNew::RenderScene  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007aa770
//
// 007aa770  64a100000000         mov eax, dword ptr fs:[0]
// 007aa776  6aff                 push -1
// 007aa778  6818b57c00           push 0x7cb518
// 007aa77d  50                   push eax
// 007aa77e  64892500000000       mov dword ptr fs:[0], esp
// 007aa785  d9ee                 fldz 
// 007aa787  d9442410             fld dword ptr [esp + 0x10]
// 007aa78b  56                   push esi
// 007aa78c  d8d1                 fcom st(1)
// 007aa78e  8bf1                 mov esi, ecx
// 007aa790  dfe0                 fnstsw ax
// 007aa792  f6c441               test ah, 0x41
// 007aa795  7b15                 jnp 0x7aa7ac
// 007aa797  ddd9                 fstp st(1)
// 007aa799  d905a4638100         fld dword ptr [0x8163a4]
// 007aa79f  d8d1                 fcom st(1)
// 007aa7a1  dfe0                 fnstsw ax
// 007aa7a3  f6c441               test ah, 0x41
// 007aa7a6  7a04                 jp 0x7aa7ac
// 007aa7a8  ddd9                 fstp st(1)
// 007aa7aa  eb02                 jmp 0x7aa7ae
// 007aa7ac  ddd8                 fstp st(0)
// 007aa7ae  d94624               fld dword ptr [esi + 0x24]
// 007aa7b1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007aa7b5  dde9                 fucomp st(1)
// 007aa7b7  dfe0                 fnstsw ax
// 007aa7b9  d9442420             fld dword ptr [esp + 0x20]
// 007aa7bd  d9442418             fld dword ptr [esp + 0x18]
// 007aa7c1  f6c444               test ah, 0x44
// 007aa7c4  7a27                 jp 0x7aa7ed
// 007aa7c6  d94628               fld dword ptr [esi + 0x28]
// 007aa7c9  dde9                 fucomp st(1)
// 007aa7cb  dfe0                 fnstsw ax
// 007aa7cd  f6c444               test ah, 0x44
// 007aa7d0  7a1b                 jp 0x7aa7ed
// 007aa7d2  3a8e10030000         cmp cl, byte ptr [esi + 0x310]
// 007aa7d8  7513                 jne 0x7aa7ed
// 007aa7da  d98614030000         fld dword ptr [esi + 0x314]
// 007aa7e0  ddea                 fucomp st(2)
// 007aa7e2  dfe0                 fnstsw ax
// 007aa7e4  f6c444               test ah, 0x44
// 007aa7e7  0f8bab000000         jnp 0x7aa898
// 007aa7ed  8d8698040000         lea eax, [esi + 0x498]
// 007aa7f3  d9ca                 fxch st(2)
// 007aa7f5  50                   push eax
// 007aa7f6  d95624               fst dword ptr [esi + 0x24]
// 007aa7f9  8d96a0030000         lea edx, [esi + 0x3a0]
// 007aa7ff  d9ca                 fxch st(2)
// 007aa801  52                   push edx
// 007aa802  d95628               fst dword ptr [esi + 0x28]
// 007aa805  8d8608030000         lea eax, [esi + 0x308]
// 007aa80b  d9c9                 fxch st(1)
// 007aa80d  50                   push eax
// 007aa80e  d99614030000         fst dword ptr [esi + 0x314]
// 007aa814  51                   push ecx
// 007aa815  d91c24               fstp dword ptr [esp]
// 007aa818  51                   push ecx
// 007aa819  83ec08               sub esp, 8
// 007aa81c  d95c2404             fstp dword ptr [esp + 4]
// 007aa820  888e10030000         mov byte ptr [esi + 0x310], cl
// 007aa826  8d4c2430             lea ecx, [esp + 0x30]
// 007aa82a  d91c24               fstp dword ptr [esp]
// 007aa82d  51                   push ecx
// 007aa82e  8d8ef4020000         lea ecx, [esi + 0x2f4]
// 007aa834  e8a7540000           call 0x7afce0
// 007aa839  8b10                 mov edx, dword ptr [eax]
// 007aa83b  8d8e0c030000         lea ecx, [esi + 0x30c]
// 007aa841  52                   push edx
// 007aa842  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007aa84a  e851e7deff           call 0x598fa0
// 007aa84f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007aa853  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 007aa85b  85c0                 test eax, eax
// 007aa85d  743f                 je 0x7aa89e
// 007aa85f  83c004               add eax, 4
// 007aa862  50                   push eax
// 007aa863  ff15ac218000         call dword ptr [0x8021ac]
// 007aa869  85c0                 test eax, eax
// 007aa86b  7531                 jne 0x7aa89e
// 007aa86d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aa871  e81a05cbff           call 0x45ad90
// 007aa876  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aa87a  85c9                 test ecx, ecx
// 007aa87c  7420                 je 0x7aa89e
// 007aa87e  8b01                 mov eax, dword ptr [ecx]
// 007aa880  8b10                 mov edx, dword ptr [eax]
// 007aa882  6a01                 push 1
// 007aa884  ffd2                 call edx
// 007aa886  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007aa88a  64890d00000000       mov dword ptr fs:[0], ecx
// 007aa891  5e                   pop esi
// 007aa892  83c40c               add esp, 0xc
// 007aa895  c21000               ret 0x10
// 007aa898  ddda                 fstp st(2)
// 007aa89a  ddd8                 fstp st(0)
// 007aa89c  ddd8                 fstp st(0)
// 007aa89e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007aa8a2  64890d00000000       mov dword ptr fs:[0], ecx
// 007aa8a9  5e                   pop esi
// 007aa8aa  83c40c               add esp, 0xc
// 007aa8ad  c21000               ret 0x10

// from server: 99% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);
extern const float upperLimit;

struct Control
{
    virtual ~Control();
    volatile long references;
    void dispose();
};

template <class T>
struct ReferenceCountedPointer
{
    T *m_pointer;

    ~ReferenceCountedPointer()
    {
        if (m_pointer && InterlockedDecrement(&m_pointer->references) == 0)
        {
            m_pointer->dispose();
            if (m_pointer)
                delete m_pointer;
        }
    }

    void setPointer(T *);

    const ReferenceCountedPointer<T>& operator=(const ReferenceCountedPointer<T>& p)
    {
        setPointer(p.m_pointer);
        return *this;
    }
};

struct EffectSettings
{
    ReferenceCountedPointer<Control> update(float, float, bool, float, void *, void *, void *);
};

struct RenderScene
{
    char padding0[0x24];
    float first;
    float second;
    char padding1[0x2f4 - 0x2c];
    EffectSettings effectSettings;
    char padding2[0x308 - 0x2f5];
    unsigned long desiredLighting;
    ReferenceCountedPointer<Control> lighting;
    bool shadows;
    char padding3[3];
    float cameraDistance;
    char padding4[0x3a0 - 0x318];
    char desiredSkyParameters[0xf8];
    char skyParameters;

    void setThrottle(float, float, bool, float);
};

void RenderScene::setThrottle(float t, float m, bool s, float c)
{
    float value = t <= 0.0f ? 0.0f : t >= upperLimit ? upperLimit : t;

    if (value != first || m != second || s != shadows || c != cameraDistance)
    {
        first = value;
        second = m;
        cameraDistance = c;
        shadows = s;
        lighting = effectSettings.update(value, m, s, c,
                                         &desiredLighting, desiredSkyParameters, &skyParameters);
    }
}
