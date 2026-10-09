// roc 2007-03 0045da50  unit: seg_00450000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045da50
//
// 0045da50  56                   push esi
// 0045da51  e85acfffff           call 0x45a9b0
// 0045da56  8bf0                 mov esi, eax
// 0045da58  6a01                 push 1
// 0045da5a  6a01                 push 1
// 0045da5c  8bce                 mov ecx, esi
// 0045da5e  e88dc1ffff           call 0x459bf0
// 0045da63  85c0                 test eax, eax
// 0045da65  6a01                 push 1
// 0045da67  8bce                 mov ecx, esi
// 0045da69  740b                 je 0x45da76
// 0045da6b  6a00                 push 0
// 0045da6d  6a01                 push 1
// 0045da6f  e82cc1ffff           call 0x459ba0
// 0045da74  5e                   pop esi
// 0045da75  c3                   ret 
// 0045da76  6a10                 push 0x10
// 0045da78  6a01                 push 1
// 0045da7a  e821c1ffff           call 0x459ba0
// 0045da7f  5e                   pop esi
// 0045da80  c3                   ret 
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
