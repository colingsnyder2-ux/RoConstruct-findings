// from server: 100% by king_originala
// roc 2008-06 00461750  unit: Scintilla::CScintillaView  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461750
//
// 00461750  8b442404             mov eax, dword ptr [esp + 4]
// 00461754  53                   push ebx
// 00461755  55                   push ebp
// 00461756  56                   push esi
// 00461757  57                   push edi
// 00461758  8bf1                 mov esi, ecx
// 0046175a  50                   push eax
// 0046175b  b9b82f9300           mov ecx, 0x932fb8
// 00461760  ff15b83e8000         call dword ptr [0x803eb8]
// 00461766  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046176a  51                   push ecx
// 0046176b  b9bc2f9300           mov ecx, 0x932fbc
// 00461770  ff15b83e8000         call dword ptr [0x803eb8]
// 00461776  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0046177a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046177e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00461782  8b542418             mov edx, dword ptr [esp + 0x18]
// 00461786  55                   push ebp
// 00461787  893dc02f9300         mov dword ptr [0x932fc0], edi
// 0046178d  891dc82f9300         mov dword ptr [0x932fc8], ebx
// 00461793  8915c42f9300         mov dword ptr [0x932fc4], edx
// 00461799  892dcc2f9300         mov dword ptr [0x932fcc], ebp
// 0046179f  8b06                 mov eax, dword ptr [esi]
// 004617a1  53                   push ebx
// 004617a2  57                   push edi
// 004617a3  b9b82f9300           mov ecx, 0x932fb8
// 004617a8  89442420             mov dword ptr [esp + 0x20], eax
// 004617ac  ff15e03e8000         call dword ptr [0x803ee0]
// 004617b2  8b542420             mov edx, dword ptr [esp + 0x20]
// 004617b6  50                   push eax
// 004617b7  8b82c0010000         mov eax, dword ptr [edx + 0x1c0]
// 004617bd  8bce                 mov ecx, esi
// 004617bf  ffd0                 call eax
// 004617c1  85c0                 test eax, eax
// 004617c3  7561                 jne 0x461826
// 004617c5  8b0e                 mov ecx, dword ptr [esi]
// 004617c7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004617cb  55                   push ebp
// 004617cc  53                   push ebx
// 004617cd  57                   push edi
// 004617ce  894c2420             mov dword ptr [esp + 0x20], ecx
// 004617d2  52                   push edx
// 004617d3  b9b82f9300           mov ecx, 0x932fb8
// 004617d8  ff15e03e8000         call dword ptr [0x803ee0]
// 004617de  50                   push eax
// 004617df  8b442428             mov eax, dword ptr [esp + 0x28]
// 004617e3  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 004617e9  8bce                 mov ecx, esi
// 004617eb  ffd2                 call edx
// 004617ed  85c0                 test eax, eax
// 004617ef  0f85a4000000         jne 0x461899
// 004617f5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004617f9  8b06                 mov eax, dword ptr [esi]
// 004617fb  6a01                 push 1
// 004617fd  55                   push ebp
// 004617fe  53                   push ebx
// 004617ff  57                   push edi
// 00461800  51                   push ecx
// 00461801  b9b82f9300           mov ecx, 0x932fb8
// 00461806  89442428             mov dword ptr [esp + 0x28], eax
// 0046180a  ff15e03e8000         call dword ptr [0x803ee0]
// 00461810  8b542428             mov edx, dword ptr [esp + 0x28]
// 00461814  50                   push eax
// 00461815  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0046181b  8bce                 mov ecx, esi
// 0046181d  ffd0                 call eax
// 0046181f  5f                   pop edi
// 00461820  5e                   pop esi
// 00461821  5d                   pop ebp
// 00461822  5b                   pop ebx
// 00461823  c21800               ret 0x18
// 00461826  6a01                 push 1
// 00461828  b9bc2f9300           mov ecx, 0x932fbc
// 0046182d  ff15e03e8000         call dword ptr [0x803ee0]
// 00461833  50                   push eax
// 00461834  8d4e58               lea ecx, [esi + 0x58]
// 00461837  e814f4ffff           call 0x460c50
// 0046183c  8b0e                 mov ecx, dword ptr [esi]
// 0046183e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00461842  55                   push ebp
// 00461843  53                   push ebx
// 00461844  57                   push edi
// 00461845  894c2420             mov dword ptr [esp + 0x20], ecx
// 00461849  52                   push edx
// 0046184a  b9b82f9300           mov ecx, 0x932fb8
// 0046184f  ff15e03e8000         call dword ptr [0x803ee0]
// 00461855  50                   push eax
// 00461856  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046185a  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00461860  8bce                 mov ecx, esi
// 00461862  ffd2                 call edx
// 00461864  85c0                 test eax, eax
// 00461866  7531                 jne 0x461899
// 00461868  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046186c  8b06                 mov eax, dword ptr [esi]
// 0046186e  6a01                 push 1
// 00461870  55                   push ebp
// 00461871  53                   push ebx
// 00461872  57                   push edi
// 00461873  51                   push ecx
// 00461874  b9b82f9300           mov ecx, 0x932fb8
// 00461879  89442428             mov dword ptr [esp + 0x28], eax
// 0046187d  ff15e03e8000         call dword ptr [0x803ee0]
// 00461883  8b542428             mov edx, dword ptr [esp + 0x28]
// 00461887  50                   push eax
// 00461888  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0046188e  8bce                 mov ecx, esi
// 00461890  ffd0                 call eax
// 00461892  5f                   pop edi
// 00461893  5e                   pop esi
// 00461894  5d                   pop ebp
// 00461895  5b                   pop ebx
// 00461896  c21800               ret 0x18
// 00461899  8b16                 mov edx, dword ptr [esi]
// 0046189b  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 004618a1  8bce                 mov ecx, esi
// 004618a3  ffd0                 call eax
// 004618a5  5f                   pop edi
// 004618a6  5e                   pop esi
// 004618a7  5d                   pop ebp
// 004618a8  5b                   pop ebx
// 004618a9  c21800               ret 0x18

