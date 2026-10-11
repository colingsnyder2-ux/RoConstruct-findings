// from server: 100% by colin
// roc 2007-08 004600e0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004600e0
//
// 004600e0  56                   push esi
// 004600e1  e84ad1ffff           call 0x45d230
// 004600e6  8bf0                 mov esi, eax
// 004600e8  6a01                 push 1
// 004600ea  6a02                 push 2
// 004600ec  8bce                 mov ecx, esi
// 004600ee  e86dc3ffff           call 0x45c460
// 004600f3  85c0                 test eax, eax
// 004600f5  6a01                 push 1
// 004600f7  8bce                 mov ecx, esi
// 004600f9  740b                 je 0x460106
// 004600fb  6a00                 push 0
// 004600fd  6a02                 push 2
// 004600ff  e80cc3ffff           call 0x45c410
// 00460104  5e                   pop esi
// 00460105  c3                   ret 
// 00460106  6a10                 push 0x10
// 00460108  6a02                 push 2
// 0046010a  e801c3ffff           call 0x45c410
// 0046010f  5e                   pop esi
// 00460110  c3                   ret 

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
    if (p->f1(2, 1)) {
        p->f2(2, 0, 1);
    } else {
        p->f2(2, 0x10, 1);
    }
}
