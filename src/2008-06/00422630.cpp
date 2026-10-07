// roc 2008-06 00422630  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422630
//
// 00422630  b820fb8000           mov eax, 0x80fb20
// 00422635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00422630()
{
    return &G;
}
