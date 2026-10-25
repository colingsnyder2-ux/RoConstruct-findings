// from server: 100% by colin
// roc 2008-06 00619290  unit: RBX::Flag  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619290
//
// 00619290  6aff                 push -1
// 00619292  689e917d00           push 0x7d919e
// 00619297  64a100000000         mov eax, dword ptr fs:[0]
// 0061929d  50                   push eax
// 0061929e  64892500000000       mov dword ptr fs:[0], esp
// 006192a5  83ec1c               sub esp, 0x1c
// 006192a8  56                   push esi
// 006192a9  8bf1                 mov esi, ecx
// 006192ab  c70600000000         mov dword ptr [esi], 0
// 006192b1  89742404             mov dword ptr [esp + 4], esi
// 006192b5  c7460400000000       mov dword ptr [esi + 4], 0
// 006192bc  8b442430             mov eax, dword ptr [esp + 0x30]
// 006192c0  8b10                 mov edx, dword ptr [eax]
// 006192c2  89542408             mov dword ptr [esp + 8], edx
// 006192c6  8b5004               mov edx, dword ptr [eax + 4]
// 006192c9  8954240c             mov dword ptr [esp + 0xc], edx
// 006192cd  8b5008               mov edx, dword ptr [eax + 8]
// 006192d0  89542410             mov dword ptr [esp + 0x10], edx
// 006192d4  8b500c               mov edx, dword ptr [eax + 0xc]
// 006192d7  89542414             mov dword ptr [esp + 0x14], edx
// 006192db  8b5010               mov edx, dword ptr [eax + 0x10]
// 006192de  8b4014               mov eax, dword ptr [eax + 0x14]
// 006192e1  89542418             mov dword ptr [esp + 0x18], edx
// 006192e5  8d542408             lea edx, [esp + 8]
// 006192e9  8d4e08               lea ecx, [esi + 8]
// 006192ec  52                   push edx
// 006192ed  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006192f5  89442420             mov dword ptr [esp + 0x20], eax
// 006192f9  c70100000000         mov dword ptr [ecx], 0
// 006192ff  e8ecfaffff           call 0x618df0
// 00619304  6a28                 push 0x28
// 00619306  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0061930b  e810760800           call 0x6a0920
// 00619310  83c404               add esp, 4
// 00619313  89442430             mov dword ptr [esp + 0x30], eax
// 00619317  c644242802           mov byte ptr [esp + 0x28], 2
// 0061931c  85c0                 test eax, eax
// 0061931e  7409                 je 0x619329
// 00619320  8bc8                 mov ecx, eax
// 00619322  e8191ae0ff           call 0x41ad40
// 00619327  eb02                 jmp 0x61932b
// 00619329  33c0                 xor eax, eax
// 0061932b  50                   push eax
// 0061932c  8bce                 mov ecx, esi
// 0061932e  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00619333  e8b81de0ff           call 0x41b0f0
// 00619338  8bce                 mov ecx, esi
// 0061933a  e801c5f7ff           call 0x595840
// 0061933f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00619343  8bc6                 mov eax, esi
// 00619345  5e                   pop esi
// 00619346  64890d00000000       mov dword ptr fs:[0], ecx
// 0061934d  83c428               add esp, 0x28
// 00619350  c20400               ret 4

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
