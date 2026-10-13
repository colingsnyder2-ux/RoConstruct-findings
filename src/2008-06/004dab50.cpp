// from server: 79% by king_originala
// from server: 77% by king_originala
// roc 2008-06 004dab50  unit: Ogre::MemoryDataStream  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dab50
//
// 004dab50  55                   push ebp
// 004dab51  8bec                 mov ebp, esp
// 004dab53  6aff                 push -1
// 004dab55  68e9a07c00           push 0x7ca0e9
// 004dab5a  64a100000000         mov eax, dword ptr fs:[0]
// 004dab60  50                   push eax
// 004dab61  64892500000000       mov dword ptr fs:[0], esp
// 004dab68  83ec3c               sub esp, 0x3c
// 004dab6b  53                   push ebx
// 004dab6c  56                   push esi
// 004dab6d  8bd9                 mov ebx, ecx
// 004dab6f  807b4400             cmp byte ptr [ebx + 0x44], 0
// 004dab73  57                   push edi
// 004dab74  8965f0               mov dword ptr [ebp - 0x10], esp
// 004dab77  895de8               mov dword ptr [ebp - 0x18], ebx
// 004dab7a  0f857b030000         jne 0x4daefb
// 004dab80  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004dab83  85c9                 test ecx, ecx
// 004dab85  740c                 je 0x4dab93
// 004dab87  e8e48cfdff           call 0x4b3870
// 004dab8c  8bf0                 mov esi, eax
// 004dab8e  8945ec               mov dword ptr [ebp - 0x14], eax
// 004dab91  eb05                 jmp 0x4dab98
// 004dab93  33f6                 xor esi, esi
// 004dab95  8975ec               mov dword ptr [ebp - 0x14], esi
// 004dab98  80be4002000000       cmp byte ptr [esi + 0x240], 0
// 004dab9f  7558                 jne 0x4dabf9
// 004daba1  6816b78000           push 0x80b716
// 004daba6  8d4db8               lea ecx, [ebp - 0x48]
// 004daba9  ff1558248000         call dword ptr [0x802458]
// 004dabaf  d905e06d8200         fld dword ptr [0x826de0]
// 004dabb5  8b4508               mov eax, dword ptr [ebp + 8]
// 004dabb8  8b4804               mov ecx, dword ptr [eax + 4]
// 004dabbb  a1684e8000           mov eax, dword ptr [0x804e68]
// 004dabc0  8b11                 mov edx, dword ptr [ecx]
// 004dabc2  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 004dabc8  50                   push eax
// 004dabc9  a16c4e8000           mov eax, dword ptr [0x804e6c]
// 004dabce  50                   push eax
// 004dabcf  6a01                 push 1
// 004dabd1  51                   push ecx
// 004dabd2  d91c24               fstp dword ptr [esp]
// 004dabd5  8d45b8               lea eax, [ebp - 0x48]
// 004dabd8  50                   push eax
// 004dabd9  6a00                 push 0
// 004dabdb  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004dabe2  ffd2                 call edx
// 004dabe4  8d4db8               lea ecx, [ebp - 0x48]
// 004dabe7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dabee  ff1568248000         call dword ptr [0x802468]
// 004dabf4  e9b7000000           jmp 0x4dacb0
// 004dabf9  807b4800             cmp byte ptr [ebx + 0x48], 0
// 004dabfd  0f85ad000000         jne 0x4dacb0
// 004dac03  8b4508               mov eax, dword ptr [ebp + 8]
// 004dac06  50                   push eax
// 004dac07  8bcb                 mov ecx, ebx
// 004dac09  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004dac10  e8ebf1ffff           call 0x4d9e00
// 004dac15  c6434801             mov byte ptr [ebx + 0x48], 1
// 004dac19  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dac20  e98b000000           jmp 0x4dacb0

struct Text;
extern void (__thiscall *constructText)(Text*, const char*);
extern void (__thiscall *destroyText)(Text*);

struct Text {
    unsigned char storage[44];
    Text(const char*);
    ~Text();
};

inline Text::Text(const char* value)
{
    constructText(this, value);
}

inline Text::~Text()
{
    destroyText(this);
}

struct Resource {
    unsigned char padding[0x240];
    unsigned char ready;
};

struct Handle {
    Resource* get();
};

struct Receiver;
typedef void (__thiscall *Notify)(
    Receiver*, int, const Text*, float, int, void*, void*);

struct Receiver {
    Notify* table;
};

struct Argument {
    unsigned char padding[4];
    Receiver* receiver;
};

extern float notificationValue;
extern void* notificationArgument1;
extern void* notificationArgument2;

struct S {
    unsigned char padding0[0x14];
    Handle* handle;
    unsigned char padding1[0x2C];
    unsigned char disabled;
    unsigned char padding2[3];
    unsigned char initialized;

    void initialize(Argument*);
    void f(Argument*);
};

void S::f(Argument* argument)
{
    if (!disabled) {
        Resource* resource = handle ? handle->get() : 0;

        if (!resource->ready) {
            Text text(">Authoring");
            Receiver* receiver = argument->receiver;
            receiver->table[0x198 / 4](
                receiver, 0, &text, notificationValue, 1,
                notificationArgument2, notificationArgument1);
        } else if (!initialized) {
            try {
                initialize(argument);
                initialized = 1;
            } catch (const Text& text) {
                Receiver* receiver = argument->receiver;
                receiver->table[0x198 / 4](
                    receiver, 0, &text, notificationValue, 1,
                    notificationArgument2, notificationArgument1);
            }
        }

        initialized = resource->ready;
    }
}
