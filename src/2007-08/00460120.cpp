// from DeepSeek/server: 100% by colin
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
    void sub_460120(int);
};

extern "C" void* __stdcall sub_45D230(int, int);
extern "C" int __fastcall sub_45C460(void*);

void CScriptEditor::sub_460120(int a2) {
    int* p = (int*)a2;
    int* obj = (int*)*p;
    void* r = sub_45D230(2, 1);
    int ok = sub_45C460(r);
    int flag = ok != 0;
    ((void (__thiscall*)(void*, int))obj[1])(p, flag);
}
