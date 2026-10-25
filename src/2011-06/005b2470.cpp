// from server: 100% by tester
// roc 2011-06 005b2470  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b2470
//
// 005b2470  c60558dfcb0000       mov byte ptr [0xcbdf58], 0
// 005b2477  c3                   ret 

char g_5e2160 = 0;

void f()
{
    g_5e2160 = 0;
}
