// from server: 100% by king_originala
// roc 2008-06 005f1bd0  unit: RBX::FaceInstance  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1bd0
//
// 005f1bd0  83ec10               sub esp, 0x10
// 005f1bd3  56                   push esi
// 005f1bd4  57                   push edi
// 005f1bd5  8b3dbc228000         mov edi, dword ptr [0x8022bc]
// 005f1bdb  6a00                 push 0
// 005f1bdd  6a01                 push 1
// 005f1bdf  8bf1                 mov esi, ecx
// 005f1be1  6a01                 push 1
// 005f1be3  6a00                 push 0
// 005f1be5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005f1bec  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005f1bf3  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005f1bfa  ffd7                 call edi
// 005f1bfc  6a00                 push 0
// 005f1bfe  68ffffff7f           push 0x7fffffff
// 005f1c03  6a00                 push 0
// 005f1c05  6a00                 push 0
// 005f1c07  8906                 mov dword ptr [esi], eax
// 005f1c09  ffd7                 call edi
// 005f1c0b  6a00                 push 0
// 005f1c0d  6a00                 push 0
// 005f1c0f  6a00                 push 0
// 005f1c11  894604               mov dword ptr [esi + 4], eax
// 005f1c14  ff158c228000         call dword ptr [0x80228c]
// 005f1c1a  8b0e                 mov ecx, dword ptr [esi]
// 005f1c1c  8b3d34228000         mov edi, dword ptr [0x802234]
// 005f1c22  894608               mov dword ptr [esi + 8], eax
// 005f1c25  85c9                 test ecx, ecx
// 005f1c27  7415                 je 0x5f1c3e
// 005f1c29  837e0400             cmp dword ptr [esi + 4], 0
// 005f1c2d  740c                 je 0x5f1c3b
// 005f1c2f  85c0                 test eax, eax
// 005f1c31  7408                 je 0x5f1c3b
// 005f1c33  5f                   pop edi
// 005f1c34  8bc6                 mov eax, esi
// 005f1c36  5e                   pop esi
// 005f1c37  83c410               add esp, 0x10
// 005f1c3a  c3                   ret 
// 005f1c3b  51                   push ecx
// 005f1c3c  ffd7                 call edi
// 005f1c3e  8b4604               mov eax, dword ptr [esi + 4]
// 005f1c41  85c0                 test eax, eax
// 005f1c43  7403                 je 0x5f1c48
// 005f1c45  50                   push eax
// 005f1c46  ffd7                 call edi
// 005f1c48  8b7608               mov esi, dword ptr [esi + 8]
// 005f1c4b  85f6                 test esi, esi
// 005f1c4d  7403                 je 0x5f1c52
// 005f1c4f  56                   push esi
// 005f1c50  ffd7                 call edi
// 005f1c52  8d4c2408             lea ecx, [esp + 8]
// 005f1c56  e8d567f7ff           call 0x568430
// 005f1c5b  68304f8d00           push 0x8d4f30
// 005f1c60  8d44240c             lea eax, [esp + 0xc]
// 005f1c64  50                   push eax
// 005f1c65  e822f90a00           call 0x6a158c

extern "C" void* (__stdcall *CreateSemaphoreA)(void*, long, long, const char*);
extern "C" void* (__stdcall *CreateMutexA)(void*, int, const char*);
extern "C" int (__stdcall *CloseHandle)(void*);

struct Error {
    void* vfptr;
    int pad[2];
    int field_c;
    Error* init();
};

extern unsigned char exception_type[];
extern "C" __declspec(noreturn) void __stdcall raise_exception(void*, void*);

struct S {
    void* semaphore;
    void* limit;
    void* mutex;
    int field_c;
    int field_10;
    int field_14;
    S* init();
};

S* S::init()
{
    void* (__stdcall *create)(void*, long, long, const char*) = CreateSemaphoreA;

    field_c = 0;
    field_10 = 0;
    field_14 = 0;

    semaphore = create(0, 1, 1, 0);
    limit = create(0, 0, 0x7fffffff, 0);

    void* handle = CreateMutexA(0, 0, 0);
    int (__stdcall *close)(void*) = CloseHandle;
    mutex = handle;

    if (semaphore && limit && mutex)
        return this;

    if (semaphore)
        close(semaphore);
    if (limit)
        close(limit);
    if (mutex)
        close(mutex);

    Error error;
    error.init();
    raise_exception(&error, exception_type);
}
