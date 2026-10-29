// roc 2009-06 00465150  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00465150
//
// 00465150  56                   push esi
// 00465151  e8eaceffff           call 0x462040
// 00465156  8bf0                 mov esi, eax
// 00465158  6a01                 push 1
// 0046515a  8bce                 mov ecx, esi
// 0046515c  e8bfcbffff           call 0x461d20
// 00465161  85c0                 test eax, eax
// 00465163  7409                 je 0x46516e
// 00465165  6a01                 push 1
// 00465167  8bce                 mov ecx, esi
// 00465169  e882cbffff           call 0x461cf0
// 0046516e  5e                   pop esi
// 0046516f  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control
{
    int canUndo(int direct);
    void undo(int direct);
};

struct CScriptEditor
{
    int* getControl();
    void func_004644e0(int unused);
};

void CScriptEditor::func_004644e0(int unused)
{
    Control* control = reinterpret_cast<Control*>(getControl());
    if (control->canUndo(1))
        control->undo(1);
}