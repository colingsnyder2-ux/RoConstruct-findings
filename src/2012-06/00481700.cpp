// roc 2012-06 00481700  unit: CRobloxDoc  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00481700
//
// 00481700  6aff                 push -1
// 00481702  683819aa00           push 0xaa1938
// 00481707  64a100000000         mov eax, dword ptr fs:[0]
// 0048170d  50                   push eax
// 0048170e  64892500000000       mov dword ptr fs:[0], esp
// 00481715  83ec10               sub esp, 0x10
// 00481718  53                   push ebx
// 00481719  55                   push ebp
// 0048171a  56                   push esi
// 0048171b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0048171f  57                   push edi
// 00481720  33ff                 xor edi, edi
// 00481722  57                   push edi
// 00481723  56                   push esi
// 00481724  8d4c241b             lea ecx, [esp + 0x1b]
// 00481728  ff15e825b200         call dword ptr [0xb225e8]
// 0048172e  8bc8                 mov ecx, eax
// 00481730  ff158025b200         call dword ptr [0xb22580]
// 00481736  8be8                 mov ebp, eax
// 00481738  896c2418             mov dword ptr [esp + 0x18], ebp
// 0048173c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00481740  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00481744  897c2428             mov dword ptr [esp + 0x28], edi
// 00481748  897c2414             mov dword ptr [esp + 0x14], edi
// 0048174c  8d642400             lea esp, [esp]
// 00481750  8b442430             mov eax, dword ptr [esp + 0x30]
// 00481754  8b00                 mov eax, dword ptr [eax]
// 00481756  8b08                 mov ecx, dword ptr [eax]
// 00481758  8b4904               mov ecx, dword ptr [ecx + 4]
// 0048175b  56                   push esi
// 0048175c  55                   push ebp
// 0048175d  03c8                 add ecx, eax
// 0048175f  ff151427b200         call dword ptr [0xb22714]
// 00481765  8bc8                 mov ecx, eax
// 00481767  ff157c25b200         call dword ptr [0xb2257c]
// 0048176d  85c0                 test eax, eax
// 0048176f  7404                 je 0x481775
// 00481771  8bf8                 mov edi, eax
// 00481773  eb03                 jmp 0x481778
// 00481775  83cfff               or edi, 0xffffffff
// 00481778  83ffff               cmp edi, -1
// 0048177b  0f94442434           sete byte ptr [esp + 0x34]
// 00481780  83ffff               cmp edi, -1
// 00481783  742d                 je 0x4817b2
// 00481785  33f6                 xor esi, esi
// 00481787  85ff                 test edi, edi
// 00481789  7e1f                 jle 0x4817aa
// 0048178b  eb03                 jmp 0x481790
// 0048178d  8d4900               lea ecx, [ecx]
// 00481790  8b03                 mov eax, dword ptr [ebx]
// 00481792  8bd7                 mov edx, edi
// 00481794  2bd6                 sub edx, esi
// 00481796  52                   push edx
// 00481797  8d0c2e               lea ecx, [esi + ebp]
// 0048179a  51                   push ecx
// 0048179b  8d4804               lea ecx, [eax + 4]
// 0048179e  ff151426b200         call dword ptr [0xb22614]
// 004817a4  03f0                 add esi, eax
// 004817a6  3bf7                 cmp esi, edi
// 004817a8  7ce6                 jl 0x481790
// 004817aa  017c2414             add dword ptr [esp + 0x14], edi
// 004817ae  8b742438             mov esi, dword ptr [esp + 0x38]
// 004817b2  807c243400           cmp byte ptr [esp + 0x34], 0
// 004817b7  7497                 je 0x481750
// 004817b9  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004817c1  85ed                 test ebp, ebp
// 004817c3  7414                 je 0x4817d9
// 004817c5  56                   push esi
// 004817c6  55                   push ebp
// 004817c7  8d4c2440             lea ecx, [esp + 0x40]
// 004817cb  ff15e825b200         call dword ptr [0xb225e8]
// 004817d1  8bc8                 mov ecx, eax
// 004817d3  ff15f825b200         call dword ptr [0xb225f8]
// 004817d9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004817dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004817e1  5f                   pop edi
// 004817e2  5e                   pop esi
// 004817e3  5d                   pop ebp
// 004817e4  5b                   pop ebx
// 004817e5  64890d00000000       mov dword ptr fs:[0], ecx
// 004817ec  83c41c               add esp, 0x1c
// 004817ef  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00451210@@YAHPAPAUInput@@PAPAUOutput@@I@Z)

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