// from server: 100% by king_originala
// roc 2008-06 005d2a60  unit: RBX::SpawnerService  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2a60
//
// 005d2a60  6aff                 push -1
// 005d2a62  689e917d00           push 0x7d919e
// 005d2a67  64a100000000         mov eax, dword ptr fs:[0]
// 005d2a6d  50                   push eax
// 005d2a6e  64892500000000       mov dword ptr fs:[0], esp
// 005d2a75  83ec1c               sub esp, 0x1c
// 005d2a78  56                   push esi
// 005d2a79  8bf1                 mov esi, ecx
// 005d2a7b  c70600000000         mov dword ptr [esi], 0
// 005d2a81  89742404             mov dword ptr [esp + 4], esi
// 005d2a85  c7460400000000       mov dword ptr [esi + 4], 0
// 005d2a8c  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d2a90  8b10                 mov edx, dword ptr [eax]
// 005d2a92  89542408             mov dword ptr [esp + 8], edx
// 005d2a96  8b5004               mov edx, dword ptr [eax + 4]
// 005d2a99  8954240c             mov dword ptr [esp + 0xc], edx
// 005d2a9d  8b5008               mov edx, dword ptr [eax + 8]
// 005d2aa0  89542410             mov dword ptr [esp + 0x10], edx
// 005d2aa4  8b500c               mov edx, dword ptr [eax + 0xc]
// 005d2aa7  89542414             mov dword ptr [esp + 0x14], edx
// 005d2aab  8b5010               mov edx, dword ptr [eax + 0x10]
// 005d2aae  8b4014               mov eax, dword ptr [eax + 0x14]
// 005d2ab1  89542418             mov dword ptr [esp + 0x18], edx
// 005d2ab5  8d542408             lea edx, [esp + 8]
// 005d2ab9  8d4e08               lea ecx, [esi + 8]
// 005d2abc  52                   push edx
// 005d2abd  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005d2ac5  89442420             mov dword ptr [esp + 0x20], eax
// 005d2ac9  c70100000000         mov dword ptr [ecx], 0
// 005d2acf  e8dcf8ffff           call 0x5d23b0
// 005d2ad4  6a28                 push 0x28
// 005d2ad6  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005d2adb  e840de0c00           call 0x6a0920
// 005d2ae0  83c404               add esp, 4
// 005d2ae3  89442430             mov dword ptr [esp + 0x30], eax
// 005d2ae7  c644242802           mov byte ptr [esp + 0x28], 2
// 005d2aec  85c0                 test eax, eax
// 005d2aee  7409                 je 0x5d2af9
// 005d2af0  8bc8                 mov ecx, eax
// 005d2af2  e84982e4ff           call 0x41ad40
// 005d2af7  eb02                 jmp 0x5d2afb
// 005d2af9  33c0                 xor eax, eax
// 005d2afb  50                   push eax
// 005d2afc  8bce                 mov ecx, esi
// 005d2afe  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005d2b03  e8e885e4ff           call 0x41b0f0
// 005d2b08  8bce                 mov ecx, esi
// 005d2b0a  e8312dfcff           call 0x595840
// 005d2b0f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d2b13  8bc6                 mov eax, esi
// 005d2b15  5e                   pop esi
// 005d2b16  64890d00000000       mov dword ptr fs:[0], ecx
// 005d2b1d  83c428               add esp, 0x28
// 005d2b20  c20400               ret 4

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
