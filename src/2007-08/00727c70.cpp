// roc 2007-08 00727c70  unit: boost::thread_resource_error  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00727c70
//
// 00727c70  e96bffffff           jmp 0x727be0
// auto-matched from its assembly shape

extern void G1_func_00727c70();
void func_00727c70()
{
    G1_func_00727c70();
}
