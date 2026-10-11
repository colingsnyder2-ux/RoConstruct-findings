// from server: 100% by colin
// roc 2007-08 004601c0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004601c0
//
// 004601c0  56                   push esi
// 004601c1  e86ad0ffff           call 0x45d230
// 004601c6  8bf0                 mov esi, eax
// 004601c8  6a01                 push 1
// 004601ca  6a00                 push 0
// 004601cc  8bce                 mov ecx, esi
// 004601ce  e88dc2ffff           call 0x45c460
// 004601d3  85c0                 test eax, eax
// 004601d5  6a01                 push 1
// 004601d7  8bce                 mov ecx, esi
// 004601d9  740b                 je 0x4601e6
// 004601db  6a00                 push 0
// 004601dd  6a00                 push 0
// 004601df  e82cc2ffff           call 0x45c410
// 004601e4  5e                   pop esi
// 004601e5  c3                   ret 
// 004601e6  6a20                 push 0x20
// 004601e8  6a00                 push 0
// 004601ea  e821c2ffff           call 0x45c410
// 004601ef  5e                   pop esi
// 004601f0  c3                   ret 

struct Helper {
    int f1(int a, int b);
    int f2(int a, int b, int c);
};

extern "C" void* __cdecl sub_45D230();

struct CScriptEditor {
    void init();
};

void CScriptEditor::init()
{
    Helper* p = (Helper*)sub_45D230();
    if (p->f1(0, 1)) {
        p->f2(0, 0, 1);
    } else {
        p->f2(0, 0x20, 1);
    }
}
