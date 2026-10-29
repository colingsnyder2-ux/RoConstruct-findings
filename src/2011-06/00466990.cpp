// roc 2011-06 00466990  unit: VCRoblox3D::?$CComObject  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00466990
//
// 00466990  6aff                 push -1
// 00466992  68c82e9d00           push 0x9d2ec8
// 00466997  64a100000000         mov eax, dword ptr fs:[0]
// 0046699d  50                   push eax
// 0046699e  64892500000000       mov dword ptr fs:[0], esp
// 004669a5  83ec10               sub esp, 0x10
// 004669a8  53                   push ebx
// 004669a9  55                   push ebp
// 004669aa  56                   push esi
// 004669ab  8b742434             mov esi, dword ptr [esp + 0x34]
// 004669af  57                   push edi
// 004669b0  33ff                 xor edi, edi
// 004669b2  57                   push edi
// 004669b3  56                   push esi
// 004669b4  8d4c241b             lea ecx, [esp + 0x1b]
// 004669b8  ff152405a400         call dword ptr [0xa40524]
// 004669be  8bc8                 mov ecx, eax
// 004669c0  ff152005a400         call dword ptr [0xa40520]
// 004669c6  8be8                 mov ebp, eax
// 004669c8  896c2418             mov dword ptr [esp + 0x18], ebp
// 004669cc  8974241c             mov dword ptr [esp + 0x1c], esi
// 004669d0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 004669d4  897c2428             mov dword ptr [esp + 0x28], edi
// 004669d8  897c2414             mov dword ptr [esp + 0x14], edi
// 004669dc  8d642400             lea esp, [esp]
// 004669e0  8b442430             mov eax, dword ptr [esp + 0x30]
// 004669e4  8b00                 mov eax, dword ptr [eax]
// 004669e6  8b08                 mov ecx, dword ptr [eax]
// 004669e8  8b4904               mov ecx, dword ptr [ecx + 4]
// 004669eb  56                   push esi
// 004669ec  55                   push ebp
// 004669ed  03c8                 add ecx, eax
// 004669ef  ff152404a400         call dword ptr [0xa40424]
// 004669f5  8bc8                 mov ecx, eax
// 004669f7  ff152c05a400         call dword ptr [0xa4052c]
// 004669fd  85c0                 test eax, eax
// 004669ff  7404                 je 0x466a05
// 00466a01  8bf8                 mov edi, eax
// 00466a03  eb03                 jmp 0x466a08
// 00466a05  83cfff               or edi, 0xffffffff
// 00466a08  83ffff               cmp edi, -1
// 00466a0b  0f94442434           sete byte ptr [esp + 0x34]
// 00466a10  83ffff               cmp edi, -1
// 00466a13  742d                 je 0x466a42
// 00466a15  33f6                 xor esi, esi
// 00466a17  85ff                 test edi, edi
// 00466a19  7e1f                 jle 0x466a3a
// 00466a1b  eb03                 jmp 0x466a20
// 00466a1d  8d4900               lea ecx, [ecx]
// 00466a20  8b03                 mov eax, dword ptr [ebx]
// 00466a22  8bd7                 mov edx, edi
// 00466a24  2bd6                 sub edx, esi
// 00466a26  52                   push edx
// 00466a27  8d0c2e               lea ecx, [esi + ebp]
// 00466a2a  51                   push ecx
// 00466a2b  8d4804               lea ecx, [eax + 4]
// 00466a2e  ff150004a400         call dword ptr [0xa40400]
// 00466a34  03f0                 add esi, eax
// 00466a36  3bf7                 cmp esi, edi
// 00466a38  7ce6                 jl 0x466a20
// 00466a3a  017c2414             add dword ptr [esp + 0x14], edi
// 00466a3e  8b742438             mov esi, dword ptr [esp + 0x38]
// 00466a42  807c243400           cmp byte ptr [esp + 0x34], 0
// 00466a47  7497                 je 0x4669e0
// 00466a49  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00466a51  85ed                 test ebp, ebp
// 00466a53  7414                 je 0x466a69
// 00466a55  56                   push esi
// 00466a56  55                   push ebp
// 00466a57  8d4c2440             lea ecx, [esp + 0x40]
// 00466a5b  ff152405a400         call dword ptr [0xa40524]
// 00466a61  8bc8                 mov ecx, eax
// 00466a63  ff152805a400         call dword ptr [0xa40528]
// 00466a69  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00466a6d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00466a71  5f                   pop edi
// 00466a72  5e                   pop esi
// 00466a73  5d                   pop ebp
// 00466a74  5b                   pop ebx
// 00466a75  64890d00000000       mov dword ptr fs:[0], ecx
// 00466a7c  83c41c               add esp, 0x1c
// 00466a7f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000006_00451210@ns_ROCX000006@@YAHPAPAUInput@1@PAPAUOutput@1@I@Z)

namespace ns_ROCX000006 {
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

int fn_ROCX000006_00451210(Input** input, Output** output, unsigned int size)
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
}
