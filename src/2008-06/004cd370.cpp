// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 004cd370  unit: RBX::Network::PhysicsSender  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd370
//
// 004cd370  6aff                 push -1
// 004cd372  686ea87c00           push 0x7ca86e
// 004cd377  64a100000000         mov eax, dword ptr fs:[0]
// 004cd37d  50                   push eax
// 004cd37e  64892500000000       mov dword ptr fs:[0], esp
// 004cd385  51                   push ecx
// 004cd386  53                   push ebx
// 004cd387  56                   push esi
// 004cd388  8bf1                 mov esi, ecx
// 004cd38a  c70600000000         mov dword ptr [esi], 0
// 004cd390  89742408             mov dword ptr [esp + 8], esi
// 004cd394  c7460400000000       mov dword ptr [esi + 4], 0
// 004cd39b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004cd39f  8b1a                 mov ebx, dword ptr [edx]
// 004cd3a1  6a00                 push 0
// 004cd3a3  83ec10               sub esp, 0x10
// 004cd3a6  8bc4                 mov eax, esp
// 004cd3a8  8918                 mov dword ptr [eax], ebx
// 004cd3aa  8b5a04               mov ebx, dword ptr [edx + 4]
// 004cd3ad  895804               mov dword ptr [eax + 4], ebx
// 004cd3b0  8b5a08               mov ebx, dword ptr [edx + 8]
// 004cd3b3  8b520c               mov edx, dword ptr [edx + 0xc]
// 004cd3b6  895808               mov dword ptr [eax + 8], ebx
// 004cd3b9  8d4e08               lea ecx, [esi + 8]
// 004cd3bc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004cd3c4  89500c               mov dword ptr [eax + 0xc], edx
// 004cd3c7  e8e4edffff           call 0x4cc1b0
// 004cd3cc  b301                 mov bl, 1
// 004cd3ce  6a28                 push 0x28
// 004cd3d0  885c2418             mov byte ptr [esp + 0x18], bl
// 004cd3d4  e847351d00           call 0x6a0920
// 004cd3d9  83c404               add esp, 4
// 004cd3dc  8944241c             mov dword ptr [esp + 0x1c], eax
// 004cd3e0  c644241402           mov byte ptr [esp + 0x14], 2
// 004cd3e5  85c0                 test eax, eax
// 004cd3e7  7409                 je 0x4cd3f2
// 004cd3e9  8bc8                 mov ecx, eax
// 004cd3eb  e850d9f4ff           call 0x41ad40
// 004cd3f0  eb02                 jmp 0x4cd3f4
// 004cd3f2  33c0                 xor eax, eax
// 004cd3f4  50                   push eax
// 004cd3f5  8bce                 mov ecx, esi
// 004cd3f7  885c2418             mov byte ptr [esp + 0x18], bl
// 004cd3fb  e8f0dcf4ff           call 0x41b0f0
// 004cd400  8bce                 mov ecx, esi
// 004cd402  e839840c00           call 0x595840
// 004cd407  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd40b  8bc6                 mov eax, esi
// 004cd40d  5e                   pop esi
// 004cd40e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd415  5b                   pop ebx
// 004cd416  83c410               add esp, 0x10
// 004cd419  c20400               ret 4

struct Data {
    unsigned long a, b, c, d;
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    unsigned char storage[40];
    Object();
};

struct __declspec(dllimport) Owner {
    unsigned long first;
    unsigned long second;
    Owner();
    ~Owner();
    void reset(Object*);
};

__forceinline Owner::Owner() : first(0), second(0)
{
}

struct Member {
    Member(Data, unsigned long);
    ~Member();
};

struct S : Owner {
    Member member;
    S(const Data&);
    void finish();
};

S::S(const Data& data)
    : Owner(), member(data, 0)
{
    reset(new Object);
    finish();
}
