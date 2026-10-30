// roc 2009-06 00465020  unit: CScriptEditor  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00465020
//
// 00465020  6aff                 push -1
// 00465022  6839068500           push 0x850639
// 00465027  64a100000000         mov eax, dword ptr fs:[0]
// 0046502d  50                   push eax
// 0046502e  64892500000000       mov dword ptr fs:[0], esp
// 00465035  51                   push ecx
// 00465036  53                   push ebx
// 00465037  56                   push esi
// 00465038  57                   push edi
// 00465039  e802d0ffff           call 0x462040
// 0046503e  8bf0                 mov esi, eax
// 00465040  6a01                 push 1
// 00465042  8bce                 mov ecx, esi
// 00465044  e847bdffff           call 0x460d90
// 00465049  8bf8                 mov edi, eax
// 0046504b  6a01                 push 1
// 0046504d  57                   push edi
// 0046504e  8bce                 mov ecx, esi
// 00465050  e82bc8ffff           call 0x461880
// 00465055  6a01                 push 1
// 00465057  57                   push edi
// 00465058  8bce                 mov ecx, esi
// 0046505a  8bd8                 mov ebx, eax
// 0046505c  e85fc5ffff           call 0x4615c0
// 00465061  8d4c240c             lea ecx, [esp + 0xc]
// 00465065  8bf0                 mov esi, eax
// 00465067  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0046506d  57                   push edi
// 0046506e  56                   push esi
// 0046506f  53                   push ebx
// 00465070  8d442418             lea eax, [esp + 0x18]
// 00465074  68c7000000           push 0xc7
// 00465079  50                   push eax
// 0046507a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00465082  ff1510028a00         call dword ptr [0x8a0210]
// 00465088  8b742434             mov esi, dword ptr [esp + 0x34]
// 0046508c  8b3e                 mov edi, dword ptr [esi]
// 0046508e  83c414               add esp, 0x14
// 00465091  8d4c240c             lea ecx, [esp + 0xc]
// 00465095  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0046509b  8b570c               mov edx, dword ptr [edi + 0xc]
// 0046509e  50                   push eax
// 0046509f  8bce                 mov ecx, esi
// 004650a1  ffd2                 call edx
// 004650a3  8d4c240c             lea ecx, [esp + 0xc]
// 004650a7  ff1510fd8900         call dword ptr [0x89fd10]
// 004650ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004650b1  5f                   pop edi
// 004650b2  5e                   pop esi
// 004650b3  5b                   pop ebx
// 004650b4  64890d00000000       mov dword ptr fs:[0], ecx
// 004650bb  83c410               add esp, 0x10
// 004650be  c20400               ret 4
// copied from an identical function in another client (function ?update@S@@QAEXPAUTarget@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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