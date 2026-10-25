// from server: 96% by king_originala
// roc 2008-06 005fb3f0  unit: RBX::Kernel  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb3f0
//
// 005fb3f0  6aff                 push -1
// 005fb3f2  6808817c00           push 0x7c8108
// 005fb3f7  64a100000000         mov eax, dword ptr fs:[0]
// 005fb3fd  50                   push eax
// 005fb3fe  64892500000000       mov dword ptr fs:[0], esp
// 005fb405  83ec1c               sub esp, 0x1c
// 005fb408  807c243800           cmp byte ptr [esp + 0x38], 0
// 005fb40d  55                   push ebp
// 005fb40e  8be9                 mov ebp, ecx
// 005fb410  896c2404             mov dword ptr [esp + 4], ebp
// 005fb414  741c                 je 0x5fb432
// 005fb416  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fb41a  50                   push eax
// 005fb41b  e8e0f9ffff           call 0x5fae00
// 005fb420  5d                   pop ebp
// 005fb421  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fb425  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb42c  83c428               add esp, 0x28
// 005fb42f  c21000               ret 0x10
// 005fb432  8b4520               mov eax, dword ptr [ebp + 0x20]
// 005fb435  53                   push ebx
// 005fb436  56                   push esi
// 005fb437  8b7510               mov esi, dword ptr [ebp + 0x10]
// 005fb43a  57                   push edi
// 005fb43b  33ff                 xor edi, edi
// 005fb43d  57                   push edi
// 005fb43e  50                   push eax
// 005fb43f  8d4c241c             lea ecx, [esp + 0x1c]
// 005fb443  c6450c01             mov byte ptr [ebp + 0xc], 1
// 005fb447  e8348bfcff           call 0x5c3f80
// 005fb44c  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005fb450  897c2434             mov dword ptr [esp + 0x34], edi
// 005fb454  84db                 test bl, bl
// 005fb456  7449                 je 0x5fb4a1
// 005fb458  57                   push edi
// 005fb459  83c514               add ebp, 0x14
// 005fb45c  57                   push edi
// 005fb45d  8bcd                 mov ecx, ebp
// 005fb45f  e80cf2ffff           call 0x5fa670
// 005fb464  397e28               cmp dword ptr [esi + 0x28], edi
// 005fb467  7e34                 jle 0x5fb49d
// 005fb469  8da42400000000       lea esp, [esp]
// 005fb470  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005fb473  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005fb476  8b11                 mov edx, dword ptr [ecx]
// 005fb478  8b4208               mov eax, dword ptr [edx + 8]
// 005fb47b  ffd0                 call eax
// 005fb47d  84c0                 test al, al
// 005fb47f  7516                 jne 0x5fb497
// 005fb481  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005fb484  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005fb487  8d442448             lea eax, [esp + 0x48]
// 005fb48b  50                   push eax
// 005fb48c  8bcd                 mov ecx, ebp
// 005fb48e  8954244c             mov dword ptr [esp + 0x4c], edx
// 005fb492  e8b9f6ffff           call 0x5fab50
// 005fb497  47                   inc edi
// 005fb498  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 005fb49b  7cd3                 jl 0x5fb470
// 005fb49d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005fb4a1  e86ade0400           call 0x649310
// 005fb4a6  d95c2448             fstp dword ptr [esp + 0x48]
// 005fb4aa  e821de0400           call 0x6492d0
// 005fb4af  85c0                 test eax, eax
// 005fb4b1  0f8e05010000         jle 0x5fb5bc
// 005fb4b7  8944243c             mov dword ptr [esp + 0x3c], eax
// 005fb4bb  eb03                 jmp 0x5fb4c0
// 005fb4bd  8d4900               lea ecx, [ecx]
// 005fb4c0  33ff                 xor edi, edi
// 005fb4c2  397e1c               cmp dword ptr [esi + 0x1c], edi
// 005fb4c5  7e1a                 jle 0x5fb4e1
// 005fb4c7  eb07                 jmp 0x5fb4d0
// 005fb4c9  8da42400000000       lea esp, [esp]
// 005fb4d0  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005fb4d3  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005fb4d6  e8b5270500           call 0x64dc90
// 005fb4db  47                   inc edi
// 005fb4dc  3b7e1c               cmp edi, dword ptr [esi + 0x1c]
// 005fb4df  7cef                 jl 0x5fb4d0
// 005fb4e1  33ff                 xor edi, edi
// 005fb4e3  84db                 test bl, bl
// 005fb4e5  7427                 je 0x5fb50e
// 005fb4e7  397d18               cmp dword ptr [ebp + 0x18], edi
// 005fb4ea  7e45                 jle 0x5fb531
// 005fb4ec  8d642400             lea esp, [esp]
// 005fb4f0  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005fb4f3  d9442448             fld dword ptr [esp + 0x48]
// 005fb4f7  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 005fb4fa  8b01                 mov eax, dword ptr [ecx]
// 005fb4fc  8b5004               mov edx, dword ptr [eax + 4]
// 005fb4ff  53                   push ebx
// 005fb500  51                   push ecx
// 005fb501  d91c24               fstp dword ptr [esp]
// 005fb504  ffd2                 call edx
// 005fb506  47                   inc edi
// 005fb507  3b7d18               cmp edi, dword ptr [ebp + 0x18]
// 005fb50a  7ce4                 jl 0x5fb4f0
// 005fb50c  eb23                 jmp 0x5fb531
// 005fb50e  837e2800             cmp dword ptr [esi + 0x28], 0
// 005fb512  7e1d                 jle 0x5fb531
// 005fb514  8b4624               mov eax, dword ptr [esi + 0x24]
// 005fb517  d9442448             fld dword ptr [esp + 0x48]
// 005fb51b  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005fb51e  8b11                 mov edx, dword ptr [ecx]
// 005fb520  8b4204               mov eax, dword ptr [edx + 4]
// 005fb523  6a00                 push 0
// 005fb525  51                   push ecx
// 005fb526  d91c24               fstp dword ptr [esp]
// 005fb529  ffd0                 call eax
// 005fb52b  47                   inc edi
// 005fb52c  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 005fb52f  7ce3                 jl 0x5fb514
// 005fb531  33ff                 xor edi, edi
// 005fb533  397e1c               cmp dword ptr [esi + 0x1c], edi
// 005fb536  7e19                 jle 0x5fb551
// 005fb538  eb06                 jmp 0x5fb540
// 005fb53a  8d9b00000000         lea ebx, [ebx]
// 005fb540  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005fb543  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005fb546  e825270500           call 0x64dc70
// 005fb54b  47                   inc edi
// 005fb54c  3b7e1c               cmp edi, dword ptr [esi + 0x1c]
// 005fb54f  7cef                 jl 0x5fb540
// 005fb551  33ff                 xor edi, edi
// 005fb553  397e34               cmp dword ptr [esi + 0x34], edi
// 005fb556  7e24                 jle 0x5fb57c
// 005fb558  eb06                 jmp 0x5fb560
// 005fb55a  8d9b00000000         lea ebx, [ebx]
// 005fb560  8b5630               mov edx, dword ptr [esi + 0x30]
// 005fb563  d9442448             fld dword ptr [esp + 0x48]
// 005fb567  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 005fb56a  8b01                 mov eax, dword ptr [ecx]
// 005fb56c  8b5004               mov edx, dword ptr [eax + 4]
// 005fb56f  53                   push ebx
// 005fb570  51                   push ecx
// 005fb571  d91c24               fstp dword ptr [esp]
// 005fb574  ffd2                 call edx
// 005fb576  47                   inc edi
// 005fb577  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 005fb57a  7ce4                 jl 0x5fb560
// 005fb57c  33ff                 xor edi, edi
// 005fb57e  397e04               cmp dword ptr [esi + 4], edi
// 005fb581  7e11                 jle 0x5fb594
// 005fb583  8b06                 mov eax, dword ptr [esi]
// 005fb585  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005fb588  53                   push ebx
// 005fb589  e8728c0100           call 0x614200
// 005fb58e  47                   inc edi
// 005fb58f  3b7e04               cmp edi, dword ptr [esi + 4]
// 005fb592  7cef                 jl 0x5fb583
// 005fb594  33ff                 xor edi, edi
// 005fb596  397e10               cmp dword ptr [esi + 0x10], edi
// 005fb599  7e16                 jle 0x5fb5b1
// 005fb59b  eb03                 jmp 0x5fb5a0
// 005fb59d  8d4900               lea ecx, [ecx]
// 005fb5a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005fb5a3  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005fb5a6  e8b5ddf9ff           call 0x599360
// 005fb5ab  47                   inc edi
// 005fb5ac  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005fb5af  7cef                 jl 0x5fb5a0
// 005fb5b1  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005fb5b6  0f8504ffffff         jne 0x5fb4c0
// 005fb5bc  8d4c2414             lea ecx, [esp + 0x14]
// 005fb5c0  c6450c00             mov byte ptr [ebp + 0xc], 0
// 005fb5c4  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005fb5cc  e8ff8cfcff           call 0x5c42d0
// 005fb5d1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fb5d5  5f                   pop edi
// 005fb5d6  5e                   pop esi
// 005fb5d7  5b                   pop ebx
// 005fb5d8  5d                   pop ebp
// 005fb5d9  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb5e0  83c428               add esp, 0x28
// 005fb5e3  c21000               ret 0x10

