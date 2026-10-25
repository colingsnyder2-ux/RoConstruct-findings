// from server: 100% by colin
// roc 2008-06 004d7460  unit: Ogre::VDataStream::?$SharedPtr  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7460
//
// 004d7460  6aff                 push -1
// 004d7462  687e9c7c00           push 0x7c9c7e
// 004d7467  64a100000000         mov eax, dword ptr fs:[0]
// 004d746d  50                   push eax
// 004d746e  64892500000000       mov dword ptr fs:[0], esp
// 004d7475  51                   push ecx
// 004d7476  53                   push ebx
// 004d7477  56                   push esi
// 004d7478  8bf1                 mov esi, ecx
// 004d747a  57                   push edi
// 004d747b  8974240c             mov dword ptr [esp + 0xc], esi
// 004d747f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004d7482  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004d7488  33db                 xor ebx, ebx
// 004d748a  c744241802000000     mov dword ptr [esp + 0x18], 2
// 004d7492  3bc3                 cmp eax, ebx
// 004d7494  7424                 je 0x4d74ba
// 004d7496  83c004               add eax, 4
// 004d7499  50                   push eax
// 004d749a  ffd7                 call edi
// 004d749c  85c0                 test eax, eax
// 004d749e  7517                 jne 0x4d74b7
// 004d74a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d74a3  e8e838f8ff           call 0x45ad90
// 004d74a8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d74ab  3bcb                 cmp ecx, ebx
// 004d74ad  7408                 je 0x4d74b7
// 004d74af  8b01                 mov eax, dword ptr [ecx]
// 004d74b1  8b10                 mov edx, dword ptr [eax]
// 004d74b3  6a01                 push 1
// 004d74b5  ffd2                 call edx
// 004d74b7  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d74ba  8b4608               mov eax, dword ptr [esi + 8]
// 004d74bd  c644241801           mov byte ptr [esp + 0x18], 1
// 004d74c2  3bc3                 cmp eax, ebx
// 004d74c4  7424                 je 0x4d74ea
// 004d74c6  83c004               add eax, 4
// 004d74c9  50                   push eax
// 004d74ca  ffd7                 call edi
// 004d74cc  85c0                 test eax, eax
// 004d74ce  7517                 jne 0x4d74e7
// 004d74d0  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d74d3  e8b838f8ff           call 0x45ad90
// 004d74d8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d74db  3bcb                 cmp ecx, ebx
// 004d74dd  7408                 je 0x4d74e7
// 004d74df  8b01                 mov eax, dword ptr [ecx]
// 004d74e1  8b10                 mov edx, dword ptr [eax]
// 004d74e3  6a01                 push 1
// 004d74e5  ffd2                 call edx
// 004d74e7  895e08               mov dword ptr [esi + 8], ebx
// 004d74ea  8b4604               mov eax, dword ptr [esi + 4]
// 004d74ed  885c2418             mov byte ptr [esp + 0x18], bl
// 004d74f1  3bc3                 cmp eax, ebx
// 004d74f3  7424                 je 0x4d7519
// 004d74f5  83c004               add eax, 4
// 004d74f8  50                   push eax
// 004d74f9  ffd7                 call edi
// 004d74fb  85c0                 test eax, eax
// 004d74fd  7517                 jne 0x4d7516
// 004d74ff  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d7502  e88938f8ff           call 0x45ad90
// 004d7507  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d750a  3bcb                 cmp ecx, ebx
// 004d750c  7408                 je 0x4d7516
// 004d750e  8b01                 mov eax, dword ptr [ecx]
// 004d7510  8b10                 mov edx, dword ptr [eax]
// 004d7512  6a01                 push 1
// 004d7514  ffd2                 call edx
// 004d7516  895e04               mov dword ptr [esi + 4], ebx
// 004d7519  8b06                 mov eax, dword ptr [esi]
// 004d751b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004d7523  3bc3                 cmp eax, ebx
// 004d7525  7421                 je 0x4d7548
// 004d7527  83c004               add eax, 4
// 004d752a  50                   push eax
// 004d752b  ffd7                 call edi
// 004d752d  85c0                 test eax, eax
// 004d752f  7515                 jne 0x4d7546
// 004d7531  8b0e                 mov ecx, dword ptr [esi]
// 004d7533  e85838f8ff           call 0x45ad90
// 004d7538  8b0e                 mov ecx, dword ptr [esi]
// 004d753a  3bcb                 cmp ecx, ebx
// 004d753c  7408                 je 0x4d7546
// 004d753e  8b01                 mov eax, dword ptr [ecx]
// 004d7540  8b10                 mov edx, dword ptr [eax]
// 004d7542  6a01                 push 1
// 004d7544  ffd2                 call edx
// 004d7546  891e                 mov dword ptr [esi], ebx
// 004d7548  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d754c  5f                   pop edi
// 004d754d  5e                   pop esi
// 004d754e  5b                   pop ebx
// 004d754f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7556  83c410               add esp, 0x10
// 004d7559  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

struct Control
{
    virtual ~Control();
    volatile long references;
    void dispose();
};

struct Shared
{
    Control *control;
    ~Shared();
};

struct S
{
    Shared a;
    Shared b;
    Shared c;
    Shared d;
    ~S();
};

__forceinline Shared::~Shared()
{
    if (control)
    {
        if (InterlockedDecrement(&control->references) == 0)
        {
            control->dispose();
            delete control;
        }
        control = 0;
    }
}

S::~S()
{
}
