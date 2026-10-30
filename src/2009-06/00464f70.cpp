// roc 2009-06 00464f70  unit: CScriptEditor  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464f70
//
// 00464f70  6aff                 push -1
// 00464f72  6839068500           push 0x850639
// 00464f77  64a100000000         mov eax, dword ptr fs:[0]
// 00464f7d  50                   push eax
// 00464f7e  64892500000000       mov dword ptr fs:[0], esp
// 00464f85  51                   push ecx
// 00464f86  56                   push esi
// 00464f87  57                   push edi
// 00464f88  e8b3d0ffff           call 0x462040
// 00464f8d  8bf0                 mov esi, eax
// 00464f8f  6a01                 push 1
// 00464f91  8bce                 mov ecx, esi
// 00464f93  e8f8bdffff           call 0x460d90
// 00464f98  6a01                 push 1
// 00464f9a  50                   push eax
// 00464f9b  8bce                 mov ecx, esi
// 00464f9d  e8dec8ffff           call 0x461880
// 00464fa2  6a01                 push 1
// 00464fa4  50                   push eax
// 00464fa5  8bce                 mov ecx, esi
// 00464fa7  e8a4cdffff           call 0x461d50
// 00464fac  8bf0                 mov esi, eax
// 00464fae  81e6ff0f0000         and esi, 0xfff
// 00464fb4  8d4c2408             lea ecx, [esp + 8]
// 00464fb8  81ee00040000         sub esi, 0x400
// 00464fbe  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00464fc4  56                   push esi
// 00464fc5  8d44240c             lea eax, [esp + 0xc]
// 00464fc9  68c9000000           push 0xc9
// 00464fce  50                   push eax
// 00464fcf  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00464fd7  ff1510028a00         call dword ptr [0x8a0210]
// 00464fdd  8b742428             mov esi, dword ptr [esp + 0x28]
// 00464fe1  8b3e                 mov edi, dword ptr [esi]
// 00464fe3  83c40c               add esp, 0xc
// 00464fe6  8d4c2408             lea ecx, [esp + 8]
// 00464fea  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00464ff0  8b570c               mov edx, dword ptr [edi + 0xc]
// 00464ff3  50                   push eax
// 00464ff4  8bce                 mov ecx, esi
// 00464ff6  ffd2                 call edx
// 00464ff8  8d4c2408             lea ecx, [esp + 8]
// 00464ffc  ff1510fd8900         call dword ptr [0x89fd10]
// 00465002  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00465006  5f                   pop edi
// 00465007  5e                   pop esi
// 00465008  64890d00000000       mov dword ptr fs:[0], ecx
// 0046500f  83c410               add esp, 0x10
// 00465012  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000_00464300@CScriptEditor@@QAEXPAUOutput@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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