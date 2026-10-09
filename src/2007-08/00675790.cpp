// from server: 10% by colin
// roc 2007-08 00675790  unit: CXTPCustomizeSheet  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675790
//
// 00675790  6aff                 push -1
// 00675792  68d8167600           push 0x7616d8
// 00675797  64a100000000         mov eax, dword ptr fs:[0]
// 0067579d  50                   push eax
// 0067579e  51                   push ecx
// 0067579f  56                   push esi
// 006757a0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006757a5  33c4                 xor eax, esp
// 006757a7  50                   push eax
// 006757a8  8d44240c             lea eax, [esp + 0xc]
// 006757ac  64a300000000         mov dword ptr fs:[0], eax
// 006757b2  8bf1                 mov esi, ecx
// 006757b4  89742408             mov dword ptr [esp + 8], esi
// 006757b8  8d4e54               lea ecx, [esi + 0x54]
// 006757bb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006757c3  e898990200           call 0x69f160
// 006757c8  8bce                 mov ecx, esi
// 006757ca  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006757d2  e8532f0c00           call 0x73872a
// 006757d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006757db  64890d00000000       mov dword ptr fs:[0], ecx
// 006757e2  59                   pop ecx
// 006757e3  5e                   pop esi
// 006757e4  83c410               add esp, 0x10
// 006757e7  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0x54];
    int field_54;
    void sub_69F160();
    void sub_73872A();
    ~CXTPCustomizeSheet();
};

void CXTPCustomizeSheet::sub_69F160() {}

void CXTPCustomizeSheet::sub_73872A() {}

CXTPCustomizeSheet::~CXTPCustomizeSheet()
{
    field_54 = 0;
    sub_69F160();
    sub_73872A();
}
