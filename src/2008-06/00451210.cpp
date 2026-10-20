// from server: 100% by colin
// roc 2008-06 00451210  unit: RBX::CameraTiltUpCommand  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00451210
//
// 00451210  6aff                 push -1
// 00451212  68e8e97c00           push 0x7ce9e8
// 00451217  64a100000000         mov eax, dword ptr fs:[0]
// 0045121d  50                   push eax
// 0045121e  64892500000000       mov dword ptr fs:[0], esp
// 00451225  83ec10               sub esp, 0x10
// 00451228  53                   push ebx
// 00451229  55                   push ebp
// 0045122a  56                   push esi
// 0045122b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0045122f  57                   push edi
// 00451230  33ff                 xor edi, edi
// 00451232  57                   push edi
// 00451233  56                   push esi
// 00451234  8d4c241b             lea ecx, [esp + 0x1b]
// 00451238  ff157c238000         call dword ptr [0x80237c]
// 0045123e  8bc8                 mov ecx, eax
// 00451240  ff1580238000         call dword ptr [0x802380]
// 00451246  8be8                 mov ebp, eax
// 00451248  896c2418             mov dword ptr [esp + 0x18], ebp
// 0045124c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00451250  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00451254  897c2428             mov dword ptr [esp + 0x28], edi
// 00451258  897c2414             mov dword ptr [esp + 0x14], edi
// 0045125c  8d642400             lea esp, [esp]
// 00451260  8b442430             mov eax, dword ptr [esp + 0x30]
// 00451264  8b00                 mov eax, dword ptr [eax]
// 00451266  8b08                 mov ecx, dword ptr [eax]
// 00451268  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045126b  56                   push esi
// 0045126c  55                   push ebp
// 0045126d  03c8                 add ecx, eax
// 0045126f  ff15c4238000         call dword ptr [0x8023c4]
// 00451275  8bc8                 mov ecx, eax
// 00451277  ff1574238000         call dword ptr [0x802374]
// 0045127d  85c0                 test eax, eax
// 0045127f  7404                 je 0x451285
// 00451281  8bf8                 mov edi, eax
// 00451283  eb03                 jmp 0x451288
// 00451285  83cfff               or edi, 0xffffffff
// 00451288  83ffff               cmp edi, -1
// 0045128b  0f94442434           sete byte ptr [esp + 0x34]
// 00451290  83ffff               cmp edi, -1
// 00451293  742d                 je 0x4512c2
// 00451295  33f6                 xor esi, esi
// 00451297  85ff                 test edi, edi
// 00451299  7e1f                 jle 0x4512ba
// 0045129b  eb03                 jmp 0x4512a0
// 0045129d  8d4900               lea ecx, [ecx]
// 004512a0  8b03                 mov eax, dword ptr [ebx]
// 004512a2  8bd7                 mov edx, edi
// 004512a4  2bd6                 sub edx, esi
// 004512a6  52                   push edx
// 004512a7  8d0c2e               lea ecx, [esi + ebp]
// 004512aa  51                   push ecx
// 004512ab  8d4804               lea ecx, [eax + 4]
// 004512ae  ff15a0238000         call dword ptr [0x8023a0]
// 004512b4  03f0                 add esi, eax
// 004512b6  3bf7                 cmp esi, edi
// 004512b8  7ce6                 jl 0x4512a0
// 004512ba  017c2414             add dword ptr [esp + 0x14], edi
// 004512be  8b742438             mov esi, dword ptr [esp + 0x38]
// 004512c2  807c243400           cmp byte ptr [esp + 0x34], 0
// 004512c7  7497                 je 0x451260
// 004512c9  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004512d1  85ed                 test ebp, ebp
// 004512d3  7414                 je 0x4512e9
// 004512d5  56                   push esi
// 004512d6  55                   push ebp
// 004512d7  8d4c2440             lea ecx, [esp + 0x40]
// 004512db  ff157c238000         call dword ptr [0x80237c]
// 004512e1  8bc8                 mov ecx, eax
// 004512e3  ff1578238000         call dword ptr [0x802378]
// 004512e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004512ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 004512f1  5f                   pop edi
// 004512f2  5e                   pop esi
// 004512f3  5d                   pop ebp
// 004512f4  5b                   pop ebx
// 004512f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004512fc  83c41c               add esp, 0x1c
// 004512ff  c3                   ret 

struct Allocator {
    char unused;
};

struct Buffer {
    char unused;
};

struct InputBase {
    char unused;
};

struct Input {
    int* table;
};

struct Output {
    int reserved;
    Buffer buffer;
};

extern Allocator* (__thiscall *prepare)(Allocator*, unsigned int, const void*);
extern char* (__thiscall *allocate)(Allocator*);
extern void (__thiscall *deallocate)(Allocator*);
extern Buffer* (__thiscall *rdbuf)(const InputBase*);
extern int (__thiscall *sgetn)(Buffer*, char*, int);
extern int (__thiscall *sputn)(Buffer*, const char*, int);

struct Temporary {
    char* data;
    unsigned int size;

    Temporary(unsigned int);
    ~Temporary();
};

Temporary::Temporary(unsigned int n)
{
    Allocator allocator;
    data = allocate(prepare(&allocator, n, 0));
    size = n;
}

Temporary::~Temporary()
{
    if (data) {
        Allocator allocator;
        deallocate(prepare(&allocator,
                           reinterpret_cast<unsigned int>(data),
                           reinterpret_cast<const void*>(size)));
    }
}

int func_00451210(Input** input, Output** output, unsigned int size)
{
    Temporary temporary(size);
    int total = 0;
    int count = 0;
    Output** destination = output;
    bool done;

    do {
        Input* stream = *input;
        int received = sgetn(
            rdbuf(reinterpret_cast<InputBase*>(
                reinterpret_cast<char*>(stream) + stream->table[1])),
            temporary.data, size);

        count = received ? received : -1;
        done = count == -1;

        if (count != -1) {
            int written = 0;
            while (written < count) {
                Output* currentDestination = *destination;
                written += sputn(&currentDestination->buffer,
                                 temporary.data + written,
                                 count - written);
            }
            total += count;
        }
    } while (!done);

    return total;
}
