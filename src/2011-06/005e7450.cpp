// roc 2011-06 005e7450  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e7450
//
// 005e7450  8a01                 mov al, byte ptr [ecx]
// 005e7452  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e7450 {
    char m_x;
    char f();
};
char S_func_005e7450::f()
{
    return m_x;
}
