// from server: 51% by colin
// from server: 50% by king_originala
// roc 2008-06 0042a930  unit: boost::detail::H::?$sp_counted_impl_p  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a930
//
// 0042a930  6aff                 push -1
// 0042a932  68f8cb7b00           push 0x7bcbf8
// 0042a937  64a100000000         mov eax, dword ptr fs:[0]
// 0042a93d  50                   push eax
// 0042a93e  64892500000000       mov dword ptr fs:[0], esp
// 0042a945  83ec0c               sub esp, 0xc
// 0042a948  53                   push ebx
// 0042a949  56                   push esi
// 0042a94a  33c0                 xor eax, eax
// 0042a94c  57                   push edi
// 0042a94d  33db                 xor ebx, ebx
// 0042a94f  8944240c             mov dword ptr [esp + 0xc], eax
// 0042a953  33c9                 xor ecx, ecx
// 0042a955  895c2420             mov dword ptr [esp + 0x20], ebx
// 0042a959  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042a95d  33d2                 xor edx, edx
// 0042a95f  89542414             mov dword ptr [esp + 0x14], edx
// 0042a963  8b742428             mov esi, dword ptr [esp + 0x28]
// 0042a967  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0042a96b  c644242002           mov byte ptr [esp + 0x20], 2
// 0042a970  3bf7                 cmp esi, edi
// 0042a972  0f8483000000         je 0x42a9fb
// 0042a978  3bf3                 cmp esi, ebx
// 0042a97a  0f8407010000         je 0x42aa87
// 0042a980  3bfb                 cmp edi, ebx
// 0042a982  0f84ff000000         je 0x42aa87
// 0042a988  8b06                 mov eax, dword ptr [esi]
// 0042a98a  8b10                 mov edx, dword ptr [eax]
// 0042a98c  8d4c240c             lea ecx, [esp + 0xc]
// 0042a990  51                   push ecx
// 0042a991  68cc018500           push 0x8501cc
// 0042a996  56                   push esi
// 0042a997  ffd2                 call edx
// 0042a999  8b07                 mov eax, dword ptr [edi]
// 0042a99b  8b10                 mov edx, dword ptr [eax]
// 0042a99d  8d4c2410             lea ecx, [esp + 0x10]
// 0042a9a1  51                   push ecx
// 0042a9a2  68cc018500           push 0x8501cc
// 0042a9a7  57                   push edi
// 0042a9a8  ffd2                 call edx
// 0042a9aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a9ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042a9b2  3bc1                 cmp eax, ecx
// 0042a9b4  7559                 jne 0x42aa0f
// 0042a9b6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042a9ba  c644242001           mov byte ptr [esp + 0x20], 1
// 0042a9bf  3bd3                 cmp edx, ebx
// 0042a9c1  7410                 je 0x42a9d3
// 0042a9c3  8b02                 mov eax, dword ptr [edx]
// 0042a9c5  8b4808               mov ecx, dword ptr [eax + 8]
// 0042a9c8  52                   push edx
// 0042a9c9  ffd1                 call ecx
// 0042a9cb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a9cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042a9d3  885c2420             mov byte ptr [esp + 0x20], bl
// 0042a9d7  3bcb                 cmp ecx, ebx
// 0042a9d9  740c                 je 0x42a9e7
// 0042a9db  8b11                 mov edx, dword ptr [ecx]
// 0042a9dd  8b4208               mov eax, dword ptr [edx + 8]
// 0042a9e0  51                   push ecx
// 0042a9e1  ffd0                 call eax
// 0042a9e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a9e7  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0042a9ef  3bc3                 cmp eax, ebx
// 0042a9f1  7408                 je 0x42a9fb
// 0042a9f3  8b08                 mov ecx, dword ptr [eax]
// 0042a9f5  8b5108               mov edx, dword ptr [ecx + 8]
// 0042a9f8  50                   push eax
// 0042a9f9  ffd2                 call edx
// 0042a9fb  5f                   pop edi
// 0042a9fc  5e                   pop esi
// 0042a9fd  b001                 mov al, 1
// 0042a9ff  5b                   pop ebx
// 0042aa00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042aa04  64890d00000000       mov dword ptr fs:[0], ecx
// 0042aa0b  83c418               add esp, 0x18
// 0042aa0e  c3                   ret 
// 0042aa0f  3bc3                 cmp eax, ebx
// 0042aa11  7470                 je 0x42aa83
// 0042aa13  3bcb                 cmp ecx, ebx
// 0042aa15  746c                 je 0x42aa83
// 0042aa17  8b08                 mov ecx, dword ptr [eax]
// 0042aa19  8d542414             lea edx, [esp + 0x14]
// 0042aa1d  52                   push edx
// 0042aa1e  680c028500           push 0x85020c
// 0042aa23  50                   push eax
// 0042aa24  8b01                 mov eax, dword ptr [ecx]
// 0042aa26  ffd0                 call eax
// 0042aa28  3bc3                 cmp eax, ebx
// 0042aa2a  7c4f                 jl 0x42aa7b
// 0042aa2c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042aa30  3bd3                 cmp edx, ebx
// 0042aa32  0f84a4000000         je 0x42aadc
// 0042aa38  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042aa3c  8b0a                 mov ecx, dword ptr [edx]
// 0042aa3e  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0042aa41  50                   push eax
// 0042aa42  52                   push edx
// 0042aa43  ffd1                 call ecx
// 0042aa45  3bc3                 cmp eax, ebx
// 0042aa47  7532                 jne 0x42aa7b
// 0042aa49  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042aa4d  c644242001           mov byte ptr [esp + 0x20], 1
// 0042aa52  3bc3                 cmp eax, ebx
// 0042aa54  7408                 je 0x42aa5e
// 0042aa56  8b10                 mov edx, dword ptr [eax]
// 0042aa58  50                   push eax
// 0042aa59  8b4208               mov eax, dword ptr [edx + 8]
// 0042aa5c  ffd0                 call eax
// 0042aa5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042aa62  885c2420             mov byte ptr [esp + 0x20], bl
// 0042aa66  3bc3                 cmp eax, ebx
// 0042aa68  0f8475ffffff         je 0x42a9e3
// 0042aa6e  8b08                 mov ecx, dword ptr [eax]
// 0042aa70  8b5108               mov edx, dword ptr [ecx + 8]
// 0042aa73  50                   push eax
// 0042aa74  ffd2                 call edx
// 0042aa76  e968ffffff           jmp 0x42a9e3
// 0042aa7b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042aa7f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042aa83  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042aa87  c644242001           mov byte ptr [esp + 0x20], 1
// 0042aa8c  3bd3                 cmp edx, ebx
// 0042aa8e  7410                 je 0x42aaa0
// 0042aa90  8b02                 mov eax, dword ptr [edx]
// 0042aa92  8b4808               mov ecx, dword ptr [eax + 8]
// 0042aa95  52                   push edx
// 0042aa96  ffd1                 call ecx
// 0042aa98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042aa9c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042aaa0  885c2420             mov byte ptr [esp + 0x20], bl
// 0042aaa4  3bcb                 cmp ecx, ebx
// 0042aaa6  740c                 je 0x42aab4
// 0042aaa8  8b11                 mov edx, dword ptr [ecx]
// 0042aaaa  8b4208               mov eax, dword ptr [edx + 8]
// 0042aaad  51                   push ecx
// 0042aaae  ffd0                 call eax
// 0042aab0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042aab4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0042aabc  3bc3                 cmp eax, ebx
// 0042aabe  7408                 je 0x42aac8
// 0042aac0  8b08                 mov ecx, dword ptr [eax]
// 0042aac2  8b5108               mov edx, dword ptr [ecx + 8]
// 0042aac5  50                   push eax
// 0042aac6  ffd2                 call edx
// 0042aac8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042aacc  5f                   pop edi
// 0042aacd  5e                   pop esi
// 0042aace  32c0                 xor al, al
// 0042aad0  5b                   pop ebx
// 0042aad1  64890d00000000       mov dword ptr fs:[0], ecx
// 0042aad8  83c418               add esp, 0x18
// 0042aadb  c3                   ret 
// 0042aadc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042aae0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042aae4  eba1                 jmp 0x42aa87

