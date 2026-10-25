// from server: 100% by king_originala
// roc 2008-06 00505040  unit: RBX::Render::RenderScene  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505040
//
// 00505040  6aff                 push -1
// 00505042  68c8b77c00           push 0x7cb7c8
// 00505047  64a100000000         mov eax, dword ptr fs:[0]
// 0050504d  50                   push eax
// 0050504e  64892500000000       mov dword ptr fs:[0], esp
// 00505055  83ec08               sub esp, 8
// 00505058  53                   push ebx
// 00505059  55                   push ebp
// 0050505a  56                   push esi
// 0050505b  8bf1                 mov esi, ecx
// 0050505d  57                   push edi
// 0050505e  89742414             mov dword ptr [esp + 0x14], esi
// 00505062  e869ffffff           call 0x504fd0
// 00505067  33db                 xor ebx, ebx
// 00505069  c70654748200         mov dword ptr [esi], 0x827454
// 0050506f  895c2420             mov dword ptr [esp + 0x20], ebx
// 00505073  899e6c020000         mov dword ptr [esi + 0x26c], ebx
// 00505079  899e70020000         mov dword ptr [esi + 0x270], ebx
// 0050507f  899e68020000         mov dword ptr [esi + 0x268], ebx
// 00505085  899e78020000         mov dword ptr [esi + 0x278], ebx
// 0050508b  899e7c020000         mov dword ptr [esi + 0x27c], ebx
// 00505091  899e74020000         mov dword ptr [esi + 0x274], ebx
// 00505097  899e84020000         mov dword ptr [esi + 0x284], ebx
// 0050509d  899e88020000         mov dword ptr [esi + 0x288], ebx
// 005050a3  899e80020000         mov dword ptr [esi + 0x280], ebx
// 005050a9  899e90020000         mov dword ptr [esi + 0x290], ebx
// 005050af  899e94020000         mov dword ptr [esi + 0x294], ebx
// 005050b5  899e8c020000         mov dword ptr [esi + 0x28c], ebx
// 005050bb  899e9c020000         mov dword ptr [esi + 0x29c], ebx
// 005050c1  899ea0020000         mov dword ptr [esi + 0x2a0], ebx
// 005050c7  899e98020000         mov dword ptr [esi + 0x298], ebx
// 005050cd  899ea8020000         mov dword ptr [esi + 0x2a8], ebx
// 005050d3  899eac020000         mov dword ptr [esi + 0x2ac], ebx
// 005050d9  899ea4020000         mov dword ptr [esi + 0x2a4], ebx
// 005050df  8d8eb0020000         lea ecx, [esi + 0x2b0]
// 005050e5  c644242006           mov byte ptr [esp + 0x20], 6
// 005050ea  e88143f8ff           call 0x489470
// 005050ef  899ed0020000         mov dword ptr [esi + 0x2d0], ebx
// 005050f5  8daee8020000         lea ebp, [esi + 0x2e8]
// 005050fb  895d00               mov dword ptr [ebp], ebx
// 005050fe  8dbeec020000         lea edi, [esi + 0x2ec]
// 00505104  891f                 mov dword ptr [edi], ebx
// 00505106  889ef0020000         mov byte ptr [esi + 0x2f0], bl
// 0050510c  f60520f0960001       test byte ptr [0x96f020], 1
// 00505113  7514                 jne 0x505129
// 00505115  a1ac248000           mov eax, dword ptr [0x8024ac]
// 0050511a  830d20f0960001       or dword ptr [0x96f020], 1
// 00505121  dd00                 fld qword ptr [eax]
// 00505123  dd1d18f09600         fstp qword ptr [0x96f018]
// 00505129  dd0518f09600         fld qword ptr [0x96f018]
// 0050512f  d99ef4020000         fstp dword ptr [esi + 0x2f4]
// 00505135  899efc020000         mov dword ptr [esi + 0x2fc], ebx
// 0050513b  899e00030000         mov dword ptr [esi + 0x300], ebx
// 00505141  899ef8020000         mov dword ptr [esi + 0x2f8], ebx
// 00505147  889e04030000         mov byte ptr [esi + 0x304], bl
// 0050514d  899e08030000         mov dword ptr [esi + 0x308], ebx
// 00505153  8d8e10030000         lea ecx, [esi + 0x310]
// 00505159  c64424200c           mov byte ptr [esp + 0x20], 0xc
// 0050515e  e8fd162b00           call 0x7b6860
// 00505163  8d8e08040000         lea ecx, [esi + 0x408]
// 00505169  e8f2162b00           call 0x7b6860
// 0050516e  8d4c2410             lea ecx, [esp + 0x10]
// 00505172  51                   push ecx
// 00505173  e8e8e7ffff           call 0x503960
// 00505178  83c404               add esp, 4
// 0050517b  8b10                 mov edx, dword ptr [eax]
// 0050517d  52                   push edx
// 0050517e  8bcf                 mov ecx, edi
// 00505180  c64424240d           mov byte ptr [esp + 0x24], 0xd
// 00505185  e8163e0900           call 0x598fa0
// 0050518a  8b07                 mov eax, dword ptr [edi]
// 0050518c  50                   push eax
// 0050518d  8bcd                 mov ecx, ebp
// 0050518f  e80c3e0900           call 0x598fa0
// 00505194  8b442410             mov eax, dword ptr [esp + 0x10]
// 00505198  c64424200c           mov byte ptr [esp + 0x20], 0xc
// 0050519d  3bc3                 cmp eax, ebx
// 0050519f  7427                 je 0x5051c8
// 005051a1  83c004               add eax, 4
// 005051a4  50                   push eax
// 005051a5  ff15ac218000         call dword ptr [0x8021ac]
// 005051ab  85c0                 test eax, eax
// 005051ad  7519                 jne 0x5051c8
// 005051af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005051b3  e8d85bf5ff           call 0x45ad90
// 005051b8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005051bc  3bcb                 cmp ecx, ebx
// 005051be  7408                 je 0x5051c8
// 005051c0  8b11                 mov edx, dword ptr [ecx]
// 005051c2  8b02                 mov eax, dword ptr [edx]
// 005051c4  6a01                 push 1
// 005051c6  ffd0                 call eax
// 005051c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005051cc  5f                   pop edi
// 005051cd  8bc6                 mov eax, esi
// 005051cf  5e                   pop esi
// 005051d0  5d                   pop ebp
// 005051d1  5b                   pop ebx
// 005051d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005051d9  83c414               add esp, 0x14
// 005051dc  c3                   ret 

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);
extern const double *infinitySource;

