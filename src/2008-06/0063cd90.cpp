// from server: 100% by colin
// roc 2008-06 0063cd90  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063cd90
//
// 0063cd90  6aff                 push -1
// 0063cd92  689e917d00           push 0x7d919e
// 0063cd97  64a100000000         mov eax, dword ptr fs:[0]
// 0063cd9d  50                   push eax
// 0063cd9e  64892500000000       mov dword ptr fs:[0], esp
// 0063cda5  83ec1c               sub esp, 0x1c
// 0063cda8  56                   push esi
// 0063cda9  8bf1                 mov esi, ecx
// 0063cdab  c70600000000         mov dword ptr [esi], 0
// 0063cdb1  89742404             mov dword ptr [esp + 4], esi
// 0063cdb5  c7460400000000       mov dword ptr [esi + 4], 0
// 0063cdbc  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063cdc0  8b10                 mov edx, dword ptr [eax]
// 0063cdc2  89542408             mov dword ptr [esp + 8], edx
// 0063cdc6  8b5004               mov edx, dword ptr [eax + 4]
// 0063cdc9  8954240c             mov dword ptr [esp + 0xc], edx
// 0063cdcd  8b5008               mov edx, dword ptr [eax + 8]
// 0063cdd0  89542410             mov dword ptr [esp + 0x10], edx
// 0063cdd4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0063cdd7  89542414             mov dword ptr [esp + 0x14], edx
// 0063cddb  8b5010               mov edx, dword ptr [eax + 0x10]
// 0063cdde  8b4014               mov eax, dword ptr [eax + 0x14]
// 0063cde1  89542418             mov dword ptr [esp + 0x18], edx
// 0063cde5  8d542408             lea edx, [esp + 8]
// 0063cde9  8d4e08               lea ecx, [esi + 8]
// 0063cdec  52                   push edx
// 0063cded  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0063cdf5  89442420             mov dword ptr [esp + 0x20], eax
// 0063cdf9  c70100000000         mov dword ptr [ecx], 0
// 0063cdff  e8ccfeffff           call 0x63ccd0
// 0063ce04  6a28                 push 0x28
// 0063ce06  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0063ce0b  e8103b0600           call 0x6a0920
// 0063ce10  83c404               add esp, 4
// 0063ce13  89442430             mov dword ptr [esp + 0x30], eax
// 0063ce17  c644242802           mov byte ptr [esp + 0x28], 2
// 0063ce1c  85c0                 test eax, eax
// 0063ce1e  7409                 je 0x63ce29
// 0063ce20  8bc8                 mov ecx, eax
// 0063ce22  e819dfddff           call 0x41ad40
// 0063ce27  eb02                 jmp 0x63ce2b
// 0063ce29  33c0                 xor eax, eax
// 0063ce2b  50                   push eax
// 0063ce2c  8bce                 mov ecx, esi
// 0063ce2e  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0063ce33  e8b8e2ddff           call 0x41b0f0
// 0063ce38  8bce                 mov ecx, esi
// 0063ce3a  e8018af5ff           call 0x595840
// 0063ce3f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063ce43  8bc6                 mov eax, esi
// 0063ce45  5e                   pop esi
// 0063ce46  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ce4d  83c428               add esp, 0x28
// 0063ce50  c20400               ret 4

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
