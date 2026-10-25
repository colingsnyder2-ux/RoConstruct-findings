// from server: 100% by colin
// roc 2008-06 00465b50  unit: CSecureHtmlView  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465b50
//
// 00465b50  55                   push ebp
// 00465b51  8bec                 mov ebp, esp
// 00465b53  6aff                 push -1
// 00465b55  6826347c00           push 0x7c3426
// 00465b5a  64a100000000         mov eax, dword ptr fs:[0]
// 00465b60  50                   push eax
// 00465b61  64892500000000       mov dword ptr fs:[0], esp
// 00465b68  51                   push ecx
// 00465b69  b8c0120000           mov eax, 0x12c0
// 00465b6e  e8adb92300           call 0x6a1520
// 00465b73  53                   push ebx
// 00465b74  56                   push esi
// 00465b75  57                   push edi
// 00465b76  8d8d30edffff         lea ecx, [ebp - 0x12d0]
// 00465b7c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00465b7f  e8cc0afaff           call 0x406650
// 00465b84  8b0d70b38000         mov ecx, dword ptr [0x80b370]
// 00465b8a  6a04                 push 4
// 00465b8c  51                   push ecx
// 00465b8d  8d9530edffff         lea edx, [ebp - 0x12d0]
// 00465b93  b850000000           mov eax, 0x50
// 00465b98  6a21                 push 0x21
// 00465b9a  bb02000000           mov ebx, 2
// 00465b9f  52                   push edx
// 00465ba0  899d58ffffff         mov dword ptr [ebp - 0xa8], ebx
// 00465ba6  c7855cffffff04000000 mov dword ptr [ebp - 0xa4], 4
// 00465bb0  66898556ffffff       mov word ptr [ebp - 0xaa], ax
// 00465bb7  ff15b8288000         call dword ptr [0x8028b8]
// 00465bbd  50                   push eax
// 00465bbe  e8bdbaf9ff           call 0x401680
// 00465bc3  8b4508               mov eax, dword ptr [ebp + 8]
// 00465bc6  83c414               add esp, 0x14
// 00465bc9  6a00                 push 0
// 00465bcb  50                   push eax
// 00465bcc  8d8d30edffff         lea ecx, [ebp - 0x12d0]
// 00465bd2  e8892dfaff           call 0x408960
// 00465bd7  8b8558ffffff         mov eax, dword ptr [ebp - 0xa8]
// 00465bdd  85c0                 test eax, eax
// 00465bdf  7412                 je 0x465bf3
// 00465be1  83f801               cmp eax, 1
// 00465be4  0f8e68010000         jle 0x465d52
// 00465bea  83f803               cmp eax, 3
// 00465bed  0f8f5f010000         jg 0x465d52
// 00465bf3  8d8d51edffff         lea ecx, [ebp - 0x12af]
// 00465bf9  51                   push ecx
// 00465bfa  8d4dec               lea ecx, [ebp - 0x14]
// 00465bfd  ff15103f8000         call dword ptr [0x803f10]
// 00465c03  8d4dec               lea ecx, [ebp - 0x14]
// 00465c06  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00465c0d  ff1588338000         call dword ptr [0x803388]
// 00465c13  f605b4df960001       test byte ptr [0x96dfb4], 1
// 00465c1a  7564                 jne 0x465c80
// 00465c1c  830db4df960001       or dword ptr [0x96dfb4], 1
// 00465c23  8d55e4               lea edx, [ebp - 0x1c]
// 00465c26  52                   push edx
// 00465c27  c645fc01             mov byte ptr [ebp - 4], 1
// 00465c2b  e8a004faff           call 0x4060d0
// 00465c30  689cba8100           push 0x81ba9c
// 00465c35  50                   push eax
// 00465c36  8d45e8               lea eax, [ebp - 0x18]
// 00465c39  50                   push eax
// 00465c3a  885dfc               mov byte ptr [ebp - 4], bl
// 00465c3d  e81e85faff           call 0x40e160
// 00465c42  83c410               add esp, 0x10
// 00465c45  8bc8                 mov ecx, eax
// 00465c47  c645fc03             mov byte ptr [ebp - 4], 3
// 00465c4b  ff15e03e8000         call dword ptr [0x803ee0]
// 00465c51  50                   push eax
// 00465c52  b998df9600           mov ecx, 0x96df98
// 00465c57  ff1558248000         call dword ptr [0x802458]
// 00465c5d  8d4de8               lea ecx, [ebp - 0x18]
// 00465c60  ff15143f8000         call dword ptr [0x803f14]
// 00465c66  8d4de4               lea ecx, [ebp - 0x1c]
// 00465c69  ff15143f8000         call dword ptr [0x803f14]
// 00465c6f  68e0af7f00           push 0x7fafe0
// 00465c74  e836bb2300           call 0x6a17af
// 00465c79  83c404               add esp, 4
// 00465c7c  c645fc00             mov byte ptr [ebp - 4], 0
// 00465c80  8d4dec               lea ecx, [ebp - 0x14]
// 00465c83  ff15e03e8000         call dword ptr [0x803ee0]
// 00465c89  50                   push eax
// 00465c8a  b998df9600           mov ecx, 0x96df98
// 00465c8f  ff1564248000         call dword ptr [0x802464]
// 00465c95  50                   push eax
// 00465c96  8d8d74ffffff         lea ecx, [ebp - 0x8c]
// 00465c9c  51                   push ecx
// 00465c9d  e86e3e0a00           call 0x509b10
// 00465ca2  83c40c               add esp, 0xc
// 00465ca5  8bc8                 mov ecx, eax
// 00465ca7  c645fc04             mov byte ptr [ebp - 4], 4
// 00465cab  ff1564248000         call dword ptr [0x802464]
// 00465cb1  50                   push eax
// 00465cb2  8d4d90               lea ecx, [ebp - 0x70]
// 00465cb5  e8963afaff           call 0x409750
// 00465cba  8d8d74ffffff         lea ecx, [ebp - 0x8c]
// 00465cc0  c645fc06             mov byte ptr [ebp - 4], 6
// 00465cc4  ff1568248000         call dword ptr [0x802468]
// 00465cca  8d4dc8               lea ecx, [ebp - 0x38]
// 00465ccd  c645fc07             mov byte ptr [ebp - 4], 7
// 00465cd1  ff1560248000         call dword ptr [0x802460]
// 00465cd7  8d55c8               lea edx, [ebp - 0x38]
// 00465cda  52                   push edx
// 00465cdb  8d4d90               lea ecx, [ebp - 0x70]
// 00465cde  c645fc08             mov byte ptr [ebp - 4], 8
// 00465ce2  e8f93d1000           call 0x569ae0
// 00465ce7  8d45c8               lea eax, [ebp - 0x38]
// 00465cea  6894ba8100           push 0x81ba94
// 00465cef  50                   push eax
// 00465cf0  ff156c238000         call dword ptr [0x80236c]
// 00465cf6  83c408               add esp, 8
// 00465cf9  8d4dc8               lea ecx, [ebp - 0x38]
// 00465cfc  8ad8                 mov bl, al
// 00465cfe  c645fc07             mov byte ptr [ebp - 4], 7
// 00465d02  ff1568248000         call dword ptr [0x802468]
// 00465d08  8d4d90               lea ecx, [ebp - 0x70]
// 00465d0b  c645fc00             mov byte ptr [ebp - 4], 0
// 00465d0f  e80c991700           call 0x5df620
// 00465d14  8d4dec               lea ecx, [ebp - 0x14]
// 00465d17  ff15143f8000         call dword ptr [0x803f14]
// 00465d1d  8ac3                 mov al, bl
// 00465d1f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00465d22  64890d00000000       mov dword ptr fs:[0], ecx
// 00465d29  5f                   pop edi
// 00465d2a  5e                   pop esi
// 00465d2b  5b                   pop ebx
// 00465d2c  8be5                 mov esp, ebp
// 00465d2e  5d                   pop ebp
// 00465d2f  c3                   ret 

