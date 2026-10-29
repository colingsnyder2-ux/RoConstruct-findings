// roc 2009-12 004373b0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004373b0
//
// 004373b0  6aff                 push -1
// 004373b2  68a1a19200           push 0x92a1a1
// 004373b7  64a100000000         mov eax, dword ptr fs:[0]
// 004373bd  50                   push eax
// 004373be  64892500000000       mov dword ptr fs:[0], esp
// 004373c5  51                   push ecx
// 004373c6  56                   push esi
// 004373c7  57                   push edi
// 004373c8  c744240800000000     mov dword ptr [esp + 8], 0
// 004373d0  8b742424             mov esi, dword ptr [esp + 0x24]
// 004373d4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004373d8  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004373e0  3bf7                 cmp esi, edi
// 004373e2  7422                 je 0x437406
// 004373e4  8bce                 mov ecx, esi
// 004373e6  ff54243c             call dword ptr [esp + 0x3c]
// 004373ea  8b542434             mov edx, dword ptr [esp + 0x34]
// 004373ee  8d4c2444             lea ecx, [esp + 0x44]
// 004373f2  51                   push ecx
// 004373f3  50                   push eax
// 004373f4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004373f8  8d0c10               lea ecx, [eax + edx]
// 004373fb  ff542438             call dword ptr [esp + 0x38]
// 004373ff  83c608               add esi, 8
// 00437402  3bf7                 cmp esi, edi
// 00437404  75de                 jne 0x4373e4
// 00437406  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043740a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043740e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00437412  8b442438             mov eax, dword ptr [esp + 0x38]
// 00437416  890e                 mov dword ptr [esi], ecx
// 00437418  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043741c  895604               mov dword ptr [esi + 4], edx
// 0043741f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00437423  894608               mov dword ptr [esi + 8], eax
// 00437426  894e0c               mov dword ptr [esi + 0xc], ecx
// 00437429  8d442444             lea eax, [esp + 0x44]
// 0043742d  8d4e14               lea ecx, [esi + 0x14]
// 00437430  50                   push eax
// 00437431  895610               mov dword ptr [esi + 0x10], edx
// 00437434  ff15f0b69800         call dword ptr [0x98b6f0]
// 0043743a  8d4c2444             lea ecx, [esp + 0x44]
// 0043743e  c744240801000000     mov dword ptr [esp + 8], 1
// 00437446  c644241400           mov byte ptr [esp + 0x14], 0
// 0043744b  ff15e4b69800         call dword ptr [0x98b6e4]
// 00437451  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00437455  5f                   pop edi
// 00437456  8bc6                 mov eax, esi
// 00437458  5e                   pop esi
// 00437459  64890d00000000       mov dword ptr fs:[0], ecx
// 00437460  83c410               add esp, 0x10
// 00437463  c3                   ret 
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