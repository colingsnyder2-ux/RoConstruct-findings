// from server: 100% by colin
// roc 2008-06 005cbbb0  unit: RBX::ControllerService  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cbbb0
//
// 005cbbb0  6aff                 push -1
// 005cbbb2  68b2537d00           push 0x7d53b2
// 005cbbb7  64a100000000         mov eax, dword ptr fs:[0]
// 005cbbbd  50                   push eax
// 005cbbbe  64892500000000       mov dword ptr fs:[0], esp
// 005cbbc5  51                   push ecx
// 005cbbc6  53                   push ebx
// 005cbbc7  56                   push esi
// 005cbbc8  8bf1                 mov esi, ecx
// 005cbbca  57                   push edi
// 005cbbcb  8974240c             mov dword ptr [esp + 0xc], esi
// 005cbbcf  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 005cbbd5  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 005cbbdb  33db                 xor ebx, ebx
// 005cbbdd  c744241803000000     mov dword ptr [esp + 0x18], 3
// 005cbbe5  3bc3                 cmp eax, ebx
// 005cbbe7  742d                 je 0x5cbc16
// 005cbbe9  83c004               add eax, 4
// 005cbbec  50                   push eax
// 005cbbed  ffd7                 call edi
// 005cbbef  85c0                 test eax, eax
// 005cbbf1  751d                 jne 0x5cbc10
// 005cbbf3  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 005cbbf9  e892f1e8ff           call 0x45ad90
// 005cbbfe  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 005cbc04  3bcb                 cmp ecx, ebx
// 005cbc06  7408                 je 0x5cbc10
// 005cbc08  8b01                 mov eax, dword ptr [ecx]
// 005cbc0a  8b10                 mov edx, dword ptr [eax]
// 005cbc0c  6a01                 push 1
// 005cbc0e  ffd2                 call edx
// 005cbc10  899e40010000         mov dword ptr [esi + 0x140], ebx
// 005cbc16  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005cbc1c  c644241802           mov byte ptr [esp + 0x18], 2
// 005cbc21  3bc3                 cmp eax, ebx
// 005cbc23  742d                 je 0x5cbc52
// 005cbc25  83c004               add eax, 4
// 005cbc28  50                   push eax
// 005cbc29  ffd7                 call edi
// 005cbc2b  85c0                 test eax, eax
// 005cbc2d  751d                 jne 0x5cbc4c
// 005cbc2f  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 005cbc35  e856f1e8ff           call 0x45ad90
// 005cbc3a  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 005cbc40  3bcb                 cmp ecx, ebx
// 005cbc42  7408                 je 0x5cbc4c
// 005cbc44  8b01                 mov eax, dword ptr [ecx]
// 005cbc46  8b10                 mov edx, dword ptr [eax]
// 005cbc48  6a01                 push 1
// 005cbc4a  ffd2                 call edx
// 005cbc4c  899e3c010000         mov dword ptr [esi + 0x13c], ebx
// 005cbc52  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 005cbc58  c644241801           mov byte ptr [esp + 0x18], 1
// 005cbc5d  3bc3                 cmp eax, ebx
// 005cbc5f  742d                 je 0x5cbc8e
// 005cbc61  83c004               add eax, 4
// 005cbc64  50                   push eax
// 005cbc65  ffd7                 call edi
// 005cbc67  85c0                 test eax, eax
// 005cbc69  751d                 jne 0x5cbc88
// 005cbc6b  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 005cbc71  e81af1e8ff           call 0x45ad90
// 005cbc76  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 005cbc7c  3bcb                 cmp ecx, ebx
// 005cbc7e  7408                 je 0x5cbc88
// 005cbc80  8b01                 mov eax, dword ptr [ecx]
// 005cbc82  8b10                 mov edx, dword ptr [eax]
// 005cbc84  6a01                 push 1
// 005cbc86  ffd2                 call edx
// 005cbc88  899e38010000         mov dword ptr [esi + 0x138], ebx
// 005cbc8e  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005cbc94  885c2418             mov byte ptr [esp + 0x18], bl
// 005cbc98  3bc3                 cmp eax, ebx
// 005cbc9a  742d                 je 0x5cbcc9
// 005cbc9c  83c004               add eax, 4
// 005cbc9f  50                   push eax
// 005cbca0  ffd7                 call edi
// 005cbca2  85c0                 test eax, eax
// 005cbca4  751d                 jne 0x5cbcc3
// 005cbca6  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005cbcac  e8dff0e8ff           call 0x45ad90
// 005cbcb1  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005cbcb7  3bcb                 cmp ecx, ebx
// 005cbcb9  7408                 je 0x5cbcc3
// 005cbcbb  8b01                 mov eax, dword ptr [ecx]
// 005cbcbd  8b10                 mov edx, dword ptr [eax]
// 005cbcbf  6a01                 push 1
// 005cbcc1  ffd2                 call edx
// 005cbcc3  899e34010000         mov dword ptr [esi + 0x134], ebx
// 005cbcc9  8bce                 mov ecx, esi
// 005cbccb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005cbcd3  e868ecffff           call 0x5ca940
// 005cbcd8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cbcdc  5f                   pop edi
// 005cbcdd  5e                   pop esi
// 005cbcde  5b                   pop ebx
// 005cbcdf  64890d00000000       mov dword ptr fs:[0], ecx
// 005cbce6  83c410               add esp, 0x10
// 005cbce9  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

struct ControlBlock {
    virtual ~ControlBlock();
    volatile long references;
    void dispose();
};

struct Reference {
    ControlBlock *pointer;
    ~Reference();
};

__forceinline Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Base {
    char storage[0x134];
    ~Base();
};

struct ControllerService : Base {
    Reference first;
    Reference second;
    Reference third;
    Reference fourth;
    ~ControllerService();
};

ControllerService::~ControllerService()
{
}
