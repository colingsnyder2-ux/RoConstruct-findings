// from server: 100% by king_originala
// roc 2008-06 005f4760  unit: boost::iostreams::Uinput::?$filtering_stream  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4760
//
// 005f4760  6aff                 push -1
// 005f4762  68e8e97c00           push 0x7ce9e8
// 005f4767  64a100000000         mov eax, dword ptr fs:[0]
// 005f476d  50                   push eax
// 005f476e  64892500000000       mov dword ptr fs:[0], esp
// 005f4775  83ec10               sub esp, 0x10
// 005f4778  53                   push ebx
// 005f4779  56                   push esi
// 005f477a  8b742430             mov esi, dword ptr [esp + 0x30]
// 005f477e  57                   push edi
// 005f477f  33ff                 xor edi, edi
// 005f4781  57                   push edi
// 005f4782  56                   push esi
// 005f4783  8d4c2417             lea ecx, [esp + 0x17]
// 005f4787  ff1580238000         call dword ptr [0x802380]
// 005f478d  8bd8                 mov ebx, eax
// 005f478f  895c2414             mov dword ptr [esp + 0x14], ebx
// 005f4793  89742418             mov dword ptr [esp + 0x18], esi
// 005f4797  897c2424             mov dword ptr [esp + 0x24], edi
// 005f479b  897c2410             mov dword ptr [esp + 0x10], edi
// 005f479f  55                   push ebp
// 005f47a0  8b442430             mov eax, dword ptr [esp + 0x30]
// 005f47a4  8b00                 mov eax, dword ptr [eax]
// 005f47a6  8b4808               mov ecx, dword ptr [eax + 8]
// 005f47a9  8b5104               mov edx, dword ptr [ecx + 4]
// 005f47ac  8b440230             mov eax, dword ptr [edx + eax + 0x30]
// 005f47b0  56                   push esi
// 005f47b1  53                   push ebx
// 005f47b2  8bc8                 mov ecx, eax
// 005f47b4  ff1574238000         call dword ptr [0x802374]
// 005f47ba  85c0                 test eax, eax
// 005f47bc  7404                 je 0x5f47c2
// 005f47be  8be8                 mov ebp, eax
// 005f47c0  eb03                 jmp 0x5f47c5
// 005f47c2  83cdff               or ebp, 0xffffffff
// 005f47c5  83fdff               cmp ebp, -1
// 005f47c8  0f94442412           sete byte ptr [esp + 0x12]
// 005f47cd  83fdff               cmp ebp, -1
// 005f47d0  7429                 je 0x5f47fb
// 005f47d2  33ff                 xor edi, edi
// 005f47d4  85ed                 test ebp, ebp
// 005f47d6  7e1f                 jle 0x5f47f7
// 005f47d8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f47dc  8b09                 mov ecx, dword ptr [ecx]
// 005f47de  8bf5                 mov esi, ebp
// 005f47e0  2bf7                 sub esi, edi
// 005f47e2  56                   push esi
// 005f47e3  8d041f               lea eax, [edi + ebx]
// 005f47e6  50                   push eax
// 005f47e7  ff1540258000         call dword ptr [0x802540]
// 005f47ed  03fe                 add edi, esi
// 005f47ef  3bfd                 cmp edi, ebp
// 005f47f1  7ce5                 jl 0x5f47d8
// 005f47f3  8b742438             mov esi, dword ptr [esp + 0x38]
// 005f47f7  016c2414             add dword ptr [esp + 0x14], ebp
// 005f47fb  807c241200           cmp byte ptr [esp + 0x12], 0
// 005f4800  749e                 je 0x5f47a0
// 005f4802  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005f480a  5d                   pop ebp
// 005f480b  85db                 test ebx, ebx
// 005f480d  740c                 je 0x5f481b
// 005f480f  56                   push esi
// 005f4810  53                   push ebx
// 005f4811  8d4c243c             lea ecx, [esp + 0x3c]
// 005f4815  ff1578238000         call dword ptr [0x802378]
// 005f481b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f481f  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f4823  5f                   pop edi
// 005f4824  5e                   pop esi
// 005f4825  5b                   pop ebx
// 005f4826  64890d00000000       mov dword ptr fs:[0], ecx
// 005f482d  83c41c               add esp, 0x1c
// 005f4830  c3                   ret 

struct Allocator {};

struct StreamBuffer {};

struct Input {
    char padding[8];
    const int* virtualBaseTable;
};

struct String {};

extern char* (__thiscall *allocate)(Allocator*, unsigned int, const void*);
extern void (__thiscall *deallocate)(Allocator*, char*, unsigned int);
extern int (__thiscall *sgetn)(StreamBuffer*, char*, int);
extern String& (__thiscall *append)(String*, const char*, unsigned int);

struct Buffer {
    char* data;
    unsigned int size;

    Buffer(unsigned int);
    ~Buffer();
};

inline Buffer::Buffer(unsigned int count)
{
    Allocator allocator;
    data = allocate(&allocator, count, 0);
    size = count;
}

inline Buffer::~Buffer()
{
    if (data) {
        Allocator allocator;
        deallocate(&allocator, data, size);
    }
}

int copy_stream(Input*& input, String*& output, int size)
{
    Buffer buffer(size);
    int total = 0;
    bool finished;

    do {
        Input* source = input;
        StreamBuffer* stream = *reinterpret_cast<StreamBuffer**>(
            reinterpret_cast<char*>(source) +
            source->virtualBaseTable[1] + 48);

        int result = sgetn(stream, buffer.data, size);
        int count = result ? result : -1;

        finished = count == -1;

        if (count != -1) {
            int written = 0;
            while (written < count) {
                int remaining = count - written;
                append(output, buffer.data + written, remaining);
                written += remaining;
            }
            total += count;
        }
    } while (!finished);

    return total;
}
