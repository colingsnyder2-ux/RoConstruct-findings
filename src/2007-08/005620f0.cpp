// from server: 67% by colin
// roc 2007-08 005620f0  unit: RBX::DuplicateSelectionVerb  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005620f0
//
// 005620f0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005620f3  85c9                 test ecx, ecx
// 005620f5  7407                 je 0x5620fe
// 005620f7  e844eceaff           call 0x410d40
// 005620fc  eb02                 jmp 0x562100
// 005620fe  33c0                 xor eax, eax
// 00562100  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00562106  8b4804               mov ecx, dword ptr [eax + 4]
// 00562109  85c9                 test ecx, ecx
// 0056210b  7509                 jne 0x562116
// 0056210d  33c0                 xor eax, eax
// 0056210f  3bc8                 cmp ecx, eax
// 00562111  1bc0                 sbb eax, eax
// 00562113  f7d8                 neg eax
// 00562115  c3                   ret 
// 00562116  8b4008               mov eax, dword ptr [eax + 8]
// 00562119  2bc1                 sub eax, ecx
// 0056211b  c1f803               sar eax, 3
// 0056211e  33c9                 xor ecx, ecx
// 00562120  3bc8                 cmp ecx, eax
// 00562122  1bc0                 sbb eax, eax
// 00562124  f7d8                 neg eax
// 00562126  c3                   ret 

struct DataModel;
struct Selection;

struct EditSelectionVerb {
    char pad[0x20];
    void* m_pSomething;
};

struct DuplicateSelectionVerb : EditSelectionVerb {
    bool isEnabled() const;
};

struct SelectionContainer {
    char pad[4];
    Selection** begin;
    Selection** end;
};

struct DataModelImpl {
    char pad[0x104];
    SelectionContainer* selection;
};

extern "C" DataModelImpl* __cdecl getDataModel(void*);

bool DuplicateSelectionVerb::isEnabled() const {
    DataModelImpl* dm;
    if (m_pSomething) {
        dm = getDataModel(m_pSomething);
    } else {
        dm = 0;
    }
    SelectionContainer* sc = *(SelectionContainer**)((char*)dm + 0x104);
    Selection** begin = sc->begin;
    if (begin == 0) {
        return false;
    }
    Selection** end = sc->end;
    return (end - begin) != 0;
}
