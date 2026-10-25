// from server: 44% by colin
// from server: 43% by colin
// roc 2008-06 005620f0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 950 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005620f0
//
// 005620f0  55                   push ebp
// 005620f1  8d6c249c             lea ebp, [esp - 0x64]
// 005620f5  83ec64               sub esp, 0x64
// 005620f8  6aff                 push -1
// 005620fa  68d3ef7c00           push 0x7cefd3
// 005620ff  64a100000000         mov eax, dword ptr fs:[0]
// 00562105  50                   push eax
// 00562106  64892500000000       mov dword ptr fs:[0], esp
// 0056210d  83ec3c               sub esp, 0x3c
// 00562110  53                   push ebx
// 00562111  56                   push esi
// 00562112  57                   push edi
// 00562113  8bf9                 mov edi, ecx
// 00562115  8d4d08               lea ecx, [ebp + 8]
// 00562118  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056211b  897d60               mov dword ptr [ebp + 0x60], edi
// 0056211e  e87deeffff           call 0x560fa0
// 00562123  8d9f30010000         lea ebx, [edi + 0x130]
// 00562129  8bcb                 mov ecx, ebx
// 0056212b  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00562132  895d50               mov dword ptr [ebp + 0x50], ebx
// 00562135  e8a62b0300           call 0x594ce0
// 0056213a  c6455401             mov byte ptr [ebp + 0x54], 1
// 0056213e  83bf5001000000       cmp dword ptr [edi + 0x150], 0
// 00562145  c645fc01             mov byte ptr [ebp - 4], 1
// 00562149  7530                 jne 0x56217b
// 0056214b  8bcb                 mov ecx, ebx
// 0056214d  c645fc00             mov byte ptr [ebp - 4], 0
// 00562151  e8aa2b0300           call 0x594d00
// 00562156  8d4d08               lea ecx, [ebp + 8]
// 00562159  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00562160  e8bbeeffff           call 0x561020
// 00562165  33c0                 xor eax, eax
// 00562167  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0056216a  64890d00000000       mov dword ptr fs:[0], ecx
// 00562171  5f                   pop edi
// 00562172  5e                   pop esi
// 00562173  5b                   pop ebx
// 00562174  83c564               add ebp, 0x64
// 00562177  8be5                 mov esp, ebp
// 00562179  5d                   pop ebp
// 0056217a  c3                   ret 
// 0056217b  8b874c010000         mov eax, dword ptr [edi + 0x14c]
// 00562181  8b30                 mov esi, dword ptr [eax]
// 00562183  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00562189  85c0                 test eax, eax
// 0056218b  755e                 jne 0x5621eb
// 0056218d  ff1590288000         call dword ptr [0x802890]
// 00562193  33c0                 xor eax, eax
// 00562195  3b7014               cmp esi, dword ptr [eax + 0x14]
// 00562198  7506                 jne 0x5621a0
// 0056219a  ff1590288000         call dword ptr [0x802890]
// 005621a0  83c608               add esi, 8
// 005621a3  56                   push esi
// 005621a4  8d4d08               lea ecx, [ebp + 8]
// 005621a7  ff150c248000         call dword ptr [0x80240c]
// 005621ad  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005621b0  83c620               add esi, 0x20
// 005621b3  56                   push esi
// 005621b4  8d4d28               lea ecx, [ebp + 0x28]
// 005621b7  894524               mov dword ptr [ebp + 0x24], eax
// 005621ba  e8b1eeffff           call 0x561070
// 005621bf  8bcb                 mov ecx, ebx
// 005621c1  c645fc00             mov byte ptr [ebp - 4], 0
// 005621c5  e8362b0300           call 0x594d00
// 005621ca  6a1c                 push 0x1c
// 005621cc  e84fe71300           call 0x6a0920
// 005621d1  83c404               add esp, 4
// 005621d4  894544               mov dword ptr [ebp + 0x44], eax
// 005621d7  c645fc02             mov byte ptr [ebp - 4], 2
// 005621db  85c0                 test eax, eax
// 005621dd  7410                 je 0x5621ef
// 005621df  8bc8                 mov ecx, eax
// 005621e1  ff1560248000         call dword ptr [0x802460]
// 005621e7  8bf0                 mov esi, eax
// 005621e9  eb06                 jmp 0x5621f1
// 005621eb  8b00                 mov eax, dword ptr [eax]
// 005621ed  eba6                 jmp 0x562195
// 005621ef  33f6                 xor esi, esi
// 005621f1  56                   push esi
// 005621f2  8d4d5c               lea ecx, [ebp + 0x5c]
// 005621f5  c645fc00             mov byte ptr [ebp - 4], 0
// 005621f9  897558               mov dword ptr [ebp + 0x58], esi
// 005621fc  e8dfb3ffff           call 0x55d5e0
// 00562201  56                   push esi
// 00562202  8d4d5c               lea ecx, [ebp + 0x5c]
// 00562205  56                   push esi
// 00562206  51                   push ecx
// 00562207  e804b2f1ff           call 0x47d410
// 0056220c  83c40c               add esp, 0xc
// 0056220f  8d5508               lea edx, [ebp + 8]
// 00562212  52                   push edx
// 00562213  8d4db8               lea ecx, [ebp - 0x48]
// 00562216  c645fc05             mov byte ptr [ebp - 4], 5
// 0056221a  e891b2ebff           call 0x41d4b0
// 0056221f  8b5d58               mov ebx, dword ptr [ebp + 0x58]
// 00562222  53                   push ebx
// 00562223  8bc8                 mov ecx, eax
// 00562225  c645fc06             mov byte ptr [ebp - 4], 6
// 00562229  e8b2780000           call 0x569ae0
// 0056222e  8d4db8               lea ecx, [ebp - 0x48]
// 00562231  c645fc05             mov byte ptr [ebp - 4], 5
// 00562235  e8e6d30700           call 0x5df620
// 0056223a  8db770010000         lea esi, [edi + 0x170]
// 00562240  8bce                 mov ecx, esi
// 00562242  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 00562249  c745fc04000000       mov dword ptr [ebp - 4], 4
// 00562250  897550               mov dword ptr [ebp + 0x50], esi
// 00562253  c6455400             mov byte ptr [ebp + 0x54], 0
// 00562257  e8842a0300           call 0x594ce0
// 0056225c  c6455401             mov byte ptr [ebp + 0x54], 1
// 00562260  8d4508               lea eax, [ebp + 8]
// 00562263  50                   push eax
// 00562264  8d8f78010000         lea ecx, [edi + 0x178]
// 0056226a  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 0056226e  e8ade4ffff           call 0x560720
// 00562273  8d4d5c               lea ecx, [ebp + 0x5c]
// 00562276  51                   push ecx
// 00562277  8d4804               lea ecx, [eax + 4]
// 0056227a  8918                 mov dword ptr [eax], ebx
// 0056227c  e82f03eaff           call 0x4025b0
// 00562281  8bce                 mov ecx, esi
// 00562283  c645fc04             mov byte ptr [ebp - 4], 4
// 00562287  e8742a0300           call 0x594d00
// 0056228c  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00562293  e9bb000000           jmp 0x562353
// 00562298  8b7560               mov esi, dword ptr [ebp + 0x60]
// 0056229b  8d8e30010000         lea ecx, [esi + 0x130]
// 005622a1  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 005622a8  894d50               mov dword ptr [ebp + 0x50], ecx
// 005622ab  c6455400             mov byte ptr [ebp + 0x54], 0
// 005622af  e82c2a0300           call 0x594ce0
// 005622b4  c6455401             mov byte ptr [ebp + 0x54], 1
// 005622b8  837d2010             cmp dword ptr [ebp + 0x20], 0x10
// 005622bc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005622bf  b308                 mov bl, 8
// 005622c1  885dfc               mov byte ptr [ebp - 4], bl
// 005622c4  7303                 jae 0x5622c9
// 005622c6  8d450c               lea eax, [ebp + 0xc]
// 005622c9  50                   push eax
// 005622ca  8d4dc8               lea ecx, [ebp - 0x38]
// 005622cd  e83ed4ffff           call 0x55f710
// 005622d2  8d55c8               lea edx, [ebp - 0x38]
// 005622d5  52                   push edx
// 005622d6  8d8e54010000         lea ecx, [esi + 0x154]
// 005622dc  c645fc09             mov byte ptr [ebp - 4], 9
// 005622e0  e86bc3ffff           call 0x55e650
// 005622e5  8d4dc8               lea ecx, [ebp - 0x38]
// 005622e8  885dfc               mov byte ptr [ebp - 4], bl
// 005622eb  ff1568248000         call dword ptr [0x802468]
// 005622f1  6a00                 push 0
// 005622f3  6a00                 push 0
// 005622f5  e892f21300           call 0x6a158c
// 005622fa  8d4550               lea eax, [ebp + 0x50]
// 005622fd  50                   push eax
// 005622fe  e81d730000           call 0x569620
// 00562303  83c404               add esp, 4
// 00562306  837d2010             cmp dword ptr [ebp + 0x20], 0x10
// 0056230a  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0056230d  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 00562311  7303                 jae 0x562316
// 00562313  8d7d0c               lea edi, [ebp + 0xc]
// 00562316  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00562319  8b11                 mov edx, dword ptr [ecx]
// 0056231b  8b30                 mov esi, dword ptr [eax]
// 0056231d  8b4204               mov eax, dword ptr [edx + 4]
// 00562320  ffd0                 call eax
// 00562322  50                   push eax
// 00562323  57                   push edi
// 00562324  68b8de8200           push 0x82deb8
// 00562329  6a03                 push 3
// 0056232b  56                   push esi
// 0056232c  e86f700000           call 0x5693a0
// 00562331  83c414               add esp, 0x14
// 00562334  8d4d50               lea ecx, [ebp + 0x50]
// 00562337  c645fc0b             mov byte ptr [ebp - 4], 0xb
// 0056233b  e820e30900           call 0x600660
// 00562340  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00562347  b84d235600           mov eax, 0x56234d
// 0056234c  c3                   ret 
// 0056234d  8b7d60               mov edi, dword ptr [ebp + 0x60]
// 00562350  8b5d58               mov ebx, dword ptr [ebp + 0x58]
// 00562353  83ec10               sub esp, 0x10
// 00562356  896560               mov dword ptr [ebp + 0x60], esp
// 00562359  8bcc                 mov ecx, esp
// 0056235b  83ec08               sub esp, 8
// 0056235e  8bc4                 mov eax, esp
// 00562360  8918                 mov dword ptr [eax], ebx
// 00562362  8b5d5c               mov ebx, dword ptr [ebp + 0x5c]
// 00562365  896560               mov dword ptr [ebp + 0x60], esp
// 00562368  895804               mov dword ptr [eax + 4], ebx
// 0056236b  85db                 test ebx, ebx
// 0056236d  740c                 je 0x56237b
// 0056236f  8d5304               lea edx, [ebx + 4]
// 00562372  b801000000           mov eax, 1
// 00562377  f00fc102             lock xadd dword ptr [edx], eax
// 0056237b  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0056237e  0fb605ec409700       movzx eax, byte ptr [0x9740ec]
// 00562385  52                   push edx
// 00562386  50                   push eax
// 00562387  6880dc5500           push 0x55dc80
// 0056238c  51                   push ecx
// 0056238d  e81ebdffff           call 0x55e0b0
// 00562392  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00562395  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00562398  83c418               add esp, 0x18
// 0056239b  894544               mov dword ptr [ebp + 0x44], eax
// 0056239e  3bc8                 cmp ecx, eax
// 005623a0  760c                 jbe 0x5623ae
// 005623a2  ff1590288000         call dword ptr [0x802890]
// 005623a8  8b4538               mov eax, dword ptr [ebp + 0x38]
// 005623ab  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 005623ae  8b7528               mov esi, dword ptr [ebp + 0x28]
// 005623b1  894d60               mov dword ptr [ebp + 0x60], ecx
// 005623b4  3bc8                 cmp ecx, eax
// 005623b6  7606                 jbe 0x5623be
// 005623b8  ff1590288000         call dword ptr [0x802890]
// 005623be  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 005623c1  8b5560               mov edx, dword ptr [ebp + 0x60]
// 005623c4  8b4528               mov eax, dword ptr [ebp + 0x28]
// 005623c7  51                   push ecx
// 005623c8  56                   push esi
// 005623c9  52                   push edx
// 005623ca  50                   push eax
// 005623cb  8d4d48               lea ecx, [ebp + 0x48]
// 005623ce  51                   push ecx
// 005623cf  e8fcc6ffff           call 0x55ead0
// 005623d4  8b4554               mov eax, dword ptr [ebp + 0x54]
// 005623d7  83c424               add esp, 0x24
// 005623da  85c0                 test eax, eax
// 005623dc  742c                 je 0x56240a
// 005623de  8bf0                 mov esi, eax
// 005623e0  83c004               add eax, 4
// 005623e3  83caff               or edx, 0xffffffff
// 005623e6  f00fc110             lock xadd dword ptr [eax], edx
// 005623ea  751e                 jne 0x56240a
// 005623ec  8b06                 mov eax, dword ptr [esi]
// 005623ee  8b5004               mov edx, dword ptr [eax + 4]
// 005623f1  8bce                 mov ecx, esi
// 005623f3  ffd2                 call edx
// 005623f5  8d4608               lea eax, [esi + 8]
// 005623f8  83c9ff               or ecx, 0xffffffff
// 005623fb  f00fc108             lock xadd dword ptr [eax], ecx
// 005623ff  7509                 jne 0x56240a
// 00562401  8b16                 mov edx, dword ptr [esi]
// 00562403  8b4208               mov eax, dword ptr [edx + 8]
// 00562406  8bce                 mov ecx, esi
// 00562408  ffd0                 call eax
// 0056240a  8db730010000         lea esi, [edi + 0x130]
// 00562410  8bce                 mov ecx, esi
// 00562412  897550               mov dword ptr [ebp + 0x50], esi
// 00562415  e8c6280300           call 0x594ce0
// 0056241a  c6455401             mov byte ptr [ebp + 0x54], 1
// 0056241e  8b874c010000         mov eax, dword ptr [edi + 0x14c]
// 00562424  8b00                 mov eax, dword ptr [eax]
// 00562426  8b9738010000         mov edx, dword ptr [edi + 0x138]
// 0056242c  8d8f38010000         lea ecx, [edi + 0x138]
// 00562432  50                   push eax
// 00562433  52                   push edx
// 00562434  8d5540               lea edx, [ebp + 0x40]
// 00562437  52                   push edx
// 00562438  c645fc0d             mov byte ptr [ebp - 4], 0xd
// 0056243c  e87ff3ffff           call 0x5617c0
// 00562441  8bce                 mov ecx, esi
// 00562443  c645fc03             mov byte ptr [ebp - 4], 3
// 00562447  e8b4280300           call 0x594d00
// 0056244c  c645fc00             mov byte ptr [ebp - 4], 0
// 00562450  85db                 test ebx, ebx
// 00562452  742a                 je 0x56247e
// 00562454  8d4304               lea eax, [ebx + 4]
// 00562457  83c9ff               or ecx, 0xffffffff
// 0056245a  f00fc108             lock xadd dword ptr [eax], ecx
// 0056245e  751e                 jne 0x56247e
// 00562460  8b13                 mov edx, dword ptr [ebx]
// 00562462  8b4204               mov eax, dword ptr [edx + 4]
// 00562465  8bcb                 mov ecx, ebx
// 00562467  ffd0                 call eax
// 00562469  8d4b08               lea ecx, [ebx + 8]
// 0056246c  83caff               or edx, 0xffffffff
// 0056246f  f00fc111             lock xadd dword ptr [ecx], edx
// 00562473  7509                 jne 0x56247e
// 00562475  8b03                 mov eax, dword ptr [ebx]
// 00562477  8b5008               mov edx, dword ptr [eax + 8]
// 0056247a  8bcb                 mov ecx, ebx
// 0056247c  ffd2                 call edx
// 0056247e  8d4d08               lea ecx, [ebp + 8]
// 00562481  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00562488  e893ebffff           call 0x561020
// 0056248d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00562490  5f                   pop edi
// 00562491  5e                   pop esi
// 00562492  b801000000           mov eax, 1
// 00562497  64890d00000000       mov dword ptr fs:[0], ecx
// 0056249e  5b                   pop ebx
// 0056249f  83c564               add ebp, 0x64
// 005624a2  8be5                 mov esp, ebp
// 005624a4  5d                   pop ebp
// 005624a5  c3                   ret 

