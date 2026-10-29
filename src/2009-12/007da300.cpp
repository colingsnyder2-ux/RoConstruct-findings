// roc 2009-12 007da300  unit: RBX::SpatialFilter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da300
//
// 007da300  8b442404             mov eax, dword ptr [esp + 4]
// 007da304  85c0                 test eax, eax
// 007da306  7501                 jne 0x7da309
// 007da308  c3                   ret 
// 007da309  8b4004               mov eax, dword ptr [eax + 4]
// 007da30c  85c0                 test eax, eax
// 007da30e  7506                 jne 0x7da316
// 007da310  b801000000           mov eax, 1
// 007da315  c3                   ret 
// 007da316  50                   push eax
// 007da317  e8e4ffffff           call 0x7da300
// 007da31c  83c404               add esp, 4
// 007da31f  40                   inc eax
// 007da320  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000004_009639a0@ns_ROCX000004@@YAHPAX@Z)

namespace ns_ROCX000004 {
// from server: 100% by tester
int fn_ROCX000004_009639a0(void *p)
{
    if (!p)
        return 0;
    if (!*(void **)((char *)p + 4))
        return 1;
    return fn_ROCX000004_009639a0(*(void **)((char *)p + 4)) + 1;
}
}
