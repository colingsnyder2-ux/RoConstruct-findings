// from server: 94% by colin
// from server: 93% by king_originala
// roc 2008-06 0057edb0  unit: RBX::ClearBackpack  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057edb0
//
// 0057edb0  83ec08               sub esp, 8
// 0057edb3  53                   push ebx
// 0057edb4  55                   push ebp
// 0057edb5  56                   push esi
// 0057edb6  8bf1                 mov esi, ecx
// 0057edb8  8bae4c010000         mov ebp, dword ptr [esi + 0x14c]
// 0057edbe  57                   push edi
// 0057edbf  39ae48010000         cmp dword ptr [esi + 0x148], ebp
// 0057edc5  7606                 jbe 0x57edcd
// 0057edc7  ff1590288000         call dword ptr [0x802890]
// 0057edcd  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 0057edd3  3bbe4c010000         cmp edi, dword ptr [esi + 0x14c]
// 0057edd9  7606                 jbe 0x57ede1
// 0057eddb  ff1590288000         call dword ptr [0x802890]
// 0057ede1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057ede5  8b9e3c010000         mov ebx, dword ptr [esi + 0x13c]
// 0057edeb  50                   push eax
// 0057edec  55                   push ebp
// 0057eded  57                   push edi
// 0057edee  897c2420             mov dword ptr [esp + 0x20], edi
// 0057edf2  e8c9e9ffff           call 0x57d7c0
// 0057edf7  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0057edfd  83c40c               add esp, 0xc
// 0057ee00  8be8                 mov ebp, eax
// 0057ee02  39be48010000         cmp dword ptr [esi + 0x148], edi
// 0057ee08  7606                 jbe 0x57ee10
// 0057ee0a  ff1590288000         call dword ptr [0x802890]
// 0057ee10  8bb63c010000         mov esi, dword ptr [esi + 0x13c]
// 0057ee16  85db                 test ebx, ebx
// 0057ee18  7404                 je 0x57ee1e
// 0057ee1a  3bde                 cmp ebx, esi
// 0057ee1c  740a                 je 0x57ee28
// 0057ee1e  8b3590288000         mov esi, dword ptr [0x802890]
// 0057ee24  ffd6                 call esi
// 0057ee26  eb06                 jmp 0x57ee2e
// 0057ee28  8b3590288000         mov esi, dword ptr [0x802890]
// 0057ee2e  3bef                 cmp ebp, edi
// 0057ee30  741e                 je 0x57ee50
// 0057ee32  85db                 test ebx, ebx
// 0057ee34  7516                 jne 0x57ee4c
// 0057ee36  ffd6                 call esi
// 0057ee38  3b6b10               cmp ebp, dword ptr [ebx + 0x10]
// 0057ee3b  7202                 jb 0x57ee3f
// 0057ee3d  ffd6                 call esi
// 0057ee3f  8b4500               mov eax, dword ptr [ebp]
// 0057ee42  5f                   pop edi
// 0057ee43  5e                   pop esi
// 0057ee44  5d                   pop ebp
// 0057ee45  5b                   pop ebx
// 0057ee46  83c408               add esp, 8
// 0057ee49  c20400               ret 4
// 0057ee4c  8b1b                 mov ebx, dword ptr [ebx]
// 0057ee4e  ebe8                 jmp 0x57ee38
// 0057ee50  5f                   pop edi
// 0057ee51  5e                   pop esi
// 0057ee52  5d                   pop ebp
// 0057ee53  33c0                 xor eax, eax
// 0057ee55  5b                   pop ebx
// 0057ee56  83c408               add esp, 8
// 0057ee59  c20400               ret 4

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

typedef bool (__cdecl *Pred)(int);
int* __cdecl find_if(int* first, int* last, Pred pred);

struct Container
{
    char padding[16];
    int* last;
};

struct Proxy
{
    Container* owner;
};

struct Iterator
{
    Proxy* proxy;
    int* volatile position;
};

struct S
{
    char padding[316];
    Proxy* proxy;
    char padding2[8];
    int* first;
    int* last;

    int f(Pred pred);
};

int S::f(Pred pred)
{
    Iterator iterator;
    int* finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();

    int* start = first;
    if (start > last)
        _invalid_parameter_noinfo();

    Proxy* saved = proxy;
    iterator.position = start;
    int* result = find_if(start, finish, pred);

    finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();

    Proxy* current = *reinterpret_cast<Proxy* volatile*>(&proxy);
    void (__cdecl* invalid)();
    if (saved)
    {
        if (saved == current)
            invalid = _invalid_parameter_noinfo;
        else
        {
            invalid = _invalid_parameter_noinfo;
            invalid();
        }
    }
    else
    {
        invalid = _invalid_parameter_noinfo;
        invalid();
    }

    if (result != finish)
    {
        if (!saved)
            invalid();
        else
            saved = reinterpret_cast<Proxy*>(saved->owner);

        if (result >= reinterpret_cast<Container*>(saved)->last)
            invalid();

        return *result;
    }
    return 0;
}
