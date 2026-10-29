// roc 2010-06 0046e950  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e950
//
// 0046e950  a1044fb800           mov eax, dword ptr [0xb84f04]
// 0046e955  8b15f84eb800         mov edx, dword ptr [0xb84ef8]
// 0046e95b  56                   push esi
// 0046e95c  57                   push edi
// 0046e95d  8bf1                 mov esi, ecx
// 0046e95f  8b0d004fb800         mov ecx, dword ptr [0xb84f00]
// 0046e965  8b3e                 mov edi, dword ptr [esi]
// 0046e967  50                   push eax
// 0046e968  a1fc4eb800           mov eax, dword ptr [0xb84efc]
// 0046e96d  51                   push ecx
// 0046e96e  52                   push edx
// 0046e96f  50                   push eax
// 0046e970  b9f04eb800           mov ecx, 0xb84ef0
// 0046e975  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046e97b  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 0046e981  50                   push eax
// 0046e982  8bce                 mov ecx, esi
// 0046e984  ffd2                 call edx
// 0046e986  85c0                 test eax, eax
// 0046e988  7533                 jne 0x46e9bd
// 0046e98a  8b0d004fb800         mov ecx, dword ptr [0xb84f00]
// 0046e990  8b15f84eb800         mov edx, dword ptr [0xb84ef8]
// 0046e996  8b3e                 mov edi, dword ptr [esi]
// 0046e998  50                   push eax
// 0046e999  a1044fb800           mov eax, dword ptr [0xb84f04]
// 0046e99e  50                   push eax
// 0046e99f  a1fc4eb800           mov eax, dword ptr [0xb84efc]
// 0046e9a4  51                   push ecx
// 0046e9a5  52                   push edx
// 0046e9a6  50                   push eax
// 0046e9a7  b9f04eb800           mov ecx, 0xb84ef0
// 0046e9ac  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046e9b2  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 0046e9b8  50                   push eax
// 0046e9b9  8bce                 mov ecx, esi
// 0046e9bb  ffd2                 call edx
// 0046e9bd  5f                   pop edi
// 0046e9be  5e                   pop esi
// 0046e9bf  c3                   ret 
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