// from server: 100% by king_originala
// roc 2008-06 00420d20  unit: CInstanceExplorer  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420d20
//
// 00420d20  56                   push esi
// 00420d21  57                   push edi
// 00420d22  8bf9                 mov edi, ecx
// 00420d24  e8a7681400           call 0x5675d0
// 00420d29  8b3590288000         mov esi, dword ptr [0x802890]
// 00420d2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420d33  85c0                 test eax, eax
// 00420d35  7406                 je 0x420d3d
// 00420d37  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00420d3b  7406                 je 0x420d43
// 00420d3d  ffd6                 call esi
// 00420d3f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420d43  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00420d47  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00420d4b  745b                 je 0x420da8
// 00420d4d  85c0                 test eax, eax
// 00420d4f  750a                 jne 0x420d5b
// 00420d51  ffd6                 call esi
// 00420d53  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420d57  85c0                 test eax, eax
// 00420d59  7404                 je 0x420d5f
// 00420d5b  8b00                 mov eax, dword ptr [eax]
// 00420d5d  eb02                 jmp 0x420d61
// 00420d5f  33c0                 xor eax, eax
// 00420d61  8b542410             mov edx, dword ptr [esp + 0x10]
// 00420d65  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00420d68  7202                 jb 0x420d6c
// 00420d6a  ffd6                 call esi
// 00420d6c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00420d70  8b08                 mov ecx, dword ptr [eax]
// 00420d72  51                   push ecx
// 00420d73  8bcf                 mov ecx, edi
// 00420d75  e8a6661400           call 0x567420
// 00420d7a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420d7e  85c0                 test eax, eax
// 00420d80  750a                 jne 0x420d8c
// 00420d82  ffd6                 call esi
// 00420d84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420d88  85c0                 test eax, eax
// 00420d8a  7404                 je 0x420d90
// 00420d8c  8b08                 mov ecx, dword ptr [eax]
// 00420d8e  eb02                 jmp 0x420d92
// 00420d90  33c9                 xor ecx, ecx
// 00420d92  8b542410             mov edx, dword ptr [esp + 0x10]
// 00420d96  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 00420d99  7206                 jb 0x420da1
// 00420d9b  ffd6                 call esi
// 00420d9d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00420da1  8344241004           add dword ptr [esp + 0x10], 4
// 00420da6  eb8b                 jmp 0x420d33
// 00420da8  5f                   pop edi
// 00420da9  5e                   pop esi
// 00420daa  c21000               ret 0x10

extern "C" void (__cdecl* invalid_parameter_handler)();

struct Container
{
    char padding[16];
    unsigned int* end;
};

struct Iterator
{
    Container** owner;
    unsigned int* current;
};

struct CInstanceExplorer
{
    void clear();
    void append(unsigned int value);
    void assign(Iterator first, Iterator last);
};

void CInstanceExplorer::assign(Iterator first, Iterator last)
{
    clear();
    void (__cdecl* report)() = invalid_parameter_handler;

    for (;;)
    {
        if (!first.owner || first.owner != last.owner)
            report();

        if (first.current == last.current)
            break;

        if (!first.owner)
            report();

        Container* container = first.owner ? *first.owner : 0;
        if (first.current >= container->end)
            report();

        append(*first.current);

        if (!first.owner)
            report();

        container = first.owner ? *first.owner : 0;
        if (first.current >= container->end)
            report();

        ++first.current;
    }
}
