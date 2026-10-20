// from server: 100% by colin
// roc 2008-06 00408890  unit: VCApp::?$CComAggObject  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408890
//
// 00408890  55                   push ebp
// 00408891  8bec                 mov ebp, esp
// 00408893  6aff                 push -1
// 00408895  683bcf7b00           push 0x7bcf3b
// 0040889a  64a100000000         mov eax, dword ptr fs:[0]
// 004088a0  50                   push eax
// 004088a1  64892500000000       mov dword ptr fs:[0], esp
// 004088a8  83ec0c               sub esp, 0xc
// 004088ab  53                   push ebx
// 004088ac  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004088af  56                   push esi
// 004088b0  33f6                 xor esi, esi
// 004088b2  57                   push edi
// 004088b3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004088b6  3bde                 cmp ebx, esi
// 004088b8  7518                 jne 0x4088d2
// 004088ba  b803400080           mov eax, 0x80004003
// 004088bf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004088c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004088c9  5f                   pop edi
// 004088ca  5e                   pop esi
// 004088cb  5b                   pop ebx
// 004088cc  8be5                 mov esp, ebp
// 004088ce  5d                   pop ebp
// 004088cf  c20c00               ret 0xc
// 004088d2  bf0e000780           mov edi, 0x8007000e
// 004088d7  6a24                 push 0x24
// 004088d9  8933                 mov dword ptr [ebx], esi
// 004088db  897d10               mov dword ptr [ebp + 0x10], edi
// 004088de  8975fc               mov dword ptr [ebp - 4], esi
// 004088e1  e83a802900           call 0x6a0920
// 004088e6  8bc8                 mov ecx, eax
// 004088e8  83c404               add esp, 4
// 004088eb  894dec               mov dword ptr [ebp - 0x14], ecx
// 004088ee  c645fc01             mov byte ptr [ebp - 4], 1
// 004088f2  3bce                 cmp ecx, esi
// 004088f4  740b                 je 0x408901
// 004088f6  8b4508               mov eax, dword ptr [ebp + 8]
// 004088f9  50                   push eax
// 004088fa  e8f1fdffff           call 0x4086f0
// 004088ff  8bf0                 mov esi, eax
// 00408901  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00408908  85f6                 test esi, esi
// 0040890a  7430                 je 0x40893c
// 0040890c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040890f  8b0e                 mov ecx, dword ptr [esi]
// 00408911  8b01                 mov eax, dword ptr [ecx]
// 00408913  53                   push ebx
// 00408914  52                   push edx
// 00408915  56                   push esi
// 00408916  ffd0                 call eax
// 00408918  8bf8                 mov edi, eax
// 0040891a  85ff                 test edi, edi
// 0040891c  741e                 je 0x40893c
// 0040891e  8b16                 mov edx, dword ptr [esi]
// 00408920  8b420c               mov eax, dword ptr [edx + 0xc]
// 00408923  6a01                 push 1
// 00408925  8bce                 mov ecx, esi
// 00408927  ffd0                 call eax
// 00408929  eb11                 jmp 0x40893c

struct Exception {
    long status;
    Exception(const Exception&);
    ~Exception();
};

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct S
{
    S(void*);
    virtual long __stdcall QueryInterface(const void*, void**);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
    virtual ~S();

    unsigned char data[32];

    static long __stdcall CreateInstance(void*, const void*, void**);
};

long __stdcall S::CreateInstance(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000E;
    S* object = 0;

    try
    {
        object = new S(outer);
    }
    catch (Exception exception)
    {
    }

    if (object)
    {
        status = object->QueryInterface(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