// from server: 90% by colin
// roc 2008-06 00465b50  unit: CSecureHtmlView  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465b50
//

// from server: 84% by king_originala
// roc 2008-06 00465b50  unit: CSecureHtmlView  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465b50
//

struct Url
{
    char data[0x1226];
    unsigned short port;
    int scheme;
    int flags;
    char tail[0x14];

    void Init();
    void f(int, unsigned int);
};

struct Text
{
    void *data;

    Text(const char *);
    __declspec(dllimport) ~Text() throw();
    void lower();
    const char *c_str() const;
};

struct BaseText
{
    void *data;
    __declspec(dllimport) ~BaseText() throw();
};

struct JoinedText
{
    void *data;
    __declspec(dllimport) ~JoinedText() throw();
    const char *c_str() const;
};

struct String
{
    char data[28];

    String();
    String(const char *);
    ~String() throw();
    __declspec(dllimport) const char *c_str() const;
};

struct FormattedString
{
    char data[28];

    ~FormattedString() throw();
    __declspec(dllimport) const char *c_str() const;
};


struct Stream
{
    char data[56];

    Stream(const char *);
    ~Stream();
    void read(String *);
};

extern int sourceCode;
extern const char suffix[];
extern const char trueText[];

extern int (__cdecl *copyText)(char *, unsigned int, const char *, unsigned int);
extern void __cdecl checkResult(int);

extern void (__thiscall *textConstruct)(Text *, const char *);
extern void (__thiscall *textDestroy)(Text *);
extern void (__thiscall *textLower)(Text *);
extern const char *(__thiscall *textChars)(const Text *);

extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDefault)(String *);
extern void (__thiscall *stringDestroy)(String *);
extern const char *(__thiscall *stringChars)(const String *);

extern BaseText __cdecl getBase();
extern JoinedText __cdecl appendText(const BaseText &, const char *);
extern FormattedString __cdecl formatText(const char *, const char *);
extern bool (__cdecl *equalText)(const String &, const char *);

inline Text::Text(const char *p)
{
    textConstruct(this, p);
}

inline const char *JoinedText::c_str() const
{
    return textChars(reinterpret_cast<const Text *>(this));
}

inline void Text::lower()
{
    textLower(this);
}

inline const char *Text::c_str() const
{
    return textChars(this);
}

inline FormattedString::~FormattedString() throw()
{
    stringDestroy(reinterpret_cast<String *>(this));
}

inline String::String()
{
    stringDefault(this);
}

inline String::String(const char *p)
{
    stringConstruct(this, p);
}

inline String::~String() throw()
{
    stringDestroy(this);
}



bool __cdecl isAdSyndicator(int value)
{
    Url url;
    url.Init();
    url.scheme = 2;
    url.flags = 4;
    url.port = 80;
    checkResult(copyText(url.data, 33,
                        reinterpret_cast<const char *>(sourceCode), 4));
    url.f(value, 0);

    if (url.scheme != 0 && (url.scheme <= 1 || url.scheme > 3))
        return false;

    Text site(url.data + 33);
    site.lower();

    static String endpoint(appendText(getBase(), suffix).c_str());

    Stream response(formatText(endpoint.c_str(), site.c_str()).c_str());
    try
    {
        String result;
        response.read(&result);
        return equalText(result, trueText);
    }
    catch (...)
    {
        return false;
    }
}
