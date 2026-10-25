// from server: 100% by auto
// roc 2008-06 00577c00  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577c00
//
// 00577c00  b8f86c9400           mov eax, 0x946cf8
// 00577c05  c3                   ret 

extern char G;

char* func_00577c00()
{
    return &G;
}
