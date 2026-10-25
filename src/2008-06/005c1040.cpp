// from server: 100% by king_originala
// roc 2008-06 005c1040  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1040
//
// 005c1040  6aff                 push -1
// 005c1042  683b467d00           push 0x7d463b
// 005c1047  64a100000000         mov eax, dword ptr fs:[0]
// 005c104d  50                   push eax
// 005c104e  64892500000000       mov dword ptr fs:[0], esp
// 005c1055  83ec08               sub esp, 8
// 005c1058  c7042400000000       mov dword ptr [esp], 0
// 005c105f  681c040000           push 0x41c
// 005c1064  c644240400           mov byte ptr [esp + 4], 0
// 005c1069  ff15b0288000         call dword ptr [0x8028b0]
// 005c106f  83c404               add esp, 4
// 005c1072  89442404             mov dword ptr [esp + 4], eax
// 005c1076  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c107e  85c0                 test eax, eax
// 005c1080  740b                 je 0x5c108d
// 005c1082  6a01                 push 1
// 005c1084  8bc8                 mov ecx, eax
// 005c1086  e835b90600           call 0x62c9c0
// 005c108b  eb02                 jmp 0x5c108f
// 005c108d  33c0                 xor eax, eax
// 005c108f  8b0c24               mov ecx, dword ptr [esp]
// 005c1092  56                   push esi
// 005c1093  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1097  51                   push ecx
// 005c1098  50                   push eax
// 005c1099  8bce                 mov ecx, esi
// 005c109b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c10a3  e8e8feffff           call 0x5c0f90
// 005c10a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c10ac  8bc6                 mov eax, esi
// 005c10ae  5e                   pop esi
// 005c10af  64890d00000000       mov dword ptr fs:[0], ecx
// 005c10b6  83c414               add esp, 0x14
// 005c10b9  c3                   ret 

typedef unsigned int size_t;

extern "C" void* (__cdecl *malloc)(size_t);

inline void* __cdecl operator new(size_t size)
{
    return malloc(size);
}

void __cdecl operator delete(void*);

struct Explosion {
    unsigned char storage[0x41c];
    Explosion(int);
};

struct Creator {
    Explosion* object;
    void* control;
    Creator(Explosion*, int);
};

Creator __cdecl createExplosion()
{
    volatile int control = 0;
    *reinterpret_cast<volatile unsigned char*>(&control) = 0;
    return Creator(new Explosion(1), control);
}
