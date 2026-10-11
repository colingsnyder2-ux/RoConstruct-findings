// from server: 65% by colin
struct CScriptEditor
{
    void sub_00465550();
    void sub_00464540();
    void func_004659f0(int, int, int);
};

void CScriptEditor::func_004659f0(int, int a2, int)
{
    if (a2 == 0x975770)
    {
        sub_00465550();
    }
    else if (a2 == 0x973d54)
    {
        sub_00464540();
    }
}
