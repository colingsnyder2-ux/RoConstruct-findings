// roc 2010-06 00438a90  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00438a90
//
// 00438a90  6aff                 push -1
// 00438a92  68310c9800           push 0x980c31
// 00438a97  64a100000000         mov eax, dword ptr fs:[0]
// 00438a9d  50                   push eax
// 00438a9e  64892500000000       mov dword ptr fs:[0], esp
// 00438aa5  51                   push ecx
// 00438aa6  56                   push esi
// 00438aa7  57                   push edi
// 00438aa8  c744240800000000     mov dword ptr [esp + 8], 0
// 00438ab0  8b742424             mov esi, dword ptr [esp + 0x24]
// 00438ab4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00438ab8  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00438ac0  3bf7                 cmp esi, edi
// 00438ac2  7422                 je 0x438ae6
// 00438ac4  8bce                 mov ecx, esi
// 00438ac6  ff54243c             call dword ptr [esp + 0x3c]
// 00438aca  8b542434             mov edx, dword ptr [esp + 0x34]
// 00438ace  8d4c2444             lea ecx, [esp + 0x44]
// 00438ad2  51                   push ecx
// 00438ad3  50                   push eax
// 00438ad4  8b442440             mov eax, dword ptr [esp + 0x40]
// 00438ad8  8d0c10               lea ecx, [eax + edx]
// 00438adb  ff542438             call dword ptr [esp + 0x38]
// 00438adf  83c608               add esi, 8
// 00438ae2  3bf7                 cmp esi, edi
// 00438ae4  75de                 jne 0x438ac4
// 00438ae6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00438aea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00438aee  8b542434             mov edx, dword ptr [esp + 0x34]
// 00438af2  8b442438             mov eax, dword ptr [esp + 0x38]
// 00438af6  890e                 mov dword ptr [esi], ecx
// 00438af8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00438afc  895604               mov dword ptr [esi + 4], edx
// 00438aff  8b542440             mov edx, dword ptr [esp + 0x40]
// 00438b03  894608               mov dword ptr [esi + 8], eax
// 00438b06  894e0c               mov dword ptr [esi + 0xc], ecx
// 00438b09  8d442444             lea eax, [esp + 0x44]
// 00438b0d  8d4e14               lea ecx, [esi + 0x14]
// 00438b10  50                   push eax
// 00438b11  895610               mov dword ptr [esi + 0x10], edx
// 00438b14  ff150ca49e00         call dword ptr [0x9ea40c]
// 00438b1a  8d4c2444             lea ecx, [esp + 0x44]
// 00438b1e  c744240801000000     mov dword ptr [esp + 8], 1
// 00438b26  c644241400           mov byte ptr [esp + 0x14], 0
// 00438b2b  ff1500a49e00         call dword ptr [0x9ea400]
// 00438b31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00438b35  5f                   pop edi
// 00438b36  8bc6                 mov eax, esi
// 00438b38  5e                   pop esi
// 00438b39  64890d00000000       mov dword ptr fs:[0], ecx
// 00438b40  83c410               add esp, 0x10
// 00438b43  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *copyString)(void*, const void*);
extern void (__thiscall *destroyString)(void*);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other) {
    copyString(this, &other);
}

__forceinline String::~String() {
    destroyString(this);
}

struct Item {
    char data[8];
};

struct Iterator {
    void* owner;
    Item* current;
};

struct Head {
    void (__thiscall *invoke)(void*, void*, const String*);
    char* object;
    int adjustment;
    void* (__thiscall *extract)(void*);
    int extra;
};
struct Function : Head {
    String value;
};

Function apply(Iterator first, Iterator last, Function function) {
    Item* current = first.current;
    Item* end = last.current;
    for (; current != end; ++current) {
        void* item = function.extract(current);
        function.invoke(function.object + function.adjustment,
                        item, &function.value);
    }
    return function;
}