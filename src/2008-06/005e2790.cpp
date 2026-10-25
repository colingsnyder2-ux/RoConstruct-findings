// from server: 100% by auto
// roc 2008-06 005e2790  unit: RBX::TreeStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2790
//
// 005e2790  b803000000           mov eax, 3
// 005e2795  c3                   ret 

unsigned int func_005e2790()
{
    return 3u;
}
