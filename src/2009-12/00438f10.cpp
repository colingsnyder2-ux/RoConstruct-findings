// roc 2009-12 00438f10  unit: RBX::Soundscape::VSoundId::?$XItem  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00438f10
//
// 00438f10  6aff                 push -1
// 00438f12  68a1a19200           push 0x92a1a1
// 00438f17  64a100000000         mov eax, dword ptr fs:[0]
// 00438f1d  50                   push eax
// 00438f1e  64892500000000       mov dword ptr fs:[0], esp
// 00438f25  51                   push ecx
// 00438f26  56                   push esi
// 00438f27  57                   push edi
// 00438f28  c744240800000000     mov dword ptr [esp + 8], 0
// 00438f30  8b742424             mov esi, dword ptr [esp + 0x24]
// 00438f34  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00438f38  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00438f40  3bf7                 cmp esi, edi
// 00438f42  7422                 je 0x438f66
// 00438f44  8bce                 mov ecx, esi
// 00438f46  ff54243c             call dword ptr [esp + 0x3c]
// 00438f4a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00438f4e  8d4c2444             lea ecx, [esp + 0x44]
// 00438f52  51                   push ecx
// 00438f53  50                   push eax
// 00438f54  8b442440             mov eax, dword ptr [esp + 0x40]
// 00438f58  8d0c10               lea ecx, [eax + edx]
// 00438f5b  ff542438             call dword ptr [esp + 0x38]
// 00438f5f  83c608               add esi, 8
// 00438f62  3bf7                 cmp esi, edi
// 00438f64  75de                 jne 0x438f44
// 00438f66  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00438f6a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00438f6e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00438f72  8b442438             mov eax, dword ptr [esp + 0x38]
// 00438f76  890e                 mov dword ptr [esi], ecx
// 00438f78  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00438f7c  895604               mov dword ptr [esi + 4], edx
// 00438f7f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00438f83  894608               mov dword ptr [esi + 8], eax
// 00438f86  894e0c               mov dword ptr [esi + 0xc], ecx
// 00438f89  8d442444             lea eax, [esp + 0x44]
// 00438f8d  8d7e14               lea edi, [esi + 0x14]
// 00438f90  50                   push eax
// 00438f91  8bcf                 mov ecx, edi
// 00438f93  895610               mov dword ptr [esi + 0x10], edx
// 00438f96  ff15f0b69800         call dword ptr [0x98b6f0]
// 00438f9c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00438fa0  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00438fa3  8d4c2444             lea ecx, [esp + 0x44]
// 00438fa7  c744240801000000     mov dword ptr [esp + 8], 1
// 00438faf  c644241400           mov byte ptr [esp + 0x14], 0
// 00438fb4  ff15e4b69800         call dword ptr [0x98b6e4]
// 00438fba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00438fbe  5f                   pop edi
// 00438fbf  8bc6                 mov eax, esi
// 00438fc1  5e                   pop esi
// 00438fc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00438fc9  83c410               add esp, 0x10
// 00438fcc  c3                   ret 
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