// from server: 64% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Text {
    unsigned char storage[28];
    Text();
    Text& operator=(const Text&);
};

extern Text* (__thiscall* construct_text)(Text*);
extern Text& (__thiscall* assign_text)(Text*, const Text&);

inline Text::Text()
{
    construct_text(this);
}

inline Text& Text::operator=(const Text& other)
{
    return assign_text(this, other);
}

struct Extra {
    unsigned char storage[28];
    void assign(const Extra&);
};

struct Key {
    Text text;
    unsigned int value;
    Extra extra;
    Key();
    ~Key();
};

struct Mutex {
    unsigned char storage[8];
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool owns;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p), owns(false)
{
    mutex->lock();
    owns = true;
}

inline Guard::~Guard()
{
    if (owns)
        mutex->unlock();
}

struct Count {
    void* pointer;
    Count(Text*);
    ~Count();
    Count& operator=(const Count&);
};

struct Shared {
    Text* pointer;
    Count count;
    Shared(Text*);
    ~Shared();
};

inline Shared::Shared(Text* p) : pointer(p), count(p)
{
}

inline Shared::~Shared()
{
}

void __cdecl initialize_shared(Count*, Text*, Text*);

struct Formatter {
    unsigned char storage[80];
    Formatter(const Key&);
    ~Formatter();
    void write(Text*);
};

