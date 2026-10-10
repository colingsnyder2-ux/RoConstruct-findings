// from server: 69% by colin
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CScriptEditor
{
    char pad[0x44];
    void* field_44;
    void sub_004616D0(int, int);
    void func_00461A10(int, int, int, int);
};

void CScriptEditor::func_00461A10(int a, int b, int c, int d)
{
    if (d == 0)
    {
        int local[2];
        local[0] = 0;
        local[1] = 0;
        ((CScriptEditor*)((char*)this - 0xec))->sub_004616D0(local[0], local[1]);
        PostMessageA(*(void**)((char*)field_44 + 0x20), 0x10, 0, 0);
    }
}
