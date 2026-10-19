// from server: 47% by colin
// from server: 46% by colin
// roc 2008-06 00455a20  unit: CRobloxDoc  size: 526 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455a20
//
// 00455a20  6aff                 push -1
// 00455a22  64a100000000         mov eax, dword ptr fs:[0]
// 00455a28  68ee227c00           push 0x7c22ee
// 00455a2d  50                   push eax
// 00455a2e  b840100000           mov eax, 0x1040
// 00455a33  64892500000000       mov dword ptr fs:[0], esp
// 00455a3a  e8e1ba2400           call 0x6a1520
// 00455a3f  53                   push ebx
// 00455a40  56                   push esi
// 00455a41  57                   push edi
// 00455a42  8bf9                 mov edi, ecx
// 00455a44  8d8c245c100000       lea ecx, [esp + 0x105c]
// 00455a4b  c784245410000000000000 mov dword ptr [esp + 0x1054], 0
// 00455a56  ff1564248000         call dword ptr [0x802464]
// 00455a5c  50                   push eax
// 00455a5d  8d4c2418             lea ecx, [esp + 0x18]
// 00455a61  ff1558248000         call dword ptr [0x802458]
// 00455a67  8d442414             lea eax, [esp + 0x14]
// 00455a6b  50                   push eax
// 00455a6c  c684245810000001     mov byte ptr [esp + 0x1058], 1
// 00455a74  e897621000           call 0x55bd10
// 00455a79  83c404               add esp, 4
// 00455a7c  8d4c2414             lea ecx, [esp + 0x14]
// 00455a80  8ad8                 mov bl, al
// 00455a82  c684245410000000     mov byte ptr [esp + 0x1054], 0
// 00455a8a  ff1568248000         call dword ptr [0x802468]
// 00455a90  84db                 test bl, bl
// 00455a92  0f84bd000000         je 0x455b55
// 00455a98  8d8c245c100000       lea ecx, [esp + 0x105c]
// 00455a9f  ff1564248000         call dword ptr [0x802464]
// 00455aa5  83ec20               sub esp, 0x20
// 00455aa8  8bcc                 mov ecx, esp
// 00455aaa  89642430             mov dword ptr [esp + 0x30], esp
// 00455aae  50                   push eax
// 00455aaf  e80c1dfeff           call 0x4377c0
// 00455ab4  8d4c2434             lea ecx, [esp + 0x34]
// 00455ab8  51                   push ecx
// 00455ab9  8bcf                 mov ecx, edi
// 00455abb  c684247810000002     mov byte ptr [esp + 0x1078], 2
// 00455ac3  e878d5faff           call 0x403040
// 00455ac8  8b08                 mov ecx, dword ptr [eax]
// 00455aca  c684247410000003     mov byte ptr [esp + 0x1074], 3
// 00455ad2  85c9                 test ecx, ecx
// 00455ad4  7407                 je 0x455add
// 00455ad6  e8c593fcff           call 0x41eea0
// 00455adb  eb02                 jmp 0x455adf
// 00455add  33c0                 xor eax, eax
// 00455adf  8d542450             lea edx, [esp + 0x50]
// 00455ae3  b304                 mov bl, 4
// 00455ae5  52                   push edx
// 00455ae6  8bc8                 mov ecx, eax
// 00455ae8  889c2478100000       mov byte ptr [esp + 0x1078], bl
// 00455aef  e83cc31000           call 0x561e30
// 00455af4  50                   push eax
// 00455af5  8d8c2460100000       lea ecx, [esp + 0x1060]
// 00455afc  c684245810000005     mov byte ptr [esp + 0x1058], 5
// 00455b04  ff150c248000         call dword ptr [0x80240c]
// 00455b0a  8d4c2430             lea ecx, [esp + 0x30]
// 00455b0e  889c2454100000       mov byte ptr [esp + 0x1054], bl
// 00455b15  ff1568248000         call dword ptr [0x802468]
// 00455b1b  8b742418             mov esi, dword ptr [esp + 0x18]
// 00455b1f  c684245410000000     mov byte ptr [esp + 0x1054], 0
// 00455b27  85f6                 test esi, esi
// 00455b29  742a                 je 0x455b55
// 00455b2b  8d4604               lea eax, [esi + 4]
// 00455b2e  83c9ff               or ecx, 0xffffffff
// 00455b31  f00fc108             lock xadd dword ptr [eax], ecx
// 00455b35  751e                 jne 0x455b55
// 00455b37  8b16                 mov edx, dword ptr [esi]
// 00455b39  8b4204               mov eax, dword ptr [edx + 4]
// 00455b3c  8bce                 mov ecx, esi
// 00455b3e  ffd0                 call eax
// 00455b40  8d4e08               lea ecx, [esi + 8]
// 00455b43  83caff               or edx, 0xffffffff
// 00455b46  f00fc111             lock xadd dword ptr [ecx], edx
// 00455b4a  7509                 jne 0x455b55
// 00455b4c  8b06                 mov eax, dword ptr [esi]
// 00455b4e  8b5008               mov edx, dword ptr [eax + 8]
// 00455b51  8bce                 mov ecx, esi
// 00455b53  ffd2                 call edx
// 00455b55  8d4c240c             lea ecx, [esp + 0xc]
// 00455b59  ff15043f8000         call dword ptr [0x803f04]
// 00455b5f  b306                 mov bl, 6
// 00455b61  6a00                 push 0
// 00455b63  8d8c2460100000       lea ecx, [esp + 0x1060]
// 00455b6a  889c2458100000       mov byte ptr [esp + 0x1058], bl
// 00455b71  ff1564248000         call dword ptr [0x802464]
// 00455b77  50                   push eax
// 00455b78  8d4c241c             lea ecx, [esp + 0x1c]
// 00455b7c  e837b82400           call 0x6a13b8
// 00455b81  c684245410000007     mov byte ptr [esp + 0x1054], 7
// 00455b89  8da42400000000       lea esp, [esp]
// 00455b90  68ff0f0000           push 0xfff
// 00455b95  8d442450             lea eax, [esp + 0x50]
// 00455b99  50                   push eax
// 00455b9a  8d4c241c             lea ecx, [esp + 0x1c]
// 00455b9e  e80fb82400           call 0x6a13b2
// 00455ba3  8d4c244c             lea ecx, [esp + 0x4c]
// 00455ba7  8bf0                 mov esi, eax
// 00455ba9  51                   push ecx
// 00455baa  8d4c2410             lea ecx, [esp + 0x10]
// 00455bae  c644345000           mov byte ptr [esp + esi + 0x50], 0
// 00455bb3  ff1550338000         call dword ptr [0x803350]
// 00455bb9  85f6                 test esi, esi
// 00455bbb  75d3                 jne 0x455b90
// 00455bbd  8d4c2414             lea ecx, [esp + 0x14]
// 00455bc1  889c2454100000       mov byte ptr [esp + 0x1054], bl
// 00455bc8  e8dfb72400           call 0x6a13ac
// 00455bcd  8d4c240c             lea ecx, [esp + 0xc]
// 00455bd1  ff15e03e8000         call dword ptr [0x803ee0]
// 00455bd7  83ec1c               sub esp, 0x1c
// 00455bda  8bcc                 mov ecx, esp
// 00455bdc  8964242c             mov dword ptr [esp + 0x2c], esp
// 00455be0  50                   push eax
// 00455be1  ff1558248000         call dword ptr [0x802458]
// 00455be7  8bcf                 mov ecx, edi
// 00455be9  e8d2eeffff           call 0x454ac0
// 00455bee  8d4c240c             lea ecx, [esp + 0xc]
// 00455bf2  8bf0                 mov esi, eax
// 00455bf4  ff15143f8000         call dword ptr [0x803f14]
// 00455bfa  8d8c245c100000       lea ecx, [esp + 0x105c]
// 00455c01  c7842454100000ffffffff mov dword ptr [esp + 0x1054], 0xffffffff
// 00455c0c  ff1568248000         call dword ptr [0x802468]
// 00455c12  8b8c244c100000       mov ecx, dword ptr [esp + 0x104c]
// 00455c19  5f                   pop edi
// 00455c1a  8bc6                 mov eax, esi
// 00455c1c  5e                   pop esi
// 00455c1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00455c24  5b                   pop ebx
// 00455c25  81c44c100000         add esp, 0x104c
// 00455c2b  c21c00               ret 0x1c

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void attach(void*);
};

