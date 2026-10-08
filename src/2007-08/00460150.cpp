// from server: 100% by colin
// roc 2007-08 00460150  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460150
//
// 00460150  56                   push esi
// 00460151  e8dad0ffff           call 0x45d230
// 00460156  8bf0                 mov esi, eax
// 00460158  6a01                 push 1
// 0046015a  6a01                 push 1
// 0046015c  8bce                 mov ecx, esi
// 0046015e  e8fdc2ffff           call 0x45c460
// 00460163  85c0                 test eax, eax
// 00460165  6a01                 push 1
// 00460167  8bce                 mov ecx, esi
// 00460169  740b                 je 0x460176
// 0046016b  6a00                 push 0
// 0046016d  6a01                 push 1
// 0046016f  e89cc2ffff           call 0x45c410
// 00460174  5e                   pop esi
// 00460175  c3                   ret 
// 00460176  6a10                 push 0x10
// 00460178  6a01                 push 1
// 0046017a  e891c2ffff           call 0x45c410
// 0046017f  5e                   pop esi
// 00460180  c3                   ret 

struct CScriptEditor {
    void init();
};

struct Helper {
    int f1(int a, int b);
    int f2(int a, int b, int c);
};

extern "C" void* __cdecl sub_45D230();

void CScriptEditor::init()
{
    Helper* p = (Helper*)sub_45D230();
    if (p->f1(1, 1)) {
        p->f2(1, 0, 1);
    } else {
        p->f2(1, 0x10, 1);
    }
}
