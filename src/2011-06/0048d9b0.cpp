// roc 2011-06 0048d9b0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d9b0
//
// 0048d9b0  56                   push esi
// 0048d9b1  e83ad6ffff           call 0x48aff0
// 0048d9b6  8bf0                 mov esi, eax
// 0048d9b8  6a01                 push 1
// 0048d9ba  6a01                 push 1
// 0048d9bc  8bce                 mov ecx, esi
// 0048d9be  e87dc8ffff           call 0x48a240
// 0048d9c3  6a01                 push 1
// 0048d9c5  8bce                 mov ecx, esi
// 0048d9c7  85c0                 test eax, eax
// 0048d9c9  740b                 je 0x48d9d6
// 0048d9cb  6a00                 push 0
// 0048d9cd  6a01                 push 1
// 0048d9cf  e81cc8ffff           call 0x48a1f0
// 0048d9d4  5e                   pop esi
// 0048d9d5  c3                   ret 
// 0048d9d6  6a10                 push 0x10
// 0048d9d8  6a01                 push 1
// 0048d9da  e811c8ffff           call 0x48a1f0
// 0048d9df  5e                   pop esi
// 0048d9e0  c3                   ret 
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
