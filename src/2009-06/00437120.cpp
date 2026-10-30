// roc 2009-06 00437120  unit: RBX::Soundscape::VSoundId::?$XItem  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00437120
//
// 00437120  6aff                 push -1
// 00437122  6841fb8400           push 0x84fb41
// 00437127  64a100000000         mov eax, dword ptr fs:[0]
// 0043712d  50                   push eax
// 0043712e  64892500000000       mov dword ptr fs:[0], esp
// 00437135  51                   push ecx
// 00437136  56                   push esi
// 00437137  57                   push edi
// 00437138  c744240800000000     mov dword ptr [esp + 8], 0
// 00437140  8b742424             mov esi, dword ptr [esp + 0x24]
// 00437144  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00437148  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00437150  3bf7                 cmp esi, edi
// 00437152  7422                 je 0x437176
// 00437154  8bce                 mov ecx, esi
// 00437156  ff54243c             call dword ptr [esp + 0x3c]
// 0043715a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043715e  8d4c2444             lea ecx, [esp + 0x44]
// 00437162  51                   push ecx
// 00437163  50                   push eax
// 00437164  8b442440             mov eax, dword ptr [esp + 0x40]
// 00437168  8d0c10               lea ecx, [eax + edx]
// 0043716b  ff542438             call dword ptr [esp + 0x38]
// 0043716f  83c608               add esi, 8
// 00437172  3bf7                 cmp esi, edi
// 00437174  75de                 jne 0x437154
// 00437176  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043717a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043717e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00437182  8b442438             mov eax, dword ptr [esp + 0x38]
// 00437186  890e                 mov dword ptr [esi], ecx
// 00437188  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043718c  895604               mov dword ptr [esi + 4], edx
// 0043718f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00437193  894608               mov dword ptr [esi + 8], eax
// 00437196  894e0c               mov dword ptr [esi + 0xc], ecx
// 00437199  8d442444             lea eax, [esp + 0x44]
// 0043719d  8d7e14               lea edi, [esi + 0x14]
// 004371a0  50                   push eax
// 004371a1  8bcf                 mov ecx, edi
// 004371a3  895610               mov dword ptr [esi + 0x10], edx
// 004371a6  ff15b8e48900         call dword ptr [0x89e4b8]
// 004371ac  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004371b0  894f1c               mov dword ptr [edi + 0x1c], ecx
// 004371b3  8d4c2444             lea ecx, [esp + 0x44]
// 004371b7  c744240801000000     mov dword ptr [esp + 8], 1
// 004371bf  c644241400           mov byte ptr [esp + 0x14], 0
// 004371c4  ff15c4e48900         call dword ptr [0x89e4c4]
// 004371ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004371ce  5f                   pop edi
// 004371cf  8bc6                 mov eax, esi
// 004371d1  5e                   pop esi
// 004371d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004371d9  83c410               add esp, 0x10
// 004371dc  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 94% by king_originala
// roc 2008-06 0043d1d0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d1d0
//
// 0043d1d0  6aff                 push -1
// 0043d1d2  6831077c00           push 0x7c0731
// 0043d1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0043d1dd  50                   push eax
// 0043d1de  64892500000000       mov dword ptr fs:[0], esp
// 0043d1e5  51                   push ecx
// 0043d1e6  56                   push esi
// 0043d1e7  57                   push edi
// 0043d1e8  c744240800000000     mov dword ptr [esp + 8], 0
// 0043d1f0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0043d1f4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0043d1f8  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0043d200  3bf7                 cmp esi, edi
// 0043d202  7422                 je 0x43d226
// 0043d204  8bce                 mov ecx, esi
// 0043d206  ff54243c             call dword ptr [esp + 0x3c]
// 0043d20a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043d20e  8d4c2444             lea ecx, [esp + 0x44]
// 0043d212  51                   push ecx
// 0043d213  50                   push eax
// 0043d214  8b442440             mov eax, dword ptr [esp + 0x40]
// 0043d218  8d0c10               lea ecx, [eax + edx]
// 0043d21b  ff542438             call dword ptr [esp + 0x38]
// 0043d21f  83c608               add esi, 8
// 0043d222  3bf7                 cmp esi, edi
// 0043d224  75de                 jne 0x43d204
// 0043d226  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043d22a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043d22e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043d232  8b442438             mov eax, dword ptr [esp + 0x38]
// 0043d236  890e                 mov dword ptr [esi], ecx
// 0043d238  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043d23c  895604               mov dword ptr [esi + 4], edx
// 0043d23f  8b542440             mov edx, dword ptr [esp + 0x40]
// 0043d243  894608               mov dword ptr [esi + 8], eax
// 0043d246  894e0c               mov dword ptr [esi + 0xc], ecx
// 0043d249  8d442444             lea eax, [esp + 0x44]
// 0043d24d  8d7e14               lea edi, [esi + 0x14]
// 0043d250  50                   push eax
// 0043d251  8bcf                 mov ecx, edi
// 0043d253  895610               mov dword ptr [esi + 0x10], edx
// 0043d256  ff155c248000         call dword ptr [0x80245c]
// 0043d25c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0043d260  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0043d263  8d4c2444             lea ecx, [esp + 0x44]
// 0043d267  c744240801000000     mov dword ptr [esp + 8], 1
// 0043d26f  c644241400           mov byte ptr [esp + 0x14], 0
// 0043d274  ff1568248000         call dword ptr [0x802468]
// 0043d27a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043d27e  5f                   pop edi
// 0043d27f  8bc6                 mov eax, esi
// 0043d281  5e                   pop esi
// 0043d282  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d289  83c410               add esp, 0x10
// 0043d28c  c3                   ret 

struct StringData;

extern void (__thiscall *copyString)(StringData *, const StringData *);
extern void (__thiscall *destroyString)(StringData *);

struct StringData {
    char data[28];
    StringData(const StringData &);
    ~StringData();
};

__forceinline StringData::StringData(const StringData &other) {
    copyString(this, &other);
}

__forceinline StringData::~StringData() {
    destroyString(this);
}

struct Value {
    StringData string;
    int extra;
};

struct Item {
    int data[2];
};

struct Iterator {
    int unused;
    Item *position;
};

typedef void *(__thiscall *Getter)(Item *);
typedef void (__thiscall *Setter)(void *, void *, const Value *);

struct Head {
    Setter setter;
    int adjustment;
    int object;
    Getter getter;
    int unused;
};
struct Function : Head {
    Value value;
};

Function apply(Iterator first, Iterator last, Function function) {
    Item *current = first.position;
    Item *end = last.position;
    for (; current != end; ++current) {
        void *value = function.getter(current);
        function.setter((void *)(function.adjustment + function.object),
                        value, &function.value);
    }
    return function;
}