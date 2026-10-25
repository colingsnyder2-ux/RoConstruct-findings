// from server: 100% by user
// roc 2008-06 007aa8b0  unit: RBX::RenderNew::RenderScene  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007aa8b0
//
// 007aa8b0  64a100000000         mov eax, dword ptr fs:[0]
// 007aa8b6  6aff                 push -1
// 007aa8b8  6818b57c00           push 0x7cb518
// 007aa8bd  50                   push eax
// 007aa8be  64892500000000       mov dword ptr fs:[0], esp
// 007aa8c5  8b442410             mov eax, dword ptr [esp + 0x10]
// 007aa8c9  56                   push esi
// 007aa8ca  8bf1                 mov esi, ecx
// 007aa8cc  8b08                 mov ecx, dword ptr [eax]
// 007aa8ce  57                   push edi
// 007aa8cf  8dbe08030000         lea edi, [esi + 0x308]
// 007aa8d5  51                   push ecx
// 007aa8d6  8bcf                 mov ecx, edi
// 007aa8d8  e8c3e6deff           call 0x598fa0
// 007aa8dd  d98614030000         fld dword ptr [esi + 0x314]
// 007aa8e3  8d9698040000         lea edx, [esi + 0x498]
// 007aa8e9  52                   push edx
// 007aa8ea  8d86a0030000         lea eax, [esi + 0x3a0]
// 007aa8f0  50                   push eax
// 007aa8f1  57                   push edi
// 007aa8f2  51                   push ecx
// 007aa8f3  0fb68e10030000       movzx ecx, byte ptr [esi + 0x310]
// 007aa8fa  d91c24               fstp dword ptr [esp]
// 007aa8fd  d94628               fld dword ptr [esi + 0x28]
// 007aa900  51                   push ecx
// 007aa901  83ec08               sub esp, 8
// 007aa904  8d542434             lea edx, [esp + 0x34]
// 007aa908  8d8ef4020000         lea ecx, [esi + 0x2f4]
// 007aa90e  d95c2404             fstp dword ptr [esp + 4]
// 007aa912  d94624               fld dword ptr [esi + 0x24]
// 007aa915  d91c24               fstp dword ptr [esp]
// 007aa918  52                   push edx
// 007aa919  e8c2530000           call 0x7afce0
// 007aa91e  8b00                 mov eax, dword ptr [eax]
// 007aa920  8d8e0c030000         lea ecx, [esi + 0x30c]
// 007aa926  50                   push eax
// 007aa927  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007aa92f  e86ce6deff           call 0x598fa0
// 007aa934  8b442418             mov eax, dword ptr [esp + 0x18]
// 007aa938  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007aa940  85c0                 test eax, eax
// 007aa942  7427                 je 0x7aa96b
// 007aa944  83c004               add eax, 4
// 007aa947  50                   push eax
// 007aa948  ff15ac218000         call dword ptr [0x8021ac]
// 007aa94e  85c0                 test eax, eax
// 007aa950  7519                 jne 0x7aa96b
// 007aa952  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007aa956  e83504cbff           call 0x45ad90
// 007aa95b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007aa95f  85c9                 test ecx, ecx
// 007aa961  7408                 je 0x7aa96b
// 007aa963  8b11                 mov edx, dword ptr [ecx]
// 007aa965  8b02                 mov eax, dword ptr [edx]
// 007aa967  6a01                 push 1
// 007aa969  ffd0                 call eax
// 007aa96b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007aa96f  5f                   pop edi
// 007aa970  64890d00000000       mov dword ptr fs:[0], ecx
// 007aa977  5e                   pop esi
// 007aa978  83c40c               add esp, 0xc
// 007aa97b  c20400               ret 4

// from server: 99% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

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
    float shadingQuality;
    float meshDetail;
    char padding1[0x2f4 - 0x2c];
    EffectSettings effectSettings;
    char padding2[0x308 - 0x2f5];
    ReferenceCountedPointer<Control> desiredLighting;
    ReferenceCountedPointer<Control> lighting;
    bool shadows;
    char padding3[3];
    float cameraDistance;
    char padding4[0x3a0 - 0x318];
    char desiredSkyParameters[0xf8];
    char skyParameters;

    void setLighting(const ReferenceCountedPointer<Control>&);
};

void RenderScene::setLighting(const ReferenceCountedPointer<Control>& L)
{
    desiredLighting = L;
    lighting = effectSettings.update(shadingQuality, meshDetail, shadows, cameraDistance,
                                     &desiredLighting, desiredSkyParameters, &skyParameters);
}
