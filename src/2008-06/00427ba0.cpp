// from server: 100% by king_originala
// roc 2008-06 00427ba0  unit: RobloxCrashReporter  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427ba0
//
// 00427ba0  6aff                 push -1
// 00427ba2  6852f07b00           push 0x7bf052
// 00427ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00427bad  50                   push eax
// 00427bae  64892500000000       mov dword ptr fs:[0], esp
// 00427bb5  83ec20               sub esp, 0x20
// 00427bb8  56                   push esi
// 00427bb9  68a4038100           push 0x8103a4
// 00427bbe  8d44240c             lea eax, [esp + 0xc]
// 00427bc2  6a01                 push 1
// 00427bc4  50                   push eax
// 00427bc5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00427bcd  e8eefe1700           call 0x5a7ac0
// 00427bd2  83c40c               add esp, 0xc
// 00427bd5  8d4c2408             lea ecx, [esp + 8]
// 00427bd9  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00427be1  ff1564248000         call dword ptr [0x802464]
// 00427be7  8b742434             mov esi, dword ptr [esp + 0x34]
// 00427beb  50                   push eax
// 00427bec  8bce                 mov ecx, esi
// 00427bee  ff15103f8000         call dword ptr [0x803f10]
// 00427bf4  8d4c2408             lea ecx, [esp + 8]
// 00427bf8  c744240401000000     mov dword ptr [esp + 4], 1
// 00427c00  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00427c05  ff1568248000         call dword ptr [0x802468]
// 00427c0b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00427c0f  8bc6                 mov eax, esi
// 00427c11  5e                   pop esi
// 00427c12  64890d00000000       mov dword ptr fs:[0], ecx
// 00427c19  83c42c               add esp, 0x2c
// 00427c1c  c20400               ret 4

struct String;
struct Path;

extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *string_destroy)(String *);
extern void (__thiscall *path_construct)(Path *, const char *);

struct String {
    unsigned char data[28];
    const char *c_str() const;
    ~String();
};

struct Path {
    unsigned char data[28];
    Path(const char *);
    ~Path();
};

inline const char *String::c_str() const {
    return string_c_str(this);
}

inline String::~String() {
    string_destroy(this);
}

inline Path::Path(const char *text) {
    path_construct(this, text);
}

extern String __cdecl make_string(int, const char *);

Path __stdcall make_log_path() {
    String text = make_string(1, "logs");
    return Path(text.c_str());
}
