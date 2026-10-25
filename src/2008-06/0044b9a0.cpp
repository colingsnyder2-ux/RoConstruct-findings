// from server: 46% by colin
// roc 2008-06 0044b9a0  unit: CRobloxModule  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044b9a0
//
// 0044b9a0  55                   push ebp
// 0044b9a1  8d6c2490             lea ebp, [esp - 0x70]
// 0044b9a5  83ec70               sub esp, 0x70
// 0044b9a8  6aff                 push -1
// 0044b9aa  68c4117c00           push 0x7c11c4
// 0044b9af  64a100000000         mov eax, dword ptr fs:[0]
// 0044b9b5  50                   push eax
// 0044b9b6  64892500000000       mov dword ptr fs:[0], esp
// 0044b9bd  83ec54               sub esp, 0x54
// 0044b9c0  53                   push ebx
// 0044b9c1  56                   push esi
// 0044b9c2  8bf1                 mov esi, ecx
// 0044b9c4  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0044b9ca  33db                 xor ebx, ebx
// 0044b9cc  57                   push edi
// 0044b9cd  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044b9d0  3bcb                 cmp ecx, ebx
// 0044b9d2  0f85f2000000         jne 0x44baca
// 0044b9d8  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 0044b9de  891df4dc9600         mov dword ptr [0x96dcf4], ebx
// 0044b9e4  3bcb                 cmp ecx, ebx
// 0044b9e6  7408                 je 0x44b9f0
// 0044b9e8  8b01                 mov eax, dword ptr [ecx]
// 0044b9ea  8b10                 mov edx, dword ptr [eax]
// 0044b9ec  6a01                 push 1
// 0044b9ee  ffd2                 call edx
// 0044b9f0  6a01                 push 1
// 0044b9f2  53                   push ebx
// 0044b9f3  8bce                 mov ecx, esi
// 0044b9f5  e826ddffff           call 0x449720
// 0044b9fa  8bf8                 mov edi, eax
// 0044b9fc  897d6c               mov dword ptr [ebp + 0x6c], edi
// 0044b9ff  895dfc               mov dword ptr [ebp - 4], ebx
// 0044ba02  e829f1ffff           call 0x44ab30
// 0044ba07  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0044ba0e  3bfb                 cmp edi, ebx
// 0044ba10  7574                 jne 0x44ba86
// 0044ba12  81c694000000         add esi, 0x94
// 0044ba18  8bce                 mov ecx, esi
// 0044ba1a  ff15d82f8000         call dword ptr [0x802fd8]
// 0044ba20  84c0                 test al, al
// 0044ba22  7533                 jne 0x44ba57
// 0044ba24  8bce                 mov ecx, esi
// 0044ba26  ff15e03e8000         call dword ptr [0x803ee0]
// 0044ba2c  50                   push eax
// 0044ba2d  8d4d50               lea ecx, [ebp + 0x50]
// 0044ba30  ff1558248000         call dword ptr [0x802458]
// 0044ba36  8d4550               lea eax, [ebp + 0x50]
// 0044ba39  50                   push eax
// 0044ba3a  8d4d28               lea ecx, [ebp + 0x28]
// 0044ba3d  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0044ba44  e807e3fbff           call 0x409d50
// 0044ba49  68c81b8d00           push 0x8d1bc8
// 0044ba4e  8d4d28               lea ecx, [ebp + 0x28]
// 0044ba51  51                   push ecx
// 0044ba52  e8355b2500           call 0x6a158c
// 0044ba57  68046a8100           push 0x816a04
// 0044ba5c  8d4d50               lea ecx, [ebp + 0x50]
// 0044ba5f  ff1558248000         call dword ptr [0x802458]
// 0044ba65  8d5550               lea edx, [ebp + 0x50]
// 0044ba68  52                   push edx
// 0044ba69  8d4dc8               lea ecx, [ebp - 0x38]
// 0044ba6c  c745fc03000000       mov dword ptr [ebp - 4], 3
// 0044ba73  e8d8e2fbff           call 0x409d50
// 0044ba78  68c81b8d00           push 0x8d1bc8
// 0044ba7d  8d45c8               lea eax, [ebp - 0x38]
// 0044ba80  50                   push eax
// 0044ba81  e8065b2500           call 0x6a158c
// 0044ba86  89be90000000         mov dword ptr [esi + 0x90], edi
// 0044ba8c  8bc7                 mov eax, edi
// 0044ba8e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044ba91  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ba98  5f                   pop edi
// 0044ba99  5e                   pop esi
// 0044ba9a  5b                   pop ebx
// 0044ba9b  83c570               add ebp, 0x70
// 0044ba9e  8be5                 mov esp, ebp
// 0044baa0  5d                   pop ebp
// 0044baa1  c3                   ret 
// 0044baa2  6aff                 push -1
// 0044baa4  6a00                 push 0
// 0044baa6  6804f10000           push 0xf104
// 0044baab  e8b0562500           call 0x6a1160
// 0044bab0  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0044bab3  85c9                 test ecx, ecx
// 0044bab5  740a                 je 0x44bac1
// 0044bab7  8b11                 mov edx, dword ptr [ecx]
// 0044bab9  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0044babf  ffd0                 call eax
// 0044bac1  6a00                 push 0
// 0044bac3  6a00                 push 0
// 0044bac5  e8c25a2500           call 0x6a158c
// 0044baca  8b11                 mov edx, dword ptr [ecx]
// 0044bacc  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0044bad2  ffd0                 call eax
// 0044bad4  85c0                 test eax, eax
// 0044bad6  752f                 jne 0x44bb07
// 0044bad8  68f4698100           push 0x8169f4
// 0044badd  8d4d50               lea ecx, [ebp + 0x50]
// 0044bae0  ff1558248000         call dword ptr [0x802458]
// 0044bae6  8d4d50               lea ecx, [ebp + 0x50]
// 0044bae9  51                   push ecx
// 0044baea  8d4d00               lea ecx, [ebp]
// 0044baed  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0044baf4  e857e2fbff           call 0x409d50
// 0044baf9  68c81b8d00           push 0x8d1bc8
// 0044bafe  8d5500               lea edx, [ebp]
// 0044bb01  52                   push edx
// 0044bb02  e8855a2500           call 0x6a158c
// 0044bb07  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0044bb0d  8b06                 mov eax, dword ptr [esi]
// 0044bb0f  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0044bb15  51                   push ecx
// 0044bb16  8bce                 mov ecx, esi
// 0044bb18  ffd2                 call edx
// 0044bb1a  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0044bb20  8b01                 mov eax, dword ptr [ecx]
// 0044bb22  8b5078               mov edx, dword ptr [eax + 0x78]
// 0044bb25  ffd2                 call edx
// 0044bb27  85c0                 test eax, eax
// 0044bb29  752f                 jne 0x44bb5a
// 0044bb2b  68e0678100           push 0x8167e0
// 0044bb30  8d4d50               lea ecx, [ebp + 0x50]
// 0044bb33  ff1558248000         call dword ptr [0x802458]
// 0044bb39  8d4550               lea eax, [ebp + 0x50]
// 0044bb3c  50                   push eax
// 0044bb3d  8d4da0               lea ecx, [ebp - 0x60]
// 0044bb40  c745fc05000000       mov dword ptr [ebp - 4], 5
// 0044bb47  e804e2fbff           call 0x409d50
// 0044bb4c  68c81b8d00           push 0x8d1bc8
// 0044bb51  8d4da0               lea ecx, [ebp - 0x60]
// 0044bb54  51                   push ecx
// 0044bb55  e8325a2500           call 0x6a158c
// 0044bb5a  a138c29600           mov eax, dword ptr [0x96c238]
// 0044bb5f  3b8690000000         cmp eax, dword ptr [esi + 0x90]
// 0044bb65  750b                 jne 0x44bb72
// 0044bb67  50                   push eax
// 0044bb68  6a01                 push 1
// 0044bb6a  e8319ffbff           call 0x405aa0
// 0044bb6f  83c408               add esp, 8
// 0044bb72  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0044bb78  8b11                 mov edx, dword ptr [ecx]
// 0044bb7a  8b4268               mov eax, dword ptr [edx + 0x68]
// 0044bb7d  ffd0                 call eax
// 0044bb7f  89456c               mov dword ptr [ebp + 0x6c], eax
// 0044bb82  3bc3                 cmp eax, ebx
// 0044bb84  744e                 je 0x44bbd4
// 0044bb86  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 0044bb8c  8d642400             lea esp, [esp]
// 0044bb90  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0044bb96  8b11                 mov edx, dword ptr [ecx]
// 0044bb98  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0044bb9b  8d456c               lea eax, [ebp + 0x6c]
// 0044bb9e  50                   push eax
// 0044bb9f  ffd2                 call edx
// 0044bba1  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 0044bba7  8bf8                 mov edi, eax
// 0044bba9  c705f4dc960000000000 mov dword ptr [0x96dcf4], 0
// 0044bbb3  85c9                 test ecx, ecx
// 0044bbb5  7408                 je 0x44bbbf
// 0044bbb7  8b01                 mov eax, dword ptr [ecx]
// 0044bbb9  8b10                 mov edx, dword ptr [eax]
// 0044bbbb  6a01                 push 1
// 0044bbbd  ffd2                 call edx
// 0044bbbf  8b4720               mov eax, dword ptr [edi + 0x20]
// 0044bbc2  6a00                 push 0
// 0044bbc4  6a00                 push 0
// 0044bbc6  6864030000           push 0x364
// 0044bbcb  50                   push eax
// 0044bbcc  ffd3                 call ebx
// 0044bbce  837d6c00             cmp dword ptr [ebp + 0x6c], 0
// 0044bbd2  75bc                 jne 0x44bb90
// 0044bbd4  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0044bbda  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044bbdd  5f                   pop edi
// 0044bbde  5e                   pop esi
// 0044bbdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0044bbe6  5b                   pop ebx
// 0044bbe7  83c570               add ebp, 0x70
// 0044bbea  8be5                 mov esp, ebp
// 0044bbec  5d                   pop ebp
// 0044bbed  c3                   ret 

