// roc 2010-06 00459b20  unit: VCWorkspace::?$CComObject  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00459b20
//
// 00459b20  6aff                 push -1
// 00459b22  68d8289a00           push 0x9a28d8
// 00459b27  64a100000000         mov eax, dword ptr fs:[0]
// 00459b2d  50                   push eax
// 00459b2e  64892500000000       mov dword ptr fs:[0], esp
// 00459b35  83ec10               sub esp, 0x10
// 00459b38  53                   push ebx
// 00459b39  55                   push ebp
// 00459b3a  56                   push esi
// 00459b3b  8b742434             mov esi, dword ptr [esp + 0x34]
// 00459b3f  57                   push edi
// 00459b40  33ff                 xor edi, edi
// 00459b42  57                   push edi
// 00459b43  56                   push esi
// 00459b44  8d4c241b             lea ecx, [esp + 0x1b]
// 00459b48  ff1508a59e00         call dword ptr [0x9ea508]
// 00459b4e  8bc8                 mov ecx, eax
// 00459b50  ff1504a59e00         call dword ptr [0x9ea504]
// 00459b56  8be8                 mov ebp, eax
// 00459b58  896c2418             mov dword ptr [esp + 0x18], ebp
// 00459b5c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00459b60  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00459b64  897c2428             mov dword ptr [esp + 0x28], edi
// 00459b68  897c2414             mov dword ptr [esp + 0x14], edi
// 00459b6c  8d642400             lea esp, [esp]
// 00459b70  8b442430             mov eax, dword ptr [esp + 0x30]
// 00459b74  8b00                 mov eax, dword ptr [eax]
// 00459b76  8b08                 mov ecx, dword ptr [eax]
// 00459b78  8b4904               mov ecx, dword ptr [ecx + 4]
// 00459b7b  56                   push esi
// 00459b7c  55                   push ebp
// 00459b7d  03c8                 add ecx, eax
// 00459b7f  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 00459b85  8bc8                 mov ecx, eax
// 00459b87  ff1510a59e00         call dword ptr [0x9ea510]
// 00459b8d  85c0                 test eax, eax
// 00459b8f  7404                 je 0x459b95
// 00459b91  8bf8                 mov edi, eax
// 00459b93  eb03                 jmp 0x459b98
// 00459b95  83cfff               or edi, 0xffffffff
// 00459b98  83ffff               cmp edi, -1
// 00459b9b  0f94442434           sete byte ptr [esp + 0x34]
// 00459ba0  83ffff               cmp edi, -1
// 00459ba3  742d                 je 0x459bd2
// 00459ba5  33f6                 xor esi, esi
// 00459ba7  85ff                 test edi, edi
// 00459ba9  7e1f                 jle 0x459bca
// 00459bab  eb03                 jmp 0x459bb0
// 00459bad  8d4900               lea ecx, [ecx]
// 00459bb0  8b03                 mov eax, dword ptr [ebx]
// 00459bb2  8bd7                 mov edx, edi
// 00459bb4  2bd6                 sub edx, esi
// 00459bb6  52                   push edx
// 00459bb7  8d0c2e               lea ecx, [esi + ebp]
// 00459bba  51                   push ecx
// 00459bbb  8d4804               lea ecx, [eax + 4]
// 00459bbe  ff15cca49e00         call dword ptr [0x9ea4cc]
// 00459bc4  03f0                 add esi, eax
// 00459bc6  3bf7                 cmp esi, edi
// 00459bc8  7ce6                 jl 0x459bb0
// 00459bca  017c2414             add dword ptr [esp + 0x14], edi
// 00459bce  8b742438             mov esi, dword ptr [esp + 0x38]
// 00459bd2  807c243400           cmp byte ptr [esp + 0x34], 0
// 00459bd7  7497                 je 0x459b70
// 00459bd9  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00459be1  85ed                 test ebp, ebp
// 00459be3  7414                 je 0x459bf9
// 00459be5  56                   push esi
// 00459be6  55                   push ebp
// 00459be7  8d4c2440             lea ecx, [esp + 0x40]
// 00459beb  ff1508a59e00         call dword ptr [0x9ea508]
// 00459bf1  8bc8                 mov ecx, eax
// 00459bf3  ff150ca59e00         call dword ptr [0x9ea50c]
// 00459bf9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00459bfd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00459c01  5f                   pop edi
// 00459c02  5e                   pop esi
// 00459c03  5d                   pop ebp
// 00459c04  5b                   pop ebx
// 00459c05  64890d00000000       mov dword ptr fs:[0], ecx
// 00459c0c  83c41c               add esp, 0x1c
// 00459c0f  c3                   ret 
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