// from server: 100% by king_originala
// roc 2008-06 005e15d0  unit: RBX::VLighting::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e15d0
//
// 005e15d0  8bc1                 mov eax, ecx
// 005e15d2  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 005e15d5  034c2404             add ecx, dword ptr [esp + 4]
// 005e15d9  8b4038               mov eax, dword ptr [eax + 0x38]
// 005e15dc  56                   push esi
// 005e15dd  ffd0                 call eax
// 005e15df  d95c2408             fstp dword ptr [esp + 8]
// 005e15e3  e8b8b6f8ff           call 0x56cca0
// 005e15e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e15ec  6a08                 push 8
// 005e15ee  8901                 mov dword ptr [ecx], eax
// 005e15f0  8d7104               lea esi, [ecx + 4]
// 005e15f3  e828f30b00           call 0x6a0920
// 005e15f8  83c404               add esp, 4
// 005e15fb  85c0                 test eax, eax
// 005e15fd  740f                 je 0x5e160e
// 005e15ff  d9442408             fld dword ptr [esp + 8]
// 005e1603  c700bc068100         mov dword ptr [eax], 0x8106bc
// 005e1609  d95804               fstp dword ptr [eax + 4]
// 005e160c  eb02                 jmp 0x5e1610
// 005e160e  33c0                 xor eax, eax
// 005e1610  8d542408             lea edx, [esp + 8]
// 005e1614  8bc8                 mov ecx, eax
// 005e1616  3bd6                 cmp edx, esi
// 005e1618  7404                 je 0x5e161e
// 005e161a  8b0e                 mov ecx, dword ptr [esi]
// 005e161c  8906                 mov dword ptr [esi], eax
// 005e161e  5e                   pop esi
// 005e161f  85c9                 test ecx, ecx
// 005e1621  7408                 je 0x5e162b
// 005e1623  8b01                 mov eax, dword ptr [ecx]
// 005e1625  8b10                 mov edx, dword ptr [eax]
// 005e1627  6a01                 push 1
// 005e1629  ffd2                 call edx
// 005e162b  c20800               ret 8

extern void* __cdecl allocate(unsigned int);
extern void* __cdecl getType();

struct Holder;

struct HolderTable {
    void* (__thiscall* destroy)(Holder*, unsigned int);
};

extern HolderTable holderTable;

struct Holder {
    HolderTable* table;
    float value;
};

struct Result {
    void* type;
    Holder* holder;
};

struct S {
    char padding[56];
    float (__thiscall* getter)(void*);
    int adjustment;

    void evaluate(void* object, Result* result);
};

void S::evaluate(void* object, Result* result)
{
    float value = getter(static_cast<char*>(object) + adjustment);
    result->type = getType();
    Holder*& destination = result->holder;

    Holder* p = static_cast<Holder*>(allocate(8));
    if (p) {
        p->table = &holderTable;
        p->value = value;
    } else {
        p = 0;
    }

    Holder* old = p;
    if (&p != &destination) {
        old = destination;
        destination = p;
    }

    if (old)
        old->table->destroy(old, 1);
}
