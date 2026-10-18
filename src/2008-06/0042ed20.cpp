// from server: 94% by colin
// from server: 92% by colin
// roc 2008-06 0042ed20  unit: CWrapperView  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ed20
//
// 0042ed20  6aff                 push -1
// 0042ed22  68a2f97b00           push 0x7bf9a2
// 0042ed27  64a100000000         mov eax, dword ptr fs:[0]
// 0042ed2d  50                   push eax
// 0042ed2e  64892500000000       mov dword ptr fs:[0], esp
// 0042ed35  83ec20               sub esp, 0x20
// 0042ed38  a1d0ef9600           mov eax, dword ptr [0x96efd0]
// 0042ed3d  56                   push esi
// 0042ed3e  57                   push edi
// 0042ed3f  50                   push eax
// 0042ed40  8d4c2410             lea ecx, [esp + 0x10]
// 0042ed44  51                   push ecx
// 0042ed45  e8767e1700           call 0x5a6bc0
// 0042ed4a  83c408               add esp, 8
// 0042ed4d  8d4c2408             lea ecx, [esp + 8]
// 0042ed51  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0042ed59  ff15043f8000         call dword ptr [0x803f04]
// 0042ed5f  8d4c240c             lea ecx, [esp + 0xc]
// 0042ed63  c644243001           mov byte ptr [esp + 0x30], 1
// 0042ed68  ff1564248000         call dword ptr [0x802464]
// 0042ed6e  50                   push eax
// 0042ed6f  8d54240c             lea edx, [esp + 0xc]
// 0042ed73  68300c8100           push 0x810c30
// 0042ed78  52                   push edx
// 0042ed79  ff15dc3e8000         call dword ptr [0x803edc]
// 0042ed7f  8b742444             mov esi, dword ptr [esp + 0x44]
// 0042ed83  8b3e                 mov edi, dword ptr [esi]
// 0042ed85  83c40c               add esp, 0xc
// 0042ed88  8d4c2408             lea ecx, [esp + 8]
// 0042ed8c  ff15e03e8000         call dword ptr [0x803ee0]
// 0042ed92  50                   push eax
// 0042ed93  8b470c               mov eax, dword ptr [edi + 0xc]
// 0042ed96  8bce                 mov ecx, esi
// 0042ed98  ffd0                 call eax
// 0042ed9a  8d4c2408             lea ecx, [esp + 8]
// 0042ed9e  ff15143f8000         call dword ptr [0x803f14]
// 0042eda4  8d4c240c             lea ecx, [esp + 0xc]
// 0042eda8  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0042edb0  ff1568248000         call dword ptr [0x802468]
// 0042edb6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042edba  5f                   pop edi
// 0042edbb  5e                   pop esi
// 0042edbc  64890d00000000       mov dword ptr fs:[0], ecx
// 0042edc3  83c42c               add esp, 0x2c
// 0042edc6  c20400               ret 4

struct String {
    char storage[28];
    ~String();
    const char *c_str() const;
};

struct Text {
    char storage[4];
    Text();
    __declspec(dllimport) ~Text() throw();
    const char *c_str() const;
};

extern void (__thiscall *destroyString)(String *);
extern const char *(__thiscall *stringData)(const String *);
extern void (__thiscall *constructText)(Text *);
extern void (__thiscall *destroyText)(Text *);
extern const char *(__thiscall *textData)(const Text *);
extern void (__cdecl *formatText)(Text *, const char *, ...);

inline String::~String()
{
    destroyString(this);
}

inline const char *String::c_str() const
{
    return stringData(this);
}

inline Text::Text()
{
    constructText(this);
}

inline const char *Text::c_str() const
{
    return textData(this);
}

extern unsigned int count;
extern String __cdecl formatCount(unsigned int);

struct Output;

struct OutputTable {
    char reserved[12];
    void (__thiscall *write)(Output *, const char *);
};

struct Output {
    OutputTable *table;
};

void __stdcall func_42ed20(Output *output)
{
    String value = formatCount(count);
    Text text;
    formatText(&text, "VAR %s", value.c_str());
    OutputTable *t = output->table;
    t->write(output, text.c_str());
    value.~String();
}
