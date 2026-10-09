// roc 2012-06 004a06b0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a06b0
//
// 004a06b0  56                   push esi
// 004a06b1  e8da350500           call 0x4f3c90
// 004a06b6  8bf0                 mov esi, eax
// 004a06b8  6a01                 push 1
// 004a06ba  6a01                 push 1
// 004a06bc  8bce                 mov ecx, esi
// 004a06be  e8adc8ffff           call 0x49cf70
// 004a06c3  6a01                 push 1
// 004a06c5  8bce                 mov ecx, esi
// 004a06c7  85c0                 test eax, eax
// 004a06c9  740b                 je 0x4a06d6
// 004a06cb  6a00                 push 0
// 004a06cd  6a01                 push 1
// 004a06cf  e84cc8ffff           call 0x49cf20
// 004a06d4  5e                   pop esi
// 004a06d5  c3                   ret 
// 004a06d6  6a10                 push 0x10
// 004a06d8  6a01                 push 1
// 004a06da  e841c8ffff           call 0x49cf20
// 004a06df  5e                   pop esi
// 004a06e0  c3                   ret 
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
