// roc 2010-06 0043a310  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0043a310
//
// 0043a310  6aff                 push -1
// 0043a312  68310c9800           push 0x980c31
// 0043a317  64a100000000         mov eax, dword ptr fs:[0]
// 0043a31d  50                   push eax
// 0043a31e  64892500000000       mov dword ptr fs:[0], esp
// 0043a325  51                   push ecx
// 0043a326  56                   push esi
// 0043a327  57                   push edi
// 0043a328  c744240800000000     mov dword ptr [esp + 8], 0
// 0043a330  8b742424             mov esi, dword ptr [esp + 0x24]
// 0043a334  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0043a338  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0043a340  3bf7                 cmp esi, edi
// 0043a342  7422                 je 0x43a366
// 0043a344  8bce                 mov ecx, esi
// 0043a346  ff54243c             call dword ptr [esp + 0x3c]
// 0043a34a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043a34e  8d4c2444             lea ecx, [esp + 0x44]
// 0043a352  51                   push ecx
// 0043a353  50                   push eax
// 0043a354  8b442440             mov eax, dword ptr [esp + 0x40]
// 0043a358  8d0c10               lea ecx, [eax + edx]
// 0043a35b  ff542438             call dword ptr [esp + 0x38]
// 0043a35f  83c608               add esi, 8
// 0043a362  3bf7                 cmp esi, edi
// 0043a364  75de                 jne 0x43a344
// 0043a366  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043a36a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043a36e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0043a372  8b442438             mov eax, dword ptr [esp + 0x38]
// 0043a376  890e                 mov dword ptr [esi], ecx
// 0043a378  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043a37c  895604               mov dword ptr [esi + 4], edx
// 0043a37f  8b542440             mov edx, dword ptr [esp + 0x40]
// 0043a383  894608               mov dword ptr [esi + 8], eax
// 0043a386  894e0c               mov dword ptr [esi + 0xc], ecx
// 0043a389  8d442444             lea eax, [esp + 0x44]
// 0043a38d  8d7e14               lea edi, [esi + 0x14]
// 0043a390  50                   push eax
// 0043a391  8bcf                 mov ecx, edi
// 0043a393  895610               mov dword ptr [esi + 0x10], edx
// 0043a396  ff150ca49e00         call dword ptr [0x9ea40c]
// 0043a39c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0043a3a0  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0043a3a3  8d4c2444             lea ecx, [esp + 0x44]
// 0043a3a7  c744240801000000     mov dword ptr [esp + 8], 1
// 0043a3af  c644241400           mov byte ptr [esp + 0x14], 0
// 0043a3b4  ff1500a49e00         call dword ptr [0x9ea400]
// 0043a3ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043a3be  5f                   pop edi
// 0043a3bf  8bc6                 mov eax, esi
// 0043a3c1  5e                   pop esi
// 0043a3c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0043a3c9  83c410               add esp, 0x10
// 0043a3cc  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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