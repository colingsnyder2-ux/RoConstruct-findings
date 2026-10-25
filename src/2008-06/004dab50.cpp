// from server: 33% by colin
// roc 2008-06 004dab50  unit: Ogre::MemoryDataStream  size: 958 bytes
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
// 004dac25  8d4ddc               lea ecx, [ebp - 0x24]
// 004dac28  51                   push ecx
// 004dac29  e8f2e90800           call 0x569620
// 004dac2e  83c404               add esp, 4
// 004dac31  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004dac34  83794010             cmp dword ptr [ecx + 0x40], 0x10
// 004dac38  c645fc03             mov byte ptr [ebp - 4], 3
// 004dac3c  7205                 jb 0x4dac43
// 004dac3e  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 004dac41  eb03                 jmp 0x4dac46
// 004dac43  83c12c               add ecx, 0x2c
// 004dac46  8b00                 mov eax, dword ptr [eax]
// 004dac48  51                   push ecx
// 004dac49  68c46d8200           push 0x826dc4
// 004dac4e  6a03                 push 3
// 004dac50  50                   push eax
// 004dac51  e84ae70800           call 0x5693a0
// 004dac56  83c410               add esp, 0x10
// 004dac59  8d4ddc               lea ecx, [ebp - 0x24]
// 004dac5c  c645fc02             mov byte ptr [ebp - 4], 2
// 004dac60  e8fb591200           call 0x600660
// 004dac65  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004dac6c  b8aaac4d00           mov eax, 0x4dacaa
// 004dac71  c3                   ret 
// 004dac72  8d55d4               lea edx, [ebp - 0x2c]
// 004dac75  52                   push edx
// 004dac76  e8a5e90800           call 0x569620
// 004dac7b  8b00                 mov eax, dword ptr [eax]
// 004dac7d  68ac6d8200           push 0x826dac
// 004dac82  6a03                 push 3
// 004dac84  50                   push eax
// 004dac85  c645fc04             mov byte ptr [ebp - 4], 4
// 004dac89  e812e70800           call 0x5693a0
// 004dac8e  83c410               add esp, 0x10
// 004dac91  8d4dd4               lea ecx, [ebp - 0x2c]
// 004dac94  c645fc02             mov byte ptr [ebp - 4], 2
// 004dac98  e8c3591200           call 0x600660
// 004dac9d  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004daca4  b8aaac4d00           mov eax, 0x4dacaa
// 004daca9  c3                   ret 
// 004dacaa  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004dacad  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004dacb0  d98634020000         fld dword ptr [esi + 0x234]
// 004dacb6  8b7b08               mov edi, dword ptr [ebx + 8]
// 004dacb9  83ec0c               sub esp, 0xc
// 004dacbc  8bc4                 mov eax, esp
// 004dacbe  d918                 fstp dword ptr [eax]
// 004dacc0  8965e8               mov dword ptr [ebp - 0x18], esp
// 004dacc3  d98638020000         fld dword ptr [esi + 0x238]
// 004dacc9  83ec0c               sub esp, 0xc
// 004daccc  d95804               fstp dword ptr [eax + 4]
// 004daccf  8965e8               mov dword ptr [ebp - 0x18], esp
// 004dacd2  d9863c020000         fld dword ptr [esi + 0x23c]
// 004dacd8  d95808               fstp dword ptr [eax + 8]
// 004dacdb  8bc4                 mov eax, esp
// 004dacdd  d98628020000         fld dword ptr [esi + 0x228]
// 004dace3  81ecf8000000         sub esp, 0xf8
// 004dace9  d918                 fstp dword ptr [eax]
// 004daceb  8bcc                 mov ecx, esp
// 004daced  d9862c020000         fld dword ptr [esi + 0x22c]
// 004dacf3  8965ec               mov dword ptr [ebp - 0x14], esp
// 004dacf6  d95804               fstp dword ptr [eax + 4]
// 004dacf9  d98630020000         fld dword ptr [esi + 0x230]
// 004dacff  d95808               fstp dword ptr [eax + 8]
// 004dad02  8d8630010000         lea eax, [esi + 0x130]
// 004dad08  50                   push eax
// 004dad09  8945e8               mov dword ptr [ebp - 0x18], eax
// 004dad0c  e80fc3ffff           call 0x4d7020
// 004dad11  51                   push ecx
// 004dad12  8bc4                 mov eax, esp
// 004dad14  c70000000000         mov dword ptr [eax], 0
// 004dad1a  8b07                 mov eax, dword ptr [edi]
// 004dad1c  8b5004               mov edx, dword ptr [eax + 4]
// 004dad1f  8bcf                 mov ecx, edi
// 004dad21  8965ec               mov dword ptr [ebp - 0x14], esp
// 004dad24  ffd2                 call edx
// 004dad26  8b4308               mov eax, dword ptr [ebx + 8]
// 004dad29  6a00                 push 0
// 004dad2b  68c4119400           push 0x9411c4
// 004dad30  6894119400           push 0x941194
// 004dad35  6a00                 push 0
// 004dad37  50                   push eax
// 004dad38  e8896a1c00           call 0x6a17c6
// 004dad3d  d98644020000         fld dword ptr [esi + 0x244]
// 004dad43  d98648020000         fld dword ptr [esi + 0x248]
// 004dad49  83c414               add esp, 0x14
// 004dad4c  d9864c020000         fld dword ptr [esi + 0x24c]
// 004dad52  d98650020000         fld dword ptr [esi + 0x250]
// 004dad58  d9cb                 fxch st(3)
// 004dad5a  d95814               fstp dword ptr [eax + 0x14]
// 004dad5d  d9c9                 fxch st(1)
// 004dad5f  d95818               fstp dword ptr [eax + 0x18]
// 004dad62  d9581c               fstp dword ptr [eax + 0x1c]
// 004dad65  d95820               fstp dword ptr [eax + 0x20]
// 004dad68  d98654020000         fld dword ptr [esi + 0x254]
// 004dad6e  d98658020000         fld dword ptr [esi + 0x258]
// 004dad74  d9865c020000         fld dword ptr [esi + 0x25c]
// 004dad7a  d98660020000         fld dword ptr [esi + 0x260]
// 004dad80  d9cb                 fxch st(3)
// 004dad82  d99828030000         fstp dword ptr [eax + 0x328]
// 004dad88  d9c9                 fxch st(1)
// 004dad8a  d9982c030000         fstp dword ptr [eax + 0x32c]
// 004dad90  d99830030000         fstp dword ptr [eax + 0x330]
// 004dad96  d99834030000         fstp dword ptr [eax + 0x334]
// 004dad9c  d98670020000         fld dword ptr [esi + 0x270]
// 004dada2  d98674020000         fld dword ptr [esi + 0x274]
// 004dada8  d98678020000         fld dword ptr [esi + 0x278]
// 004dadae  d9ca                 fxch st(2)
// 004dadb0  d99838030000         fstp dword ptr [eax + 0x338]
// 004dadb6  d9983c030000         fstp dword ptr [eax + 0x33c]
// 004dadbc  d99840030000         fstp dword ptr [eax + 0x340]
// 004dadc2  d9867c020000         fld dword ptr [esi + 0x27c]
// 004dadc8  d98680020000         fld dword ptr [esi + 0x280]
// 004dadce  d98684020000         fld dword ptr [esi + 0x284]
// 004dadd4  d9ca                 fxch st(2)
// 004dadd6  d99844030000         fstp dword ptr [eax + 0x344]
// 004daddc  d99848030000         fstp dword ptr [eax + 0x348]
// 004dade2  d9984c030000         fstp dword ptr [eax + 0x34c]
// 004dade8  d98688020000         fld dword ptr [esi + 0x288]
// 004dadee  d99850030000         fstp dword ptr [eax + 0x350]
// 004dadf4  d9868c020000         fld dword ptr [esi + 0x28c]
// 004dadfa  d98690020000         fld dword ptr [esi + 0x290]
// 004dae00  d98694020000         fld dword ptr [esi + 0x294]
// 004dae06  d9ca                 fxch st(2)
// 004dae08  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004dae0b  d99854030000         fstp dword ptr [eax + 0x354]
// 004dae11  d99858030000         fstp dword ptr [eax + 0x358]
// 004dae17  d9985c030000         fstp dword ptr [eax + 0x35c]
// 004dae1d  d98698020000         fld dword ptr [esi + 0x298]
// 004dae23  d9869c020000         fld dword ptr [esi + 0x29c]
// 004dae29  d986a0020000         fld dword ptr [esi + 0x2a0]
// 004dae2f  d9ca                 fxch st(2)
// 004dae31  d99860030000         fstp dword ptr [eax + 0x360]
// 004dae37  d99864030000         fstp dword ptr [eax + 0x364]
// 004dae3d  d99868030000         fstp dword ptr [eax + 0x368]
// 004dae43  d986a4020000         fld dword ptr [esi + 0x2a4]
// 004dae49  d986a8020000         fld dword ptr [esi + 0x2a8]
// 004dae4f  d986ac020000         fld dword ptr [esi + 0x2ac]
// 004dae55  d9ca                 fxch st(2)
// 004dae57  d9986c030000         fstp dword ptr [eax + 0x36c]
// 004dae5d  d99870030000         fstp dword ptr [eax + 0x370]
// 004dae63  d99874030000         fstp dword ptr [eax + 0x374]
// 004dae69  d986b0020000         fld dword ptr [esi + 0x2b0]
// 004dae6f  d986b4020000         fld dword ptr [esi + 0x2b4]
// 004dae75  d986b8020000         fld dword ptr [esi + 0x2b8]
// 004dae7b  d9ca                 fxch st(2)
// 004dae7d  d99878030000         fstp dword ptr [eax + 0x378]
// 004dae83  d9987c030000         fstp dword ptr [eax + 0x37c]
// 004dae89  d99880030000         fstp dword ptr [eax + 0x380]
// 004dae8f  d986bc020000         fld dword ptr [esi + 0x2bc]
// 004dae95  d986c0020000         fld dword ptr [esi + 0x2c0]
// 004dae9b  d986c4020000         fld dword ptr [esi + 0x2c4]
// 004daea1  d9ca                 fxch st(2)
// 004daea3  d99884030000         fstp dword ptr [eax + 0x384]
// 004daea9  d99888030000         fstp dword ptr [eax + 0x388]
// 004daeaf  d9988c030000         fstp dword ptr [eax + 0x38c]
// 004daeb5  d986c8020000         fld dword ptr [esi + 0x2c8]
// 004daebb  d986cc020000         fld dword ptr [esi + 0x2cc]
// 004daec1  d986d0020000         fld dword ptr [esi + 0x2d0]
// 004daec7  d9ca                 fxch st(2)
// 004daec9  d99890030000         fstp dword ptr [eax + 0x390]
// 004daecf  d99894030000         fstp dword ptr [eax + 0x394]
// 004daed5  d99898030000         fstp dword ptr [eax + 0x398]
// 004daedb  8b4104               mov eax, dword ptr [ecx + 4]
// 004daede  83b8dc8b000000       cmp dword ptr [eax + 0x8bdc], 0
// 004daee5  7410                 je 0x4daef7
// 004daee7  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004daeea  52                   push edx
// 004daeeb  51                   push ecx
// 004daeec  8b88dc8b0000         mov ecx, dword ptr [eax + 0x8bdc]
// 004daef2  e8f9481a00           call 0x67f7f0
// 004daef7  c6434401             mov byte ptr [ebx + 0x44], 1
// 004daefb  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004daefe  5f                   pop edi
// 004daeff  5e                   pop esi
// 004daf00  64890d00000000       mov dword ptr fs:[0], ecx
// 004daf07  5b                   pop ebx
// 004daf08  8be5                 mov esp, ebp
// 004daf0a  5d                   pop ebp
// 004daf0b  c20400               ret 4

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
