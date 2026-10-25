// from server: 100% by colin
// roc 2008-06 00464300  unit: CScriptEditor  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464300
//
// 00464300  6aff                 push -1
// 00464302  68c9107c00           push 0x7c10c9
// 00464307  64a100000000         mov eax, dword ptr fs:[0]
// 0046430d  50                   push eax
// 0046430e  64892500000000       mov dword ptr fs:[0], esp
// 00464315  51                   push ecx
// 00464316  56                   push esi
// 00464317  57                   push edi
// 00464318  e8b3d0ffff           call 0x4613d0
// 0046431d  8bf0                 mov esi, eax
// 0046431f  6a01                 push 1
// 00464321  8bce                 mov ecx, esi
// 00464323  e8f8bdffff           call 0x460120
// 00464328  6a01                 push 1
// 0046432a  50                   push eax
// 0046432b  8bce                 mov ecx, esi
// 0046432d  e8dec8ffff           call 0x460c10
// 00464332  6a01                 push 1
// 00464334  50                   push eax
// 00464335  8bce                 mov ecx, esi
// 00464337  e8a4cdffff           call 0x4610e0
// 0046433c  8bf0                 mov esi, eax
// 0046433e  81e6ff0f0000         and esi, 0xfff
// 00464344  8d4c2408             lea ecx, [esp + 8]
// 00464348  81ee00040000         sub esi, 0x400
// 0046434e  ff15043f8000         call dword ptr [0x803f04]
// 00464354  56                   push esi
// 00464355  8d44240c             lea eax, [esp + 0xc]
// 00464359  68c9000000           push 0xc9
// 0046435e  50                   push eax
// 0046435f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00464367  ff15c4328000         call dword ptr [0x8032c4]
// 0046436d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00464371  8b3e                 mov edi, dword ptr [esi]
// 00464373  83c40c               add esp, 0xc
// 00464376  8d4c2408             lea ecx, [esp + 8]
// 0046437a  ff15e03e8000         call dword ptr [0x803ee0]
// 00464380  8b570c               mov edx, dword ptr [edi + 0xc]
// 00464383  50                   push eax
// 00464384  8bce                 mov ecx, esi
// 00464386  ffd2                 call edx
// 00464388  8d4c2408             lea ecx, [esp + 8]
// 0046438c  ff15143f8000         call dword ptr [0x803f14]
// 00464392  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00464396  5f                   pop edi
// 00464397  5e                   pop esi
// 00464398  64890d00000000       mov dword ptr fs:[0], ecx
// 0046439f  83c410               add esp, 0x10
// 004643a2  c20400               ret 4

struct Control {
    int func_00460120(int);
    int func_00460c10(int, int);
    int func_004610e0(int, int);
};

struct Text {
    char* data;
    __declspec(dllimport) Text();
    __declspec(dllimport) ~Text() throw();
};

extern void (__cdecl* text_format)(Text*, unsigned int, ...);
extern const char* (__thiscall* text_data)(Text*);





struct Output {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(const char*) = 0;
};

struct CScriptEditor {
    int* func_004613d0();
    void func_00464300(Output*);
};

void CScriptEditor::func_00464300(Output* output)
{
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    int value = control->func_00460120(1);
    value = control->func_00460c10(value, 1);
    value = control->func_004610e0(value, 1);
    value = (value & 0xfff) - 0x400;

    Text text;
    text_format(&text, 201, value);
    output->set(text_data(&text));
}
