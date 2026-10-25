// from server: 100% by king_originala
// roc 2008-06 0060df80  unit: RBX::BlockBlockContact  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060df80
//
// 0060df80  6aff                 push -1
// 0060df82  68d88c7d00           push 0x7d8cd8
// 0060df87  64a100000000         mov eax, dword ptr fs:[0]
// 0060df8d  50                   push eax
// 0060df8e  64892500000000       mov dword ptr fs:[0], esp
// 0060df95  83ec6c               sub esp, 0x6c
// 0060df98  53                   push ebx
// 0060df99  56                   push esi
// 0060df9a  57                   push edi
// 0060df9b  83ec08               sub esp, 8
// 0060df9e  8bc4                 mov eax, esp
// 0060dfa0  89642414             mov dword ptr [esp + 0x14], esp
// 0060dfa4  50                   push eax
// 0060dfa5  8bf9                 mov edi, ecx
// 0060dfa7  e854cbfbff           call 0x5cab00
// 0060dfac  e83fb6f8ff           call 0x5995f0
// 0060dfb1  83c408               add esp, 8
// 0060dfb4  84c0                 test al, al
// 0060dfb6  0f8426010000         je 0x60e0e2
// 0060dfbc  8d4c2410             lea ecx, [esp + 0x10]
// 0060dfc0  51                   push ecx
// 0060dfc1  8bcf                 mov ecx, edi
// 0060dfc3  e838cbfbff           call 0x5cab00
// 0060dfc8  8b18                 mov ebx, dword ptr [eax]
// 0060dfca  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060dfce  85c0                 test eax, eax
// 0060dfd0  742c                 je 0x60dffe
// 0060dfd2  8bf0                 mov esi, eax
// 0060dfd4  83c004               add eax, 4
// 0060dfd7  83caff               or edx, 0xffffffff
// 0060dfda  f00fc110             lock xadd dword ptr [eax], edx
// 0060dfde  751e                 jne 0x60dffe
// 0060dfe0  8b06                 mov eax, dword ptr [esi]
// 0060dfe2  8b5004               mov edx, dword ptr [eax + 4]
// 0060dfe5  8bce                 mov ecx, esi
// 0060dfe7  ffd2                 call edx
// 0060dfe9  8d4608               lea eax, [esi + 8]
// 0060dfec  83c9ff               or ecx, 0xffffffff
// 0060dfef  f00fc108             lock xadd dword ptr [eax], ecx
// 0060dff3  7509                 jne 0x60dffe
// 0060dff5  8b16                 mov edx, dword ptr [esi]
// 0060dff7  8b4208               mov eax, dword ptr [edx + 8]
// 0060dffa  8bce                 mov ecx, esi
// 0060dffc  ffd0                 call eax
// 0060dffe  8bcb                 mov ecx, ebx
// 0060e000  e8bbb4f8ff           call 0x5994c0
// 0060e005  84c0                 test al, al
// 0060e007  0f85d5000000         jne 0x60e0e2
// 0060e00d  8d4c2418             lea ecx, [esp + 0x18]
// 0060e011  51                   push ecx
// 0060e012  8bcb                 mov ecx, ebx
// 0060e014  e8c7b3f8ff           call 0x5993e0
// 0060e019  b801000000           mov eax, 1
// 0060e01e  840554639700         test byte ptr [0x976354], al
// 0060e024  7520                 jne 0x60e046
// 0060e026  d9e8                 fld1 
// 0060e028  090554639700         or dword ptr [0x976354], eax
// 0060e02e  d91548639700         fst dword ptr [0x976348]
// 0060e034  d90504e78100         fld dword ptr [0x81e704]
// 0060e03a  d91d4c639700         fstp dword ptr [0x97634c]
// 0060e040  d91d50639700         fstp dword ptr [0x976350]
// 0060e046  6848639700           push 0x976348
// 0060e04b  8d54241c             lea edx, [esp + 0x1c]
// 0060e04f  52                   push edx
// 0060e050  8d442450             lea eax, [esp + 0x50]
// 0060e054  50                   push eax
// 0060e055  e8e60efdff           call 0x5def40
// 0060e05a  83ec24               sub esp, 0x24
// 0060e05d  8bf4                 mov esi, esp
// 0060e05f  8d4c2478             lea ecx, [esp + 0x78]
// 0060e063  8964243c             mov dword ptr [esp + 0x3c], esp
// 0060e067  51                   push ecx
// 0060e068  8bce                 mov ecx, esi
// 0060e06a  e8b151f0ff           call 0x513220
// 0060e06f  d984249c000000       fld dword ptr [esp + 0x9c]
// 0060e076  d95e24               fstp dword ptr [esi + 0x24]
// 0060e079  d98424a0000000       fld dword ptr [esp + 0xa0]
// 0060e080  d95e28               fstp dword ptr [esi + 0x28]
// 0060e083  d98424a4000000       fld dword ptr [esp + 0xa4]
// 0060e08a  d95e2c               fstp dword ptr [esi + 0x2c]
// 0060e08d  83ec30               sub esp, 0x30
// 0060e090  8bf4                 mov esi, esp
// 0060e092  8d542478             lea edx, [esp + 0x78]
// 0060e096  89642470             mov dword ptr [esp + 0x70], esp
// 0060e09a  52                   push edx
// 0060e09b  8bce                 mov ecx, esi
// 0060e09d  c78424e400000000000000 mov dword ptr [esp + 0xe4], 0
// 0060e0a8  e87351f0ff           call 0x513220
// 0060e0ad  d984249c000000       fld dword ptr [esp + 0x9c]
// 0060e0b4  d95e24               fstp dword ptr [esi + 0x24]
// 0060e0b7  8d4708               lea eax, [edi + 8]
// 0060e0ba  d98424a0000000       fld dword ptr [esp + 0xa0]
// 0060e0c1  50                   push eax
// 0060e0c2  d95e28               fstp dword ptr [esi + 0x28]
// 0060e0c5  d98424a8000000       fld dword ptr [esp + 0xa8]
// 0060e0cc  d95e2c               fstp dword ptr [esi + 0x2c]
// 0060e0cf  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 0060e0da  e8f1100000           call 0x60f1d0
// 0060e0df  83c464               add esp, 0x64
// 0060e0e2  83c708               add edi, 8
// 0060e0e5  57                   push edi
// 0060e0e6  e8b50f0000           call 0x60f0a0
// 0060e0eb  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0060e0ef  83c404               add esp, 4
// 0060e0f2  5f                   pop edi
// 0060e0f3  5e                   pop esi
// 0060e0f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e0fb  5b                   pop ebx
// 0060e0fc  83c478               add esp, 0x78
// 0060e0ff  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Matrix {
    float data[9];
    Matrix(const Matrix&);
};

struct Vector {
    float x, y, z;
    Vector(float, float, float);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct Frame {
    Matrix rotation;
    float x, y, z;
    ~Frame();
};

inline Frame::~Frame()
{
}

struct Part {
    bool blocked();
    Frame frame();
};

struct Shared {
    Part* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

bool __cdecl enabled(Shared);
Frame __cdecl transform(const Frame&, const Vector&);
void __cdecl update(void*, Frame, Frame);
bool __cdecl finish(void*);

struct Contact {
    unsigned char prefix[8];
    unsigned char state[1];
    Shared part();
    bool run();
};

bool Contact::run()
{
    if (enabled(part())) {
        Part* p = part().object;
        if (!p->blocked()) {
            Frame original = p->frame();
            static Vector direction(1.0f, 0.1f, 1.0f);
            Frame modified = transform(original, direction);
            update(state, original, modified);
        }
    }
    return finish(state);
}
