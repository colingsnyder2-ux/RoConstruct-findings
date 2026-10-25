// from server: 100% by tester
// roc 2011-06 007ef0f0  unit: RBX::SpatialFilter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ef0f0
//
// 007ef0f0  8b442404             mov eax, dword ptr [esp + 4]
// 007ef0f4  85c0                 test eax, eax
// 007ef0f6  7501                 jne 0x7ef0f9
// 007ef0f8  c3                   ret 
// 007ef0f9  8b4004               mov eax, dword ptr [eax + 4]
// 007ef0fc  85c0                 test eax, eax
// 007ef0fe  7506                 jne 0x7ef106
// 007ef100  b801000000           mov eax, 1
// 007ef105  c3                   ret 
// 007ef106  50                   push eax
// 007ef107  e8e4ffffff           call 0x7ef0f0
// 007ef10c  83c404               add esp, 4
// 007ef10f  40                   inc eax
// 007ef110  c3                   ret 

int func_009639a0(void *p)
{
    if (!p)
        return 0;
    if (!*(void **)((char *)p + 4))
        return 1;
    return func_009639a0(*(void **)((char *)p + 4)) + 1;
}
