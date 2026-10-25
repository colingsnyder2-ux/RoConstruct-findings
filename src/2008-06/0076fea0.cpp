// from server: 100% by auto
// roc 2008-06 0076fea0  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076fea0
//
// 0076fea0  b8607b8600           mov eax, 0x867b60
// 0076fea5  c3                   ret 

extern char G;

char* func_0076fea0()
{
    return &G;
}
