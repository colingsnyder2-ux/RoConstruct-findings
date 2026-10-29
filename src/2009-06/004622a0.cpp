// roc 2009-06 004622a0  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004622a0
//
// 004622a0  a1c0689e00           mov eax, dword ptr [0x9e68c0]
// 004622a5  8b15b4689e00         mov edx, dword ptr [0x9e68b4]
// 004622ab  56                   push esi
// 004622ac  57                   push edi
// 004622ad  8bf1                 mov esi, ecx
// 004622af  8b0dbc689e00         mov ecx, dword ptr [0x9e68bc]
// 004622b5  8b3e                 mov edi, dword ptr [esi]
// 004622b7  50                   push eax
// 004622b8  a1b8689e00           mov eax, dword ptr [0x9e68b8]
// 004622bd  51                   push ecx
// 004622be  52                   push edx
// 004622bf  50                   push eax
// 004622c0  b9ac689e00           mov ecx, 0x9e68ac
// 004622c5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004622cb  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 004622d1  50                   push eax
// 004622d2  8bce                 mov ecx, esi
// 004622d4  ffd2                 call edx
// 004622d6  85c0                 test eax, eax
// 004622d8  7533                 jne 0x46230d
// 004622da  8b0dbc689e00         mov ecx, dword ptr [0x9e68bc]
// 004622e0  8b15b4689e00         mov edx, dword ptr [0x9e68b4]
// 004622e6  8b3e                 mov edi, dword ptr [esi]
// 004622e8  50                   push eax
// 004622e9  a1c0689e00           mov eax, dword ptr [0x9e68c0]
// 004622ee  50                   push eax
// 004622ef  a1b8689e00           mov eax, dword ptr [0x9e68b8]
// 004622f4  51                   push ecx
// 004622f5  52                   push edx
// 004622f6  50                   push eax
// 004622f7  b9ac689e00           mov ecx, 0x9e68ac
// 004622fc  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00462302  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 00462308  50                   push eax
// 00462309  8bce                 mov ecx, esi
// 0046230b  ffd2                 call edx
// 0046230d  5f                   pop edi
// 0046230e  5e                   pop esi
// 0046230f  c3                   ret 
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