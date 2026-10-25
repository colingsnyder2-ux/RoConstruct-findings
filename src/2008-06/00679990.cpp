// from server: 100% by king_originala
// roc 2008-06 00679990  unit: Ogre::RbxSceneManagerFactory  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00679990
//
// 00679990  64a100000000         mov eax, dword ptr fs:[0]
// 00679996  6aff                 push -1
// 00679998  6898a97d00           push 0x7da998
// 0067999d  50                   push eax
// 0067999e  64892500000000       mov dword ptr fs:[0], esp
// 006799a5  83ec18               sub esp, 0x18
// 006799a8  53                   push ebx
// 006799a9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006799ad  83fb63               cmp ebx, 0x63
// 006799b0  57                   push edi
// 006799b1  8bf9                 mov edi, ecx
// 006799b3  0f8f0a010000         jg 0x679ac3
// 006799b9  391f                 cmp dword ptr [edi], ebx
// 006799bb  0f8c02010000         jl 0x679ac3
// 006799c1  56                   push esi
// 006799c2  53                   push ebx
// 006799c3  8d4c2410             lea ecx, [esp + 0x10]
// 006799c7  e8e4feffff           call 0x6798b0
// 006799cc  8d4c240c             lea ecx, [esp + 0xc]
// 006799d0  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006799d8  e843f9dbff           call 0x439320
// 006799dd  be01000000           mov esi, 1
// 006799e2  3bde                 cmp ebx, esi
// 006799e4  7c22                 jl 0x679a08
// 006799e6  8b07                 mov eax, dword ptr [edi]
// 006799e8  2bc6                 sub eax, esi
// 006799ea  99                   cdq 
// 006799eb  b964000000           mov ecx, 0x64
// 006799f0  f7f9                 idiv ecx
// 006799f2  8d4c240c             lea ecx, [esp + 0xc]
// 006799f6  8d1492               lea edx, [edx + edx*4]
// 006799f9  8d449708             lea eax, [edi + edx*4 + 8]
// 006799fd  50                   push eax
// 006799fe  e81dffffff           call 0x679920
// 00679a03  46                   inc esi
// 00679a04  3bf3                 cmp esi, ebx
// 00679a06  7ede                 jle 0x6799e6
// 00679a08  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00679a0c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00679a10  55                   push ebp
// 00679a11  8be9                 mov ebp, ecx
// 00679a13  3bc1                 cmp eax, ecx
// 00679a15  760e                 jbe 0x679a25
// 00679a17  ff1590288000         call dword ptr [0x802890]
// 00679a1d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00679a21  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00679a25  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00679a29  8bf0                 mov esi, eax
// 00679a2b  3bc1                 cmp eax, ecx
// 00679a2d  7606                 jbe 0x679a35
// 00679a2f  ff1590288000         call dword ptr [0x802890]
// 00679a35  85ff                 test edi, edi
// 00679a37  7406                 je 0x679a3f
// 00679a39  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00679a3d  7406                 je 0x679a45
// 00679a3f  ff1590288000         call dword ptr [0x802890]
// 00679a45  8bcd                 mov ecx, ebp
// 00679a47  2bce                 sub ecx, esi
// 00679a49  c1f902               sar ecx, 2
// 00679a4c  51                   push ecx
// 00679a4d  55                   push ebp
// 00679a4e  56                   push esi
// 00679a4f  e88cf7ffff           call 0x6791e0
// 00679a54  8bc3                 mov eax, ebx
// 00679a56  99                   cdq 
// 00679a57  2bc2                 sub eax, edx
// 00679a59  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00679a5d  8bf0                 mov esi, eax
// 00679a5f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00679a63  2bd0                 sub edx, eax
// 00679a65  83c40c               add esp, 0xc
// 00679a68  d1fe                 sar esi, 1
// 00679a6a  c1fa02               sar edx, 2
// 00679a6d  5d                   pop ebp
// 00679a6e  3bf2                 cmp esi, edx
// 00679a70  720a                 jb 0x679a7c
// 00679a72  ff1590288000         call dword ptr [0x802890]
// 00679a78  8b442418             mov eax, dword ptr [esp + 0x18]
// 00679a7c  d904b0               fld dword ptr [eax + esi*4]
// 00679a7f  33f6                 xor esi, esi
// 00679a81  d95c2434             fstp dword ptr [esp + 0x34]
// 00679a85  3bc6                 cmp eax, esi
// 00679a87  7409                 je 0x679a92
// 00679a89  50                   push eax
// 00679a8a  e8eb6b0200           call 0x6a067a
// 00679a8f  83c404               add esp, 4
// 00679a92  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00679a96  50                   push eax
// 00679a97  8974241c             mov dword ptr [esp + 0x1c], esi
// 00679a9b  89742420             mov dword ptr [esp + 0x20], esi
// 00679a9f  89742424             mov dword ptr [esp + 0x24], esi
// 00679aa3  e8d26b0200           call 0x6a067a
// 00679aa8  d9442438             fld dword ptr [esp + 0x38]
// 00679aac  83c404               add esp, 4
// 00679aaf  5e                   pop esi
// 00679ab0  5f                   pop edi
// 00679ab1  5b                   pop ebx
// 00679ab2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00679ab6  64890d00000000       mov dword ptr fs:[0], ecx
// 00679abd  83c424               add esp, 0x24
// 00679ac0  c20400               ret 4
// 00679ac3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00679ac7  d905b8c38100         fld dword ptr [0x81c3b8]
// 00679acd  5f                   pop edi
// 00679ace  5b                   pop ebx
// 00679acf  64890d00000000       mov dword ptr fs:[0], ecx
// 00679ad6  83c424               add esp, 0x24
// 00679ad9  c20400               ret 4

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern void __cdecl release(void *) throw();
extern void __cdecl sort_values(float *, float *, int);
extern const float unavailable;

struct Record {
    float value;
    unsigned char rest[16];
};

struct Buffer {
    void *proxy;
    unsigned int reserved[2];
    float *first;
    float *last;
    float *limit;

    Buffer(int);
    void clear();
    void append(const Record &);
    ~Buffer() throw();
};

struct S {
    int count;
    int reserved;
    Record records[100];

    float median(int);
};

Buffer::~Buffer() throw()
{
    if (first)
        release(first);
    first = 0;
    last = 0;
    limit = 0;
    release(proxy);
}

float S::median(int n)
{
    if (n > 99 || count < n)
        return unavailable;

    Buffer values(n);
    values.clear();

    for (int i = 1; i <= n; ++i)
        values.append(records[(count - i) % 100]);

    float *end = values.last;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    void *owner = values.proxy;
    float *begin = values.first;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    if (!owner || owner != values.proxy)
        _invalid_parameter_noinfo();

    sort_values(begin, end, end - begin);

    unsigned int middle = n / 2;
    if (middle >= static_cast<unsigned int>(values.last - values.first))
        _invalid_parameter_noinfo();

    return values.first[middle];
}
