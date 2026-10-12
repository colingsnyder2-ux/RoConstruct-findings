// from server: 100% by king_originala
// roc 2008-06 00563370  unit: RBX::ContentProvider  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563370
//
// 00563370  6aff                 push -1
// 00563372  681cb37c00           push 0x7cb31c
// 00563377  64a100000000         mov eax, dword ptr fs:[0]
// 0056337d  50                   push eax
// 0056337e  64892500000000       mov dword ptr fs:[0], esp
// 00563385  83ec3c               sub esp, 0x3c
// 00563388  53                   push ebx
// 00563389  56                   push esi
// 0056338a  8d4c240c             lea ecx, [esp + 0xc]
// 0056338e  c744240800000000     mov dword ptr [esp + 8], 0
// 00563396  ff1560248000         call dword ptr [0x802460]
// 0056339c  68c8df8200           push 0x82dfc8
// 005633a1  8d4c242c             lea ecx, [esp + 0x2c]
// 005633a5  c744245001000000     mov dword ptr [esp + 0x50], 1
// 005633ad  ff1558248000         call dword ptr [0x802458]
// 005633b3  8d44240c             lea eax, [esp + 0xc]
// 005633b7  50                   push eax
// 005633b8  8d4c242c             lea ecx, [esp + 0x2c]
// 005633bc  51                   push ecx
// 005633bd  c644245402           mov byte ptr [esp + 0x54], 2
// 005633c2  e8c90dfbff           call 0x514190
// 005633c7  83c408               add esp, 8
// 005633ca  8d4c2428             lea ecx, [esp + 0x28]
// 005633ce  8ad8                 mov bl, al
// 005633d0  c644244c01           mov byte ptr [esp + 0x4c], 1
// 005633d5  ff1568248000         call dword ptr [0x802468]
// 005633db  8b742454             mov esi, dword ptr [esp + 0x54]
// 005633df  8bce                 mov ecx, esi
// 005633e1  84db                 test bl, bl
// 005633e3  740d                 je 0x5633f2
// 005633e5  8d54240c             lea edx, [esp + 0xc]
// 005633e9  52                   push edx
// 005633ea  ff155c248000         call dword ptr [0x80245c]
// 005633f0  eb0b                 jmp 0x5633fd
// 005633f2  68109e8100           push 0x819e10
// 005633f7  ff1558248000         call dword ptr [0x802458]
// 005633fd  8d4c240c             lea ecx, [esp + 0xc]
// 00563401  c744240801000000     mov dword ptr [esp + 8], 1
// 00563409  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0056340e  ff1568248000         call dword ptr [0x802468]
// 00563414  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00563418  8bc6                 mov eax, esi
// 0056341a  5e                   pop esi
// 0056341b  5b                   pop ebx
// 0056341c  64890d00000000       mov dword ptr fs:[0], ecx
// 00563423  83c448               add esp, 0x48
// 00563426  c20400               ret 4

struct String;

extern void (__thiscall *stringDefaultConstruct)(String *);
extern void (__thiscall *stringTextConstruct)(String *, const char *);
extern void (__thiscall *stringCopyConstruct)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);

extern const char productNameKey[];
extern const char fallbackName[];

struct String {
    unsigned char storage[28];

    String();
    String(const char *);
    String(const String &);
    ~String();
};

inline String::String() {
    stringDefaultConstruct(this);
}

inline String::String(const char *text) {
    stringTextConstruct(this, text);
}

inline String::String(const String &other) {
    stringCopyConstruct(this, other);
}

inline String::~String() {
    stringDestroy(this);
}

extern bool __cdecl readProductName(const String &, String &);

struct S {
    String f();
};

String S::f() {
    String result;
    bool found = readProductName(String(productNameKey), result);
    if (found)
        return result;
    return String(fallbackName);
}
