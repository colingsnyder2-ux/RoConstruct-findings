// roc 2009-12 0046ae50  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ae50
//
// 0046ae50  a1fcb5b000           mov eax, dword ptr [0xb0b5fc]
// 0046ae55  8b15f0b5b000         mov edx, dword ptr [0xb0b5f0]
// 0046ae5b  56                   push esi
// 0046ae5c  57                   push edi
// 0046ae5d  8bf1                 mov esi, ecx
// 0046ae5f  8b0df8b5b000         mov ecx, dword ptr [0xb0b5f8]
// 0046ae65  8b3e                 mov edi, dword ptr [esi]
// 0046ae67  50                   push eax
// 0046ae68  a1f4b5b000           mov eax, dword ptr [0xb0b5f4]
// 0046ae6d  51                   push ecx
// 0046ae6e  52                   push edx
// 0046ae6f  50                   push eax
// 0046ae70  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046ae75  ff1580de9800         call dword ptr [0x98de80]
// 0046ae7b  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 0046ae81  50                   push eax
// 0046ae82  8bce                 mov ecx, esi
// 0046ae84  ffd2                 call edx
// 0046ae86  85c0                 test eax, eax
// 0046ae88  7533                 jne 0x46aebd
// 0046ae8a  8b0df8b5b000         mov ecx, dword ptr [0xb0b5f8]
// 0046ae90  8b15f0b5b000         mov edx, dword ptr [0xb0b5f0]
// 0046ae96  8b3e                 mov edi, dword ptr [esi]
// 0046ae98  50                   push eax
// 0046ae99  a1fcb5b000           mov eax, dword ptr [0xb0b5fc]
// 0046ae9e  50                   push eax
// 0046ae9f  a1f4b5b000           mov eax, dword ptr [0xb0b5f4]
// 0046aea4  51                   push ecx
// 0046aea5  52                   push edx
// 0046aea6  50                   push eax
// 0046aea7  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046aeac  ff1580de9800         call dword ptr [0x98de80]
// 0046aeb2  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 0046aeb8  50                   push eax
// 0046aeb9  8bce                 mov ecx, esi
// 0046aebb  ffd2                 call edx
// 0046aebd  5f                   pop edi
// 0046aebe  5e                   pop esi
// 0046aebf  c3                   ret 
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