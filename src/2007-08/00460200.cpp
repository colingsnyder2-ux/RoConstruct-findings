// from server: 74% by colin
// roc 2007-08 00460200  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460200
//
// 00460200  56                   push esi
// 00460201  8b742408             mov esi, dword ptr [esp + 8]
// 00460205  57                   push edi
// 00460206  8b3e                 mov edi, dword ptr [esi]
// 00460208  6a01                 push 1
// 0046020a  6a00                 push 0
// 0046020c  e81fd0ffff           call 0x45d230
// 00460211  8bc8                 mov ecx, eax
// 00460213  e848c2ffff           call 0x45c460
// 00460218  f7d8                 neg eax
// 0046021a  1bc0                 sbb eax, eax
// 0046021c  f7d8                 neg eax
// 0046021e  50                   push eax
// 0046021f  8b4704               mov eax, dword ptr [edi + 4]
// 00460222  8bce                 mov ecx, esi
// 00460224  ffd0                 call eax
// 00460226  5f                   pop edi
// 00460227  5e                   pop esi
// 00460228  c20400               ret 4

struct CScriptEditor {
    void m(int);
};

extern "C" int __stdcall sub_45D230(int, int);
extern "C" int __stdcall sub_45C460();

void CScriptEditor::m(int arg)
{
    int* p = (int*)arg;
    int v = *p;
    int r = sub_45D230(0, 1);
    int flag = (sub_45C460() != 0) ? 1 : 0;
    (*(void (__thiscall**)(void*, int))(v + 4))(this, flag);
}
