// from server: 97% by colin
// roc 2008-06 00416d20  unit: VCContent::?$CComAggObject  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416d20
//
// 00416d20  55                   push ebp
// 00416d21  8bec                 mov ebp, esp
// 00416d23  6aff                 push -1
// 00416d25  681bdb7b00           push 0x7bdb1b
// 00416d2a  64a100000000         mov eax, dword ptr fs:[0]
// 00416d30  50                   push eax
// 00416d31  64892500000000       mov dword ptr fs:[0], esp
// 00416d38  83ec0c               sub esp, 0xc
// 00416d3b  53                   push ebx
// 00416d3c  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00416d3f  56                   push esi
// 00416d40  33f6                 xor esi, esi
// 00416d42  57                   push edi
// 00416d43  8965f0               mov dword ptr [ebp - 0x10], esp
// 00416d46  3bde                 cmp ebx, esi
// 00416d48  7518                 jne 0x416d62
// 00416d4a  b803400080           mov eax, 0x80004003
// 00416d4f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00416d52  64890d00000000       mov dword ptr fs:[0], ecx
// 00416d59  5f                   pop edi
// 00416d5a  5e                   pop esi
// 00416d5b  5b                   pop ebx
// 00416d5c  8be5                 mov esp, ebp
// 00416d5e  5d                   pop ebp
// 00416d5f  c20c00               ret 0xc
// 00416d62  bf0e000780           mov edi, 0x8007000e
// 00416d67  689c000000           push 0x9c
// 00416d6c  8933                 mov dword ptr [ebx], esi
// 00416d6e  897d10               mov dword ptr [ebp + 0x10], edi
// 00416d71  8975fc               mov dword ptr [ebp - 4], esi
// 00416d74  e8a79b2800           call 0x6a0920
// 00416d79  8bc8                 mov ecx, eax
// 00416d7b  83c404               add esp, 4
// 00416d7e  894dec               mov dword ptr [ebp - 0x14], ecx
// 00416d81  c645fc01             mov byte ptr [ebp - 4], 1
// 00416d85  3bce                 cmp ecx, esi
// 00416d87  740b                 je 0x416d94
// 00416d89  8b4508               mov eax, dword ptr [ebp + 8]
// 00416d8c  50                   push eax
// 00416d8d  e81efeffff           call 0x416bb0
// 00416d92  8bf0                 mov esi, eax
// 00416d94  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00416d9b  85f6                 test esi, esi
// 00416d9d  7430                 je 0x416dcf
// 00416d9f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00416da2  8b0e                 mov ecx, dword ptr [esi]
// 00416da4  8b01                 mov eax, dword ptr [ecx]
// 00416da6  53                   push ebx
// 00416da7  52                   push edx
// 00416da8  56                   push esi
// 00416da9  ffd0                 call eax
// 00416dab  8bf8                 mov edi, eax
// 00416dad  85ff                 test edi, edi
// 00416daf  741e                 je 0x416dcf
// 00416db1  8b16                 mov edx, dword ptr [esi]
// 00416db3  8b420c               mov eax, dword ptr [edx + 0xc]
// 00416db6  6a01                 push 1
// 00416db8  8bce                 mov ecx, esi
// 00416dba  ffd0                 call eax
// 00416dbc  eb11                 jmp 0x416dcf

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct VTable
{
    long (__stdcall *query)(S*, const void*, void**);
    void* reserved[2];
    void* (__thiscall *destroy)(S*, unsigned int);
};

struct S
{
    VTable* vtable;
    char storage[152];

    S(void*);
};

long __stdcall sub_00416d20(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    S* object = 0;
    long status = (long)0x8007000e;

    try
    {
        object = new S(outer);
    }
    catch (...)
    {
    }

    if (object)
    {
        status = object->vtable->query(object, iid, result);
        if (status != 0)
            object->vtable->destroy(object, 1);
    }

    return status;
}
