// roc 2011-06 0048b260  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b260
//
// 0048b260  a1708cc100           mov eax, dword ptr [0xc18c70]
// 0048b265  8b15648cc100         mov edx, dword ptr [0xc18c64]
// 0048b26b  56                   push esi
// 0048b26c  57                   push edi
// 0048b26d  8bf1                 mov esi, ecx
// 0048b26f  8b0d6c8cc100         mov ecx, dword ptr [0xc18c6c]
// 0048b275  8b3e                 mov edi, dword ptr [esi]
// 0048b277  50                   push eax
// 0048b278  a1688cc100           mov eax, dword ptr [0xc18c68]
// 0048b27d  51                   push ecx
// 0048b27e  52                   push edx
// 0048b27f  50                   push eax
// 0048b280  b95c8cc100           mov ecx, 0xc18c5c
// 0048b285  ff15c82da400         call dword ptr [0xa42dc8]
// 0048b28b  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 0048b291  50                   push eax
// 0048b292  8bce                 mov ecx, esi
// 0048b294  ffd2                 call edx
// 0048b296  85c0                 test eax, eax
// 0048b298  7533                 jne 0x48b2cd
// 0048b29a  8b0d6c8cc100         mov ecx, dword ptr [0xc18c6c]
// 0048b2a0  8b15648cc100         mov edx, dword ptr [0xc18c64]
// 0048b2a6  8b3e                 mov edi, dword ptr [esi]
// 0048b2a8  50                   push eax
// 0048b2a9  a1708cc100           mov eax, dword ptr [0xc18c70]
// 0048b2ae  50                   push eax
// 0048b2af  a1688cc100           mov eax, dword ptr [0xc18c68]
// 0048b2b4  51                   push ecx
// 0048b2b5  52                   push edx
// 0048b2b6  50                   push eax
// 0048b2b7  b95c8cc100           mov ecx, 0xc18c5c
// 0048b2bc  ff15c82da400         call dword ptr [0xa42dc8]
// 0048b2c2  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 0048b2c8  50                   push eax
// 0048b2c9  8bce                 mov ecx, esi
// 0048b2cb  ffd2                 call edx
// 0048b2cd  5f                   pop edi
// 0048b2ce  5e                   pop esi
// 0048b2cf  c3                   ret 
// copied from an identical function in another client (function ?update@View@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct Parameters {
    unsigned char reserved[8];
    int second;
    int first;
    int third;
    int fourth;
};

extern Parameters parameters;

union ImportedCall {
    int (__thiscall *four)(Parameters *, int, int, int, int);
    int (__thiscall *five)(Parameters *, int, int, int, int, int);
};

extern ImportedCall importedCall;

#define DECLARE_SLOT(n) virtual void slot##n();
#define DECLARE_TEN(n) \
    DECLARE_SLOT(n##0) DECLARE_SLOT(n##1) \
    DECLARE_SLOT(n##2) DECLARE_SLOT(n##3) \
    DECLARE_SLOT(n##4) DECLARE_SLOT(n##5) \
    DECLARE_SLOT(n##6) DECLARE_SLOT(n##7) \
    DECLARE_SLOT(n##8) DECLARE_SLOT(n##9)

struct View {
    DECLARE_TEN(0)
    DECLARE_TEN(1)
    DECLARE_TEN(2)
    DECLARE_TEN(3)
    DECLARE_TEN(4)
    DECLARE_TEN(5)
    DECLARE_TEN(6)
    DECLARE_TEN(7)
    DECLARE_TEN(8)
    DECLARE_TEN(9)
    DECLARE_SLOT(100)
    DECLARE_SLOT(101)
    DECLARE_SLOT(102)
    DECLARE_SLOT(103)
    DECLARE_SLOT(104)
    DECLARE_SLOT(105)
    virtual int fallback(int);
    virtual int attempt(int);
    void update();
};

#undef DECLARE_TEN
#undef DECLARE_SLOT

void View::update()
{
    if (!attempt(importedCall.four(
            &parameters, parameters.first, parameters.second,
            parameters.third, parameters.fourth))) {
        fallback(importedCall.five(
            &parameters, parameters.first, parameters.second,
            parameters.third, parameters.fourth, 0));
    }
}
}
