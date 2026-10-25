// from server: 100% by colin
// roc 2008-06 00427d80  unit: RobloxCrashReporter  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427d80
//
// 00427d80  6aff                 push -1
// 00427d82  68b7f07b00           push 0x7bf0b7
// 00427d87  64a100000000         mov eax, dword ptr fs:[0]
// 00427d8d  50                   push eax
// 00427d8e  64892500000000       mov dword ptr fs:[0], esp
// 00427d95  81ec10040000         sub esp, 0x410
// 00427d9b  56                   push esi
// 00427d9c  8d4c2408             lea ecx, [esp + 8]
// 00427da0  e8bd912700           call 0x6a0f62
// 00427da5  c744240884038100     mov dword ptr [esp + 8], 0x810384
// 00427dad  8bb42428040000       mov esi, dword ptr [esp + 0x428]
// 00427db4  6a00                 push 0
// 00427db6  6800040000           push 0x400
// 00427dbb  8d44241c             lea eax, [esp + 0x1c]
// 00427dbf  50                   push eax
// 00427dc0  8d4c2414             lea ecx, [esp + 0x14]
// 00427dc4  c784242804000000000000 mov dword ptr [esp + 0x428], 0
// 00427dcf  8974241c             mov dword ptr [esp + 0x1c], esi
// 00427dd3  e89c912700           call 0x6a0f74
// 00427dd8  8d4c2404             lea ecx, [esp + 4]
// 00427ddc  ff15043f8000         call dword ptr [0x803f04]
// 00427de2  8b8c2430040000       mov ecx, dword ptr [esp + 0x430]
// 00427de9  8b94242c040000       mov edx, dword ptr [esp + 0x42c]
// 00427df0  51                   push ecx
// 00427df1  52                   push edx
// 00427df2  8d44241c             lea eax, [esp + 0x1c]
// 00427df6  50                   push eax
// 00427df7  56                   push esi
// 00427df8  8d4c2414             lea ecx, [esp + 0x14]
// 00427dfc  68b0038100           push 0x8103b0
// 00427e01  51                   push ecx
// 00427e02  c684243404000001     mov byte ptr [esp + 0x434], 1
// 00427e0a  ff15dc3e8000         call dword ptr [0x803edc]
// 00427e10  83c418               add esp, 0x18
// 00427e13  8d4c2404             lea ecx, [esp + 4]
// 00427e17  ff15e03e8000         call dword ptr [0x803ee0]
// 00427e1d  8b942424040000       mov edx, dword ptr [esp + 0x424]
// 00427e24  50                   push eax
// 00427e25  52                   push edx
// 00427e26  e8f5fdffff           call 0x427c20
// 00427e2b  83c408               add esp, 8
// 00427e2e  8d4c2404             lea ecx, [esp + 4]
// 00427e32  ff15143f8000         call dword ptr [0x803f14]
// 00427e38  8b8c2414040000       mov ecx, dword ptr [esp + 0x414]
// 00427e3f  5e                   pop esi
// 00427e40  64890d00000000       mov dword ptr fs:[0], ecx
// 00427e47  81c41c040000         add esp, 0x41c
// 00427e4d  c3                   ret 

struct ErrorBase {
    ErrorBase();
    virtual void describe(char *, unsigned int, int);
    unsigned int reserved;
};

struct Error : ErrorBase {
    int code;
    virtual void describe(char *, unsigned int, int);
    ~Error();
};

inline Error::~Error()
{
}

struct String {
    char *data;
    __declspec(dllimport) String();
    __declspec(dllimport) ~String() throw();
};

extern void (__cdecl *stringFormat)(String *, const char *, ...);
extern const char *(__thiscall *stringData)(String *);





extern void __cdecl report(const char *, const char *);

void __cdecl reportError(const char *destination, int code,
                         const char *detail, const char *context)
{
    Error error;
    char buffer[1024];
    error.code = code;
    error.Error::describe(buffer, 1024, 0);

    String text;
    stringFormat(&text, "HRESULT = %d: %s\n%s(%d)", code, buffer, detail, context);
    report(destination, stringData(&text));
}