// from server: 78% by king_originala
struct String;

extern bool (__thiscall *stringEmpty)(const String *);
extern const char *(__thiscall *stringData)(const String *);
extern void (__thiscall *stringConstruct)(String *, const char *);

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
    bool empty() const;
    const char *c_str() const;
};

inline String::String(const char *text)
{
    stringConstruct(this, text);
}

inline bool String::empty() const
{
    return stringEmpty(this);
}

inline const char *String::c_str() const
{
    return stringData(this);
}

struct Error {
    unsigned char data[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Document {
    virtual ~Document();
};

extern Document *pendingDocument;
extern void finishOpen();

struct CRobloxModule {
    unsigned char padding[0x90];
    Document *document;
    String errorText;

    Document *open(const char *, int);
    Document *getDocument();
};

Document *CRobloxModule::getDocument()
{
    if (document)
        return document;

    Document *old = pendingDocument;
    pendingDocument = 0;
    if (old)
        delete old;

    Document *result = open(0, 1);
    try {
        finishOpen();
    }
    catch (...) {
        if (result)
            delete result;
        throw;
    }

    if (!result) {
        if (!errorText.empty())
            throw Error(String(errorText.c_str()));
        throw Error(String("OpenDocumentFile returned NULL"));
    }

    document = result;
    return result;
}