struct Object {
    virtual ~Object();
    volatile long references;
    void release();
};

struct Reference {
    Object *pointer;
    Reference();
    ~Reference();
    Reference &operator=(Object *);
};

inline Reference::Reference() : pointer(0) {}

inline Reference::~Reference() {
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->release();
        if (pointer)
            delete pointer;
    }
}

Reference makeLighting();

struct Array {
    void *data;
    int count;
    int capacity;
    Array();
    ~Array();
};

inline Array::Array() {
    count = 0;
    capacity = 0;
    data = 0;
}

struct Shader {
    unsigned char storage[32];
    Shader();
    ~Shader();
};

struct Matrix {
    unsigned char storage[248];
    Matrix();
};

struct Base {
    unsigned char storage[612];
    Base();
    virtual ~Base();
};

struct Scene : Base {
    Array array0;
    Array array1;
    Array array2;
    Array array3;
    Array array4;
    Array array5;
    Shader shader;
    Reference first;
    unsigned char unused[20];
    Reference current;
    Reference previous;
    bool enabled;
    float distance;
    Array additional;
    bool active;
    Reference last;
    unsigned char padding[4];
    Matrix firstMatrix;
    Matrix secondMatrix;

    Scene();
    virtual ~Scene();
};

inline float initialDistance() {
    static double value = *infinitySource;
    return (float)value;
}

Scene::Scene()
    : enabled(false),
      distance(initialDistance()),
      active(false)
{
    previous = makeLighting().pointer, current = previous.pointer;
}