struct Str {
    void assign(const Str&);
    const char* c_str() const;
    Str(const char*);
    Str();
    __declspec(dllimport) ~Str() throw();
};

struct Inner {
    unsigned char pad[0x94];
    Source* source;
    Result* f(Result* output);
};

struct Doc {
    int f(int, int, int, int, int, int, int);
};

extern "C" {
    void* __stdcall sub_802464();
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
    void __stdcall sub_80240c(void*, void*);
    void __stdcall sub_803350(void*, void*);
    void __stdcall sub_803ee0(void*);
    void __stdcall sub_803f04(void*);
    void __stdcall sub_803f14(void*);
}

void __cdecl sub_6a1520(unsigned int);
void __cdecl sub_6a13b8(void*, const char*);
int __cdecl sub_6a13b2(void*, char*, int);
void __cdecl sub_6a13ac(void*);
bool __cdecl sub_55bd10(void*);
void __cdecl sub_4377c0(void*, void*);
void __cdecl sub_561e30(void*, void*);
void __cdecl sub_41eea0(void*);
int __cdecl sub_454ac0(Doc*);

int Doc::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf[0x1040];
    void* h;
    Str s1;
    Str s2;
    int result;
    bool ok;
    Ref* r;
    Inner* inner;
    Result res;
    int len;

    sub_6a1520(0x1040);

    h = sub_802464();
    sub_802458(&s1);

    ok = sub_55bd10(&s1);
    sub_802468(&s1);

    if (ok) {
        h = sub_802464();
        sub_4377c0(&s2, h);

        inner = (Inner*)this;
        Result* pr = inner->f(&res);
        r = (Ref*)pr->first;
        if (r != 0) {
            sub_41eea0(r);
        } else {
            r = 0;
        }

        sub_561e30(r, &res);
        sub_80240c(&s2, r);
        sub_802468(&s2);

        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->strong, -1) == 1) {
                r->destroy();
                if (_InterlockedExchangeAdd(&r->weak, -1) == 1) {
                    r->destroy();
                }
            }
        }
    }

    sub_803f04(&s1);
    sub_802464();
    sub_6a13b8(&s2, "");
    len = 0;
    do {
        len = sub_6a13b2(&s2, buf, 0xfff);
        buf[len] = 0;
        sub_803350(&s1, buf);
    } while (len != 0);
    sub_6a13ac(&s2);
    sub_803ee0(&s1);

    sub_802458(&s2);
    result = sub_454ac0(this);
    sub_803f14(&s1);
    sub_802468(&s1);

    return result;
}
