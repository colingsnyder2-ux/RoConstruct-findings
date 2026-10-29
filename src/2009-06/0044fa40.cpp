// roc 2009-06 0044fa40  unit: VCWorkspace::?$CComObject  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044fa40
//
// 0044fa40  6aff                 push -1
// 0044fa42  6868358600           push 0x863568
// 0044fa47  64a100000000         mov eax, dword ptr fs:[0]
// 0044fa4d  50                   push eax
// 0044fa4e  64892500000000       mov dword ptr fs:[0], esp
// 0044fa55  83ec10               sub esp, 0x10
// 0044fa58  53                   push ebx
// 0044fa59  55                   push ebp
// 0044fa5a  56                   push esi
// 0044fa5b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0044fa5f  57                   push edi
// 0044fa60  33ff                 xor edi, edi
// 0044fa62  57                   push edi
// 0044fa63  56                   push esi
// 0044fa64  8d4c241b             lea ecx, [esp + 0x1b]
// 0044fa68  ff15c0e38900         call dword ptr [0x89e3c0]
// 0044fa6e  8bc8                 mov ecx, eax
// 0044fa70  ff15c4e38900         call dword ptr [0x89e3c4]
// 0044fa76  8be8                 mov ebp, eax
// 0044fa78  896c2418             mov dword ptr [esp + 0x18], ebp
// 0044fa7c  8974241c             mov dword ptr [esp + 0x1c], esi
// 0044fa80  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0044fa84  897c2428             mov dword ptr [esp + 0x28], edi
// 0044fa88  897c2414             mov dword ptr [esp + 0x14], edi
// 0044fa8c  8d642400             lea esp, [esp]
// 0044fa90  8b442430             mov eax, dword ptr [esp + 0x30]
// 0044fa94  8b00                 mov eax, dword ptr [eax]
// 0044fa96  8b08                 mov ecx, dword ptr [eax]
// 0044fa98  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044fa9b  56                   push esi
// 0044fa9c  55                   push ebp
// 0044fa9d  03c8                 add ecx, eax
// 0044fa9f  ff1520e48900         call dword ptr [0x89e420]
// 0044faa5  8bc8                 mov ecx, eax
// 0044faa7  ff15b8e38900         call dword ptr [0x89e3b8]
// 0044faad  85c0                 test eax, eax
// 0044faaf  7404                 je 0x44fab5
// 0044fab1  8bf8                 mov edi, eax
// 0044fab3  eb03                 jmp 0x44fab8
// 0044fab5  83cfff               or edi, 0xffffffff
// 0044fab8  83ffff               cmp edi, -1
// 0044fabb  0f94442434           sete byte ptr [esp + 0x34]
// 0044fac0  83ffff               cmp edi, -1
// 0044fac3  742d                 je 0x44faf2
// 0044fac5  33f6                 xor esi, esi
// 0044fac7  85ff                 test edi, edi
// 0044fac9  7e1f                 jle 0x44faea
// 0044facb  eb03                 jmp 0x44fad0
// 0044facd  8d4900               lea ecx, [ecx]
// 0044fad0  8b03                 mov eax, dword ptr [ebx]
// 0044fad2  8bd7                 mov edx, edi
// 0044fad4  2bd6                 sub edx, esi
// 0044fad6  52                   push edx
// 0044fad7  8d0c2e               lea ecx, [esi + ebp]
// 0044fada  51                   push ecx
// 0044fadb  8d4804               lea ecx, [eax + 4]
// 0044fade  ff15fce38900         call dword ptr [0x89e3fc]
// 0044fae4  03f0                 add esi, eax
// 0044fae6  3bf7                 cmp esi, edi
// 0044fae8  7ce6                 jl 0x44fad0
// 0044faea  017c2414             add dword ptr [esp + 0x14], edi
// 0044faee  8b742438             mov esi, dword ptr [esp + 0x38]
// 0044faf2  807c243400           cmp byte ptr [esp + 0x34], 0
// 0044faf7  7497                 je 0x44fa90
// 0044faf9  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0044fb01  85ed                 test ebp, ebp
// 0044fb03  7414                 je 0x44fb19
// 0044fb05  56                   push esi
// 0044fb06  55                   push ebp
// 0044fb07  8d4c2440             lea ecx, [esp + 0x40]
// 0044fb0b  ff15c0e38900         call dword ptr [0x89e3c0]
// 0044fb11  8bc8                 mov ecx, eax
// 0044fb13  ff15bce38900         call dword ptr [0x89e3bc]
// 0044fb19  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0044fb1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044fb21  5f                   pop edi
// 0044fb22  5e                   pop esi
// 0044fb23  5d                   pop ebp
// 0044fb24  5b                   pop ebx
// 0044fb25  64890d00000000       mov dword ptr fs:[0], ecx
// 0044fb2c  83c41c               add esp, 0x1c
// 0044fb2f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAHPAPAUInput@@PAPAUOutput@@I@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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