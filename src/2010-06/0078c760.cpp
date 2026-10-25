// from server: 100% by tester
// roc 2010-06 0078c760  unit: RBX::SpatialFilter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c760
//
// 0078c760  8b442404             mov eax, dword ptr [esp + 4]
// 0078c764  85c0                 test eax, eax
// 0078c766  7501                 jne 0x78c769
// 0078c768  c3                   ret 
// 0078c769  8b4004               mov eax, dword ptr [eax + 4]
// 0078c76c  85c0                 test eax, eax
// 0078c76e  7506                 jne 0x78c776
// 0078c770  b801000000           mov eax, 1
// 0078c775  c3                   ret 
// 0078c776  50                   push eax
// 0078c777  e8e4ffffff           call 0x78c760
// 0078c77c  83c404               add esp, 4
// 0078c77f  40                   inc eax
// 0078c780  c3                   ret 

int func_009639a0(void *p)
{
    if (!p)
        return 0;
    if (!*(void **)((char *)p + 4))
        return 1;
    return func_009639a0(*(void **)((char *)p + 4)) + 1;
}
