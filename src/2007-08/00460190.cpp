// from server: 91% by colin
// roc 2007-08 00460190  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460190
//
// 00460190  56                   push esi
// 00460191  8b742408             mov esi, dword ptr [esp + 8]
// 00460195  57                   push edi
// 00460196  8b3e                 mov edi, dword ptr [esi]
// 00460198  6a01                 push 1
// 0046019a  6a01                 push 1
// 0046019c  e88fd0ffff           call 0x45d230
// 004601a1  8bc8                 mov ecx, eax
// 004601a3  e8b8c2ffff           call 0x45c460
// 004601a8  f7d8                 neg eax
// 004601aa  1bc0                 sbb eax, eax
// 004601ac  f7d8                 neg eax
// 004601ae  50                   push eax
// 004601af  8b4704               mov eax, dword ptr [edi + 4]
// 004601b2  8bce                 mov ecx, esi
// 004601b4  ffd0                 call eax
// 004601b6  5f                   pop edi
// 004601b7  5e                   pop esi
// 004601b8  c20400               ret 4

struct CScriptEditor {
    void m(void*);
};

extern "C" void* __cdecl func_0045d230(int, int);
extern "C" int __cdecl func_0045c460();

void CScriptEditor::m(void* arg)
{
    void* p = *(void**)arg;
    void* q = func_0045d230(1, 1);
    int r = func_0045c460();
    int s = (r != 0) ? 1 : 0;
    ((void (__thiscall*)(void*, int))*(void**)((char*)p + 4))(arg, s);
}