struct Guid {
    unsigned long a;
    unsigned short b, c;
    unsigned char d[8];
};

extern const Guid unknownId;
extern const Guid identityId;

struct Object;

struct ObjectVTable {
    long (__stdcall *QueryInterface)(Object*, const Guid&, void**);
    unsigned long (__stdcall *AddRef)(Object*);
    unsigned long (__stdcall *Release)(Object*);
    long (__stdcall *IsEqualObject)(Object*, Object*);
};

struct Object {
    ObjectVTable* vtable;
};

struct ObjectPtr {
    Object* p;
    ObjectPtr(Object* value = 0);
    ~ObjectPtr();
};

__forceinline ObjectPtr::ObjectPtr(Object* value) : p(value) {
    if (p)
        p->vtable->AddRef(p);
}

__forceinline ObjectPtr::~ObjectPtr() {
    if (p)
        p->vtable->Release(p);
}


struct ImportedObjectPtr
{
    Object* p;
    ImportedObjectPtr(Object* value = 0);
    __declspec(dllimport) ~ImportedObjectPtr() throw();
};

__forceinline ImportedObjectPtr::ImportedObjectPtr(Object* value) : p(value) {
    if (p)
        p->vtable->AddRef(p);
}

bool __cdecl equalObjects(Object* first, Object* second) {
    ObjectPtr a;
    ImportedObjectPtr b;
    ObjectPtr identity;

    if (first == second)
        return true;

    if (!first || !second)
        return false;

    first->vtable->QueryInterface(
        first, unknownId, reinterpret_cast<void**>(&a.p));
    second->vtable->QueryInterface(
        second, unknownId, reinterpret_cast<void**>(&b.p));

    if (a.p == b.p)
        return true;

    if (a.p && b.p) {
        if (a.p->vtable->QueryInterface(
                a.p, identityId, reinterpret_cast<void**>(&identity.p)) >= 0) {
            if (!identity.p)
                return false;
            if (identity.p->vtable->IsEqualObject(identity.p, b.p) == 0)
                return true;
        }
    }

    return false;
}
