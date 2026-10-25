// from server: 100% by auto
// roc 2008-06 006c6c50  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6c50
//
// 006c6c50  b878659600           mov eax, 0x966578
// 006c6c55  c3                   ret 

extern char G;

char* func_006c6c50()
{
    return &G;
}
