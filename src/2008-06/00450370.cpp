// from server: 97% by king_originala
// roc 2008-06 00450370  unit: CRobloxDoc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00450370
//
// 00450370  55                   push ebp
// 00450371  8bec                 mov ebp, esp
// 00450373  6aff                 push -1
// 00450375  68a0187c00           push 0x7c18a0
// 0045037a  64a100000000         mov eax, dword ptr fs:[0]
// 00450380  50                   push eax
// 00450381  64892500000000       mov dword ptr fs:[0], esp
// 00450388  83ec10               sub esp, 0x10
// 0045038b  8b4508               mov eax, dword ptr [ebp + 8]
// 0045038e  53                   push ebx
// 0045038f  56                   push esi
// 00450390  33db                 xor ebx, ebx
// 00450392  57                   push edi
// 00450393  8965f0               mov dword ptr [ebp - 0x10], esp
// 00450396  3bc3                 cmp eax, ebx
// 00450398  7518                 jne 0x4503b2
// 0045039a  b803400080           mov eax, 0x80004003
// 0045039f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004503a2  64890d00000000       mov dword ptr fs:[0], ecx
// 004503a9  5f                   pop edi
// 004503aa  5e                   pop esi
// 004503ab  5b                   pop ebx
// 004503ac  8be5                 mov esp, ebp
// 004503ae  5d                   pop ebp
// 004503af  c20400               ret 4
// 004503b2  bf0e000780           mov edi, 0x8007000e
// 004503b7  6a34                 push 0x34
// 004503b9  8918                 mov dword ptr [eax], ebx
// 004503bb  897dec               mov dword ptr [ebp - 0x14], edi
// 004503be  895de8               mov dword ptr [ebp - 0x18], ebx
// 004503c1  895dfc               mov dword ptr [ebp - 4], ebx
// 004503c4  e857052500           call 0x6a0920
// 004503c9  83c404               add esp, 4
// 004503cc  3bc3                 cmp eax, ebx
// 004503ce  740c                 je 0x4503dc
// 004503d0  53                   push ebx
// 004503d1  8bc8                 mov ecx, eax
// 004503d3  e83815fbff           call 0x401910
// 004503d8  8bf0                 mov esi, eax
// 004503da  eb02                 jmp 0x4503de
// 004503dc  33f6                 xor esi, esi
// 004503de  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004503e5  3bf3                 cmp esi, ebx
// 004503e7  743e                 je 0x450427
// 004503e9  ff4620               inc dword ptr [esi + 0x20]
// 004503ec  8bce                 mov ecx, esi
// 004503ee  e8cdb10100           call 0x46b5c0
// 004503f3  8bf8                 mov edi, eax
// 004503f5  3bfb                 cmp edi, ebx
// 004503f7  7c02                 jl 0x4503fb
// 004503f9  33ff                 xor edi, edi
// 004503fb  ff4e20               dec dword ptr [esi + 0x20]
// 004503fe  3bfb                 cmp edi, ebx
// 00450400  7425                 je 0x450427
// 00450402  8b4610               mov eax, dword ptr [esi + 0x10]
// 00450405  8b5014               mov edx, dword ptr [eax + 0x14]
// 00450408  8d4e10               lea ecx, [esi + 0x10]
// 0045040b  6a01                 push 1
// 0045040d  ffd2                 call edx
// 0045040f  33f6                 xor esi, esi
// 00450411  eb14                 jmp 0x450427

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Interface
{
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void destroy(unsigned int);
};

struct Object
{
    unsigned char padding0[16];
    Interface interfacePart;
    unsigned char padding1[12];
    long references;
    unsigned char padding2[16];

    Object(int) throw();
    long initialize();
};

long __stdcall func_00450370(Object** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000e;
    Object* object = 0;

    try
    {
        object = new Object(0);
    }
    catch (...)
    {
    }

    if (object)
    {
        ++object->references;
        status = object->initialize();
        if (status >= 0)
            status = 0;
        --object->references;

        if (status != 0)
        {
            object->interfacePart.destroy(1);
            object = 0;
        }
    }

    *result = object;
    return status;
}
