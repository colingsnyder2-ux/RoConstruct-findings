// roc 2011-06 00443130  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00443130
//
// 00443130  b86090a600           mov eax, 0xa69060
// 00443135  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00443130()
{
    return &G;
}
