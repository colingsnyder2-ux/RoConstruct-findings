// roc 2009-06 00464bb0  unit: CScriptEditor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464bb0
//
// 00464bb0  56                   push esi
// 00464bb1  e88ad4ffff           call 0x462040
// 00464bb6  8bf0                 mov esi, eax
// 00464bb8  6a01                 push 1
// 00464bba  8bce                 mov ecx, esi
// 00464bbc  e8cfc1ffff           call 0x460d90
// 00464bc1  6a01                 push 1
// 00464bc3  50                   push eax
// 00464bc4  8bce                 mov ecx, esi
// 00464bc6  e8b5ccffff           call 0x461880
// 00464bcb  6a01                 push 1
// 00464bcd  50                   push eax
// 00464bce  8bce                 mov ecx, esi
// 00464bd0  e83bc5ffff           call 0x461110
// 00464bd5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00464bd9  8b11                 mov edx, dword ptr [ecx]
// 00464bdb  f7d0                 not eax
// 00464bdd  83e001               and eax, 1
// 00464be0  5e                   pop esi
// 00464be1  89442404             mov dword ptr [esp + 4], eax
// 00464be5  8b02                 mov eax, dword ptr [edx]
// 00464be7  ffe0                 jmp eax
// copied from an identical function in another client (function ?fn_ROCX000000_00463f40@CScriptEditor@@QAEXPAUOutput@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control {
    int func_00460120(int);
    int func_00460c10(int, int);
    int func_004604a0(int, int);
};

struct Output {
    virtual void set(int);
};

struct CScriptEditor {
    int* func_004613d0();
    void func_00463f40(Output*);
};

void CScriptEditor::func_00463f40(Output* output)
{
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    int value = control->func_00460120(1);
    value = control->func_00460c10(value, 1);
    value = control->func_004604a0(value, 1);
    output->set((~value) & 1);
}