// roc 2007-08 005afc70  unit: RBX::AssemblyStage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005afc70
//
// 005afc70  b803000000           mov eax, 3
// 005afc75  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_005afc70()
{
    return 3u;
}