typedef void (__thiscall *AssignText)(void *, const char *);
typedef const char *(__thiscall *GetText)(void *);

extern AssignText assignText;
extern GetText getText;
extern char textStorage[4];
extern char otherStorage[4];
extern int savedB;
extern int savedA;
extern int savedC;
extern int savedD;

struct Control {
    void setText(const char *, int);
};

#define SLOT(n) virtual void unused##n();
#define TEN(n) SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3) SLOT(n##4) \
               SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct View {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    TEN(8)
    TEN(9)
    SLOT(100)
    SLOT(101)
    SLOT(102)
    SLOT(103)
    SLOT(104)
    SLOT(105)
    virtual int apply(const char *, int, int, int, int, int);
    virtual int check(const char *, int, int, int, int);
    SLOT(108)
    SLOT(109)
    SLOT(110)
    SLOT(111)
    virtual int prepare(const char *, int, int, int);
    SLOT(113)
    virtual int finish();

    char padding[0x54];
    Control control;

    int update(const char *, int, int, int, int, const char *);
};

#undef TEN
#undef SLOT

int View::update(const char *text, int a, int b, int c, int d,
                 const char *other)
{
    assignText(textStorage, text);
    assignText(otherStorage, other);

    savedB = b;
    savedC = c;
    savedA = a;
    savedD = d;

    if (!prepare(getText(textStorage), b, c, d)) {
        if (!check(getText(textStorage), a, b, c, d))
            return apply(getText(textStorage), a, b, c, d, 1);
    } else {
        control.setText(getText(otherStorage), 1);
        if (!check(getText(textStorage), a, b, c, d))
            return apply(getText(textStorage), a, b, c, d, 1);
    }
    return finish();
}
