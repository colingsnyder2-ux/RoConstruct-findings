// roc 2012-06 0049df70  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049df70
//
// 0049df70  a11817d700           mov eax, dword ptr [0xd71718]
// 0049df75  8b150c17d700         mov edx, dword ptr [0xd7170c]
// 0049df7b  56                   push esi
// 0049df7c  57                   push edi
// 0049df7d  8bf1                 mov esi, ecx
// 0049df7f  8b0d1417d700         mov ecx, dword ptr [0xd71714]
// 0049df85  8b3e                 mov edi, dword ptr [esi]
// 0049df87  50                   push eax
// 0049df88  a11017d700           mov eax, dword ptr [0xd71710]
// 0049df8d  51                   push ecx
// 0049df8e  52                   push edx
// 0049df8f  50                   push eax
// 0049df90  b90417d700           mov ecx, 0xd71704
// 0049df95  ff159847b200         call dword ptr [0xb24798]
// 0049df9b  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 0049dfa1  50                   push eax
// 0049dfa2  8bce                 mov ecx, esi
// 0049dfa4  ffd2                 call edx
// 0049dfa6  85c0                 test eax, eax
// 0049dfa8  7533                 jne 0x49dfdd
// 0049dfaa  8b0d1417d700         mov ecx, dword ptr [0xd71714]
// 0049dfb0  8b150c17d700         mov edx, dword ptr [0xd7170c]
// 0049dfb6  8b3e                 mov edi, dword ptr [esi]
// 0049dfb8  50                   push eax
// 0049dfb9  a11817d700           mov eax, dword ptr [0xd71718]
// 0049dfbe  50                   push eax
// 0049dfbf  a11017d700           mov eax, dword ptr [0xd71710]
// 0049dfc4  51                   push ecx
// 0049dfc5  52                   push edx
// 0049dfc6  50                   push eax
// 0049dfc7  b90417d700           mov ecx, 0xd71704
// 0049dfcc  ff159847b200         call dword ptr [0xb24798]
// 0049dfd2  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 0049dfd8  50                   push eax
// 0049dfd9  8bce                 mov ecx, esi
// 0049dfdb  ffd2                 call edx
// 0049dfdd  5f                   pop edi
// 0049dfde  5e                   pop esi
// 0049dfdf  c3                   ret 
// copied from an identical function in another client (function ?update@View@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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