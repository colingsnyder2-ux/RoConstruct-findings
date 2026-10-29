// roc 2009-12 004573e0  unit: VCWorkspace::?$CComObject  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004573e0
//
// 004573e0  6aff                 push -1
// 004573e2  6848ed9400           push 0x94ed48
// 004573e7  64a100000000         mov eax, dword ptr fs:[0]
// 004573ed  50                   push eax
// 004573ee  64892500000000       mov dword ptr fs:[0], esp
// 004573f5  83ec10               sub esp, 0x10
// 004573f8  53                   push ebx
// 004573f9  55                   push ebp
// 004573fa  56                   push esi
// 004573fb  8b742434             mov esi, dword ptr [esp + 0x34]
// 004573ff  57                   push edi
// 00457400  33ff                 xor edi, edi
// 00457402  57                   push edi
// 00457403  56                   push esi
// 00457404  8d4c241b             lea ecx, [esp + 0x1b]
// 00457408  ff1500b69800         call dword ptr [0x98b600]
// 0045740e  8bc8                 mov ecx, eax
// 00457410  ff1504b69800         call dword ptr [0x98b604]
// 00457416  8be8                 mov ebp, eax
// 00457418  896c2418             mov dword ptr [esp + 0x18], ebp
// 0045741c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00457420  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00457424  897c2428             mov dword ptr [esp + 0x28], edi
// 00457428  897c2414             mov dword ptr [esp + 0x14], edi
// 0045742c  8d642400             lea esp, [esp]
// 00457430  8b442430             mov eax, dword ptr [esp + 0x30]
// 00457434  8b00                 mov eax, dword ptr [eax]
// 00457436  8b08                 mov ecx, dword ptr [eax]
// 00457438  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045743b  56                   push esi
// 0045743c  55                   push ebp
// 0045743d  03c8                 add ecx, eax
// 0045743f  ff1560b69800         call dword ptr [0x98b660]
// 00457445  8bc8                 mov ecx, eax
// 00457447  ff15f8b59800         call dword ptr [0x98b5f8]
// 0045744d  85c0                 test eax, eax
// 0045744f  7404                 je 0x457455
// 00457451  8bf8                 mov edi, eax
// 00457453  eb03                 jmp 0x457458
// 00457455  83cfff               or edi, 0xffffffff
// 00457458  83ffff               cmp edi, -1
// 0045745b  0f94442434           sete byte ptr [esp + 0x34]
// 00457460  83ffff               cmp edi, -1
// 00457463  742d                 je 0x457492
// 00457465  33f6                 xor esi, esi
// 00457467  85ff                 test edi, edi
// 00457469  7e1f                 jle 0x45748a
// 0045746b  eb03                 jmp 0x457470
// 0045746d  8d4900               lea ecx, [ecx]
// 00457470  8b03                 mov eax, dword ptr [ebx]
// 00457472  8bd7                 mov edx, edi
// 00457474  2bd6                 sub edx, esi
// 00457476  52                   push edx
// 00457477  8d0c2e               lea ecx, [esi + ebp]
// 0045747a  51                   push ecx
// 0045747b  8d4804               lea ecx, [eax + 4]
// 0045747e  ff153cb69800         call dword ptr [0x98b63c]
// 00457484  03f0                 add esi, eax
// 00457486  3bf7                 cmp esi, edi
// 00457488  7ce6                 jl 0x457470
// 0045748a  017c2414             add dword ptr [esp + 0x14], edi
// 0045748e  8b742438             mov esi, dword ptr [esp + 0x38]
// 00457492  807c243400           cmp byte ptr [esp + 0x34], 0
// 00457497  7497                 je 0x457430
// 00457499  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004574a1  85ed                 test ebp, ebp
// 004574a3  7414                 je 0x4574b9
// 004574a5  56                   push esi
// 004574a6  55                   push ebp
// 004574a7  8d4c2440             lea ecx, [esp + 0x40]
// 004574ab  ff1500b69800         call dword ptr [0x98b600]
// 004574b1  8bc8                 mov ecx, eax
// 004574b3  ff15fcb59800         call dword ptr [0x98b5fc]
// 004574b9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004574bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004574c1  5f                   pop edi
// 004574c2  5e                   pop esi
// 004574c3  5d                   pop ebp
// 004574c4  5b                   pop ebx
// 004574c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004574cc  83c41c               add esp, 0x1c
// 004574cf  c3                   ret 
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