// from server: 59% by colin
// from server: 57% by king_originala
// roc 2008-06 006f4e60  unit: CXTPControlWindowList  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4e60
//
// 006f4e60  6aff                 push -1
// 006f4e62  6872357e00           push 0x7e3572
// 006f4e67  64a100000000         mov eax, dword ptr fs:[0]
// 006f4e6d  50                   push eax
// 006f4e6e  83ec08               sub esp, 8
// 006f4e71  55                   push ebp
// 006f4e72  56                   push esi
// 006f4e73  57                   push edi
// 006f4e74  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006f4e79  33c4                 xor eax, esp
// 006f4e7b  50                   push eax
// 006f4e7c  8d442418             lea eax, [esp + 0x18]
// 006f4e80  64a300000000         mov dword ptr fs:[0], eax
// 006f4e86  8d4c2410             lea ecx, [esp + 0x10]
// 006f4e8a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006f4e92  ff15043f8000         call dword ptr [0x803f04]
// 006f4e98  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006f4e9c  8bcf                 mov ecx, edi
// 006f4e9e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006f4ea6  ff15e03e8000         call dword ptr [0x803ee0]
// 006f4eac  8bcf                 mov ecx, edi
// 006f4eae  8bf0                 mov esi, eax
// 006f4eb0  ff15e02f8000         call dword ptr [0x802fe0]
// 006f4eb6  03c0                 add eax, eax
// 006f4eb8  50                   push eax
// 006f4eb9  8d4c2414             lea ecx, [esp + 0x14]
// 006f4ebd  ff1584338000         call dword ptr [0x803384]
// 006f4ec3  8bf8                 mov edi, eax
// 006f4ec5  8a06                 mov al, byte ptr [esi]
// 006f4ec7  84c0                 test al, al
// 006f4ec9  742c                 je 0x6f4ef7
// 006f4ecb  8b2d0c288000         mov ebp, dword ptr [0x80280c]
// 006f4ed1  3c26                 cmp al, 0x26
// 006f4ed3  7503                 jne 0x6f4ed8
// 006f4ed5  8807                 mov byte ptr [edi], al
// 006f4ed7  47                   inc edi
// 006f4ed8  0fbe06               movsx eax, byte ptr [esi]
// 006f4edb  50                   push eax
// 006f4edc  ffd5                 call ebp
// 006f4ede  83c404               add esp, 4
// 006f4ee1  85c0                 test eax, eax
// 006f4ee3  7406                 je 0x6f4eeb
// 006f4ee5  8a0e                 mov cl, byte ptr [esi]
// 006f4ee7  880f                 mov byte ptr [edi], cl
// 006f4ee9  47                   inc edi
// 006f4eea  46                   inc esi
// 006f4eeb  8a16                 mov dl, byte ptr [esi]
// 006f4eed  46                   inc esi
// 006f4eee  8817                 mov byte ptr [edi], dl
// 006f4ef0  8a06                 mov al, byte ptr [esi]
// 006f4ef2  47                   inc edi
// 006f4ef3  84c0                 test al, al
// 006f4ef5  75da                 jne 0x6f4ed1
// 006f4ef7  6aff                 push -1
// 006f4ef9  8d4c2414             lea ecx, [esp + 0x14]
// 006f4efd  c60700               mov byte ptr [edi], 0
// 006f4f00  ff1580338000         call dword ptr [0x803380]
// 006f4f06  8d4c2414             lea ecx, [esp + 0x14]
// 006f4f0a  ff15043f8000         call dword ptr [0x803f04]
// 006f4f10  8b742430             mov esi, dword ptr [esp + 0x30]
// 006f4f14  c644242001           mov byte ptr [esp + 0x20], 1
// 006f4f19  85f6                 test esi, esi
// 006f4f1b  7507                 jne 0x6f4f24
// 006f4f1d  8d442410             lea eax, [esp + 0x10]
// 006f4f21  50                   push eax
// 006f4f22  eb5b                 jmp 0x6f4f7f
// 006f4f24  83fe0a               cmp esi, 0xa
// 006f4f27  8d4c2410             lea ecx, [esp + 0x10]
// 006f4f2b  7d14                 jge 0x6f4f41
// 006f4f2d  ff15e03e8000         call dword ptr [0x803ee0]
// 006f4f33  50                   push eax
// 006f4f34  56                   push esi
// 006f4f35  6844968500           push 0x859644
// 006f4f3a  8d4c2420             lea ecx, [esp + 0x20]
// 006f4f3e  51                   push ecx
// 006f4f3f  eb30                 jmp 0x6f4f71
// 006f4f41  751c                 jne 0x6f4f5f
// 006f4f43  ff15e03e8000         call dword ptr [0x803ee0]
// 006f4f49  50                   push eax
// 006f4f4a  8d542418             lea edx, [esp + 0x18]
// 006f4f4e  683c968500           push 0x85963c
// 006f4f53  52                   push edx
// 006f4f54  ff15dc3e8000         call dword ptr [0x803edc]
// 006f4f5a  83c40c               add esp, 0xc
// 006f4f5d  eb1b                 jmp 0x6f4f7a
// 006f4f5f  ff15e03e8000         call dword ptr [0x803ee0]
// 006f4f65  50                   push eax
// 006f4f66  56                   push esi
// 006f4f67  6834968500           push 0x859634
// 006f4f6c  8d442420             lea eax, [esp + 0x20]
// 006f4f70  50                   push eax
// 006f4f71  ff15dc3e8000         call dword ptr [0x803edc]
// 006f4f77  83c410               add esp, 0x10
// 006f4f7a  8d4c2414             lea ecx, [esp + 0x14]
// 006f4f7e  51                   push ecx
// 006f4f7f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006f4f83  8bce                 mov ecx, esi
// 006f4f85  ff15d43e8000         call dword ptr [0x803ed4]
// 006f4f8b  8d4c2414             lea ecx, [esp + 0x14]
// 006f4f8f  ff15143f8000         call dword ptr [0x803f14]
// 006f4f95  8d4c2410             lea ecx, [esp + 0x10]
// 006f4f99  ff15143f8000         call dword ptr [0x803f14]
// 006f4f9f  8bc6                 mov eax, esi
// 006f4fa1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f4fa5  64890d00000000       mov dword ptr fs:[0], ecx
// 006f4fac  59                   pop ecx
// 006f4fad  5f                   pop edi
// 006f4fae  5e                   pop esi
// 006f4faf  5d                   pop ebp
// 006f4fb0  83c414               add esp, 0x14
// 006f4fb3  c3                   ret 

