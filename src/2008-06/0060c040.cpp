// from server: 100% by king_originala
// roc 2008-06 0060c040  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c040
//
// 0060c040  6aff                 push -1
// 0060c042  68a30f7c00           push 0x7c0fa3
// 0060c047  64a100000000         mov eax, dword ptr fs:[0]
// 0060c04d  50                   push eax
// 0060c04e  64892500000000       mov dword ptr fs:[0], esp
// 0060c055  51                   push ecx
// 0060c056  56                   push esi
// 0060c057  57                   push edi
// 0060c058  8bf1                 mov esi, ecx
// 0060c05a  68a4bd9700           push 0x97bda4
// 0060c05f  68d0b76000           push 0x60b7d0
// 0060c064  89742410             mov dword ptr [esp + 0x10], esi
// 0060c068  e8c3b2f4ff           call 0x557330
// 0060c06d  83c408               add esp, 8
// 0060c070  e8fbf6ffff           call 0x60b770
// 0060c075  8bf8                 mov edi, eax
// 0060c077  e8c448fbff           call 0x5c0940
// 0060c07c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060c080  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060c084  51                   push ecx
// 0060c085  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060c089  52                   push edx
// 0060c08a  51                   push ecx
// 0060c08b  57                   push edi
// 0060c08c  50                   push eax
// 0060c08d  8bce                 mov ecx, esi
// 0060c08f  e8bc05f6ff           call 0x56c650
// 0060c094  897e18               mov dword ptr [esi + 0x18], edi
// 0060c097  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060c09b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060c09f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060c0a3  52                   push edx
// 0060c0a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060c0a8  50                   push eax
// 0060c0a9  51                   push ecx
// 0060c0aa  52                   push edx
// 0060c0ab  8d442444             lea eax, [esp + 0x44]
// 0060c0af  50                   push eax
// 0060c0b0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060c0b8  c7062c328400         mov dword ptr [esi], 0x84322c
// 0060c0be  e80de9ffff           call 0x60a9d0
// 0060c0c3  8b08                 mov ecx, dword ptr [eax]
// 0060c0c5  c70000000000         mov dword ptr [eax], 0
// 0060c0cb  83c414               add esp, 0x14
// 0060c0ce  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060c0d1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060c0d5  c644241401           mov byte ptr [esp + 0x14], 1
// 0060c0da  85c0                 test eax, eax
// 0060c0dc  7409                 je 0x60c0e7
// 0060c0de  50                   push eax
// 0060c0df  e896450900           call 0x6a067a
// 0060c0e4  83c404               add esp, 4
// 0060c0e7  68a4bd9700           push 0x97bda4
// 0060c0ec  68d0b76000           push 0x60b7d0
// 0060c0f1  e83ab2f4ff           call 0x557330
// 0060c0f6  83c408               add esp, 8
// 0060c0f9  e872f6ffff           call 0x60b770
// 0060c0fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060c102  894620               mov dword ptr [esi + 0x20], eax
// 0060c105  5f                   pop edi
// 0060c106  8bc6                 mov eax, esi
// 0060c108  5e                   pop esi
// 0060c109  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c110  83c410               add esp, 0x10
// 0060c113  c21c00               ret 0x1c

extern void __cdecl registerType(void (__cdecl *)(), void *);
extern void __cdecl typeCallback();
extern char typeFlag;
extern void *__cdecl getType();
extern void *__cdecl getSettings();
extern void __cdecl destroyObject(void *);
extern const unsigned long typeTable[];

struct Owner {
    void *pointer;
    explicit Owner(void *);
    ~Owner();
    void *release();
};

__forceinline Owner::Owner(void *p) : pointer(p) {}

__forceinline Owner::~Owner()
{
    if (pointer)
        destroyObject(pointer);
}

__forceinline void *Owner::release()
{
    void *p = pointer;
    pointer = 0;
    return p;
}

extern Owner __cdecl createObject(int, int, int, int);

struct Core {
    const unsigned long *table;
    char storage[20];
    Core(void *, void *, int, int, int);
    ~Core();
};

struct Base : Core {
    void *descriptor;
    Base(void *, void *, int, int, int);
};

__forceinline Base::Base(void *settings, void *type, int a, int b, int g)
    : Core(settings, type, a, b, g), descriptor(type)
{
}

struct S : Base {
    Owner object;
    void *type;
    S(int, int, int, int, int, int, int);
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(getSettings(),
           (registerType(typeCallback, &typeFlag), getType()),
           a, b, g),
      object((table = typeTable, createObject(c, d, e, f).release())),
      type((registerType(typeCallback, &typeFlag), getType()))
{
}
