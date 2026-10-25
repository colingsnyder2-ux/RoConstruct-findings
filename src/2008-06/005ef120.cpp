// from server: 100% by king_originala
// roc 2008-06 005ef120  unit: RBX::$01::?$SurfaceDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef120
//
// 005ef120  56                   push esi
// 005ef121  57                   push edi
// 005ef122  681cb19700           push 0x97b11c
// 005ef127  6820d65e00           push 0x5ed620
// 005ef12c  8bf9                 mov edi, ecx
// 005ef12e  e8fd81f6ff           call 0x557330
// 005ef133  e888e4ffff           call 0x5ed5c0
// 005ef138  6a08                 push 8
// 005ef13a  8907                 mov dword ptr [edi], eax
// 005ef13c  8d7704               lea esi, [edi + 4]
// 005ef13f  e8dc170b00           call 0x6a0920
// 005ef144  83c40c               add esp, 0xc
// 005ef147  85c0                 test eax, eax
// 005ef149  7411                 je 0x5ef15c
// 005ef14b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef14f  c700e4fc8300         mov dword ptr [eax], 0x83fce4
// 005ef155  8b11                 mov edx, dword ptr [ecx]
// 005ef157  895004               mov dword ptr [eax + 4], edx
// 005ef15a  eb02                 jmp 0x5ef15e
// 005ef15c  33c0                 xor eax, eax
// 005ef15e  8d54240c             lea edx, [esp + 0xc]
// 005ef162  8bc8                 mov ecx, eax
// 005ef164  3bd6                 cmp edx, esi
// 005ef166  7404                 je 0x5ef16c
// 005ef168  8b0e                 mov ecx, dword ptr [esi]
// 005ef16a  8906                 mov dword ptr [esi], eax
// 005ef16c  85c9                 test ecx, ecx
// 005ef16e  7408                 je 0x5ef178
// 005ef170  8b01                 mov eax, dword ptr [ecx]
// 005ef172  8b10                 mov edx, dword ptr [eax]
// 005ef174  6a01                 push 1
// 005ef176  ffd2                 call edx
// 005ef178  8bc7                 mov eax, edi
// 005ef17a  5f                   pop edi
// 005ef17b  5e                   pop esi
// 005ef17c  c20400               ret 4

extern char descriptorName[];
extern void __cdecl descriptorCallback();
extern void __cdecl registerDescriptor(void (__cdecl *)(), const char *);
extern void * __cdecl getDescriptor();
extern void * __cdecl allocate(unsigned int);

struct Node;
typedef void (__thiscall *DestroyNode)(Node *, unsigned int);

struct Node {
    DestroyNode *vtable;
    unsigned int value;
};

extern DestroyNode nodeVtable[];

struct SurfaceDescriptor {
    void *descriptor;
    Node *storage;
    SurfaceDescriptor *initialize(unsigned int *source);
};

SurfaceDescriptor *SurfaceDescriptor::initialize(unsigned int *source)
{
    registerDescriptor(descriptorCallback, descriptorName);
    descriptor = getDescriptor();

    Node **destination = &storage;
    Node *replacement = static_cast<Node *>(allocate(8));
    if (replacement) {
        replacement->vtable = nodeVtable;
        replacement->value = *source;
    } else {
        replacement = 0;
    }

    Node *previous = replacement;
    if (static_cast<void *>(&source) != static_cast<void *>(destination)) {
        previous = *destination;
        *destination = replacement;
    }

    if (previous)
        previous->vtable[0](previous, 1);

    return this;
}
