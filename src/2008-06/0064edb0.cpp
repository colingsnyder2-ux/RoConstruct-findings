// from server: 100% by colin
// roc 2008-06 0064edb0  unit: RBX::MenuItem  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064edb0
//
// 0064edb0  6aff                 push -1
// 0064edb2  6880b47d00           push 0x7db480
// 0064edb7  64a100000000         mov eax, dword ptr fs:[0]
// 0064edbd  50                   push eax
// 0064edbe  64892500000000       mov dword ptr fs:[0], esp
// 0064edc5  83ec7c               sub esp, 0x7c
// 0064edc8  53                   push ebx
// 0064edc9  55                   push ebp
// 0064edca  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0064edd1  56                   push esi
// 0064edd2  33db                 xor ebx, ebx
// 0064edd4  8bf1                 mov esi, ecx
// 0064edd6  895c240c             mov dword ptr [esp + 0xc], ebx
// 0064edda  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 0064ede0  57                   push edi
// 0064ede1  83f801               cmp eax, 1
// 0064ede4  7405                 je 0x64edeb
// 0064ede6  83f802               cmp eax, 2
// 0064ede9  7531                 jne 0x64ee1c
// 0064edeb  8d442428             lea eax, [esp + 0x28]
// 0064edef  50                   push eax
// 0064edf0  e81b45f2ff           call 0x573310
// 0064edf5  8d4808               lea ecx, [eax + 8]
// 0064edf8  51                   push ecx
// 0064edf9  50                   push eax
// 0064edfa  8d542420             lea edx, [esp + 0x20]
// 0064edfe  52                   push edx
// 0064edff  e8cc47eaff           call 0x4f35d0
// 0064ee04  8b7d00               mov edi, dword ptr [ebp]
// 0064ee07  83c40c               add esp, 0xc
// 0064ee0a  e84144f2ff           call 0x573250
// 0064ee0f  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0064ee12  50                   push eax
// 0064ee13  8d44241c             lea eax, [esp + 0x1c]
// 0064ee17  50                   push eax
// 0064ee18  8bcd                 mov ecx, ebp
// 0064ee1a  ffd2                 call edx
// 0064ee1c  8b06                 mov eax, dword ptr [esi]
// 0064ee1e  8b5078               mov edx, dword ptr [eax + 0x78]
// 0064ee21  8bce                 mov ecx, esi
// 0064ee23  ffd2                 call edx
// 0064ee25  8b06                 mov eax, dword ptr [esi]
// 0064ee27  8b5078               mov edx, dword ptr [eax + 0x78]
// 0064ee2a  8bce                 mov ecx, esi
// 0064ee2c  ffd2                 call edx
// 0064ee2e  84c0                 test al, al
// 0064ee30  7407                 je 0x64ee39
// 0064ee32  e89943f2ff           call 0x5731d0
// 0064ee37  eb05                 jmp 0x64ee3e
// 0064ee39  e8d243f2ff           call 0x573210
// 0064ee3e  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 0064ee44  89442414             mov dword ptr [esp + 0x14], eax
// 0064ee48  3bcb                 cmp ecx, ebx
// 0064ee4a  7450                 je 0x64ee9c
// 0064ee4c  8b01                 mov eax, dword ptr [ecx]
// 0064ee4e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064ee51  ffd2                 call edx
// 0064ee53  84c0                 test al, al
// 0064ee55  7445                 je 0x64ee9c
// 0064ee57  8b06                 mov eax, dword ptr [esi]
// 0064ee59  8b5058               mov edx, dword ptr [eax + 0x58]
// 0064ee5c  8d4c2470             lea ecx, [esp + 0x70]
// 0064ee60  51                   push ecx
// 0064ee61  8bce                 mov ecx, esi
// 0064ee63  ffd2                 call edx
// 0064ee65  50                   push eax
// 0064ee66  8d442458             lea eax, [esp + 0x58]
// 0064ee6a  6870b68400           push 0x84b670
// 0064ee6f  50                   push eax
// 0064ee70  899c24a0000000       mov dword ptr [esp + 0xa0], ebx
// 0064ee77  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0064ee7f  ff1568238000         call dword ptr [0x802368]
// 0064ee85  83c40c               add esp, 0xc
// 0064ee88  8bf8                 mov edi, eax
// 0064ee8a  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 0064ee95  bb03000000           mov ebx, 3
// 0064ee9a  eb20                 jmp 0x64eebc
// 0064ee9c  8b16                 mov edx, dword ptr [esi]
// 0064ee9e  8b5258               mov edx, dword ptr [edx + 0x58]
// 0064eea1  8d442438             lea eax, [esp + 0x38]
// 0064eea5  50                   push eax
// 0064eea6  8bce                 mov ecx, esi
// 0064eea8  ffd2                 call edx
// 0064eeaa  8bf8                 mov edi, eax
// 0064eeac  c784249400000002000000 mov dword ptr [esp + 0x94], 2
// 0064eeb7  bb04000000           mov ebx, 4
// 0064eebc  6a01                 push 1
// 0064eebe  895c2414             mov dword ptr [esp + 0x14], ebx
// 0064eec2  e849c01600           call 0x7baf10
// 0064eec7  50                   push eax
// 0064eec8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064eecc  50                   push eax
// 0064eecd  57                   push edi
// 0064eece  55                   push ebp
// 0064eecf  8bce                 mov ecx, esi
// 0064eed1  e88a44f2ff           call 0x573360
// 0064eed6  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 0064eee1  f6c304               test bl, 4
// 0064eee4  7411                 je 0x64eef7
// 0064eee6  83e3fb               and ebx, 0xfffffffb
// 0064eee9  8d4c2438             lea ecx, [esp + 0x38]
// 0064eeed  895c2410             mov dword ptr [esp + 0x10], ebx
// 0064eef1  ff1568248000         call dword ptr [0x802468]
// 0064eef7  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0064ef02  f6c302               test bl, 2
// 0064ef05  7411                 je 0x64ef18
// 0064ef07  83e3fd               and ebx, 0xfffffffd
// 0064ef0a  8d4c2454             lea ecx, [esp + 0x54]
// 0064ef0e  895c2410             mov dword ptr [esp + 0x10], ebx
// 0064ef12  ff1568248000         call dword ptr [0x802468]
// 0064ef18  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0064ef23  f6c301               test bl, 1
// 0064ef26  740a                 je 0x64ef32
// 0064ef28  8d4c2470             lea ecx, [esp + 0x70]
// 0064ef2c  ff1568248000         call dword ptr [0x802468]
// 0064ef32  83be6001000000       cmp dword ptr [esi + 0x160], 0
// 0064ef39  7633                 jbe 0x64ef6e
// 0064ef3b  8b16                 mov edx, dword ptr [esi]
// 0064ef3d  8b4278               mov eax, dword ptr [edx + 0x78]
// 0064ef40  8bce                 mov ecx, esi
// 0064ef42  ffd0                 call eax
// 0064ef44  84c0                 test al, al
// 0064ef46  7407                 je 0x64ef4f
// 0064ef48  e88342f2ff           call 0x5731d0
// 0064ef4d  eb05                 jmp 0x64ef54
// 0064ef4f  e8bc42f2ff           call 0x573210
// 0064ef54  6a00                 push 0
// 0064ef56  8bf8                 mov edi, eax
// 0064ef58  e8b3bf1600           call 0x7baf10
// 0064ef5d  50                   push eax
// 0064ef5e  57                   push edi
// 0064ef5f  8d8e4c010000         lea ecx, [esi + 0x14c]
// 0064ef65  51                   push ecx
// 0064ef66  55                   push ebp
// 0064ef67  8bce                 mov ecx, esi
// 0064ef69  e8f243f2ff           call 0x573360
// 0064ef6e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0064ef75  5f                   pop edi
// 0064ef76  5e                   pop esi
// 0064ef77  5d                   pop ebp
// 0064ef78  5b                   pop ebx
// 0064ef79  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ef80  81c488000000         add esp, 0x88
// 0064ef86  c20400               ret 4

