// from server: 94% by colin
// from server: 92% by colin
// roc 2008-06 0042edd0  unit: CWrapperView  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042edd0
//
// 0042edd0  6aff                 push -1
// 0042edd2  68a2f97b00           push 0x7bf9a2
// 0042edd7  64a100000000         mov eax, dword ptr fs:[0]
// 0042eddd  50                   push eax
// 0042edde  64892500000000       mov dword ptr fs:[0], esp
// 0042ede5  83ec20               sub esp, 0x20
// 0042ede8  a144ef9600           mov eax, dword ptr [0x96ef44]
// 0042eded  56                   push esi
// 0042edee  57                   push edi
// 0042edef  50                   push eax
// 0042edf0  8d4c2410             lea ecx, [esp + 0x10]
// 0042edf4  51                   push ecx
// 0042edf5  e8c67d1700           call 0x5a6bc0
// 0042edfa  83c408               add esp, 8
// 0042edfd  8d4c2408             lea ecx, [esp + 8]
// 0042ee01  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0042ee09  ff15043f8000         call dword ptr [0x803f04]
// 0042ee0f  8d4c240c             lea ecx, [esp + 0xc]
// 0042ee13  c644243001           mov byte ptr [esp + 0x30], 1
// 0042ee18  ff1564248000         call dword ptr [0x802464]
// 0042ee1e  50                   push eax
// 0042ee1f  8d54240c             lea edx, [esp + 0xc]
// 0042ee23  68380c8100           push 0x810c38
// 0042ee28  52                   push edx
// 0042ee29  ff15dc3e8000         call dword ptr [0x803edc]
// 0042ee2f  8b742444             mov esi, dword ptr [esp + 0x44]
// 0042ee33  8b3e                 mov edi, dword ptr [esi]
// 0042ee35  83c40c               add esp, 0xc
// 0042ee38  8d4c2408             lea ecx, [esp + 8]
// 0042ee3c  ff15e03e8000         call dword ptr [0x803ee0]
// 0042ee42  50                   push eax
// 0042ee43  8b470c               mov eax, dword ptr [edi + 0xc]
// 0042ee46  8bce                 mov ecx, esi
// 0042ee48  ffd0                 call eax
// 0042ee4a  8d4c2408             lea ecx, [esp + 8]
// 0042ee4e  ff15143f8000         call dword ptr [0x803f14]
// 0042ee54  8d4c240c             lea ecx, [esp + 0xc]
// 0042ee58  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0042ee60  ff1568248000         call dword ptr [0x802468]
// 0042ee66  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042ee6a  5f                   pop edi
// 0042ee6b  5e                   pop esi
// 0042ee6c  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ee73  83c42c               add esp, 0x2c
// 0042ee76  c20400               ret 4

struct String {
    char storage[28];
    ~String() throw();
    const char *c_str() const;
};

struct Format {
    char storage[4];
    Format();
    __declspec(dllimport) ~Format() throw();
    const char *text() const;
};

extern void (__thiscall *string_destroy)(String *);
extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *format_construct)(Format *);
extern void (__thiscall *format_destroy)(Format *);
extern const char *(__thiscall *format_text)(const Format *);
extern void (__cdecl *format_print)(Format *, const char *, ...);

String::~String() throw()
{
    string_destroy(this);
}

const char *String::c_str() const
{
    return string_c_str(this);
}

Format::Format()
{
    format_construct(this);
}

const char *Format::text() const
{
    return format_text(this);
}

extern unsigned int texture_count;
extern String __cdecl sub_5a6bc0(unsigned int);

struct Target;
typedef void (__thiscall *TargetMethod)(Target *, const char *);

struct Target {
    TargetMethod *vtable;
};

struct CWrapperView {
    void func_42edd0(Target *);
};

void CWrapperView::func_42edd0(Target *target)
{
    String value = sub_5a6bc0(texture_count);
    Format output;
    format_print(&output, "TEX %s", value.c_str());
    TargetMethod *table = target->vtable;
    const char *text = output.text();
    table[3](target, text);
    value.~String();
}
