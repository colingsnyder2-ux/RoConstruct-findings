// from server: 100% by king_originala
// roc 2008-06 00461630  unit: Scintilla::CScintillaView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461630
//
// 00461630  a1cc2f9300           mov eax, dword ptr [0x932fcc]
// 00461635  8b15c02f9300         mov edx, dword ptr [0x932fc0]
// 0046163b  56                   push esi
// 0046163c  57                   push edi
// 0046163d  8bf1                 mov esi, ecx
// 0046163f  8b0dc82f9300         mov ecx, dword ptr [0x932fc8]
// 00461645  8b3e                 mov edi, dword ptr [esi]
// 00461647  50                   push eax
// 00461648  a1c42f9300           mov eax, dword ptr [0x932fc4]
// 0046164d  51                   push ecx
// 0046164e  52                   push edx
// 0046164f  50                   push eax
// 00461650  b9b82f9300           mov ecx, 0x932fb8
// 00461655  ff15e03e8000         call dword ptr [0x803ee0]
// 0046165b  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 00461661  50                   push eax
// 00461662  8bce                 mov ecx, esi
// 00461664  ffd2                 call edx
// 00461666  85c0                 test eax, eax
// 00461668  7533                 jne 0x46169d
// 0046166a  8b0dc82f9300         mov ecx, dword ptr [0x932fc8]
// 00461670  8b15c02f9300         mov edx, dword ptr [0x932fc0]
// 00461676  8b3e                 mov edi, dword ptr [esi]
// 00461678  50                   push eax
// 00461679  a1cc2f9300           mov eax, dword ptr [0x932fcc]
// 0046167e  50                   push eax
// 0046167f  a1c42f9300           mov eax, dword ptr [0x932fc4]
// 00461684  51                   push ecx
// 00461685  52                   push edx
// 00461686  50                   push eax
// 00461687  b9b82f9300           mov ecx, 0x932fb8
// 0046168c  ff15e03e8000         call dword ptr [0x803ee0]
// 00461692  8b97a8010000         mov edx, dword ptr [edi + 0x1a8]
// 00461698  50                   push eax
// 00461699  8bce                 mov ecx, esi
// 0046169b  ffd2                 call edx
// 0046169d  5f                   pop edi
// 0046169e  5e                   pop esi
// 0046169f  c3                   ret 

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