struct Entry {
    Text* pointer;
    Count count;
};

struct Map {
    Entry* find(const Key&);
};

struct Node {
    unsigned char links[8];
    Key key;
};

struct QueueState {
    unsigned char padding[20];
    Node* sentinel;
};

struct QueueProxy {
    QueueState* state;
};

struct S {
    unsigned char padding[0x130];
    Mutex inputMutex;
    QueueProxy* proxy;
    unsigned char padding2[16];
    Node** front;
    unsigned int size;
    unsigned char padding3[28];
    Mutex outputMutex;
    Map output;
    int f();
};

int S::f()
{
    Key key;
    {
        Guard input(&inputMutex);
        if (!size)
            return 0;

        Node* node = *front;
        QueueState* state;
        if (!proxy) {
            _invalid_parameter_noinfo();
            state = 0;
        } else {
            state = proxy->state;
        }

        if (node == state->sentinel)
            _invalid_parameter_noinfo();

        Key* source = &node->key;
        key.text = source->text;
        key.value = source->value;
        key.extra.assign(source->extra);
    }

    Text* text = new Text;
    Shared shared(text);
    initialize_shared(&shared.count, text, text);

    int result;
    try {
        Formatter(key).write(shared.pointer);
        result = 1;
        try {
            Guard outputGuard(&outputMutex);
            Entry* entry = output.find(key);
            entry->count = shared.count;
            entry->pointer = shared.pointer;
        } catch (...) {
            result = 0;
        }
    } catch (...) {
        result = 0;
    }

    return result;
}