struct Scope
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    Scope(const char*, bool);
    ~Scope();
};

struct Item
{
    virtual ~Item();
    virtual void step(float, bool);
    virtual bool inactive();
};

struct Phase
{
    void begin();
    void end();
};

struct Node
{
    void step(bool);
};

struct Source
{
    const void* get();
};

template<class T> struct Array
{
    T** data;
    int count;
    int capacity;
};

struct ItemArray
{
    Item** data;
    int count;
    int capacity;

    void clear(int, int);
    void append(Item* const&);
};

struct State
{
    Array<Node> nodes;
    Array<Source> sources;
    Array<Phase> phases;
    Array<Item> items;
    Array<Item> extraItems;
};

extern float __cdecl timeStep();
extern int __cdecl stepCount();

struct Kernel
{
    char reserved[12];
    bool running;
    char padding[3];
    State* state;
    ItemArray active;
    const char* name;

    void fallback(float);
    void f(float, float, bool, bool);
};

void Kernel::f(float delta, float unused, bool selective, bool alternate)
{
    if (alternate)
    {
        fallback(delta);
        return;
    }

    State* s = state;
    running = true;
    Scope scope(name, false);

    if (selective)
    {
        active.clear(0, 0);
        for (int i = 0; i < s->items.count; ++i)
        {
            if (!s->items.data[i]->inactive())
            {
                Item* item = s->items.data[i];
                active.append(item);
            }
        }
    }

    float dt = timeStep();
    int count = stepCount();
    if (count > 0)
    {
        int steps = count;
        do
        {
            for (int i = 0; i < s->phases.count; ++i)
                s->phases.data[i]->begin();

            if (selective)
            {
                for (int i = 0; i < active.count; ++i)
                    active.data[i]->step(dt, selective);
            }
            else
            {
                for (int i = 0; i < s->items.count; ++i)
                    s->items.data[i]->step(dt, false);
            }

            for (int i = 0; i < s->phases.count; ++i)
                s->phases.data[i]->end();

            for (int i = 0; i < s->extraItems.count; ++i)
                s->extraItems.data[i]->step(dt, selective);

            for (int i = 0; i < s->nodes.count; ++i)
                s->nodes.data[i]->step(selective);

            for (int i = 0; i < s->sources.count; ++i)
                s->sources.data[i]->get();
        }
        while (--steps);
    }

    running = false;
}
