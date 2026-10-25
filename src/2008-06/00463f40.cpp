// from server: 100% by king_originala
// roc 2008-06 00463f40  unit: CScriptEditor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463f40
//
// 00463f40  56                   push esi
// 00463f41  e88ad4ffff           call 0x4613d0
// 00463f46  8bf0                 mov esi, eax
// 00463f48  6a01                 push 1
// 00463f4a  8bce                 mov ecx, esi
// 00463f4c  e8cfc1ffff           call 0x460120
// 00463f51  6a01                 push 1
// 00463f53  50                   push eax
// 00463f54  8bce                 mov ecx, esi
// 00463f56  e8b5ccffff           call 0x460c10
// 00463f5b  6a01                 push 1
// 00463f5d  50                   push eax
// 00463f5e  8bce                 mov ecx, esi
// 00463f60  e83bc5ffff           call 0x4604a0
// 00463f65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00463f69  8b11                 mov edx, dword ptr [ecx]
// 00463f6b  f7d0                 not eax
// 00463f6d  83e001               and eax, 1
// 00463f70  5e                   pop esi
// 00463f71  89442404             mov dword ptr [esp + 4], eax
// 00463f75  8b02                 mov eax, dword ptr [edx]
// 00463f77  ffe0                 jmp eax

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
