// from server: 100% by king_originala
// roc 2008-06 0043d5b0  unit: XBrickColorItem  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d5b0
//
// 0043d5b0  6aff                 push -1
// 0043d5b2  68c9107c00           push 0x7c10c9
// 0043d5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0043d5bd  50                   push eax
// 0043d5be  64892500000000       mov dword ptr fs:[0], esp
// 0043d5c5  51                   push ecx
// 0043d5c6  53                   push ebx
// 0043d5c7  56                   push esi
// 0043d5c8  8d442408             lea eax, [esp + 8]
// 0043d5cc  50                   push eax
// 0043d5cd  8bf1                 mov esi, ecx
// 0043d5cf  e8fca8ffff           call 0x437ed0
// 0043d5d4  6816b78000           push 0x80b716
// 0043d5d9  8bc8                 mov ecx, eax
// 0043d5db  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0043d5e3  ff15f02f8000         call dword ptr [0x802ff0]
// 0043d5e9  85c0                 test eax, eax
// 0043d5eb  8d4c2408             lea ecx, [esp + 8]
// 0043d5ef  0f94c3               sete bl
// 0043d5f2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043d5fa  ff15143f8000         call dword ptr [0x803f14]
// 0043d600  84db                 test bl, bl
// 0043d602  7415                 je 0x43d619
// 0043d604  33c0                 xor eax, eax
// 0043d606  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043d60a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d611  5e                   pop esi
// 0043d612  5b                   pop ebx
// 0043d613  83c410               add esp, 0x10
// 0043d616  c21400               ret 0x14
// 0043d619  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043d61d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043d621  83ec10               sub esp, 0x10
// 0043d624  8bc4                 mov eax, esp
// 0043d626  8908                 mov dword ptr [eax], ecx
// 0043d628  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0043d62c  895004               mov dword ptr [eax + 4], edx
// 0043d62f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0043d633  894808               mov dword ptr [eax + 8], ecx
// 0043d636  89500c               mov dword ptr [eax + 0xc], edx
// 0043d639  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0043d63d  50                   push eax
// 0043d63e  8bce                 mov ecx, esi
// 0043d640  e8db652d00           call 0x713c20
// 0043d645  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043d649  5e                   pop esi
// 0043d64a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d651  5b                   pop ebx
// 0043d652  83c410               add esp, 0x10
// 0043d655  c21400               ret 0x14

struct Text;

extern const char authoring[];
extern int (__thiscall* compareText)(const Text*, const char*);
extern void (__thiscall* destroyText)(Text*);

struct Text {
    void* data;
    int compare(const char* s) const;
    ~Text();
};

inline int Text::compare(const char* s) const
{
    return compareText(this, s);
}

inline Text::~Text()
{
    destroyText(this);
}

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct XBrickColorItem {
    Text getText();
    int baseAction(void* context, Rect bounds);
    int action(void* context, Rect bounds);
};

int XBrickColorItem::action(void* context, Rect bounds)
{
    if (getText().compare(authoring) == 0)
        return 0;
    return baseAction(context, bounds);
}
