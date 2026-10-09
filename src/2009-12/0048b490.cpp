// roc 2009-12 0048b490  unit: Ogre::VisualEngine  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048b490
//
// 0048b490  e96bffffff           jmp 0x48b400
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