struct CString;

extern void (__thiscall *StringConstruct)(CString*);
extern void (__thiscall *StringCopyConstruct)(CString*, const CString&);
extern void (__thiscall *StringDestroy)(CString*);
extern const char* (__thiscall *StringText)(const CString*);
extern int (__thiscall *StringLength)(const CString*);
extern char* (__thiscall *StringGetBuffer)(CString*, int);
extern void (__thiscall *StringReleaseBuffer)(CString*, int);
extern void (__cdecl *StringFormat)(CString*, const char*, ...);
extern "C" int (__cdecl *_ismbblead)(unsigned int);

struct CString
{
    char* data;

    CString();
    __declspec(dllimport) ~CString() throw();
    operator const char*() const;
    int GetLength() const;
    char* GetBuffer(int);
    void ReleaseBuffer(int = -1);
};

inline CString::CString()
{
    StringConstruct(this);
}

inline CString::operator const char*() const
{
    return StringText(this);
}

inline int CString::GetLength() const
{
    return StringLength(this);
}

inline char* CString::GetBuffer(int length)
{
    return StringGetBuffer(this, length);
}

inline void CString::ReleaseBuffer(int length)
{
    StringReleaseBuffer(this, length);
}

CString* __cdecl FormatWindowCaption(
    CString* result, const CString& caption, int index)
{
    CString escaped;
    const char* source = caption;
    char* destination = escaped.GetBuffer(caption.GetLength() * 2);

    if (*source)
    {
        int (__cdecl *isLead)(unsigned int) = _ismbblead;
        do
        {
            if (*source == '&')
                *destination++ = *source;

            if (isLead(*source))
                *destination++ = *source++;

            *destination++ = *source++;
        } while (*source);
    }

    *destination = 0;
    escaped.ReleaseBuffer();

    CString formatted;
    const CString* selected;

    if (index == 0)
    {
        selected = &escaped;
    }
    else
    {
        if (index < 10)
            StringFormat(&formatted, "&%i %s", index, (const char*)escaped);
        else if (index == 10)
            StringFormat(&formatted, "1&0 %s", (const char*)escaped);
        else
            StringFormat(&formatted, "%i %s", index, (const char*)escaped);

        selected = &formatted;
    }

    StringCopyConstruct(result, *selected);
    return result;
}
