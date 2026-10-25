// from server: 100% by colin
// roc 2008-06 0040f9a0  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f9a0
//
// 0040f9a0  55                   push ebp
// 0040f9a1  8bec                 mov ebp, esp
// 0040f9a3  6aff                 push -1
// 0040f9a5  68e0d47b00           push 0x7bd4e0
// 0040f9aa  64a100000000         mov eax, dword ptr fs:[0]
// 0040f9b0  50                   push eax
// 0040f9b1  64892500000000       mov dword ptr fs:[0], esp
// 0040f9b8  83ec08               sub esp, 8
// 0040f9bb  53                   push ebx
// 0040f9bc  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0040f9bf  56                   push esi
// 0040f9c0  33f6                 xor esi, esi
// 0040f9c2  57                   push edi
// 0040f9c3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040f9c6  3bde                 cmp ebx, esi
// 0040f9c8  7518                 jne 0x40f9e2
// 0040f9ca  b803400080           mov eax, 0x80004003
// 0040f9cf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f9d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f9d9  5f                   pop edi
// 0040f9da  5e                   pop esi
// 0040f9db  5b                   pop ebx
// 0040f9dc  8be5                 mov esp, ebp
// 0040f9de  5d                   pop ebp
// 0040f9df  c20c00               ret 0xc
// 0040f9e2  bf0e000780           mov edi, 0x8007000e
// 0040f9e7  6a20                 push 0x20
// 0040f9e9  8933                 mov dword ptr [ebx], esi
// 0040f9eb  897d10               mov dword ptr [ebp + 0x10], edi
// 0040f9ee  8975fc               mov dword ptr [ebp - 4], esi
// 0040f9f1  e82a0f2900           call 0x6a0920
// 0040f9f6  83c404               add esp, 4
// 0040f9f9  3bc6                 cmp eax, esi
// 0040f9fb  740d                 je 0x40fa0a
// 0040f9fd  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040fa00  51                   push ecx
// 0040fa01  8bc8                 mov ecx, eax
// 0040fa03  e878f8ffff           call 0x40f280
// 0040fa08  8bf0                 mov esi, eax
// 0040fa0a  83c8ff               or eax, 0xffffffff
// 0040fa0d  8945fc               mov dword ptr [ebp - 4], eax
// 0040fa10  85f6                 test esi, esi
// 0040fa12  7436                 je 0x40fa4a
// 0040fa14  ff4618               inc dword ptr [esi + 0x18]
// 0040fa17  014618               add dword ptr [esi + 0x18], eax
// 0040fa1a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040fa1d  8b16                 mov edx, dword ptr [esi]
// 0040fa1f  8b0a                 mov ecx, dword ptr [edx]
// 0040fa21  53                   push ebx
// 0040fa22  50                   push eax
// 0040fa23  56                   push esi
// 0040fa24  ffd1                 call ecx
// 0040fa26  8bf8                 mov edi, eax
// 0040fa28  85ff                 test edi, edi
// 0040fa2a  741e                 je 0x40fa4a
// 0040fa2c  8b16                 mov edx, dword ptr [esi]
// 0040fa2e  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040fa31  6a01                 push 1
// 0040fa33  8bce                 mov ecx, esi
// 0040fa35  ffd0                 call eax
// 0040fa37  eb11                 jmp 0x40fa4a
// 0040fa39  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0040fa3c  e80f0f2900           call 0x6a0950
// 0040fa41  b847fa4000           mov eax, 0x40fa47
// 0040fa46  c3                   ret 
// 0040fa47  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040fa4a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040fa4d  8bc7                 mov eax, edi
// 0040fa4f  5f                   pop edi
// 0040fa50  5e                   pop esi
// 0040fa51  64890d00000000       mov dword ptr fs:[0], ecx
// 0040fa58  5b                   pop ebx
// 0040fa59  8be5                 mov esp, ebp
// 0040fa5b  5d                   pop ebp
// 0040fa5c  c20c00               ret 0xc

// v5: reference catch; body calls a non-virtual member.
void* __cdecl operator new(unsigned int);

struct Exception {
    long code;
    void Delete();
};

struct S {
    virtual long __stdcall QueryInterface(const void*, void**);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
    virtual void Reserved();
    virtual ~S();

    unsigned char padding[20];
    volatile long references;
    unsigned long tail;

    S(void*) throw();

    static long __stdcall CreateInstance(void*, const void*, void**);
};

long __stdcall S::CreateInstance(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    S* object = 0;
    *result = 0;
    long status = (long)0x8007000E;

try {
        object = new S(outer);
    }
    catch (Exception& exception) {
        exception.Delete();
    }

    if (object) {
        ++object->references;
        --object->references;
        status = object->QueryInterface(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
