// from server: 100% by colin
// roc 2008-06 005febb0  unit: RBX::Tool  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005febb0
//
// 005febb0  6aff                 push -1
// 005febb2  689e917d00           push 0x7d919e
// 005febb7  64a100000000         mov eax, dword ptr fs:[0]
// 005febbd  50                   push eax
// 005febbe  64892500000000       mov dword ptr fs:[0], esp
// 005febc5  83ec1c               sub esp, 0x1c
// 005febc8  56                   push esi
// 005febc9  8bf1                 mov esi, ecx
// 005febcb  c70600000000         mov dword ptr [esi], 0
// 005febd1  89742404             mov dword ptr [esp + 4], esi
// 005febd5  c7460400000000       mov dword ptr [esi + 4], 0
// 005febdc  8b442430             mov eax, dword ptr [esp + 0x30]
// 005febe0  8b10                 mov edx, dword ptr [eax]
// 005febe2  89542408             mov dword ptr [esp + 8], edx
// 005febe6  8b5004               mov edx, dword ptr [eax + 4]
// 005febe9  8954240c             mov dword ptr [esp + 0xc], edx
// 005febed  8b5008               mov edx, dword ptr [eax + 8]
// 005febf0  89542410             mov dword ptr [esp + 0x10], edx
// 005febf4  8b500c               mov edx, dword ptr [eax + 0xc]
// 005febf7  89542414             mov dword ptr [esp + 0x14], edx
// 005febfb  8b5010               mov edx, dword ptr [eax + 0x10]
// 005febfe  8b4014               mov eax, dword ptr [eax + 0x14]
// 005fec01  89542418             mov dword ptr [esp + 0x18], edx
// 005fec05  8d542408             lea edx, [esp + 8]
// 005fec09  8d4e08               lea ecx, [esi + 8]
// 005fec0c  52                   push edx
// 005fec0d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005fec15  89442420             mov dword ptr [esp + 0x20], eax
// 005fec19  c70100000000         mov dword ptr [ecx], 0
// 005fec1f  e81cf8ffff           call 0x5fe440
// 005fec24  6a28                 push 0x28
// 005fec26  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005fec2b  e8f01c0a00           call 0x6a0920
// 005fec30  83c404               add esp, 4
// 005fec33  89442430             mov dword ptr [esp + 0x30], eax
// 005fec37  c644242802           mov byte ptr [esp + 0x28], 2
// 005fec3c  85c0                 test eax, eax
// 005fec3e  7409                 je 0x5fec49
// 005fec40  8bc8                 mov ecx, eax
// 005fec42  e8f9c0e1ff           call 0x41ad40
// 005fec47  eb02                 jmp 0x5fec4b
// 005fec49  33c0                 xor eax, eax
// 005fec4b  50                   push eax
// 005fec4c  8bce                 mov ecx, esi
// 005fec4e  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005fec53  e898c4e1ff           call 0x41b0f0
// 005fec58  8bce                 mov ecx, esi
// 005fec5a  e8e16bf9ff           call 0x595840
// 005fec5f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005fec63  8bc6                 mov eax, esi
// 005fec65  5e                   pop esi
// 005fec66  64890d00000000       mov dword ptr fs:[0], ecx
// 005fec6d  83c428               add esp, 0x28
// 005fec70  c20400               ret 4

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
