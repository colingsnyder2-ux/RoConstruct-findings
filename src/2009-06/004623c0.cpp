// roc 2009-06 004623c0  unit: Scintilla::CScintillaView  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004623c0
//
// 004623c0  8b442404             mov eax, dword ptr [esp + 4]
// 004623c4  53                   push ebx
// 004623c5  55                   push ebp
// 004623c6  56                   push esi
// 004623c7  57                   push edi
// 004623c8  8bf1                 mov esi, ecx
// 004623ca  50                   push eax
// 004623cb  b9ac689e00           mov ecx, 0x9e68ac
// 004623d0  ff15acfc8900         call dword ptr [0x89fcac]
// 004623d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004623da  51                   push ecx
// 004623db  b9b0689e00           mov ecx, 0x9e68b0
// 004623e0  ff15acfc8900         call dword ptr [0x89fcac]
// 004623e6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004623ea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004623ee  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004623f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004623f6  55                   push ebp
// 004623f7  893db4689e00         mov dword ptr [0x9e68b4], edi
// 004623fd  891dbc689e00         mov dword ptr [0x9e68bc], ebx
// 00462403  8915b8689e00         mov dword ptr [0x9e68b8], edx
// 00462409  892dc0689e00         mov dword ptr [0x9e68c0], ebp
// 0046240f  8b06                 mov eax, dword ptr [esi]
// 00462411  53                   push ebx
// 00462412  57                   push edi
// 00462413  b9ac689e00           mov ecx, 0x9e68ac
// 00462418  89442420             mov dword ptr [esp + 0x20], eax
// 0046241c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00462422  8b542420             mov edx, dword ptr [esp + 0x20]
// 00462426  50                   push eax
// 00462427  8b82c0010000         mov eax, dword ptr [edx + 0x1c0]
// 0046242d  8bce                 mov ecx, esi
// 0046242f  ffd0                 call eax
// 00462431  85c0                 test eax, eax
// 00462433  7561                 jne 0x462496
// 00462435  8b0e                 mov ecx, dword ptr [esi]
// 00462437  8b542418             mov edx, dword ptr [esp + 0x18]
// 0046243b  55                   push ebp
// 0046243c  53                   push ebx
// 0046243d  57                   push edi
// 0046243e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00462442  52                   push edx
// 00462443  b9ac689e00           mov ecx, 0x9e68ac
// 00462448  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0046244e  50                   push eax
// 0046244f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00462453  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00462459  8bce                 mov ecx, esi
// 0046245b  ffd2                 call edx
// 0046245d  85c0                 test eax, eax
// 0046245f  0f85a4000000         jne 0x462509
// 00462465  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00462469  8b06                 mov eax, dword ptr [esi]
// 0046246b  6a01                 push 1
// 0046246d  55                   push ebp
// 0046246e  53                   push ebx
// 0046246f  57                   push edi
// 00462470  51                   push ecx
// 00462471  b9ac689e00           mov ecx, 0x9e68ac
// 00462476  89442428             mov dword ptr [esp + 0x28], eax
// 0046247a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00462480  8b542428             mov edx, dword ptr [esp + 0x28]
// 00462484  50                   push eax
// 00462485  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0046248b  8bce                 mov ecx, esi
// 0046248d  ffd0                 call eax
// 0046248f  5f                   pop edi
// 00462490  5e                   pop esi
// 00462491  5d                   pop ebp
// 00462492  5b                   pop ebx
// 00462493  c21800               ret 0x18
// 00462496  6a01                 push 1
// 00462498  b9b0689e00           mov ecx, 0x9e68b0
// 0046249d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004624a3  50                   push eax
// 004624a4  8d4e58               lea ecx, [esi + 0x58]
// 004624a7  e814f4ffff           call 0x4618c0
// 004624ac  8b0e                 mov ecx, dword ptr [esi]
// 004624ae  8b542418             mov edx, dword ptr [esp + 0x18]
// 004624b2  55                   push ebp
// 004624b3  53                   push ebx
// 004624b4  57                   push edi
// 004624b5  894c2420             mov dword ptr [esp + 0x20], ecx
// 004624b9  52                   push edx
// 004624ba  b9ac689e00           mov ecx, 0x9e68ac
// 004624bf  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004624c5  50                   push eax
// 004624c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 004624ca  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 004624d0  8bce                 mov ecx, esi
// 004624d2  ffd2                 call edx
// 004624d4  85c0                 test eax, eax
// 004624d6  7531                 jne 0x462509
// 004624d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004624dc  8b06                 mov eax, dword ptr [esi]
// 004624de  6a01                 push 1
// 004624e0  55                   push ebp
// 004624e1  53                   push ebx
// 004624e2  57                   push edi
// 004624e3  51                   push ecx
// 004624e4  b9ac689e00           mov ecx, 0x9e68ac
// 004624e9  89442428             mov dword ptr [esp + 0x28], eax
// 004624ed  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004624f3  8b542428             mov edx, dword ptr [esp + 0x28]
// 004624f7  50                   push eax
// 004624f8  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 004624fe  8bce                 mov ecx, esi
// 00462500  ffd0                 call eax
// 00462502  5f                   pop edi
// 00462503  5e                   pop esi
// 00462504  5d                   pop ebp
// 00462505  5b                   pop ebx
// 00462506  c21800               ret 0x18
// 00462509  8b16                 mov edx, dword ptr [esi]
// 0046250b  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 00462511  8bce                 mov ecx, esi
// 00462513  ffd0                 call eax
// 00462515  5f                   pop edi
// 00462516  5e                   pop esi
// 00462517  5d                   pop ebp
// 00462518  5b                   pop ebx
// 00462519  c21800               ret 0x18
// copied from an identical function in another client (function ?update@View@@QAEHPBDHHHH0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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