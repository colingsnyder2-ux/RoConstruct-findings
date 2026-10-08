// from server: 91% by colin
// roc 2007-08 00460120  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460120
//
// 00460120  56                   push esi
// 00460121  8b742408             mov esi, dword ptr [esp + 8]
// 00460125  57                   push edi
// 00460126  8b3e                 mov edi, dword ptr [esi]
// 00460128  6a01                 push 1
// 0046012a  6a02                 push 2
// 0046012c  e8ffd0ffff           call 0x45d230
// 00460131  8bc8                 mov ecx, eax
// 00460133  e828c3ffff           call 0x45c460
// 00460138  f7d8                 neg eax
// 0046013a  1bc0                 sbb eax, eax
// 0046013c  f7d8                 neg eax
// 0046013e  50                   push eax
// 0046013f  8b4704               mov eax, dword ptr [edi + 4]
// 00460142  8bce                 mov ecx, esi
// 00460144  ffd0                 call eax
// 00460146  5f                   pop edi
// 00460147  5e                   pop esi
// 00460148  c20400               ret 4

struct CScriptEditor {
    void m(void*);
};

extern "C" void* __cdecl func_0045d230(int, int);
extern "C" int __cdecl func_0045c460();

void CScriptEditor::m(void* arg)
{
    int* p = (int*)arg;
    int* obj = (int*)*p;
    void* r = func_0045d230(2, 1);
    int v = func_0045c460();
    int flag = (v != 0) ? 1 : 0;
    ((void (__thiscall*)(void*, int))obj[1])(arg, flag);
}
