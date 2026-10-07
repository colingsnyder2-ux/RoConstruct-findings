// roc 2011-06 0058ddb0  unit: RBX::TaskScheduler::W4PriorityMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ddb0
//
// 0058ddb0  b80849c300           mov eax, 0xc34908
// 0058ddb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058ddb0()
{
    return &G;
}
