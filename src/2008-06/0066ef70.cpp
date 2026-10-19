// from server: 78% by colin
// from server: 75% by king_originala
// roc 2008-06 0066ef70  unit: RBX::HUMAN::VHumanoidState::?$Named  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ef70
//
// 0066ef70  6aff                 push -1
// 0066ef72  686ea87c00           push 0x7ca86e
// 0066ef77  64a100000000         mov eax, dword ptr fs:[0]
// 0066ef7d  50                   push eax
// 0066ef7e  64892500000000       mov dword ptr fs:[0], esp
// 0066ef85  51                   push ecx
// 0066ef86  53                   push ebx
// 0066ef87  56                   push esi
// 0066ef88  8bf1                 mov esi, ecx
// 0066ef8a  c70600000000         mov dword ptr [esi], 0
// 0066ef90  89742408             mov dword ptr [esp + 8], esi
// 0066ef94  c7460400000000       mov dword ptr [esi + 4], 0
// 0066ef9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066ef9f  8b1a                 mov ebx, dword ptr [edx]
// 0066efa1  6a00                 push 0
// 0066efa3  83ec10               sub esp, 0x10
// 0066efa6  8bc4                 mov eax, esp
// 0066efa8  8918                 mov dword ptr [eax], ebx
// 0066efaa  8b5a04               mov ebx, dword ptr [edx + 4]
// 0066efad  895804               mov dword ptr [eax + 4], ebx
// 0066efb0  8b5a08               mov ebx, dword ptr [edx + 8]
// 0066efb3  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066efb6  895808               mov dword ptr [eax + 8], ebx
// 0066efb9  8d4e08               lea ecx, [esi + 8]
// 0066efbc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0066efc4  89500c               mov dword ptr [eax + 0xc], edx
// 0066efc7  e844ffffff           call 0x66ef10
// 0066efcc  b301                 mov bl, 1
// 0066efce  6a28                 push 0x28
// 0066efd0  885c2418             mov byte ptr [esp + 0x18], bl
// 0066efd4  e847190300           call 0x6a0920
// 0066efd9  83c404               add esp, 4
// 0066efdc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066efe0  c644241402           mov byte ptr [esp + 0x14], 2
// 0066efe5  85c0                 test eax, eax
// 0066efe7  7409                 je 0x66eff2
// 0066efe9  8bc8                 mov ecx, eax
// 0066efeb  e850bddaff           call 0x41ad40
// 0066eff0  eb02                 jmp 0x66eff4
// 0066eff2  33c0                 xor eax, eax
// 0066eff4  50                   push eax
// 0066eff5  8bce                 mov ecx, esi
// 0066eff7  885c2418             mov byte ptr [esp + 0x18], bl
// 0066effb  e8f0c0daff           call 0x41b0f0
// 0066f000  8bce                 mov ecx, esi
// 0066f002  e83968f2ff           call 0x595840
// 0066f007  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066f00b  8bc6                 mov eax, esi
// 0066f00d  5e                   pop esi
// 0066f00e  64890d00000000       mov dword ptr fs:[0], ecx
// 0066f015  5b                   pop ebx
// 0066f016  83c410               add esp, 0x10
// 0066f019  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Data {
    unsigned long a, b, c, d;
};

struct Resource {
    unsigned char storage[40];
    Resource();
};

struct __declspec(dllimport) Count {
    unsigned long value;
    Count();
    ~Count();
};

struct Owner {
    unsigned long first;
    Count second;
    Owner();
    ~Owner();
    void attach(Resource*);
};

inline Owner::Owner() : first(0), second() {}

struct State {
    const void* type;
    unsigned long unused;
    Data data;
    unsigned long extra;
    State(Data, unsigned long);
    ~State();
};

struct S : Owner {
    State state;
    S(const Data&);
    void finish();
};

S::S(const Data& data)
    : Owner(), state(data, 0)
{
    attach(new Resource);
    finish();
}
