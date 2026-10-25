// from server: 100% by colin
// roc 2008-06 005b1ca0  unit: RBX::VHat::?$FactoryProduct  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1ca0
//
// 005b1ca0  6aff                 push -1
// 005b1ca2  689e917d00           push 0x7d919e
// 005b1ca7  64a100000000         mov eax, dword ptr fs:[0]
// 005b1cad  50                   push eax
// 005b1cae  64892500000000       mov dword ptr fs:[0], esp
// 005b1cb5  83ec1c               sub esp, 0x1c
// 005b1cb8  56                   push esi
// 005b1cb9  8bf1                 mov esi, ecx
// 005b1cbb  c70600000000         mov dword ptr [esi], 0
// 005b1cc1  89742404             mov dword ptr [esp + 4], esi
// 005b1cc5  c7460400000000       mov dword ptr [esi + 4], 0
// 005b1ccc  8b442430             mov eax, dword ptr [esp + 0x30]
// 005b1cd0  8b10                 mov edx, dword ptr [eax]
// 005b1cd2  89542408             mov dword ptr [esp + 8], edx
// 005b1cd6  8b5004               mov edx, dword ptr [eax + 4]
// 005b1cd9  8954240c             mov dword ptr [esp + 0xc], edx
// 005b1cdd  8b5008               mov edx, dword ptr [eax + 8]
// 005b1ce0  89542410             mov dword ptr [esp + 0x10], edx
// 005b1ce4  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b1ce7  89542414             mov dword ptr [esp + 0x14], edx
// 005b1ceb  8b5010               mov edx, dword ptr [eax + 0x10]
// 005b1cee  8b4014               mov eax, dword ptr [eax + 0x14]
// 005b1cf1  89542418             mov dword ptr [esp + 0x18], edx
// 005b1cf5  8d542408             lea edx, [esp + 8]
// 005b1cf9  8d4e08               lea ecx, [esi + 8]
// 005b1cfc  52                   push edx
// 005b1cfd  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005b1d05  89442420             mov dword ptr [esp + 0x20], eax
// 005b1d09  c70100000000         mov dword ptr [ecx], 0
// 005b1d0f  e8bcfaffff           call 0x5b17d0
// 005b1d14  6a28                 push 0x28
// 005b1d16  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005b1d1b  e800ec0e00           call 0x6a0920
// 005b1d20  83c404               add esp, 4
// 005b1d23  89442430             mov dword ptr [esp + 0x30], eax
// 005b1d27  c644242802           mov byte ptr [esp + 0x28], 2
// 005b1d2c  85c0                 test eax, eax
// 005b1d2e  7409                 je 0x5b1d39
// 005b1d30  8bc8                 mov ecx, eax
// 005b1d32  e80990e6ff           call 0x41ad40
// 005b1d37  eb02                 jmp 0x5b1d3b
// 005b1d39  33c0                 xor eax, eax
// 005b1d3b  50                   push eax
// 005b1d3c  8bce                 mov ecx, esi
// 005b1d3e  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005b1d43  e8a893e6ff           call 0x41b0f0
// 005b1d48  8bce                 mov ecx, esi
// 005b1d4a  e8f13afeff           call 0x595840
// 005b1d4f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b1d53  8bc6                 mov eax, esi
// 005b1d55  5e                   pop esi
// 005b1d56  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1d5d  83c428               add esp, 0x28
// 005b1d60  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Payload {
    unsigned int words[6];
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct Control {
    void* pointer;
    Control();
};

inline Control::Control() : pointer(0) {
}

struct Owner {
    Object* object;
    Control control;

    Owner();
    ~Owner();
    void reset(Object*);
};

inline Owner::Owner() : object(0), control() {
}

struct Callback {
    void* target;

    Callback(const Payload&);
    ~Callback();
    void initialize(const Payload&);
};

inline Callback::Callback(const Payload& source) {
    Payload copy = source;
    target = 0;
    initialize(copy);
}

struct SpawnerService : Owner {
    Callback callback;

    SpawnerService(const Payload&);
    void finish();
};

SpawnerService::SpawnerService(const Payload& source)
    : Owner(), callback(source)
{
    reset(new Object);
    finish();
}