struct Text {
    char storage[20];
    unsigned int length;
    unsigned int capacity;
    ~Text();
};

extern void (__thiscall *destroyText)(Text *);
extern Text (__cdecl *prependText)(const char *, const Text &);
extern const char prefix[];

inline Text::~Text()
{
    destroyText(this);
}

struct Point {
    float x, y;
};

struct Rectangle {
    Point first, second;
};

extern void __cdecl makeRectangle(Rectangle *, const Point *, const Point *);
extern float *__cdecl activeColor();
extern float *__cdecl inactiveColor();
extern float *__cdecl backgroundColor();
extern void *__cdecl selectFont();

inline void copyRectangle(Rectangle *destination, const Rectangle &source)
{
    makeRectangle(destination, &source.first, &source.second);
}

struct Context;
struct Action;

struct ContextTable {
    void *slots[11];
    void (__thiscall *paint)(Context *, const Rectangle *, float *);
};

struct Context {
    ContextTable *table;
};

struct ActionTable {
    void *slots[3];
    bool (__thiscall *checked)(Action *);
};

struct Action {
    ActionTable *table;
};

struct MenuItem {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual Text caption();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual bool enabled();

    char storage[0x140];
    int state;
    Action *action;
    Text text;

    Rectangle bounds();
    void drawText(Context *, const Text &, float *, void *, int);
    void render(Context *);
};

void MenuItem::render(Context *context)
{
    if (state == 1 || state == 2) {
        Rectangle rectangle;
        copyRectangle(&rectangle, bounds());
        context->table->paint(context, &rectangle, backgroundColor());
    }

    enabled();
    float *color = enabled() ? activeColor() : inactiveColor();
    Action *currentAction = action;

    drawText(context,
             currentAction && currentAction->table->checked(currentAction)
                 ? prependText(prefix, caption())
                 : caption(),
             color, selectFont(), 1);

    if (text.length > 0) {
        float *secondColor = enabled() ? activeColor() : inactiveColor();
        drawText(context, text, secondColor, selectFont(), 0);
    }
}
