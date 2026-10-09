// roc 2010-06 004715b0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004715b0
//
// 004715b0  56                   push esi
// 004715b1  e83ad1ffff           call 0x46e6f0
// 004715b6  8bf0                 mov esi, eax
// 004715b8  6a01                 push 1
// 004715ba  6a01                 push 1
// 004715bc  8bce                 mov ecx, esi
// 004715be  e86dc3ffff           call 0x46d930
// 004715c3  6a01                 push 1
// 004715c5  8bce                 mov ecx, esi
// 004715c7  85c0                 test eax, eax
// 004715c9  740b                 je 0x4715d6
// 004715cb  6a00                 push 0
// 004715cd  6a01                 push 1
// 004715cf  e80cc3ffff           call 0x46d8e0
// 004715d4  5e                   pop esi
// 004715d5  c3                   ret 
// 004715d6  6a10                 push 0x10
// 004715d8  6a01                 push 1
// 004715da  e801c3ffff           call 0x46d8e0
// 004715df  5e                   pop esi
// 004715e0  c3                   ret 
// copied from an identical function in another client (function ?init@CScriptEditor@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
}
