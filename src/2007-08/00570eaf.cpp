// roc 2007-08 00570eaf  unit: RBX::Reflection::ClassDescriptor  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00570eaf
//
// 00570eaf  83c8ff               or eax, 0xffffffff
// 00570eb2  c3                   ret 
// auto-matched from its assembly shape

int func_00570eaf()
{
    return -1;
}
