// roc 2008-06 00464100  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464100
//
// 00464100  56                   push esi
// 00464101  e8cad2ffff           call 0x4613d0
// 00464106  8bf0                 mov esi, eax
// 00464108  6a01                 push 1
// 0046410a  6a01                 push 1
// 0046410c  8bce                 mov ecx, esi
// 0046410e  e80dc5ffff           call 0x460620
// 00464113  6a01                 push 1
// 00464115  8bce                 mov ecx, esi
// 00464117  85c0                 test eax, eax
// 00464119  740b                 je 0x464126
// 0046411b  6a00                 push 0
// 0046411d  6a01                 push 1
// 0046411f  e8acc4ffff           call 0x4605d0
// 00464124  5e                   pop esi
// 00464125  c3                   ret 
// 00464126  6a10                 push 0x10
// 00464128  6a01                 push 1
// 0046412a  e8a1c4ffff           call 0x4605d0
// 0046412f  5e                   pop esi
// 00464130  c3                   ret 
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
