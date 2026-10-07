// roc 2011-06 005a1620  unit: RBX::W4SoundType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1620
//
// 005a1620  b85084c300           mov eax, 0xc38450
// 005a1625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005a1620()
{
    return &G;
}
