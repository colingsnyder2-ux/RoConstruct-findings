// from server: 65% by atomic.potato
extern "C" int* __cdecl func_004f3c90(int, int);
extern "C" int func_0049cf70(void*, int, int);

struct CScriptEditor
{
    int pad0[1];
    int (__thiscall *callback)(CScriptEditor*, int);
    int f(int);
};

int CScriptEditor::f(int value)
{
    int* p = func_004f3c90(0, 1);
    int result = func_0049cf70(p, 0, 1);
    result = result != 0;
    return callback(this, result);
}
