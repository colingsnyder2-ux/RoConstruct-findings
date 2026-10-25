// from server: 100% by king_originala
// roc 2008-06 005e6f70  unit: RBX::Clump  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6f70
//
// 005e6f70  53                   push ebx
// 005e6f71  55                   push ebp
// 005e6f72  56                   push esi
// 005e6f73  57                   push edi
// 005e6f74  8d7128               lea esi, [ecx + 0x28]
// 005e6f77  8d442414             lea eax, [esp + 0x14]
// 005e6f7b  50                   push eax
// 005e6f7c  8bce                 mov ecx, esi
// 005e6f7e  e81da4e3ff           call 0x4213a0
// 005e6f83  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 005e6f86  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005e6f89  7606                 jbe 0x5e6f91
// 005e6f8b  ff1590288000         call dword ptr [0x802890]
// 005e6f91  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005e6f94  8b3e                 mov edi, dword ptr [esi]
// 005e6f96  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 005e6f99  7606                 jbe 0x5e6fa1
// 005e6f9b  ff1590288000         call dword ptr [0x802890]
// 005e6fa1  8b36                 mov esi, dword ptr [esi]
// 005e6fa3  85ff                 test edi, edi
// 005e6fa5  7404                 je 0x5e6fab
// 005e6fa7  3bfe                 cmp edi, esi
// 005e6fa9  7406                 je 0x5e6fb1
// 005e6fab  ff1590288000         call dword ptr [0x802890]
// 005e6fb1  8bcd                 mov ecx, ebp
// 005e6fb3  2bcb                 sub ecx, ebx
// 005e6fb5  68605f5e00           push 0x5e5f60
// 005e6fba  c1f902               sar ecx, 2
// 005e6fbd  51                   push ecx
// 005e6fbe  55                   push ebp
// 005e6fbf  53                   push ebx
// 005e6fc0  e8cbfeffff           call 0x5e6e90
// 005e6fc5  83c410               add esp, 0x10
// 005e6fc8  5f                   pop edi
// 005e6fc9  5e                   pop esi
// 005e6fca  5d                   pop ebp
// 005e6fcb  5b                   pop ebx
// 005e6fcc  c20400               ret 4

extern "C" void (__cdecl *invalid_parameter_noinfo)();

extern void __cdecl compare_elements();
extern void __cdecl sort_elements(unsigned int *, unsigned int *, int,
                                  void (__cdecl *)());

struct Container
{
    void *volatile owner;
    unsigned int reserved[2];
    unsigned int *first;
    unsigned int *last;

    void update(void **);
};

struct Clump
{
    unsigned char reserved[0x28];
    Container elements;

    void sort(void *);
};

void Clump::sort(void *argument)
{
    Container *container = &elements;
    container->update(&argument);

    unsigned int *last = container->last;
    if (container->first > last)
        invalid_parameter_noinfo();

    unsigned int *first = container->first;
    void *owner = container->owner;
    if (first > container->last)
        invalid_parameter_noinfo();

    void *otherOwner = container->owner;
    if (!owner || owner != otherOwner)
        invalid_parameter_noinfo();

    sort_elements(first, last, last - first, compare_elements);
}
