// roc 2007-08 004b1210  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1210
//
// 004b1210  b878278900           mov eax, 0x892778
// 004b1215  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b1210()
{
    return &G;
}
