// from server: 97% by colin
// from server: 96% by king_originala
// roc 2008-06 004030b0  unit: VCWorkspace::?$CComObject  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004030b0
//
// 004030b0  55                   push ebp
// 004030b1  8bec                 mov ebp, esp
// 004030b3  6aff                 push -1
// 004030b5  68cbcb7b00           push 0x7bcbcb
// 004030ba  64a100000000         mov eax, dword ptr fs:[0]
// 004030c0  50                   push eax
// 004030c1  64892500000000       mov dword ptr fs:[0], esp
// 004030c8  83ec0c               sub esp, 0xc
// 004030cb  53                   push ebx
// 004030cc  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004030cf  56                   push esi
// 004030d0  33f6                 xor esi, esi
// 004030d2  57                   push edi
// 004030d3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004030d6  3bde                 cmp ebx, esi
// 004030d8  7518                 jne 0x4030f2
// 004030da  b803400080           mov eax, 0x80004003
// 004030df  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004030e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004030e9  5f                   pop edi
// 004030ea  5e                   pop esi
// 004030eb  5b                   pop ebx
// 004030ec  8be5                 mov esp, ebp
// 004030ee  5d                   pop ebp
// 004030ef  c20c00               ret 0xc
// 004030f2  bf0e000780           mov edi, 0x8007000e
// 004030f7  6a3c                 push 0x3c
// 004030f9  8933                 mov dword ptr [ebx], esi
// 004030fb  897d10               mov dword ptr [ebp + 0x10], edi
// 004030fe  8975fc               mov dword ptr [ebp - 4], esi
// 00403101  e81ad82900           call 0x6a0920
// 00403106  8bc8                 mov ecx, eax
// 00403108  83c404               add esp, 4
// 0040310b  894dec               mov dword ptr [ebp - 0x14], ecx
// 0040310e  c645fc01             mov byte ptr [ebp - 4], 1
// 00403112  3bce                 cmp ecx, esi
// 00403114  740b                 je 0x403121
// 00403116  8b4508               mov eax, dword ptr [ebp + 8]
// 00403119  50                   push eax
// 0040311a  e811f7ffff           call 0x402830
// 0040311f  8bf0                 mov esi, eax
// 00403121  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00403128  85f6                 test esi, esi
// 0040312a  743e                 je 0x40316a
// 0040312c  8d4e08               lea ecx, [esi + 8]
// 0040312f  e88c840600           call 0x46b5c0
// 00403134  8bf8                 mov edi, eax
// 00403136  85ff                 test edi, edi
// 00403138  7c12                 jl 0x40314c
// 0040313a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040313d  8b0e                 mov ecx, dword ptr [esi]
// 0040313f  8b01                 mov eax, dword ptr [ecx]
// 00403141  53                   push ebx
// 00403142  52                   push edx
// 00403143  56                   push esi
// 00403144  ffd0                 call eax
// 00403146  8bf8                 mov edi, eax
// 00403148  85ff                 test edi, edi
// 0040314a  741e                 je 0x40316a
// 0040314c  8b16                 mov edx, dword ptr [esi]
// 0040314e  8b420c               mov eax, dword ptr [edx + 0xc]
// 00403151  6a01                 push 1
// 00403153  8bce                 mov ecx, esi
// 00403155  ffd0                 call eax
// 00403157  eb11                 jmp 0x40316a

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct State {
    char reserved[52];
    long initialize();
};

struct Object {
    virtual long __stdcall query(const void*, void**);
    virtual unsigned long __stdcall addRef();
    virtual unsigned long __stdcall release();
    virtual ~Object();

    char reserved[4];
    State state;

    Object(void*);
};

long __stdcall createObject(void* context, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003UL;

    *result = 0;
    long status = (long)0x8007000EUL;
    Object* object = 0;

    try {
        object = new Object(context);
    }
    catch (...) {
    }

    if (object) {
        status = object->state.initialize();
        if (status >= 0)
            status = object->query(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
