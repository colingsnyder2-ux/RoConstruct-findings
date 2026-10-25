// from server: 100% by auto
// roc 2008-06 0078c520  unit: CXTPRichRender  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c520
//
// 0078c520  b8eca78600           mov eax, 0x86a7ec
// 0078c525  c3                   ret 

extern char G;

char* func_0078c520()
{
    return &G;
}
