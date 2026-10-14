// from server: 100% by colin
// roc 2008-06 004e8250  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8250
//
// 004e8250  6aff                 push -1
// 004e8252  6874a67c00           push 0x7ca674
// 004e8257  64a100000000         mov eax, dword ptr fs:[0]
// 004e825d  50                   push eax
// 004e825e  64892500000000       mov dword ptr fs:[0], esp
// 004e8265  51                   push ecx
// 004e8266  56                   push esi
// 004e8267  8bf1                 mov esi, ecx
// 004e8269  57                   push edi
// 004e826a  89742408             mov dword ptr [esp + 8], esi
// 004e826e  c706c46e8200         mov dword ptr [esi], 0x826ec4
// 004e8274  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 004e827a  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004e8280  c744241407000000     mov dword ptr [esp + 0x14], 7
// 004e8288  85c0                 test eax, eax
// 004e828a  7431                 je 0x4e82bd
// 004e828c  83c004               add eax, 4
// 004e828f  50                   push eax
// 004e8290  ffd7                 call edi
// 004e8292  85c0                 test eax, eax
// 004e8294  751d                 jne 0x4e82b3
// 004e8296  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 004e829c  e8ef2af7ff           call 0x45ad90
// 004e82a1  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 004e82a7  85c9                 test ecx, ecx
// 004e82a9  7408                 je 0x4e82b3
// 004e82ab  8b01                 mov eax, dword ptr [ecx]
// 004e82ad  8b10                 mov edx, dword ptr [eax]
// 004e82af  6a01                 push 1
// 004e82b1  ffd2                 call edx
// 004e82b3  c786cc00000000000000 mov dword ptr [esi + 0xcc], 0
// 004e82bd  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 004e82c3  c644241406           mov byte ptr [esp + 0x14], 6
// 004e82c8  85c0                 test eax, eax
// 004e82ca  7431                 je 0x4e82fd
// 004e82cc  83c004               add eax, 4
// 004e82cf  50                   push eax
// 004e82d0  ffd7                 call edi
// 004e82d2  85c0                 test eax, eax
// 004e82d4  751d                 jne 0x4e82f3
// 004e82d6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004e82dc  e8af2af7ff           call 0x45ad90
// 004e82e1  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004e82e7  85c9                 test ecx, ecx
// 004e82e9  7408                 je 0x4e82f3
// 004e82eb  8b01                 mov eax, dword ptr [ecx]
// 004e82ed  8b10                 mov edx, dword ptr [eax]
// 004e82ef  6a01                 push 1
// 004e82f1  ffd2                 call edx
// 004e82f3  c786c400000000000000 mov dword ptr [esi + 0xc4], 0
// 004e82fd  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 004e8303  c644241405           mov byte ptr [esp + 0x14], 5
// 004e8308  85ff                 test edi, edi
// 004e830a  742a                 je 0x4e8336
// 004e830c  8d4704               lea eax, [edi + 4]
// 004e830f  83c9ff               or ecx, 0xffffffff
// 004e8312  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8316  751e                 jne 0x4e8336
// 004e8318  8b17                 mov edx, dword ptr [edi]
// 004e831a  8b4204               mov eax, dword ptr [edx + 4]
// 004e831d  8bcf                 mov ecx, edi
// 004e831f  ffd0                 call eax
// 004e8321  8d4f08               lea ecx, [edi + 8]
// 004e8324  83caff               or edx, 0xffffffff
// 004e8327  f00fc111             lock xadd dword ptr [ecx], edx
// 004e832b  7509                 jne 0x4e8336
// 004e832d  8b07                 mov eax, dword ptr [edi]
// 004e832f  8b5008               mov edx, dword ptr [eax + 8]
// 004e8332  8bcf                 mov ecx, edi
// 004e8334  ffd2                 call edx
// 004e8336  8d8ea8000000         lea ecx, [esi + 0xa8]
// 004e833c  c644241404           mov byte ptr [esp + 0x14], 4
// 004e8341  e86ad10a00           call 0x5954b0
// 004e8346  8d8e94000000         lea ecx, [esi + 0x94]
// 004e834c  c644241403           mov byte ptr [esp + 0x14], 3
// 004e8351  e85ad10a00           call 0x5954b0
// 004e8356  8d8e80000000         lea ecx, [esi + 0x80]
// 004e835c  c644241402           mov byte ptr [esp + 0x14], 2
// 004e8361  e84ad10a00           call 0x5954b0
// 004e8366  8d4e6c               lea ecx, [esi + 0x6c]
// 004e8369  c644241401           mov byte ptr [esp + 0x14], 1
// 004e836e  e83dd10a00           call 0x5954b0
// 004e8373  8d4e58               lea ecx, [esi + 0x58]
// 004e8376  c644241400           mov byte ptr [esp + 0x14], 0
// 004e837b  e830d10a00           call 0x5954b0
// 004e8380  8bce                 mov ecx, esi
// 004e8382  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e838a  e841feffff           call 0x4e81d0
// 004e838f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e8393  5f                   pop edi
// 004e8394  5e                   pop esi
// 004e8395  64890d00000000       mov dword ptr fs:[0], ecx
// 004e839c  83c410               add esp, 0x10
// 004e839f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

__declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);

struct Resource {
    virtual ~Resource();
    volatile long references;
    void release();
};

struct ResourceRef {
    Resource* pointer;
    unsigned long reserved;
    ~ResourceRef();
};

struct ControlBlock {
    virtual ~ControlBlock();
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct SharedRef {
    void* pointer;
    ControlBlock* control;
    ~SharedRef();
};

struct Member {
    unsigned char storage[20];
    ~Member();
};

struct Base {
    virtual ~Base();
    unsigned char storage[84];
};

struct S : Base {
    Member first;
    Member second;
    Member third;
    Member fourth;
    Member fifth;
    SharedRef shared;
    ResourceRef firstResource;
    ResourceRef secondResource;
    virtual ~S();
};

__forceinline ResourceRef::~ResourceRef()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->release();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

__forceinline SharedRef::~SharedRef()
{
    ControlBlock* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->references) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weakReferences) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
}
