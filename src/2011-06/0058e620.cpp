// roc 2011-06 0058e620  unit: RBX::Time::W4SampleMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058e620
//
// 0058e620  b86c4bc300           mov eax, 0xc34b6c
// 0058e625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058e620()
{
    return &G;
}
