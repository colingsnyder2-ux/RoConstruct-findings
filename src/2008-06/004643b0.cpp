// from server: 100% by colin
// roc 2008-06 004643b0  unit: CScriptEditor  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004643b0
//
// 004643b0  6aff                 push -1
// 004643b2  68c9107c00           push 0x7c10c9
// 004643b7  64a100000000         mov eax, dword ptr fs:[0]
// 004643bd  50                   push eax
// 004643be  64892500000000       mov dword ptr fs:[0], esp
// 004643c5  51                   push ecx
// 004643c6  53                   push ebx
// 004643c7  56                   push esi
// 004643c8  57                   push edi
// 004643c9  e802d0ffff           call 0x4613d0
// 004643ce  8bf0                 mov esi, eax
// 004643d0  6a01                 push 1
// 004643d2  8bce                 mov ecx, esi
// 004643d4  e847bdffff           call 0x460120
// 004643d9  8bf8                 mov edi, eax
// 004643db  6a01                 push 1
// 004643dd  57                   push edi
// 004643de  8bce                 mov ecx, esi
// 004643e0  e82bc8ffff           call 0x460c10
// 004643e5  6a01                 push 1
// 004643e7  57                   push edi
// 004643e8  8bce                 mov ecx, esi
// 004643ea  8bd8                 mov ebx, eax
// 004643ec  e85fc5ffff           call 0x460950
// 004643f1  8d4c240c             lea ecx, [esp + 0xc]
// 004643f5  8bf0                 mov esi, eax
// 004643f7  ff15043f8000         call dword ptr [0x803f04]
// 004643fd  57                   push edi
// 004643fe  56                   push esi
// 004643ff  53                   push ebx
// 00464400  8d442418             lea eax, [esp + 0x18]
// 00464404  68c7000000           push 0xc7
// 00464409  50                   push eax
// 0046440a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00464412  ff15c4328000         call dword ptr [0x8032c4]
// 00464418  8b742434             mov esi, dword ptr [esp + 0x34]
// 0046441c  8b3e                 mov edi, dword ptr [esi]
// 0046441e  83c414               add esp, 0x14
// 00464421  8d4c240c             lea ecx, [esp + 0xc]
// 00464425  ff15e03e8000         call dword ptr [0x803ee0]
// 0046442b  8b570c               mov edx, dword ptr [edi + 0xc]
// 0046442e  50                   push eax
// 0046442f  8bce                 mov ecx, esi
// 00464431  ffd2                 call edx
// 00464433  8d4c240c             lea ecx, [esp + 0xc]
// 00464437  ff15143f8000         call dword ptr [0x803f14]
// 0046443d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00464441  5f                   pop edi
// 00464442  5e                   pop esi
// 00464443  5b                   pop ebx
// 00464444  64890d00000000       mov dword ptr fs:[0], ecx
// 0046444b  83c410               add esp, 0x10
// 0046444e  c20400               ret 4

struct Text;

extern void (__cdecl *formatText)(Text*, unsigned int, ...);

struct Text {
    char* data;
    __declspec(dllimport) Text();
    __declspec(dllimport) ~Text() throw();
    __declspec(dllimport) const char* get() const;
};







struct Control {
    int query(int);
    int column(int, int);
    int line(int, int);
};

struct Target;

struct TargetTable {
    void (__thiscall *slot0)(Target*);
    void (__thiscall *slot1)(Target*);
    void (__thiscall *slot2)(Target*);
    void (__thiscall *setText)(Target*, const char*);
};

struct Target {
    TargetTable* table;
};

struct S {
    int* f();
    void update(Target*);
};

void S::update(Target* target)
{
    Control* control = reinterpret_cast<Control*>(f());
    int position = control->query(1);
    int column = control->column(position, 1);
    int line = control->line(position, 1);
    Text text;
    formatText(&text, 199, column, line, position);
    TargetTable* table = target->table;
    const char* value = text.get();
    table->setText(target, value);
}
