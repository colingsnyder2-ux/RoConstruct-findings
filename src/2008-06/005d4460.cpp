// from server: 100% by king_originala
// roc 2008-06 005d4460  unit: RBX::VSkin::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4460
//
// 005d4460  83ec08               sub esp, 8
// 005d4463  53                   push ebx
// 005d4464  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005d446a  55                   push ebp
// 005d446b  56                   push esi
// 005d446c  8bf1                 mov esi, ecx
// 005d446e  8baefc010000         mov ebp, dword ptr [esi + 0x1fc]
// 005d4474  57                   push edi
// 005d4475  39aef8010000         cmp dword ptr [esi + 0x1f8], ebp
// 005d447b  7602                 jbe 0x5d447f
// 005d447d  ffd3                 call ebx
// 005d447f  8bbef8010000         mov edi, dword ptr [esi + 0x1f8]
// 005d4485  8b86ec010000         mov eax, dword ptr [esi + 0x1ec]
// 005d448b  89442410             mov dword ptr [esp + 0x10], eax
// 005d448f  3bbefc010000         cmp edi, dword ptr [esi + 0x1fc]
// 005d4495  7602                 jbe 0x5d4499
// 005d4497  ffd3                 call ebx
// 005d4499  8bb6ec010000         mov esi, dword ptr [esi + 0x1ec]
// 005d449f  90                   nop 
// 005d44a0  85f6                 test esi, esi
// 005d44a2  7406                 je 0x5d44aa
// 005d44a4  3b742410             cmp esi, dword ptr [esp + 0x10]
// 005d44a8  7402                 je 0x5d44ac
// 005d44aa  ffd3                 call ebx
// 005d44ac  3bfd                 cmp edi, ebp
// 005d44ae  7448                 je 0x5d44f8
// 005d44b0  85f6                 test esi, esi
// 005d44b2  753c                 jne 0x5d44f0
// 005d44b4  ffd3                 call ebx
// 005d44b6  33c0                 xor eax, eax
// 005d44b8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d44bb  7202                 jb 0x5d44bf
// 005d44bd  ffd3                 call ebx
// 005d44bf  8b0f                 mov ecx, dword ptr [edi]
// 005d44c1  6a00                 push 0
// 005d44c3  68242f9500           push 0x952f24
// 005d44c8  6808699300           push 0x936908
// 005d44cd  6a00                 push 0
// 005d44cf  51                   push ecx
// 005d44d0  e8f1d20c00           call 0x6a17c6
// 005d44d5  83c414               add esp, 0x14
// 005d44d8  85c0                 test eax, eax
// 005d44da  751e                 jne 0x5d44fa
// 005d44dc  85f6                 test esi, esi
// 005d44de  7514                 jne 0x5d44f4
// 005d44e0  ffd3                 call ebx
// 005d44e2  33c0                 xor eax, eax
// 005d44e4  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d44e7  7202                 jb 0x5d44eb
// 005d44e9  ffd3                 call ebx
// 005d44eb  83c704               add edi, 4
// 005d44ee  ebb0                 jmp 0x5d44a0
// 005d44f0  8b06                 mov eax, dword ptr [esi]
// 005d44f2  ebc4                 jmp 0x5d44b8
// 005d44f4  8b06                 mov eax, dword ptr [esi]
// 005d44f6  ebec                 jmp 0x5d44e4
// 005d44f8  33c0                 xor eax, eax
// 005d44fa  5f                   pop edi
// 005d44fb  5e                   pop esi
// 005d44fc  5d                   pop ebp
// 005d44fd  5b                   pop ebx
// 005d44fe  83c408               add esp, 8
// 005d4501  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl _RTDynamicCast(void*, long, void*, void*, int);
extern "C" char model_modifier_type;
extern "C" char skin_type;

struct Container {
    unsigned char padding[16];
    void** end;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* proxy;
    void** position;
};

struct S {
    unsigned char padding[0x1ec];
    Proxy* proxy;
    unsigned char gap[8];
    void** begin;
    void** end;
    void* f();
};

void* S::f()
{
    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    Iterator last;
    last.position = end;
    if (begin > last.position)
        invalid();
    last.proxy = proxy;

    Iterator current;
    current.position = begin;
    if (current.position > end)
        invalid();
    current.proxy = proxy;

    for (;;) {
        if (!current.proxy || current.proxy != last.proxy)
            invalid();

        if (current.position == last.position)
            return 0;

        if (!current.proxy)
            invalid();
        Container* container =
            current.proxy ? current.proxy->container : 0;

        if (current.position >= container->end)
            invalid();

        void* result = _RTDynamicCast(
            *current.position, 0,
            &model_modifier_type, &skin_type, 0);
        if (result)
            return result;

        if (!current.proxy)
            invalid();
        container = current.proxy ? current.proxy->container : 0;

        if (current.position >= container->end)
            invalid();

        ++current.position;
    }
}
